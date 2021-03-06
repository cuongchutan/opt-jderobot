# -*- coding: utf-8 -*-
#
# Copyright (c) ZeroC, Inc. All rights reserved.
#
#
# Ice version 3.7.3
#
# <auto-generated>
#
# Generated from file `cmdvel.ice'
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

if 'CMDVelData' not in _M_jderobot.__dict__:
    _M_jderobot.CMDVelData = Ice.createTempClass()
    class CMDVelData(Ice.Value):
        def __init__(self, linearX=0.0, linearY=0.0, linearZ=0.0, angularX=0.0, angularY=0.0, angularZ=0.0):
            self.linearX = linearX
            self.linearY = linearY
            self.linearZ = linearZ
            self.angularX = angularX
            self.angularY = angularY
            self.angularZ = angularZ

        def ice_id(self):
            return '::jderobot::CMDVelData'

        @staticmethod
        def ice_staticId():
            return '::jderobot::CMDVelData'

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_CMDVelData)

        __repr__ = __str__

    _M_jderobot._t_CMDVelData = IcePy.defineValue('::jderobot::CMDVelData', CMDVelData, -1, (), False, False, None, (
        ('linearX', (), IcePy._t_float, False, 0),
        ('linearY', (), IcePy._t_float, False, 0),
        ('linearZ', (), IcePy._t_float, False, 0),
        ('angularX', (), IcePy._t_float, False, 0),
        ('angularY', (), IcePy._t_float, False, 0),
        ('angularZ', (), IcePy._t_float, False, 0)
    ))
    CMDVelData._ice_type = _M_jderobot._t_CMDVelData

    _M_jderobot.CMDVelData = CMDVelData
    del CMDVelData

_M_jderobot._t_CMDVel = IcePy.defineValue('::jderobot::CMDVel', Ice.Value, -1, (), False, True, None, ())

if 'CMDVelPrx' not in _M_jderobot.__dict__:
    _M_jderobot.CMDVelPrx = Ice.createTempClass()
    class CMDVelPrx(Ice.ObjectPrx):

        def setCMDVelData(self, data, context=None):
            return _M_jderobot.CMDVel._op_setCMDVelData.invoke(self, ((data, ), context))

        def setCMDVelDataAsync(self, data, context=None):
            return _M_jderobot.CMDVel._op_setCMDVelData.invokeAsync(self, ((data, ), context))

        def begin_setCMDVelData(self, data, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.CMDVel._op_setCMDVelData.begin(self, ((data, ), _response, _ex, _sent, context))

        def end_setCMDVelData(self, _r):
            return _M_jderobot.CMDVel._op_setCMDVelData.end(self, _r)

        @staticmethod
        def checkedCast(proxy, facetOrContext=None, context=None):
            return _M_jderobot.CMDVelPrx.ice_checkedCast(proxy, '::jderobot::CMDVel', facetOrContext, context)

        @staticmethod
        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.CMDVelPrx.ice_uncheckedCast(proxy, facet)

        @staticmethod
        def ice_staticId():
            return '::jderobot::CMDVel'
    _M_jderobot._t_CMDVelPrx = IcePy.defineProxy('::jderobot::CMDVel', CMDVelPrx)

    _M_jderobot.CMDVelPrx = CMDVelPrx
    del CMDVelPrx

    _M_jderobot.CMDVel = Ice.createTempClass()
    class CMDVel(Ice.Object):

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::CMDVel')

        def ice_id(self, current=None):
            return '::jderobot::CMDVel'

        @staticmethod
        def ice_staticId():
            return '::jderobot::CMDVel'

        def setCMDVelData(self, data, current=None):
            raise NotImplementedError("servant method 'setCMDVelData' not implemented")

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_CMDVelDisp)

        __repr__ = __str__

    _M_jderobot._t_CMDVelDisp = IcePy.defineClass('::jderobot::CMDVel', CMDVel, (), None, ())
    CMDVel._ice_type = _M_jderobot._t_CMDVelDisp

    CMDVel._op_setCMDVelData = IcePy.Operation('setCMDVelData', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_jderobot._t_CMDVelData, False, 0),), (), ((), IcePy._t_int, False, 0), ())

    _M_jderobot.CMDVel = CMDVel
    del CMDVel

# End of module jderobot
