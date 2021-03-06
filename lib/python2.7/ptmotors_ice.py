# -*- coding: utf-8 -*-
#
# Copyright (c) ZeroC, Inc. All rights reserved.
#
#
# Ice version 3.7.3
#
# <auto-generated>
#
# Generated from file `ptmotors.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

from sys import version_info as _version_info_
import Ice, IcePy

# Start of module jderobot
_M_jderobot = Ice.openModule('jderobot')
__name__ = 'jderobot'

if 'Time' not in _M_jderobot.__dict__:
    _M_jderobot.Time = Ice.createTempClass()
    class Time(object):
        def __init__(self, seconds=0, useconds=0):
            self.seconds = seconds
            self.useconds = useconds

        def __hash__(self):
            _h = 0
            _h = 5 * _h + Ice.getHash(self.seconds)
            _h = 5 * _h + Ice.getHash(self.useconds)
            return _h % 0x7fffffff

        def __compare(self, other):
            if other is None:
                return 1
            elif not isinstance(other, _M_jderobot.Time):
                return NotImplemented
            else:
                if self.seconds is None or other.seconds is None:
                    if self.seconds != other.seconds:
                        return (-1 if self.seconds is None else 1)
                else:
                    if self.seconds < other.seconds:
                        return -1
                    elif self.seconds > other.seconds:
                        return 1
                if self.useconds is None or other.useconds is None:
                    if self.useconds != other.useconds:
                        return (-1 if self.useconds is None else 1)
                else:
                    if self.useconds < other.useconds:
                        return -1
                    elif self.useconds > other.useconds:
                        return 1
                return 0

        def __lt__(self, other):
            r = self.__compare(other)
            if r is NotImplemented:
                return r
            else:
                return r < 0

        def __le__(self, other):
            r = self.__compare(other)
            if r is NotImplemented:
                return r
            else:
                return r <= 0

        def __gt__(self, other):
            r = self.__compare(other)
            if r is NotImplemented:
                return r
            else:
                return r > 0

        def __ge__(self, other):
            r = self.__compare(other)
            if r is NotImplemented:
                return r
            else:
                return r >= 0

        def __eq__(self, other):
            r = self.__compare(other)
            if r is NotImplemented:
                return r
            else:
                return r == 0

        def __ne__(self, other):
            r = self.__compare(other)
            if r is NotImplemented:
                return r
            else:
                return r != 0

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_Time)

        __repr__ = __str__

    _M_jderobot._t_Time = IcePy.defineStruct('::jderobot::Time', Time, (), (
        ('seconds', (), IcePy._t_long),
        ('useconds', (), IcePy._t_long)
    ))

    _M_jderobot.Time = Time
    del Time

# End of module jderobot

# Start of module jderobot
__name__ = 'jderobot'

if 'JderobotException' not in _M_jderobot.__dict__:
    _M_jderobot.JderobotException = Ice.createTempClass()
    class JderobotException(Ice.UserException):
        def __init__(self, what=''):
            self.what = what

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

        _ice_id = '::jderobot::JderobotException'

    _M_jderobot._t_JderobotException = IcePy.defineException('::jderobot::JderobotException', JderobotException, (), False, None, (('what', (), IcePy._t_string, False, 0),))
    JderobotException._ice_type = _M_jderobot._t_JderobotException

    _M_jderobot.JderobotException = JderobotException
    del JderobotException

if 'ConfigurationNotExistException' not in _M_jderobot.__dict__:
    _M_jderobot.ConfigurationNotExistException = Ice.createTempClass()
    class ConfigurationNotExistException(_M_jderobot.JderobotException):
        def __init__(self, what=''):
            _M_jderobot.JderobotException.__init__(self, what)

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

        _ice_id = '::jderobot::ConfigurationNotExistException'

    _M_jderobot._t_ConfigurationNotExistException = IcePy.defineException('::jderobot::ConfigurationNotExistException', ConfigurationNotExistException, (), False, _M_jderobot._t_JderobotException, ())
    ConfigurationNotExistException._ice_type = _M_jderobot._t_ConfigurationNotExistException

    _M_jderobot.ConfigurationNotExistException = ConfigurationNotExistException
    del ConfigurationNotExistException

