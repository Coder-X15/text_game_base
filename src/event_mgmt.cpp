# include <iostream>
# include "event_mgmt.hpp"
# include "scene.hpp"

void event_utils::EventHandler::listen(){
    // listens for text input
    std::cin >> input;
}

void event_utils::EventHandler::trigger(){
    // triggers a scene based on the input text
    scene_util::Scene *scenePtr; // pointer to a scene
    while(input.compare(choices.front()) != 0){
        choices.pop();
        scenePtr = scenes.front();
        scenes.pop();
    }
    scenePtr = scenes.front();
    clear();
    scenePtr->run();
}

void event_utils::EventHandler::add_scene(std::string cmd, scene_util::Scene *scene){
    // adds scenes to the event manager to navigate to based on the input  provided
    choices.push(cmd);
    scenes.push(scene);
}

void event_utils::EventHandler::clear(){
    try{
        while(true){
            // clearing up the scene choices
            choices.pop();
        }
    } catch(std::exception *e1){
        try{
            while(true){
                // clearing up the scene choices
                choices.pop();
            }
        } catch(std::exception *e2){

        }
    }
}