#pragma once

/*----------------------------------------------------------*\
| Includes
\*----------------------------------------------------------*/

#include <memory>
#include <vector>
#include <ros/ros.h>
#include <QWidget>

#include <rviz/display.h>
#include <rviz/display_context.h>
#include <rviz/panel_dock_widget.h>
#include <rviz/window_manager_interface.h>
//#include <rviz/properties/property.h>
//#include <rviz/properties/ros_topic_property.h>

/*----------------------------------------------------------*\
| JointTrajectoryRVizPlugin class
\*----------------------------------------------------------*/

namespace tools {
  class JointTrajectoryRVizPlugin : public rviz::Display
  {
    Q_OBJECT

  private:
    ros::NodeHandle m_node;
    ros::Subscriber m_trajectoryStateSub;

  public:
    JointTrajectoryRVizPlugin();
    ~JointTrajectoryRVizPlugin() override;

  public:
    void load(const rviz::Config& config) override;
    void update(float wall_dt, float ros_dt) override;

  private Q_SLOTS:
    void changedSomething();
  };
}