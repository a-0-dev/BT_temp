#include <ros/ros.h>
#include <std_msgs/String.h>

void someOutputCallback(const std_msgs::String::ConstPtr& message) {
  ROS_INFO("Received message: \"%s\"", message->data.c_str());
}

int main(int argc, char** argv) {
  ros::init(argc, argv, "testListenerNode");

  ros::NodeHandle n;

  ros::Subscriber someSubscriber = n.subscribe("topicname", 1024, someOutputCallback);

  ros::spin();
}
