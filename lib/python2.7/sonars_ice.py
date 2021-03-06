# -*- coding: utf-8 -*-
#
# Copyright (c) ZeroC, Inc. All rights reserved.
#
#
# Ice version 3.7.3
#
# <auto-generated>
#
# Generated from file `sonars.ice'
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

if 'SonarsData' not in _M_jderobot.__dict__:
    _M_jderobot.SonarsData = Ice.createTempClass()
    class SonarsData(Ice.Value):
        def __init__(self, us=None, numSonars=0):
            self.us = us
            self.numSonars = numSonars

        def ice_id(self):
            return '::jderobot::SonarsData'

        @staticmethod
        def ice_staticId():
            return '::jderobot::SonarsData'

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_SonarsData)

        __repr__ = __str__

    _M_jderobot._t_SonarsData = IcePy.defineValue('::jderobot::SonarsData', SonarsData, -1, (), False, False, None, (
        ('us', (), _M_jderobot._t_IntSeq, False, 0),
        ('numSonars', (), IcePy._t_int, False, 0)
    ))
    SonarsData._ice_type = _M_jderobot._t_SonarsData

    _M_jderobot.SonarsData = SonarsData
    del SonarsData

_M_jderobot._t_Sonars = IcePy.defineValue('::jderobot::Sonars', Ice.Value, -1, (), False, True, None, ())

if 'SonarsPrx' not in _M_jderobot.__dict__:
    _M_jderobot.SonarsPrx = Ice.createTempClass()
    class SonarsPrx(Ice.ObjectPrx):

        def getSonarsData(self, context=None):
            return _M_jderobot.Sonars._op_getSonarsData.invoke(self, ((), context))

        def getSonarsDataAsync(self, context=None):
            return _M_jderobot.Sonars._op_getSonarsData.invokeAsync(self, ((), context))

        def begin_getSonarsData(self, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.Sonars._op_getSonarsData.begin(self, ((), _response, _ex, _sent, context))

        def end_getSonarsData(self, _r):
            return _M_jderobot.Sonars._op_getSonarsData.end(self, _r)

        @staticmethod
        def checkedCast(proxy, facetOrContext=None, context=None):
            return _M_jderobot.SonarsPrx.ice_checkedCast(proxy, '::jderobot::Sonars', facetOrContext, context)

        @staticmethod
        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.SonarsPrx.ice_uncheckedCast(proxy, facet)

        @staticmethod
        def ice_staticId():
            return '::jderobot::Sonars'
    _M_jderobot._t_SonarsPrx = IcePy.defineProxy('::jderobot::Sonars', SonarsPrx)

    _M_jderobot.SonarsPrx = SonarsPrx
    del SonarsPrx

    _M_jderobot.Sonars = Ice.createTempClass()
    class Sonars(Ice.Object):

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::Sonars')

        def ice_id(self, current=None):
            return '::jderobot::Sonars'

        @staticmethod
        def ice_staticId():
            return '::jderobot::Sonars'

        def getSonarsData(self, current=None):
            raise NotImplementedError("servant method 'getSonarsData' not implemented")

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_SonarsDisp)

        __repr__ = __str__

    _M_jderobot._t_SonarsDisp = IcePy.defineClass('::jderobot::Sonars', Sonars, (), None, ())
    Sonars._ice_type = _M_jderobot._t_SonarsDisp

    Sonars._op_getSonarsData = IcePy.Operation('getSonarsData', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, None, (), (), (), ((), _M_jderobot._t_SonarsData, False, 0), ())

    _M_jderobot.Sonars = Sonars
    del Sonars

# End of module jderobot
