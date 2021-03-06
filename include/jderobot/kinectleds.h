//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `kinectleds.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __jderobot_kinectleds_h__
#define __jderobot_kinectleds_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/GCObject.h>
#include <Ice/Value.h>
#include <Ice/Incoming.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/Optional.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 >= 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 3
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace jderobot
{

class KinectLeds;
class KinectLedsPrx;

}

namespace jderobot
{

enum class KinectLedsAvailable : unsigned char
{
    OFF,
    GREEN,
    RED,
    YELLOW,
    BLINKGREEN,
    BLINKYELLOW,
    BLINKRED
};

}

namespace jderobot
{

/**
 * Interface to the Kinect LEDS.
 */
class KinectLeds : public virtual ::Ice::Object
{
public:

    using ProxyType = KinectLedsPrx;

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(::std::string id, const ::Ice::Current& current) const override;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector<::std::string> ice_ids(const ::Ice::Current& current) const override;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual ::std::string ice_id(const ::Ice::Current& current) const override;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    virtual void setLedActive(KinectLedsAvailable led, const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_setLedActive(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&) override;
    /// \endcond
};

}

namespace jderobot
{

/**
 * Interface to the Kinect LEDS.
 */
class KinectLedsPrx : public virtual ::Ice::Proxy<KinectLedsPrx, ::Ice::ObjectPrx>
{
public:

