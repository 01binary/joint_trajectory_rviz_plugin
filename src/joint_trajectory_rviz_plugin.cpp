/*----------------------------------------------------------*\
| Includes
\*----------------------------------------------------------*/

#include "joint_trajectory_rviz_plugin.h"
#include <class_loader/class_loader.hpp>

/*----------------------------------------------------------*\
| Definitions
\*----------------------------------------------------------*/

CLASS_LOADER_REGISTER_CLASS(JointTrajectoryRVizPlugin, rviz::Display)

/*----------------------------------------------------------*\
| JointTrajectoryRVizPlugin implementation
\*----------------------------------------------------------*/

JointTrajectoryRVizPlugin::JointTrajectoryRVizPlugin()
{
}

JointTrajectoryRVizPlugin::~JointTrajectoryRVizPlugin()
{
}


void JointTrajectoryRVizPlugin::load(const rviz::Config& config)
{
}

void JointTrajectoryRVizPlugin::update(float wall_dt, float ros_dt)
{
  Display::update(wall_dt, ros_dt);
}

void JointTrajectoryRVizPlugin::changedSomething()
{
}

