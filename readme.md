# TextGameBase - an Engine to program text-based/prompt-based games more efficiently

I know it sounds absurd but I'm still gonna do it because I like making stuff and this is something that I'd like to try and make so that anyone can develop a text-based game quite easily.

## Features:
1. Hassle-free development
2. Easy modelling of levels/scenes
3. Ability for users to add text-art into the games they develop
4. Utilizes CMake for making the game executable  <i>(wolf whistles)</i>
5. You can add something here when you find it.

## Trying it Out

`cd` into the root folder, then run this command to try out the example script:```g++ -I./src -o <pgm_name>> example/<pgm_name>.cpp src/event_mgmt.hpp scene.hpp```

## For Future Use:
Add the absolute path to the `src` folder in an environment variable (name it `TG_LIB_INCLUDE_PATH` or something that you can remember), and replace the path in the `-I` flag of the above command.