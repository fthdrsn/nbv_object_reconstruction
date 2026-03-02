# generated from rosidl_generator_py/resource/_idl.py.em
# with input from octomap_operations_interfaces:srv/OctomapData.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OctomapData_Request(type):
    """Metaclass of message 'OctomapData_Request'."""

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
            module = import_type_support('octomap_operations_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'octomap_operations_interfaces.srv.OctomapData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__octomap_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__octomap_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__octomap_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__octomap_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__octomap_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OctomapData_Request(metaclass=Metaclass_OctomapData_Request):
    """Message class 'OctomapData_Request'."""

    __slots__ = [
        '_check_fields',
    ]

    _fields_and_field_types = {
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_OctomapData_Response(type):
    """Metaclass of message 'OctomapData_Response'."""

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
            module = import_type_support('octomap_operations_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'octomap_operations_interfaces.srv.OctomapData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__octomap_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__octomap_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__octomap_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__octomap_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__octomap_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OctomapData_Response(metaclass=Metaclass_OctomapData_Response):
    """Message class 'OctomapData_Response'."""

    __slots__ = [
        '_cvr',
        '_ent',
        '_unknown',
        '_occupied',
        '_free',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'cvr': 'float',
        'ent': 'float',
        'unknown': 'float',
        'occupied': 'float',
        'free': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cvr = kwargs.get('cvr', float())
        self.ent = kwargs.get('ent', float())
        self.unknown = kwargs.get('unknown', float())
        self.occupied = kwargs.get('occupied', float())
        self.free = kwargs.get('free', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.cvr != other.cvr:
            return False
        if self.ent != other.ent:
            return False
        if self.unknown != other.unknown:
            return False
        if self.occupied != other.occupied:
            return False
        if self.free != other.free:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cvr(self):
        """Message field 'cvr'."""
        return self._cvr

    @cvr.setter
    def cvr(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cvr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cvr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cvr = value

    @builtins.property
    def ent(self):
        """Message field 'ent'."""
        return self._ent

    @ent.setter
    def ent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ent = value

    @builtins.property
    def unknown(self):
        """Message field 'unknown'."""
        return self._unknown

    @unknown.setter
    def unknown(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'unknown' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'unknown' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._unknown = value

    @builtins.property
    def occupied(self):
        """Message field 'occupied'."""
        return self._occupied

    @occupied.setter
    def occupied(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'occupied' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'occupied' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._occupied = value

    @builtins.property
    def free(self):
        """Message field 'free'."""
        return self._free

    @free.setter
    def free(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'free' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'free' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._free = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_OctomapData_Event(type):
    """Metaclass of message 'OctomapData_Event'."""

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
            module = import_type_support('octomap_operations_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'octomap_operations_interfaces.srv.OctomapData_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__octomap_data__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__octomap_data__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__octomap_data__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__octomap_data__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__octomap_data__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OctomapData_Event(metaclass=Metaclass_OctomapData_Event):
    """Message class 'OctomapData_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<octomap_operations_interfaces/OctomapData_Request, 1>',
        'response': 'sequence<octomap_operations_interfaces/OctomapData_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['octomap_operations_interfaces', 'srv'], 'OctomapData_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['octomap_operations_interfaces', 'srv'], 'OctomapData_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from octomap_operations_interfaces.srv import OctomapData_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, OctomapData_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'OctomapData_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from octomap_operations_interfaces.srv import OctomapData_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, OctomapData_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'OctomapData_Response'"
        self._response = value


class Metaclass_OctomapData(type):
    """Metaclass of service 'OctomapData'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('octomap_operations_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'octomap_operations_interfaces.srv.OctomapData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__octomap_data

            from octomap_operations_interfaces.srv import _octomap_data
            if _octomap_data.Metaclass_OctomapData_Request._TYPE_SUPPORT is None:
                _octomap_data.Metaclass_OctomapData_Request.__import_type_support__()
            if _octomap_data.Metaclass_OctomapData_Response._TYPE_SUPPORT is None:
                _octomap_data.Metaclass_OctomapData_Response.__import_type_support__()
            if _octomap_data.Metaclass_OctomapData_Event._TYPE_SUPPORT is None:
                _octomap_data.Metaclass_OctomapData_Event.__import_type_support__()


class OctomapData(metaclass=Metaclass_OctomapData):
    from octomap_operations_interfaces.srv._octomap_data import OctomapData_Request as Request
    from octomap_operations_interfaces.srv._octomap_data import OctomapData_Response as Response
    from octomap_operations_interfaces.srv._octomap_data import OctomapData_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
