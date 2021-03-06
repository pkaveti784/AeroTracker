/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/pushyamikaveti/AeroTracker/src/ros_mavlink/msg/Mavlink.msg
 *
 */


#ifndef ROS_MAVLINK_MESSAGE_MAVLINK_H
#define ROS_MAVLINK_MESSAGE_MAVLINK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ros_mavlink
{
template <class ContainerAllocator>
struct Mavlink_
{
  typedef Mavlink_<ContainerAllocator> Type;

  Mavlink_()
    : header()
    , checksum(0)
    , magic(0)
    , len(0)
    , seq(0)
    , sysid(0)
    , compid(0)
    , msgid(0)
    , fromlcm(false)
    , payload64()  {
    }
  Mavlink_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , checksum(0)
    , magic(0)
    , len(0)
    , seq(0)
    , sysid(0)
    , compid(0)
    , msgid(0)
    , fromlcm(false)
    , payload64(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _checksum_type;
  _checksum_type checksum;

   typedef uint8_t _magic_type;
  _magic_type magic;

   typedef uint8_t _len_type;
  _len_type len;

   typedef uint8_t _seq_type;
  _seq_type seq;

   typedef uint8_t _sysid_type;
  _sysid_type sysid;

   typedef uint8_t _compid_type;
  _compid_type compid;

   typedef uint8_t _msgid_type;
  _msgid_type msgid;

   typedef uint8_t _fromlcm_type;
  _fromlcm_type fromlcm;

   typedef std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other >  _payload64_type;
  _payload64_type payload64;




  typedef boost::shared_ptr< ::ros_mavlink::Mavlink_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mavlink::Mavlink_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Mavlink_

typedef ::ros_mavlink::Mavlink_<std::allocator<void> > Mavlink;

typedef boost::shared_ptr< ::ros_mavlink::Mavlink > MavlinkPtr;
typedef boost::shared_ptr< ::ros_mavlink::Mavlink const> MavlinkConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mavlink::Mavlink_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mavlink::Mavlink_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_mavlink

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'ros_mavlink': ['/home/pushyamikaveti/AeroTracker/src/ros_mavlink/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_mavlink::Mavlink_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mavlink::Mavlink_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mavlink::Mavlink_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mavlink::Mavlink_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mavlink::Mavlink_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mavlink::Mavlink_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mavlink::Mavlink_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2508b91c8dc673f9656b8173afa17d4b";
  }

  static const char* value(const ::ros_mavlink::Mavlink_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2508b91c8dc673f9ULL;
  static const uint64_t static_value2 = 0x656b8173afa17d4bULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mavlink::Mavlink_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mavlink/Mavlink";
  }

  static const char* value(const ::ros_mavlink::Mavlink_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mavlink::Mavlink_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint16 checksum\n\
uint8 magic\n\
uint8 len\n\
uint8 seq\n\
uint8 sysid\n\
uint8 compid\n\
uint8 msgid\n\
bool fromlcm\n\
uint64[] payload64\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::ros_mavlink::Mavlink_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mavlink::Mavlink_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.checksum);
      stream.next(m.magic);
      stream.next(m.len);
      stream.next(m.seq);
      stream.next(m.sysid);
      stream.next(m.compid);
      stream.next(m.msgid);
      stream.next(m.fromlcm);
      stream.next(m.payload64);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Mavlink_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mavlink::Mavlink_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mavlink::Mavlink_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "checksum: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.checksum);
    s << indent << "magic: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.magic);
    s << indent << "len: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.len);
    s << indent << "seq: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.seq);
    s << indent << "sysid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sysid);
    s << indent << "compid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.compid);
    s << indent << "msgid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.msgid);
    s << indent << "fromlcm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fromlcm);
    s << indent << "payload64[]" << std::endl;
    for (size_t i = 0; i < v.payload64.size(); ++i)
    {
      s << indent << "  payload64[" << i << "]: ";
      Printer<uint64_t>::stream(s, indent + "  ", v.payload64[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MAVLINK_MESSAGE_MAVLINK_H
