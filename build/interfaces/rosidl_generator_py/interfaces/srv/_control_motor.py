# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/ControlMotor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'integer_values'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlMotor_Request(type):
    """Metaclass of message 'ControlMotor_Request'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.ControlMotor_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_motor__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_motor__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_motor__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_motor__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_motor__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlMotor_Request(metaclass=Metaclass_ControlMotor_Request):
    """Message class 'ControlMotor_Request'."""

    __slots__ = [
        '_integer_values',
    ]

    _fields_and_field_types = {
        'integer_values': 'int32[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'integer_values' not in kwargs:
            self.integer_values = numpy.zeros(4, dtype=numpy.int32)
        else:
            self.integer_values = numpy.array(kwargs.get('integer_values'), dtype=numpy.int32)
            assert self.integer_values.shape == (4, )

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
        if all(self.integer_values != other.integer_values):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def integer_values(self):
        """Message field 'integer_values'."""
        return self._integer_values

    @integer_values.setter
    def integer_values(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'integer_values' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 4, \
                "The 'integer_values' numpy.ndarray() must have a size of 4"
            self._integer_values = value
            return
        if __debug__:
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'integer_values' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._integer_values = numpy.array(value, dtype=numpy.int32)


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# Member 'final_joint_angles'
# already imported above
# import numpy

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlMotor_Response(type):
    """Metaclass of message 'ControlMotor_Response'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.ControlMotor_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_motor__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_motor__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_motor__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_motor__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_motor__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlMotor_Response(metaclass=Metaclass_ControlMotor_Response):
    """Message class 'ControlMotor_Response'."""

    __slots__ = [
        '_final_joint_angles',
    ]

    _fields_and_field_types = {
        'final_joint_angles': 'float[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'final_joint_angles' not in kwargs:
            self.final_joint_angles = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.final_joint_angles = numpy.array(kwargs.get('final_joint_angles'), dtype=numpy.float32)
            assert self.final_joint_angles.shape == (6, )

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
        if all(self.final_joint_angles != other.final_joint_angles):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def final_joint_angles(self):
        """Message field 'final_joint_angles'."""
        return self._final_joint_angles

    @final_joint_angles.setter
    def final_joint_angles(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'final_joint_angles' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'final_joint_angles' numpy.ndarray() must have a size of 6"
            self._final_joint_angles = value
            return
        if __debug__:
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'final_joint_angles' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._final_joint_angles = numpy.array(value, dtype=numpy.float32)


class Metaclass_ControlMotor(type):
    """Metaclass of service 'ControlMotor'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.ControlMotor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__control_motor

            from interfaces.srv import _control_motor
            if _control_motor.Metaclass_ControlMotor_Request._TYPE_SUPPORT is None:
                _control_motor.Metaclass_ControlMotor_Request.__import_type_support__()
            if _control_motor.Metaclass_ControlMotor_Response._TYPE_SUPPORT is None:
                _control_motor.Metaclass_ControlMotor_Response.__import_type_support__()


class ControlMotor(metaclass=Metaclass_ControlMotor):
    from interfaces.srv._control_motor import ControlMotor_Request as Request
    from interfaces.srv._control_motor import ControlMotor_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
