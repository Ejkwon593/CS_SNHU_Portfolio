package com.gamingroom;

import java.util.ArrayList;
import java.util.List;
import java.util.Iterator;

public class GameService {

    private static List<Game> games = new ArrayList<>();
    private static long nextGameId = 1;
    private static GameService service = null;

    private GameService() {}

    public static synchronized GameService getInstance() {
        if (service == null) {
            service = new GameService();
            System.out.println("New Game Service created.");
        } else {
            System.out.println("Game Service already instantiated.");
        }
        return service;
    }

    public Game addGame(String name) {
        // Check for existing games by name using an iterator
        Iterator<Game> gamesIterator = games.iterator();
        while (gamesIterator.hasNext()) {
            Game gameInstance = gamesIterator.next();
            if (gameInstance.getName().equalsIgnoreCase(name)) {
                return gameInstance;  // Return the existing game if found
            }
        }

        // If game with the same name doesn't exist, create a new one
        Game game = new Game(nextGameId++, name);
        games.add(game);
        return game;
    }

    // Modified getGame method to properly handle index bounds
    public Game getGame(int index) {
        // Ensure the index is within the valid bounds of the games list
        if (index >= 0 && index < games.size()) {
            return games.get(index);  // Retrieve the game at the valid index
        }
        return null;  // Return null if the index is out of bounds
    }

    public Game getGame(long id) {
        Iterator<Game> gamesIterator = games.iterator();
        while (gamesIterator.hasNext()) {
            Game gameInstance = gamesIterator.next();
            if (gameInstance.getId() == id) {
                return gameInstance;
            }
        }
        return null;
    }

    public Game getGame(String name) {
        Iterator<Game> gamesIterator = games.iterator();
        while (gamesIterator.hasNext()) {
            Game gameInstance = gamesIterator.next();
            if (gameInstance.getName().equalsIgnoreCase(name)) {
                return gameInstance;
            }
        }
        return null;
    }

    public int getGameCount() {
        return games.size();
    }
}