if 'DataNotExistException' not in _M_jderobot.__dict__:
    _M_jderobot.DataNotExistException = Ice.createTempClass()
    class DataNotExistException(_M_jderobot.JderobotException):
        def __init__(self, what=''):
            _M_jderobot.JderobotException.__init__(self, what)

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

        _ice_id = '::jderobot::DataNotExistException'

    _M_jderobot._t_DataNotExistException = IcePy.defineException('::jderobot::DataNotExistException', DataNotExistException, (), False, _M_jderobot._t_JderobotException, ())
    DataNotExistException._ice_type = _M_jderobot._t_DataNotExistException

    _M_jderobot.DataNotExistException = DataNotExistException
    del DataNotExistException

if 'HardwareFailedException' not in _M_jderobot.__dict__:
    _M_jderobot.HardwareFailedException = Ice.createTempClass()
    class HardwareFailedException(_M_jderobot.JderobotException):
        def __init__(self, what=''):
            _M_jderobot.JderobotException.__init__(self, what)

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

        _ice_id = '::jderobot::HardwareFailedException'

    _M_jderobot._t_HardwareFailedException = IcePy.defineException('::jderobot::HardwareFailedException', HardwareFailedException, (), False, _M_jderobot._t_JderobotException, ())
    HardwareFailedException._ice_type = _M_jderobot._t_HardwareFailedException

    _M_jderobot.HardwareFailedException = HardwareFailedException
    del HardwareFailedException

if 'NoTopicException' not in _M_jderobot.__dict__:
    _M_jderobot.NoTopicException = Ice.createTempClass()
    class NoTopicException(_M_jderobot.JderobotException):
        def __init__(self, what=''):
            _M_jderobot.JderobotException.__init__(self, what)

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

        _ice_id = '::jderobot::NoTopicException'

    _M_jderobot._t_NoTopicException = IcePy.defineException('::jderobot::NoTopicException', NoTopicException, (), False, _M_jderobot._t_JderobotException, ())
    NoTopicException._ice_type = _M_jderobot._t_NoTopicException

    _M_jderobot.NoTopicException = NoTopicException
    del NoTopicException

if 'SubscriptionFailedException' not in _M_jderobot.__dict__:
    _M_jderobot.SubscriptionFailedException = Ice.createTempClass()
    class SubscriptionFailedException(_M_jderobot.JderobotException):
        def __init__(self, what=''):
            _M_jderobot.JderobotException.__init__(self, what)

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

        _ice_id = '::jderobot::SubscriptionFailedException'

    _M_jderobot._t_SubscriptionFailedException = IcePy.defineException('::jderobot::SubscriptionFailedException', SubscriptionFailedException, (), False, _M_jderobot._t_JderobotException, ())
    SubscriptionFailedException._ice_type = _M_jderobot._t_SubscriptionFailedException

    _M_jderobot.SubscriptionFailedException = SubscriptionFailedException
    del SubscriptionFailedException

if 'SubscriptionPushFailedException' not in _M_jderobot.__dict__:
    _M_jderobot.SubscriptionPushFailedException = Ice.createTempClass()
    class SubscriptionPushFailedException(_M_jderobot.JderobotException):
        def __init__(self, what=''):
            _M_jderobot.JderobotException.__init__(self, what)

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

        _ice_id = '::jderobot::SubscriptionPushFailedException'

    _M_jderobot._t_SubscriptionPushFailedException = IcePy.defineException('::jderobot::SubscriptionPushFailedException', SubscriptionPushFailedException, (), False, _M_jderobot._t_JderobotException, ())
    SubscriptionPushFailedException._ice_type = _M_jderobot._t_SubscriptionPushFailedException

    _M_jderobot.SubscriptionPushFailedException = SubscriptionPushFailedException
    del SubscriptionPushFailedException

