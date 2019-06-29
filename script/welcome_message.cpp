// include the core set of basci gazebo functions that going to be used in my code  
#include <gazebo/gazebo.hh> 

namespace gazebo 
{
	//the class inherit Gazebo WorldPlugin class offers multiple functions and variables but only use the constructor and one of the function
    class WorldPluginMyRobot : public WorldPlugin //inherit 
    {
    	//constructor
    	public: WorldPluginMyRobot() : WorldPlugin()
    			{
    				printf("Welcome to my house!\n");
    			}
    			
    	//load function is mandatory should always be included to receive information from the world file		
    	public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    			{
    			}
    	
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
