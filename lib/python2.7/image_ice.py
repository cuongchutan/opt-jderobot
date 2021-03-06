# -*- coding: utf-8 -*-
#
# Copyright (c) ZeroC, Inc. All rights reserved.
#
#
# Ice version 3.7.3
#
# <auto-generated>
#
# Generated from file `image.ice'
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

if 'ImageDescription' not in _M_jderobot.__dict__:
    _M_jderobot.ImageDescription = Ice.createTempClass()
    class ImageDescription(Ice.Value):
        """
        Static description of the image source.
        Members:
        width -- < %Image width [pixels]
        height -- < %Image height [pixels]
        size -- < %Image size [bytes]
        format -- < %Image format string
        md5sum -- 
        """
        def __init__(self, width=0, height=0, size=0, format='', md5sum=''):
            self.width = width
            self.height = height
            self.size = size
            self.format = format
            self.md5sum = md5sum

        def ice_id(self):
            return '::jderobot::ImageDescription'

        @staticmethod
        def ice_staticId():
            return '::jderobot::ImageDescription'

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_ImageDescription)

        __repr__ = __str__

    _M_jderobot._t_ImageDescription = IcePy.defineValue('::jderobot::ImageDescription', ImageDescription, -1, (), False, False, None, (
        ('width', (), IcePy._t_int, False, 0),
        ('height', (), IcePy._t_int, False, 0),
        ('size', (), IcePy._t_int, False, 0),
        ('format', (), IcePy._t_string, False, 0),
        ('md5sum', (), IcePy._t_string, False, 0)
    ))
    ImageDescription._ice_type = _M_jderobot._t_ImageDescription

    _M_jderobot.ImageDescription = ImageDescription
    del ImageDescription

if 'ImageData' not in _M_jderobot.__dict__:
    _M_jderobot.ImageData = Ice.createTempClass()
    class ImageData(Ice.Value):
        """
        A single image served as a sequence of bytes
        Members:
        timeStamp -- < TimeStamp of Data
        description -- < ImageDescription of Data, for convienence purposes
        pixelData -- < The image data itself. The structure of this byte sequence depends on the image format and compression.
        """
        def __init__(self, timeStamp=Ice._struct_marker, description=None, pixelData=None):
            if timeStamp is Ice._struct_marker:
                self.timeStamp = _M_jderobot.Time()
            else:
                self.timeStamp = timeStamp
            self.description = description
            self.pixelData = pixelData

        def ice_id(self):
            return '::jderobot::ImageData'

        @staticmethod
        def ice_staticId():
            return '::jderobot::ImageData'

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_ImageData)

        __repr__ = __str__

    _M_jderobot._t_ImageData = IcePy.declareValue('::jderobot::ImageData')

    _M_jderobot._t_ImageData = IcePy.defineValue('::jderobot::ImageData', ImageData, -1, (), False, False, None, (
        ('timeStamp', (), _M_jderobot._t_Time, False, 0),
        ('description', (), _M_jderobot._t_ImageDescription, False, 0),
        ('pixelData', (), _M_jderobot._t_ByteSeq, False, 0)
    ))
    ImageData._ice_type = _M_jderobot._t_ImageData

    _M_jderobot.ImageData = ImageData
    del ImageData

_M_jderobot._t_ImageConsumer = IcePy.defineValue('::jderobot::ImageConsumer', Ice.Value, -1, (), False, True, None, ())

