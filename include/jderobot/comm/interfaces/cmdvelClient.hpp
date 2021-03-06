/*
 *  Copyright (C) 1997-2017 JDE Developers Team
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 *  Authors :
 *       Aitor Martinez Fernandez <aitor.martinez.fernandez@gmail.com>
 */

#ifndef JDEROBOTCOMM_CMDVELCLIENT_INTERFACE_H
#define JDEROBOTCOMM_CMDVELCLIENT_INTERFACE_H

#include <jderobot/types/cmdvel.h>


namespace Comm {

	/**
	 * @brief MotorsClient class.
	 * This class is a Interface to seprate communications from tools. 
	 * With this, the tools don't need know which communicator (ROS or ICE) are using because both use the same interface.
	 *
	 */
	class CMDVelClient {
	public:
		virtual void sendVelocities(JdeRobotTypes::CMDVel vel ) = 0;
		bool on = false;
	protected:
		JdeRobotTypes::CMDVel cmdvel;
	};

} //NS

#endif // JDEROBOTCOMM_CMDVELCLIENT_INTERFACE_H