# include <iostream>
# include <memory>
# include "event_mgmt.hpp"
# include "scene.hpp"

class RandomScreen : public scene_util::Scene{
    public:
        void load(){
            std::cout << ""; // do nothing, just print something so that the virtual function isn't invoked
        }

        void run(){
            std::cout << "Blablableebleebloobloobleeeh\n"; // just print some shi bruh
        }

        bool achieved_objective(){
            return true;
        }

        bool is_locked(){
            return false;
        }

};

class StartScreen : public scene_util::Scene{
    public:
        void load(){
            // loads a RandomScreen object into the event mannager's scene stack (basically std::map/ dictionary)
            std::shared_ptr<scene_util::Scene> randscreen = std::make_shared<RandomScreen>();
            std::cout << "Loading...\n";
            event_manager.scenes["blah"] = randscreen;
        }

        void run(){
            // runs this scene
            std::cout << "Hello!!\n";
            std::cout << "Type 'blah' to see the magic";
            event_manager.listen();
            event_manager.trigger();
        }

        bool achieved_objective(){
            // same old stuff
            return true;
        }

        bool is_locked(){
            // same old stuff
            return false;
        }

};

int main(){
    StartScreen start_screen; // create a StartScreen object
    start_screen.load(); // load the scene
    start_screen.run(); // run it
}