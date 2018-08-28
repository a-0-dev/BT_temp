// Generated by gencpp from file behavior_tree_core/BTFeedback.msg
// DO NOT EDIT!


#ifndef BEHAVIOR_TREE_CORE_MESSAGE_BTFEEDBACK_H
#define BEHAVIOR_TREE_CORE_MESSAGE_BTFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace behavior_tree_core
{
template <class ContainerAllocator>
struct BTFeedback_
{
  typedef BTFeedback_<ContainerAllocator> Type;

  BTFeedback_()
    : status(0)  {
    }
  BTFeedback_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef int32_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::behavior_tree_core::BTFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::behavior_tree_core::BTFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct BTFeedback_

typedef ::behavior_tree_core::BTFeedback_<std::allocator<void> > BTFeedback;

typedef boost::shared_ptr< ::behavior_tree_core::BTFeedback > BTFeedbackPtr;
typedef boost::shared_ptr< ::behavior_tree_core::BTFeedback const> BTFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::behavior_tree_core::BTFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::behavior_tree_core::BTFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace behavior_tree_core

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'behavior_tree_core': ['/home/hoebler/catkin_ws/devel/share/behavior_tree_core/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::behavior_tree_core::BTFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::behavior_tree_core::BTFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::behavior_tree_core::BTFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::behavior_tree_core::BTFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::behavior_tree_core::BTFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::behavior_tree_core::BTFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::behavior_tree_core::BTFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "86791dcf1de997ec7de5a0de7e4dcfcc";
  }

  static const char* value(const ::behavior_tree_core::BTFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x86791dcf1de997ecULL;
  static const uint64_t static_value2 = 0x7de5a0de7e4dcfccULL;
};

template<class ContainerAllocator>
struct DataType< ::behavior_tree_core::BTFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "behavior_tree_core/BTFeedback";
  }

  static const char* value(const ::behavior_tree_core::BTFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::behavior_tree_core::BTFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
int32 status \n\
\n\
";
  }

  static const char* value(const ::behavior_tree_core::BTFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::behavior_tree_core::BTFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BTFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::behavior_tree_core::BTFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::behavior_tree_core::BTFeedback_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEHAVIOR_TREE_CORE_MESSAGE_BTFEEDBACK_H
