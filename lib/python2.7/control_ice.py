# -*- coding: utf-8 -*-
#
# Copyright (c) ZeroC, Inc. All rights reserved.
#
#
# Ice version 3.7.3
#
# <auto-generated>
#
# Generated from file `control.ice'
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

_M_jderobot._t_Control = IcePy.defineValue('::jderobot::Control', Ice.Value, -1, (), False, True, None, ())

if 'ControlPrx' not in _M_jderobot.__dict__:
    _M_jderobot.ControlPrx = Ice.createTempClass()
    class ControlPrx(Ice.ObjectPrx):

        def start(self, context=None):
            return _M_jderobot.Control._op_start.invoke(self, ((), context))

        def startAsync(self, context=None):
            return _M_jderobot.Control._op_start.invokeAsync(self, ((), context))

        def begin_start(self, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.Control._op_start.begin(self, ((), _response, _ex, _sent, context))

        def end_start(self, _r):
            return _M_jderobot.Control._op_start.end(self, _r)

        def stop(self, context=None):
            return _M_jderobot.Control._op_stop.invoke(self, ((), context))

        def stopAsync(self, context=None):
            return _M_jderobot.Control._op_stop.invokeAsync(self, ((), context))

        def begin_stop(self, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.Control._op_stop.begin(self, ((), _response, _ex, _sent, context))

        def end_stop(self, _r):
            return _M_jderobot.Control._op_stop.end(self, _r)

        def pause(self, context=None):
            return _M_jderobot.Control._op_pause.invoke(self, ((), context))

        def pauseAsync(self, context=None):
            return _M_jderobot.Control._op_pause.invokeAsync(self, ((), context))

        def begin_pause(self, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.Control._op_pause.begin(self, ((), _response, _ex, _sent, context))

        def end_pause(self, _r):
            return _M_jderobot.Control._op_pause.end(self, _r)

        def resume(self, context=None):
            return _M_jderobot.Control._op_resume.invoke(self, ((), context))

        def resumeAsync(self, context=None):
            return _M_jderobot.Control._op_resume.invokeAsync(self, ((), context))

        def begin_resume(self, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.Control._op_resume.begin(self, ((), _response, _ex, _sent, context))

        def end_resume(self, _r):
            return _M_jderobot.Control._op_resume.end(self, _r)

        @staticmethod
        def checkedCast(proxy, facetOrContext=None, context=None):
            return _M_jderobot.ControlPrx.ice_checkedCast(proxy, '::jderobot::Control', facetOrContext, context)

        @staticmethod
        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.ControlPrx.ice_uncheckedCast(proxy, facet)

        @staticmethod
        def ice_staticId():
            return '::jderobot::Control'
    _M_jderobot._t_ControlPrx = IcePy.defineProxy('::jderobot::Control', ControlPrx)

    _M_jderobot.ControlPrx = ControlPrx
    del ControlPrx

    _M_jderobot.Control = Ice.createTempClass()
    class Control(Ice.Object):

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::Control')

        def ice_id(self, current=None):
            return '::jderobot::Control'

        @staticmethod
        def ice_staticId():
            return '::jderobot::Control'

        def start(self, current=None):
            raise NotImplementedError("servant method 'start' not implemented")

        def stop(self, current=None):
            raise NotImplementedError("servant method 'stop' not implemented")

        def pause(self, current=None):
            raise NotImplementedError("servant method 'pause' not implemented")

        def resume(self, current=None):
            raise NotImplementedError("servant method 'resume' not implemented")

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_ControlDisp)

        __repr__ = __str__

    _M_jderobot._t_ControlDisp = IcePy.defineClass('::jderobot::Control', Control, (), None, ())
    Control._ice_type = _M_jderobot._t_ControlDisp

    Control._op_start = IcePy.Operation('start', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_int, False, 0), ())
    Control._op_stop = IcePy.Operation('stop', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_int, False, 0), ())
    Control._op_pause = IcePy.Operation('pause', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_int, False, 0), ())
    Control._op_resume = IcePy.Operation('resume', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_int, False, 0), ())

    _M_jderobot.Control = Control
    del Control

# End of module jderobot
