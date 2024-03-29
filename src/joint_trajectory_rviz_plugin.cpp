/*----------------------------------------------------------*\
| Includes
\*----------------------------------------------------------*/

#include "joint_trajectory_rviz_plugin.h"
#include <pluginlib/class_list_macros.h>

/*----------------------------------------------------------*\
| Namespace
\*----------------------------------------------------------*/

using namespace tools;

/*----------------------------------------------------------*\
| Exports
\*----------------------------------------------------------*/

PLUGINLIB_EXPORT_CLASS(tools::JointTrajectoryRVizPlugin, rviz::Display)

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
