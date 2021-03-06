# -*- coding: utf-8 -*-
#
# Copyright (c) ZeroC, Inc. All rights reserved.
#
#
# Ice version 3.7.3
#
# <auto-generated>
#
# Generated from file `kinectleds.ice'
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

if 'KinectLedsAvailable' not in _M_jderobot.__dict__:
    _M_jderobot.KinectLedsAvailable = Ice.createTempClass()
    class KinectLedsAvailable(Ice.EnumBase):

        def __init__(self, _n, _v):
            Ice.EnumBase.__init__(self, _n, _v)

        def valueOf(self, _n):
            if _n in self._enumerators:
                return self._enumerators[_n]
            return None
        valueOf = classmethod(valueOf)

    KinectLedsAvailable.OFF = KinectLedsAvailable("OFF", 0)
    KinectLedsAvailable.GREEN = KinectLedsAvailable("GREEN", 1)
    KinectLedsAvailable.RED = KinectLedsAvailable("RED", 2)
    KinectLedsAvailable.YELLOW = KinectLedsAvailable("YELLOW", 3)
    KinectLedsAvailable.BLINKGREEN = KinectLedsAvailable("BLINKGREEN", 4)
    KinectLedsAvailable.BLINKYELLOW = KinectLedsAvailable("BLINKYELLOW", 5)
    KinectLedsAvailable.BLINKRED = KinectLedsAvailable("BLINKRED", 6)
    KinectLedsAvailable._enumerators = { 0:KinectLedsAvailable.OFF, 1:KinectLedsAvailable.GREEN, 2:KinectLedsAvailable.RED, 3:KinectLedsAvailable.YELLOW, 4:KinectLedsAvailable.BLINKGREEN, 5:KinectLedsAvailable.BLINKYELLOW, 6:KinectLedsAvailable.BLINKRED }

    _M_jderobot._t_KinectLedsAvailable = IcePy.defineEnum('::jderobot::KinectLedsAvailable', KinectLedsAvailable, (), KinectLedsAvailable._enumerators)

    _M_jderobot.KinectLedsAvailable = KinectLedsAvailable
    del KinectLedsAvailable

_M_jderobot._t_KinectLeds = IcePy.defineValue('::jderobot::KinectLeds', Ice.Value, -1, (), False, True, None, ())

if 'KinectLedsPrx' not in _M_jderobot.__dict__:
    _M_jderobot.KinectLedsPrx = Ice.createTempClass()
    class KinectLedsPrx(Ice.ObjectPrx):

        def setLedActive(self, led, context=None):
            return _M_jderobot.KinectLeds._op_setLedActive.invoke(self, ((led, ), context))

        def setLedActiveAsync(self, led, context=None):
            return _M_jderobot.KinectLeds._op_setLedActive.invokeAsync(self, ((led, ), context))

        def begin_setLedActive(self, led, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.KinectLeds._op_setLedActive.begin(self, ((led, ), _response, _ex, _sent, context))

        def end_setLedActive(self, _r):
            return _M_jderobot.KinectLeds._op_setLedActive.end(self, _r)

        @staticmethod
        def checkedCast(proxy, facetOrContext=None, context=None):
            return _M_jderobot.KinectLedsPrx.ice_checkedCast(proxy, '::jderobot::KinectLeds', facetOrContext, context)

        @staticmethod
        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.KinectLedsPrx.ice_uncheckedCast(proxy, facet)

        @staticmethod
        def ice_staticId():
            return '::jderobot::KinectLeds'
    _M_jderobot._t_KinectLedsPrx = IcePy.defineProxy('::jderobot::KinectLeds', KinectLedsPrx)

    _M_jderobot.KinectLedsPrx = KinectLedsPrx
    del KinectLedsPrx

    _M_jderobot.KinectLeds = Ice.createTempClass()
    class KinectLeds(Ice.Object):

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::KinectLeds')

        def ice_id(self, current=None):
            return '::jderobot::KinectLeds'

        @staticmethod
        def ice_staticId():
            return '::jderobot::KinectLeds'

        def setLedActive(self, led, current=None):
            raise NotImplementedError("servant method 'setLedActive' not implemented")

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_KinectLedsDisp)

        __repr__ = __str__

    _M_jderobot._t_KinectLedsDisp = IcePy.defineClass('::jderobot::KinectLeds', KinectLeds, (), None, ())
    KinectLeds._ice_type = _M_jderobot._t_KinectLedsDisp

    KinectLeds._op_setLedActive = IcePy.Operation('setLedActive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_jderobot._t_KinectLedsAvailable, False, 0),), (), None, ())

    _M_jderobot.KinectLeds = KinectLeds
    del KinectLeds

# End of module jderobot
