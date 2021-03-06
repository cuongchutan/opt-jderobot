# gazebo-setup fixed by varribas at 2016-04-08

# official Gazebo resources
. /usr/share/gazebo/setup.sh

# JdeRobot resources
export GAZEBO_RESOURCE_PATH=$GAZEBO_RESOURCE_PATH::
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:
export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:/opt/jderobot/share/jderobot/gazebo/plugins/ball:/opt/jderobot/share/jderobot/gazebo/plugins/car:/opt/jderobot/share/jderobot/gazebo/plugins/dummycar:/opt/jderobot/share/jderobot/gazebo/plugins/f1:/opt/jderobot/share/jderobot/gazebo/plugins/formula1:/opt/jderobot/share/jderobot/gazebo/plugins/gazebo_ros_screw_plugin:/opt/jderobot/share/jderobot/gazebo/plugins/gymkhana:/opt/jderobot/share/jderobot/gazebo/plugins/holo_car:/opt/jderobot/share/jderobot/gazebo/plugins/mbot:/opt/jderobot/share/jderobot/gazebo/plugins/opel:/opt/jderobot/share/jderobot/gazebo/plugins/pibot:/opt/jderobot/share/jderobot/gazebo/plugins/quadrotor:/opt/jderobot/share/jderobot/gazebo/plugins/roomba:/opt/jderobot/share/jderobot/gazebo/plugins/solo:/opt/jderobot/share/jderobot/gazebo/plugins/taxiholoLaser
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/opt/jderobot/share/jderobot/gazebo/plugins/ball:/opt/jderobot/share/jderobot/gazebo/plugins/car:/opt/jderobot/share/jderobot/gazebo/plugins/dummycar:/opt/jderobot/share/jderobot/gazebo/plugins/f1:/opt/jderobot/share/jderobot/gazebo/plugins/formula1:/opt/jderobot/share/jderobot/gazebo/plugins/gazebo_ros_screw_plugin:/opt/jderobot/share/jderobot/gazebo/plugins/gymkhana:/opt/jderobot/share/jderobot/gazebo/plugins/holo_car:/opt/jderobot/share/jderobot/gazebo/plugins/mbot:/opt/jderobot/share/jderobot/gazebo/plugins/opel:/opt/jderobot/share/jderobot/gazebo/plugins/pibot:/opt/jderobot/share/jderobot/gazebo/plugins/quadrotor:/opt/jderobot/share/jderobot/gazebo/plugins/roomba:/opt/jderobot/share/jderobot/gazebo/plugins/solo:/opt/jderobot/share/jderobot/gazebo/plugins/taxiholoLaser