if 'ImageConsumerPrx' not in _M_jderobot.__dict__:
    _M_jderobot.ImageConsumerPrx = Ice.createTempClass()
    class ImageConsumerPrx(Ice.ObjectPrx):

        def report(self, obj, context=None):
            return _M_jderobot.ImageConsumer._op_report.invoke(self, ((obj, ), context))

        def reportAsync(self, obj, context=None):
            return _M_jderobot.ImageConsumer._op_report.invokeAsync(self, ((obj, ), context))

        def begin_report(self, obj, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.ImageConsumer._op_report.begin(self, ((obj, ), _response, _ex, _sent, context))

        def end_report(self, _r):
            return _M_jderobot.ImageConsumer._op_report.end(self, _r)

        @staticmethod
        def checkedCast(proxy, facetOrContext=None, context=None):
            return _M_jderobot.ImageConsumerPrx.ice_checkedCast(proxy, '::jderobot::ImageConsumer', facetOrContext, context)

        @staticmethod
        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.ImageConsumerPrx.ice_uncheckedCast(proxy, facet)

        @staticmethod
        def ice_staticId():
            return '::jderobot::ImageConsumer'
    _M_jderobot._t_ImageConsumerPrx = IcePy.defineProxy('::jderobot::ImageConsumer', ImageConsumerPrx)

    _M_jderobot.ImageConsumerPrx = ImageConsumerPrx
    del ImageConsumerPrx

    _M_jderobot.ImageConsumer = Ice.createTempClass()
    class ImageConsumer(Ice.Object):

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::ImageConsumer')

        def ice_id(self, current=None):
            return '::jderobot::ImageConsumer'

        @staticmethod
        def ice_staticId():
            return '::jderobot::ImageConsumer'

        def report(self, obj, current=None):
            raise NotImplementedError("servant method 'report' not implemented")

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_ImageConsumerDisp)

        __repr__ = __str__

    _M_jderobot._t_ImageConsumerDisp = IcePy.defineClass('::jderobot::ImageConsumer', ImageConsumer, (), None, ())
    ImageConsumer._ice_type = _M_jderobot._t_ImageConsumerDisp

    ImageConsumer._op_report = IcePy.Operation('report', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_jderobot._t_ImageData, False, 0),), (), None, ())

    _M_jderobot.ImageConsumer = ImageConsumer
    del ImageConsumer

if '_t_ImageFormat' not in _M_jderobot.__dict__:
    _M_jderobot._t_ImageFormat = IcePy.defineSequence('::jderobot::ImageFormat', (), IcePy._t_string)

_M_jderobot._t_ImageProvider = IcePy.defineValue('::jderobot::ImageProvider', Ice.Value, -1, (), False, True, None, ())