    void setLedActive(KinectLedsAvailable led, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        _makePromiseOutgoing<void>(true, this, &KinectLedsPrx::_iceI_setLedActive, led, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto setLedActiveAsync(KinectLedsAvailable led, const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<void>>().get_future())
    {
        return _makePromiseOutgoing<void, P>(false, this, &KinectLedsPrx::_iceI_setLedActive, led, context);
    }

    ::std::function<void()>
    setLedActiveAsync(KinectLedsAvailable led,
                      ::std::function<void()> response,
                      ::std::function<void(::std::exception_ptr)> ex = nullptr,
                      ::std::function<void(bool)> sent = nullptr,
                      const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<void>(response, ex, sent, this, &jderobot::KinectLedsPrx::_iceI_setLedActive, led, context);
    }

    /// \cond INTERNAL
    void _iceI_setLedActive(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>&, KinectLedsAvailable, const ::Ice::Context&);
    /// \endcond

    /**
     * Obtains the Slice type ID of this interface.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:

    /// \cond INTERNAL
    KinectLedsPrx() = default;
    friend ::std::shared_ptr<KinectLedsPrx> IceInternal::createProxy<KinectLedsPrx>();

    virtual ::std::shared_ptr<::Ice::ObjectPrx> _newInstance() const override;
    /// \endcond
};

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::jderobot::KinectLedsAvailable>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 6;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

}
/// \endcond

/// \cond INTERNAL
namespace jderobot
{

using KinectLedsPtr = ::std::shared_ptr<KinectLeds>;
using KinectLedsPrxPtr = ::std::shared_ptr<KinectLedsPrx>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace jderobot
{

class KinectLeds;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< KinectLeds>&);
::IceProxy::Ice::Object* upCast(KinectLeds*);
/// \endcond

}

}

namespace jderobot
{

class KinectLeds;
/// \cond INTERNAL
::Ice::Object* upCast(KinectLeds*);
/// \endcond
typedef ::IceInternal::Handle< KinectLeds> KinectLedsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::KinectLeds> KinectLedsPrx;
typedef KinectLedsPrx KinectLedsPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(KinectLedsPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

namespace jderobot
{

enum KinectLedsAvailable
{
    OFF,
    GREEN,
    RED,
    YELLOW,
    BLINKGREEN,
    BLINKYELLOW,
    BLINKRED
};

}

namespace jderobot
{

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::jderobot::KinectLeds::begin_setLedActive.
 * Create a wrapper instance by calling ::jderobot::newCallback_KinectLeds_setLedActive.
 */
class Callback_KinectLeds_setLedActive_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_KinectLeds_setLedActive_Base> Callback_KinectLeds_setLedActivePtr;

}

namespace IceProxy
{

namespace jderobot
{

class KinectLeds : public virtual ::Ice::Proxy<KinectLeds, ::IceProxy::Ice::Object>
{
public:

    void setLedActive(::jderobot::KinectLedsAvailable led, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        end_setLedActive(_iceI_begin_setLedActive(led, context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_setLedActive(::jderobot::KinectLedsAvailable led, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_setLedActive(led, context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setLedActive(::jderobot::KinectLedsAvailable led, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_setLedActive(led, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_setLedActive(::jderobot::KinectLedsAvailable led, const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_setLedActive(led, context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_setLedActive(::jderobot::KinectLedsAvailable led, const ::jderobot::Callback_KinectLeds_setLedActivePtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_setLedActive(led, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_setLedActive(::jderobot::KinectLedsAvailable led, const ::Ice::Context& context, const ::jderobot::Callback_KinectLeds_setLedActivePtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_setLedActive(led, context, cb, cookie);
    }

    void end_setLedActive(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_setLedActive(::jderobot::KinectLedsAvailable, const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

public:

    /**
     * Obtains the Slice type ID corresponding to this interface.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:
    /// \cond INTERNAL

    virtual ::IceProxy::Ice::Object* _newInstance() const;
    /// \endcond
};

}

}

namespace jderobot
{

/**
 * Interface to the Kinect LEDS.
 */
class KinectLeds : public virtual ::Ice::Object
{
public:

    typedef KinectLedsPrx ProxyType;
    typedef KinectLedsPtr PointerType;

    virtual ~KinectLeds();

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(const ::std::string& id, const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual const ::std::string& ice_id(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    virtual void setLedActive(KinectLedsAvailable led, const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_setLedActive(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

protected:

    /// \cond STREAM
    virtual void _iceWriteImpl(::Ice::OutputStream*) const;
    virtual void _iceReadImpl(::Ice::InputStream*);
    /// \endcond
};

/// \cond INTERNAL
inline bool operator==(const KinectLeds& lhs, const KinectLeds& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const KinectLeds& lhs, const KinectLeds& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::jderobot::KinectLedsAvailable>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 6;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

}
/// \endcond

namespace jderobot
{

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::jderobot::KinectLeds::begin_setLedActive.
 * Create a wrapper instance by calling ::jderobot::newCallback_KinectLeds_setLedActive.
 */
template<class T>
class CallbackNC_KinectLeds_setLedActive : public Callback_KinectLeds_setLedActive_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_KinectLeds_setLedActive(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::KinectLeds::begin_setLedActive.
 */
template<class T> Callback_KinectLeds_setLedActivePtr
newCallback_KinectLeds_setLedActive(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_KinectLeds_setLedActive<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::KinectLeds::begin_setLedActive.
 */
template<class T> Callback_KinectLeds_setLedActivePtr
newCallback_KinectLeds_setLedActive(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_KinectLeds_setLedActive<T>(instance, 0, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::KinectLeds::begin_setLedActive.
 */
template<class T> Callback_KinectLeds_setLedActivePtr
newCallback_KinectLeds_setLedActive(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_KinectLeds_setLedActive<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::KinectLeds::begin_setLedActive.
 */
template<class T> Callback_KinectLeds_setLedActivePtr
newCallback_KinectLeds_setLedActive(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_KinectLeds_setLedActive<T>(instance, 0, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::jderobot::KinectLeds::begin_setLedActive.
 * Create a wrapper instance by calling ::jderobot::newCallback_KinectLeds_setLedActive.
 */
template<class T, typename CT>
class Callback_KinectLeds_setLedActive : public Callback_KinectLeds_setLedActive_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_KinectLeds_setLedActive(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::KinectLeds::begin_setLedActive.
 */
template<class T, typename CT> Callback_KinectLeds_setLedActivePtr
newCallback_KinectLeds_setLedActive(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_KinectLeds_setLedActive<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::KinectLeds::begin_setLedActive.
 */
template<class T, typename CT> Callback_KinectLeds_setLedActivePtr
newCallback_KinectLeds_setLedActive(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_KinectLeds_setLedActive<T, CT>(instance, 0, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::KinectLeds::begin_setLedActive.
 */
template<class T, typename CT> Callback_KinectLeds_setLedActivePtr
newCallback_KinectLeds_setLedActive(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_KinectLeds_setLedActive<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::KinectLeds::begin_setLedActive.
 */
template<class T, typename CT> Callback_KinectLeds_setLedActivePtr
newCallback_KinectLeds_setLedActive(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_KinectLeds_setLedActive<T, CT>(instance, 0, excb, sentcb);
}

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
