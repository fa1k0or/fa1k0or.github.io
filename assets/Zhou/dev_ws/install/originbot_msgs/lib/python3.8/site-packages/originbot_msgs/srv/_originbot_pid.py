# generated from rosidl_generator_py/resource/_idl.py.em
# with input from originbot_msgs:srv/OriginbotPID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OriginbotPID_Request(type):
    """Metaclass of message 'OriginbotPID_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('originbot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'originbot_msgs.srv.OriginbotPID_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__originbot_pid__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__originbot_pid__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__originbot_pid__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__originbot_pid__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__originbot_pid__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OriginbotPID_Request(metaclass=Metaclass_OriginbotPID_Request):
    """Message class 'OriginbotPID_Request'."""

    __slots__ = [
        '_p',
        '_i',
        '_d',
    ]

    _fields_and_field_types = {
        'p': 'float',
        'i': 'float',
        'd': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.p = kwargs.get('p', float())
        self.i = kwargs.get('i', float())
        self.d = kwargs.get('d', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.p != other.p:
            return False
        if self.i != other.i:
            return False
        if self.d != other.d:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p' field must be of type 'float'"
        self._p = value

    @property
    def i(self):
        """Message field 'i'."""
        return self._i

    @i.setter
    def i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i' field must be of type 'float'"
        self._i = value

    @property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd' field must be of type 'float'"
        self._d = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OriginbotPID_Response(type):
    """Metaclass of message 'OriginbotPID_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('originbot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'originbot_msgs.srv.OriginbotPID_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__originbot_pid__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__originbot_pid__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__originbot_pid__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__originbot_pid__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__originbot_pid__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OriginbotPID_Response(metaclass=Metaclass_OriginbotPID_Response):
    """Message class 'OriginbotPID_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_OriginbotPID(type):
    """Metaclass of service 'OriginbotPID'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('originbot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'originbot_msgs.srv.OriginbotPID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__originbot_pid

            from originbot_msgs.srv import _originbot_pid
            if _originbot_pid.Metaclass_OriginbotPID_Request._TYPE_SUPPORT is None:
                _originbot_pid.Metaclass_OriginbotPID_Request.__import_type_support__()
            if _originbot_pid.Metaclass_OriginbotPID_Response._TYPE_SUPPORT is None:
                _originbot_pid.Metaclass_OriginbotPID_Response.__import_type_support__()


class OriginbotPID(metaclass=Metaclass_OriginbotPID):
    from originbot_msgs.srv._originbot_pid import OriginbotPID_Request as Request
    from originbot_msgs.srv._originbot_pid import OriginbotPID_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