# End of module jderobot

# Start of module jderobot
__name__ = 'jderobot'

if '_t_ByteSeq' not in _M_jderobot.__dict__:
    _M_jderobot._t_ByteSeq = IcePy.defineSequence('::jderobot::ByteSeq', (), IcePy._t_byte)

if '_t_IntSeq' not in _M_jderobot.__dict__:
    _M_jderobot._t_IntSeq = IcePy.defineSequence('::jderobot::IntSeq', (), IcePy._t_int)

if '_t_seqFloat' not in _M_jderobot.__dict__:
    _M_jderobot._t_seqFloat = IcePy.defineSequence('::jderobot::seqFloat', (), IcePy._t_float)

# End of module jderobot

# Start of module jderobot
__name__ = 'jderobot'

# End of module jderobot

# Start of module jderobot
__name__ = 'jderobot'

if 'PTMotorsData' not in _M_jderobot.__dict__:
    _M_jderobot.PTMotorsData = Ice.createTempClass()
    class PTMotorsData(Ice.Value):
        """
        PTMotorsData a class that contains the pantilt data
        """
        def __init__(self, pan=0.0, panSpeed=0.0, tilt=0.0, tiltSpeed=0.0, timeStamp=0):
            self.pan = pan
            self.panSpeed = panSpeed
            self.tilt = tilt
            self.tiltSpeed = tiltSpeed
            self.timeStamp = timeStamp

        def ice_id(self):
            return '::jderobot::PTMotorsData'

        @staticmethod
        def ice_staticId():
            return '::jderobot::PTMotorsData'

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_PTMotorsData)

        __repr__ = __str__

    _M_jderobot._t_PTMotorsData = IcePy.defineValue('::jderobot::PTMotorsData', PTMotorsData, -1, (), False, False, None, (
        ('pan', (), IcePy._t_float, False, 0),
        ('panSpeed', (), IcePy._t_float, False, 0),
        ('tilt', (), IcePy._t_float, False, 0),
        ('tiltSpeed', (), IcePy._t_float, False, 0),
        ('timeStamp', (), IcePy._t_long, False, 0)
    ))
    PTMotorsData._ice_type = _M_jderobot._t_PTMotorsData

    _M_jderobot.PTMotorsData = PTMotorsData
    del PTMotorsData

if 'PTMotorsParams' not in _M_jderobot.__dict__:
    _M_jderobot.PTMotorsParams = Ice.createTempClass()
    class PTMotorsParams(Ice.Value):
        """
        PTMotorsParams a class that contains the motors parametres.
        """
        def __init__(self, maxPan=0.0, minPan=0.0, maxTilt=0.0, minTilt=0.0, maxPanSpeed=0.0, maxTiltSpeed=0.0):
            self.maxPan = maxPan
            self.minPan = minPan
            self.maxTilt = maxTilt
            self.minTilt = minTilt
            self.maxPanSpeed = maxPanSpeed
            self.maxTiltSpeed = maxTiltSpeed

        def ice_id(self):
            return '::jderobot::PTMotorsParams'

        @staticmethod
        def ice_staticId():
            return '::jderobot::PTMotorsParams'

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_PTMotorsParams)

        __repr__ = __str__

    _M_jderobot._t_PTMotorsParams = IcePy.defineValue('::jderobot::PTMotorsParams', PTMotorsParams, -1, (), False, False, None, (
        ('maxPan', (), IcePy._t_float, False, 0),
        ('minPan', (), IcePy._t_float, False, 0),
        ('maxTilt', (), IcePy._t_float, False, 0),
        ('minTilt', (), IcePy._t_float, False, 0),
        ('maxPanSpeed', (), IcePy._t_float, False, 0),
        ('maxTiltSpeed', (), IcePy._t_float, False, 0)
    ))
    PTMotorsParams._ice_type = _M_jderobot._t_PTMotorsParams

    _M_jderobot.PTMotorsParams = PTMotorsParams
    del PTMotorsParams