if 'ImageProviderPrx' not in _M_jderobot.__dict__:
    _M_jderobot.ImageProviderPrx = Ice.createTempClass()
    class ImageProviderPrx(Ice.ObjectPrx):

        """
        Returns the image source description.
        Arguments:
        context -- The request context for the invocation.
        """
        def getImageDescription(self, context=None):
            return _M_jderobot.ImageProvider._op_getImageDescription.invoke(self, ((), context))

        """
        Returns the image source description.
        Arguments:
        context -- The request context for the invocation.
        Returns: A future object for the invocation.
        """
        def getImageDescriptionAsync(self, context=None):
            return _M_jderobot.ImageProvider._op_getImageDescription.invokeAsync(self, ((), context))

        """
        Returns the image source description.
        Arguments:
        _response -- The asynchronous response callback.
        _ex -- The asynchronous exception callback.
        _sent -- The asynchronous sent callback.
        context -- The request context for the invocation.
        Returns: An asynchronous result object for the invocation.
        """
        def begin_getImageDescription(self, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.ImageProvider._op_getImageDescription.begin(self, ((), _response, _ex, _sent, context))

        """
        Returns the image source description.
        Arguments:
        """
        def end_getImageDescription(self, _r):
            return _M_jderobot.ImageProvider._op_getImageDescription.end(self, _r)

        def getImageFormat(self, context=None):
            return _M_jderobot.ImageProvider._op_getImageFormat.invoke(self, ((), context))

        def getImageFormatAsync(self, context=None):
            return _M_jderobot.ImageProvider._op_getImageFormat.invokeAsync(self, ((), context))

        def begin_getImageFormat(self, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.ImageProvider._op_getImageFormat.begin(self, ((), _response, _ex, _sent, context))

        def end_getImageFormat(self, _r):
            return _M_jderobot.ImageProvider._op_getImageFormat.end(self, _r)

        """
        Returns the latest data.
        Arguments:
        format -- 
        context -- The request context for the invocation.
        """
        def getImageData(self, format, context=None):
            return _M_jderobot.ImageProvider._op_getImageData.invoke(self, ((format, ), context))

        """
        Returns the latest data.
        Arguments:
        format -- 
        context -- The request context for the invocation.
        Returns: A future object for the invocation.
        """
        def getImageDataAsync(self, format, context=None):
            return _M_jderobot.ImageProvider._op_getImageData.invokeAsync(self, ((format, ), context))

        """
        Returns the latest data.
        Arguments:
        format -- 
        _response -- The asynchronous response callback.
        _ex -- The asynchronous exception callback.
        _sent -- The asynchronous sent callback.
        context -- The request context for the invocation.
        Returns: An asynchronous result object for the invocation.
        """
        def begin_getImageData(self, format, _response=None, _ex=None, _sent=None, context=None):
            return _M_jderobot.ImageProvider._op_getImageData.begin(self, ((format, ), _response, _ex, _sent, context))

        """
        Returns the latest data.
        Arguments:
        format -- 
        """
        def end_getImageData(self, _r):
            return _M_jderobot.ImageProvider._op_getImageData.end(self, _r)

        @staticmethod
        def checkedCast(proxy, facetOrContext=None, context=None):
            return _M_jderobot.ImageProviderPrx.ice_checkedCast(proxy, '::jderobot::ImageProvider', facetOrContext, context)

        @staticmethod
        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.ImageProviderPrx.ice_uncheckedCast(proxy, facet)

        @staticmethod
        def ice_staticId():
            return '::jderobot::ImageProvider'
    _M_jderobot._t_ImageProviderPrx = IcePy.defineProxy('::jderobot::ImageProvider', ImageProviderPrx)

    _M_jderobot.ImageProviderPrx = ImageProviderPrx
    del ImageProviderPrx

    _M_jderobot.ImageProvider = Ice.createTempClass()
    class ImageProvider(Ice.Object):

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::ImageProvider')

        def ice_id(self, current=None):
            return '::jderobot::ImageProvider'

        @staticmethod
        def ice_staticId():
            return '::jderobot::ImageProvider'

        def getImageDescription(self, current=None):
            """
            Returns the image source description.
            Arguments:
            current -- The Current object for the invocation.
            Returns: A future object for the invocation.
            """
            raise NotImplementedError("servant method 'getImageDescription' not implemented")

        def getImageFormat(self, current=None):
            raise NotImplementedError("servant method 'getImageFormat' not implemented")

        def getImageData(self, format, current=None):
            """
            Returns the latest data.
            Arguments:
            format -- 
            current -- The Current object for the invocation.
            Returns: A future object for the invocation.
            """
            raise NotImplementedError("servant method 'getImageData' not implemented")

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_ImageProviderDisp)

        __repr__ = __str__

    _M_jderobot._t_ImageProviderDisp = IcePy.defineClass('::jderobot::ImageProvider', ImageProvider, (), None, ())
    ImageProvider._ice_type = _M_jderobot._t_ImageProviderDisp

    ImageProvider._op_getImageDescription = IcePy.Operation('getImageDescription', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, None, (), (), (), ((), _M_jderobot._t_ImageDescription, False, 0), ())
    ImageProvider._op_getImageFormat = IcePy.Operation('getImageFormat', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, False, None, (), (), (), ((), _M_jderobot._t_ImageFormat, False, 0), ())
    ImageProvider._op_getImageData = IcePy.Operation('getImageData', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, None, (), (((), IcePy._t_string, False, 0),), (), ((), _M_jderobot._t_ImageData, False, 0), (_M_jderobot._t_DataNotExistException, _M_jderobot._t_HardwareFailedException))

    _M_jderobot.ImageProvider = ImageProvider
    del ImageProvider

# End of module jderobot