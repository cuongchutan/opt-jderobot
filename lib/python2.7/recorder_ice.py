# -*- coding: utf-8 -*-
#
# Copyright (c) ZeroC, Inc. All rights reserved.
#
#
# Ice version 3.7.3
#
# <auto-generated>
#
# Generated from file `recorder.ice'
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

_M_jderobot._t_recorder = IcePy.defineValue('::jderobot::recorder', Ice.Value, -1, (), False, True, None, ())

if 'recorderPrx' not in _M_jderobot.__dict__:
    _M_jderobot.recorderPrx = Ice.createTempClass()
    class recorderPrx(Ice.ObjectPrx):

        def saveLog(self, name, seconds, context=None):
            return _M_jderobot.recorder._op_saveLog.invoke(self, ((name, seconds), context))

        def saveLogAsync(self, name, seconds, context=None):
            return _M_jderobot.recorder._op_saveLog.invokeAsync(self, ((name, seconds), context))

        def begin_saveLog(self, name, seconds, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.recorder._op_saveLog.begin(self, ((name, seconds), _response, _ex, _sent, context))

        def end_saveLog(self, _r):
            return _M_jderobot.recorder._op_saveLog.end(self, _r)

        def saveVideo(self, path, name, seconds, context=None):
            return _M_jderobot.recorder._op_saveVideo.invoke(self, ((path, name, seconds), context))

        def saveVideoAsync(self, path, name, seconds, context=None):
            return _M_jderobot.recorder._op_saveVideo.invokeAsync(self, ((path, name, seconds), context))

        def begin_saveVideo(self, path, name, seconds, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.recorder._op_saveVideo.begin(self, ((path, name, seconds), _response, _ex, _sent, context))

        def end_saveVideo(self, _r):
            return _M_jderobot.recorder._op_saveVideo.end(self, _r)

        @staticmethod
        def checkedCast(proxy, facetOrContext=None, context=None):
            return _M_jderobot.recorderPrx.ice_checkedCast(proxy, '::jderobot::recorder', facetOrContext, context)

        @staticmethod
        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.recorderPrx.ice_uncheckedCast(proxy, facet)

        @staticmethod
        def ice_staticId():
            return '::jderobot::recorder'
    _M_jderobot._t_recorderPrx = IcePy.defineProxy('::jderobot::recorder', recorderPrx)

    _M_jderobot.recorderPrx = recorderPrx
    del recorderPrx

    _M_jderobot.recorder = Ice.createTempClass()
    class recorder(Ice.Object):

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::recorder')

        def ice_id(self, current=None):
            return '::jderobot::recorder'

        @staticmethod
        def ice_staticId():
            return '::jderobot::recorder'

        def saveLog(self, name, seconds, current=None):
            raise NotImplementedError("servant method 'saveLog' not implemented")

        def saveVideo(self, path, name, seconds, current=None):
            raise NotImplementedError("servant method 'saveVideo' not implemented")

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_recorderDisp)

        __repr__ = __str__

    _M_jderobot._t_recorderDisp = IcePy.defineClass('::jderobot::recorder', recorder, (), None, ())
    recorder._ice_type = _M_jderobot._t_recorderDisp

    recorder._op_saveLog = IcePy.Operation('saveLog', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_string, False, 0), ((), IcePy._t_int, False, 0)), (), ((), IcePy._t_bool, False, 0), ())
    recorder._op_saveVideo = IcePy.Operation('saveVideo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_string, False, 0), ((), IcePy._t_string, False, 0), ((), IcePy._t_int, False, 0)), (), ((), IcePy._t_bool, False, 0), ())

    _M_jderobot.recorder = recorder
    del recorder

# End of module jderobot
