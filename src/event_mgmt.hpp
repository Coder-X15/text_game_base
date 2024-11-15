# pragma once

# ifndef EVENT_MGMT_H
# define EVENT_MGMT_H

# include <iostream>
# include <memory>
# include "scene.hpp"
# include <map>

namespace event_utils{
    class EventHandler{
        public:
            std::string input;
            std::map<std::string, std::shared_ptr<scene_util::Scene>> scenes;
            void clear(){
                scenes.clear();
            }
            void listen(){
                // listens for text input
                std::cin >> input;
            }
            void trigger(){
                // triggers a scene based on the input text
                std::shared_ptr<scene_util::Scene> scene = scenes[input];
                scene -> load();
                scene ->run();
                clear();
            }
    };
}

event_utils::EventHandler event_manager;

# endif