_M_jderobot._t_PTMotors = IcePy.defineValue('::jderobot::PTMotors', Ice.Value, -1, (), False, True, None, ())

if 'PTMotorsPrx' not in _M_jderobot.__dict__:
    _M_jderobot.PTMotorsPrx = Ice.createTempClass()
    class PTMotorsPrx(Ice.ObjectPrx):

        def setPTMotorsData(self, data, context=None):
            return _M_jderobot.PTMotors._op_setPTMotorsData.invoke(self, ((data, ), context))

        def setPTMotorsDataAsync(self, data, context=None):
            return _M_jderobot.PTMotors._op_setPTMotorsData.invokeAsync(self, ((data, ), context))

        def begin_setPTMotorsData(self, data, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.PTMotors._op_setPTMotorsData.begin(self, ((data, ), _response, _ex, _sent, context))

        def end_setPTMotorsData(self, _r):
            return _M_jderobot.PTMotors._op_setPTMotorsData.end(self, _r)

        def getPTMotorsParams(self, context=None):
            return _M_jderobot.PTMotors._op_getPTMotorsParams.invoke(self, ((), context))

        def getPTMotorsParamsAsync(self, context=None):
            return _M_jderobot.PTMotors._op_getPTMotorsParams.invokeAsync(self, ((), context))

        def begin_getPTMotorsParams(self, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.PTMotors._op_getPTMotorsParams.begin(self, ((), _response, _ex, _sent, context))

        def end_getPTMotorsParams(self, _r):
            return _M_jderobot.PTMotors._op_getPTMotorsParams.end(self, _r)

        @staticmethod
        def checkedCast(proxy, facetOrContext=None, context=None):
            return _M_jderobot.PTMotorsPrx.ice_checkedCast(proxy, '::jderobot::PTMotors', facetOrContext, context)

        @staticmethod
        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.PTMotorsPrx.ice_uncheckedCast(proxy, facet)

        @staticmethod
        def ice_staticId():
            return '::jderobot::PTMotors'
    _M_jderobot._t_PTMotorsPrx = IcePy.defineProxy('::jderobot::PTMotors', PTMotorsPrx)

    _M_jderobot.PTMotorsPrx = PTMotorsPrx
    del PTMotorsPrx

    _M_jderobot.PTMotors = Ice.createTempClass()
    class PTMotors(Ice.Object):

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::PTMotors')

        def ice_id(self, current=None):
            return '::jderobot::PTMotors'

        @staticmethod
        def ice_staticId():
            return '::jderobot::PTMotors'

        def setPTMotorsData(self, data, current=None):
            raise NotImplementedError("servant method 'setPTMotorsData' not implemented")

        def getPTMotorsParams(self, current=None):
            raise NotImplementedError("servant method 'getPTMotorsParams' not implemented")

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_PTMotorsDisp)

        __repr__ = __str__

    _M_jderobot._t_PTMotorsDisp = IcePy.defineClass('::jderobot::PTMotors', PTMotors, (), None, ())
    PTMotors._ice_type = _M_jderobot._t_PTMotorsDisp

    PTMotors._op_setPTMotorsData = IcePy.Operation('setPTMotorsData', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_jderobot._t_PTMotorsData, False, 0),), (), ((), IcePy._t_int, False, 0), ())
    PTMotors._op_getPTMotorsParams = IcePy.Operation('getPTMotorsParams', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, None, (), (), (), ((), _M_jderobot._t_PTMotorsParams, False, 0), ())

    _M_jderobot.PTMotors = PTMotors
    del PTMotors

# End of module jderobot
