// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "originbot_msgs/msg/detail/originbot_status__struct.h"
#include "originbot_msgs/msg/detail/originbot_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool originbot_msgs__msg__originbot_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("originbot_msgs.msg._originbot_status.OriginbotStatus", full_classname_dest, 52) == 0);
  }
  originbot_msgs__msg__OriginbotStatus * ros_message = _ros_message;
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // buzzer_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "buzzer_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->buzzer_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // led_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->led_on = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * originbot_msgs__msg__originbot_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OriginbotStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("originbot_msgs.msg._originbot_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OriginbotStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  originbot_msgs__msg__OriginbotStatus * ros_message = (originbot_msgs__msg__OriginbotStatus *)raw_ros_message;
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buzzer_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->buzzer_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buzzer_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->led_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
