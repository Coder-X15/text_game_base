# pragma once

# ifndef SCENE_H
# define SCENE_H

# include <iostream>

namespace scene_util{
    class Character{
        // abstract class to make the character from
        public:
            virtual bool isTurn() = 0; // just set up this function so as to enable fight mode as well in the games
            virtual int behave() = 0; // the function to invoke the character's behaviour into the game
    };

    class Scene{
        // abstract class to inherit the scene architecture from
        public:
            virtual void load() = 0; // returns the integer index of the next scene in the scene array
            virtual void run() = 0; // runs the scene
            virtual bool achieved_objective() = 0; // checks if the objective in the scene was achieved
            virtual bool is_locked() = 0; // checks if the scene is locked
    };
}

# endif