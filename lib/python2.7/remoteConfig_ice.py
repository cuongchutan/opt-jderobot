# -*- coding: utf-8 -*-
#
# Copyright (c) ZeroC, Inc. All rights reserved.
#
#
# Ice version 3.7.3
#
# <auto-generated>
#
# Generated from file `remoteConfig.ice'
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

_M_jderobot._t_remoteConfig = IcePy.defineValue('::jderobot::remoteConfig', Ice.Value, -1, (), False, True, None, ())

if 'remoteConfigPrx' not in _M_jderobot.__dict__:
    _M_jderobot.remoteConfigPrx = Ice.createTempClass()
    class remoteConfigPrx(Ice.ObjectPrx):

        def initConfiguration(self, context=None):
            return _M_jderobot.remoteConfig._op_initConfiguration.invoke(self, ((), context))

        def initConfigurationAsync(self, context=None):
            return _M_jderobot.remoteConfig._op_initConfiguration.invokeAsync(self, ((), context))

        def begin_initConfiguration(self, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.remoteConfig._op_initConfiguration.begin(self, ((), _response, _ex, _sent, context))

        def end_initConfiguration(self, _r):
            return _M_jderobot.remoteConfig._op_initConfiguration.end(self, _r)

        def read(self, id, context=None):
            return _M_jderobot.remoteConfig._op_read.invoke(self, ((id, ), context))

        def readAsync(self, id, context=None):
            return _M_jderobot.remoteConfig._op_read.invokeAsync(self, ((id, ), context))

        def begin_read(self, id, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.remoteConfig._op_read.begin(self, ((id, ), _response, _ex, _sent, context))

        def end_read(self, _r):
            return _M_jderobot.remoteConfig._op_read.end(self, _r)

        def write(self, data, id, context=None):
            return _M_jderobot.remoteConfig._op_write.invoke(self, ((data, id), context))

        def writeAsync(self, data, id, context=None):
            return _M_jderobot.remoteConfig._op_write.invokeAsync(self, ((data, id), context))

        def begin_write(self, data, id, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.remoteConfig._op_write.begin(self, ((data, id), _response, _ex, _sent, context))

        def end_write(self, _r):
            return _M_jderobot.remoteConfig._op_write.end(self, _r)

        def setConfiguration(self, id, context=None):
            return _M_jderobot.remoteConfig._op_setConfiguration.invoke(self, ((id, ), context))

        def setConfigurationAsync(self, id, context=None):
            return _M_jderobot.remoteConfig._op_setConfiguration.invokeAsync(self, ((id, ), context))

        def begin_setConfiguration(self, id, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.remoteConfig._op_setConfiguration.begin(self, ((id, ), _response, _ex, _sent, context))

        def end_setConfiguration(self, _r):
            return _M_jderobot.remoteConfig._op_setConfiguration.end(self, _r)

        @staticmethod
        def checkedCast(proxy, facetOrContext=None, context=None):
            return _M_jderobot.remoteConfigPrx.ice_checkedCast(proxy, '::jderobot::remoteConfig', facetOrContext, context)

        @staticmethod
        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.remoteConfigPrx.ice_uncheckedCast(proxy, facet)

        @staticmethod
        def ice_staticId():
            return '::jderobot::remoteConfig'
    _M_jderobot._t_remoteConfigPrx = IcePy.defineProxy('::jderobot::remoteConfig', remoteConfigPrx)

    _M_jderobot.remoteConfigPrx = remoteConfigPrx
    del remoteConfigPrx

    _M_jderobot.remoteConfig = Ice.createTempClass()
    class remoteConfig(Ice.Object):

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::remoteConfig')

        def ice_id(self, current=None):
            return '::jderobot::remoteConfig'

        @staticmethod
        def ice_staticId():
            return '::jderobot::remoteConfig'

        def initConfiguration(self, current=None):
            raise NotImplementedError("servant method 'initConfiguration' not implemented")

        def read(self, id, current=None):
            raise NotImplementedError("servant method 'read' not implemented")

        def write(self, data, id, current=None):
            raise NotImplementedError("servant method 'write' not implemented")

        def setConfiguration(self, id, current=None):
            raise NotImplementedError("servant method 'setConfiguration' not implemented")

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_remoteConfigDisp)

        __repr__ = __str__

    _M_jderobot._t_remoteConfigDisp = IcePy.defineClass('::jderobot::remoteConfig', remoteConfig, (), None, ())
    remoteConfig._ice_type = _M_jderobot._t_remoteConfigDisp

    remoteConfig._op_initConfiguration = IcePy.Operation('initConfiguration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_int, False, 0), ())
    remoteConfig._op_read = IcePy.Operation('read', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_int, False, 0),), (), ((), IcePy._t_string, False, 0), ())
    remoteConfig._op_write = IcePy.Operation('write', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_string, False, 0), ((), IcePy._t_int, False, 0)), (), ((), IcePy._t_int, False, 0), ())
    remoteConfig._op_setConfiguration = IcePy.Operation('setConfiguration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_int, False, 0),), (), ((), IcePy._t_int, False, 0), ())

    _M_jderobot.remoteConfig = remoteConfig
    del remoteConfig

# End of module jderobot
