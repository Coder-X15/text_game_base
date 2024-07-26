# pragma once

# ifndef EVENT_MGMT_H
# define EVENT_MGMT_H

# include <iostream>
# include "scene.hpp"
# include <queue>

namespace event_utils{
    class EventHandler{
        private:
            std::string input;
            std::queue<std::string> choices;
            std::queue<scene_util::Scene*> scenes;
            void clear();
        public:
            void listen();
            void trigger();
            void add_scene(std::string, scene_util::Scene*);
    };
}

event_utils::EventHandler event_manager;

# endif