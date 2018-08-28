#include <ros/ros.h>
#include <std_msgs/String.h>

#include <sstream>

int main(int argc, char** argv) {
  ros::init(argc, argv, "testTalkerNode");

  ros::NodeHandle n;

  ros::Publisher somePublisher = n.advertise<std_msgs::String>("topicname", 1024);

  ros::Rate loop_rate(10);

  int msg_identifier = 0;

  while(ros::ok()) {
    std_msgs::String message;
    std::stringstream ss;
    ss << "someOutput " << msg_identifier;
    message.data = ss.str();

    ROS_INFO("%s", message.data.c_str());

    somePublisher.publish(message);

    ros::spinOnce();

    loop_rate.sleep();

    msg_identifier++;
  }
}
