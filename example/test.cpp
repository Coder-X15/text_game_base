# include <iostream>
# include <memory>
# include "event_mgmt.hpp"
# include "scene.hpp"

class RandomScreen : public scene_util::Scene{
    public:
        void load(){
            std::cout << ""; // do nothing
        }

        void run(){
            std::cout << "Blablableebleebloobloobleeeh\n";
        }

        bool achieved_objective(){
            // do nothing?
            return true;
        }

        bool is_locked(){
            return false;
        }

};

class StartScreen : public scene_util::Scene{
    public:
        void load(){
            // do nothing?
            std::shared_ptr<scene_util::Scene> randscreen = std::make_shared<RandomScreen>();
            std::cout << "Loading...\n";
            event_manager.scenes["blah"] = randscreen;
        }

        void run(){
            std::cout << "Hello!!\n";
            std::cout << "Type 'blah' to see the magic";
            event_manager.listen();
            event_manager.trigger();
        }

        bool achieved_objective(){
            // do nothing?
            return true;
        }

        bool is_locked(){
            return false;
        }

};

int main(){
    StartScreen start_screen;
    start_screen.load();
    start_screen.run();
}