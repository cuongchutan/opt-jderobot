#!/bin/bash

export PATH=$PATH:/opt/jderobot/bin
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/opt/jderobot/lib
export CMAKE_PREFIX_PATH=$CMAKE_PREFIX_PATH:/opt/jderobot
export PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/opt/jderobot/lib/pkgconfig
export PYTHONPATH=$PYTHONPATH:/opt/jderobot/lib/python3.6
export JDEROBOT_CONFIG_PATHS=$HOME/jderobot_conf:/opt/jderobot/share/jderobot/conf
export JDEROBOT_GLADE_PATH=/opt/jderobot/share/jderobot/glade



FILE=/opt/jderobot/share/jderobot/gazebo/gazebo-setup.sh
if [ -f $FILE ]; then
   source $FILE
fi

