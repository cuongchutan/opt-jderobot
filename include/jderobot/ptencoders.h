//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `ptencoders.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __jderobot_ptencoders_h__
#define __jderobot_ptencoders_h__

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
#include <Ice/ExceptionHelpers.h>
#include <jderobot/common.h>
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

class PTEncodersData;
class PTEncoders;
class PTEncodersPrx;

}

namespace jderobot
{

/**
 * Interface to the ptencoders sensor.
 */
class PTEncoders : public virtual ::Ice::Object
{
public:

    using ProxyType = PTEncodersPrx;

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

    virtual ::std::shared_ptr<PTEncodersData> getPTEncodersData(const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_getPTEncodersData(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&) override;
    /// \endcond
};

}

namespace jderobot
{

/**
 * ptencoders dat information
 */
class PTEncodersData : public ::Ice::ValueHelper<PTEncodersData, ::Ice::Value>
{
public:

    virtual ~PTEncodersData();

    PTEncodersData() = default;

    PTEncodersData(const PTEncodersData&) = default;
    PTEncodersData(PTEncodersData&&) = default;
    PTEncodersData& operator=(const PTEncodersData&) = default;
    PTEncodersData& operator=(PTEncodersData&&) = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    PTEncodersData(float panAngle, float tiltAngle, int clock) :
        panAngle(panAngle),
        tiltAngle(tiltAngle),
        clock(clock)
    {
    }

    /**
     * Obtains a tuple containing all of the value's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const float&, const float&, const int&> ice_tuple() const
    {
        return std::tie(panAngle, tiltAngle, clock);
    }

    /**
     * Obtains the Slice type ID of this value.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    float panAngle;
    float tiltAngle;
    int clock;
};

/// \cond INTERNAL
static PTEncodersData _iceS_PTEncodersData_init;
/// \endcond

}

namespace jderobot
{

/**
 * Interface to the ptencoders sensor.
 */
class PTEncodersPrx : public virtual ::Ice::Proxy<PTEncodersPrx, ::Ice::ObjectPrx>
{
public:

    ::std::shared_ptr<PTEncodersData> getPTEncodersData(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makePromiseOutgoing<::std::shared_ptr<::jderobot::PTEncodersData>>(true, this, &PTEncodersPrx::_iceI_getPTEncodersData, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto getPTEncodersDataAsync(const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<::std::shared_ptr<::jderobot::PTEncodersData>>>().get_future())
    {
        return _makePromiseOutgoing<::std::shared_ptr<::jderobot::PTEncodersData>, P>(false, this, &PTEncodersPrx::_iceI_getPTEncodersData, context);
    }

    ::std::function<void()>
    getPTEncodersDataAsync(::std::function<void(::std::shared_ptr<::jderobot::PTEncodersData>)> response,
                           ::std::function<void(::std::exception_ptr)> ex = nullptr,
                           ::std::function<void(bool)> sent = nullptr,
                           const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<::std::shared_ptr<::jderobot::PTEncodersData>>(response, ex, sent, this, &jderobot::PTEncodersPrx::_iceI_getPTEncodersData, context);
    }

    /// \cond INTERNAL
    void _iceI_getPTEncodersData(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::std::shared_ptr<::jderobot::PTEncodersData>>>&, const ::Ice::Context&);
    /// \endcond

    /**
     * Obtains the Slice type ID of this interface.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:

    /// \cond INTERNAL
    PTEncodersPrx() = default;
    friend ::std::shared_ptr<PTEncodersPrx> IceInternal::createProxy<PTEncodersPrx>();

    virtual ::std::shared_ptr<::Ice::ObjectPrx> _newInstance() const override;
    /// \endcond
};

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamReader<::jderobot::PTEncodersData, S>
{
    static void read(S* istr, ::jderobot::PTEncodersData& v)
    {
        istr->readAll(v.panAngle, v.tiltAngle, v.clock);
    }
};

}
/// \endcond

/// \cond INTERNAL
namespace jderobot
{

using PTEncodersDataPtr = ::std::shared_ptr<PTEncodersData>;

using PTEncodersPtr = ::std::shared_ptr<PTEncoders>;
using PTEncodersPrxPtr = ::std::shared_ptr<PTEncodersPrx>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace jderobot
{

class PTEncodersData;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< PTEncodersData>&);
::IceProxy::Ice::Object* upCast(PTEncodersData*);
/// \endcond

class PTEncoders;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< PTEncoders>&);
::IceProxy::Ice::Object* upCast(PTEncoders*);
/// \endcond

}

}

namespace jderobot
{

class PTEncodersData;
/// \cond INTERNAL
::Ice::Object* upCast(PTEncodersData*);
/// \endcond
typedef ::IceInternal::Handle< PTEncodersData> PTEncodersDataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::PTEncodersData> PTEncodersDataPrx;
typedef PTEncodersDataPrx PTEncodersDataPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(PTEncodersDataPtr&, const ::Ice::ObjectPtr&);
/// \endcond

class PTEncoders;
/// \cond INTERNAL
::Ice::Object* upCast(PTEncoders*);
/// \endcond
typedef ::IceInternal::Handle< PTEncoders> PTEncodersPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::PTEncoders> PTEncodersPrx;
typedef PTEncodersPrx PTEncodersPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(PTEncodersPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

namespace jderobot
{

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::jderobot::PTEncoders::begin_getPTEncodersData.
 * Create a wrapper instance by calling ::jderobot::newCallback_PTEncoders_getPTEncodersData.
 */
class Callback_PTEncoders_getPTEncodersData_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_PTEncoders_getPTEncodersData_Base> Callback_PTEncoders_getPTEncodersDataPtr;

}

namespace IceProxy
{

namespace jderobot
{

class PTEncodersData : public virtual ::Ice::Proxy<PTEncodersData, ::IceProxy::Ice::Object>
{
public:

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:
    /// \cond INTERNAL

    virtual ::IceProxy::Ice::Object* _newInstance() const;
    /// \endcond
};

class PTEncoders : public virtual ::Ice::Proxy<PTEncoders, ::IceProxy::Ice::Object>
{
public:

    ::jderobot::PTEncodersDataPtr getPTEncodersData(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return end_getPTEncodersData(_iceI_begin_getPTEncodersData(context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_getPTEncodersData(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_getPTEncodersData(context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getPTEncodersData(const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getPTEncodersData(::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getPTEncodersData(const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getPTEncodersData(context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getPTEncodersData(const ::jderobot::Callback_PTEncoders_getPTEncodersDataPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getPTEncodersData(::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getPTEncodersData(const ::Ice::Context& context, const ::jderobot::Callback_PTEncoders_getPTEncodersDataPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getPTEncodersData(context, cb, cookie);
    }

    ::jderobot::PTEncodersDataPtr end_getPTEncodersData(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_getPTEncodersData(const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

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
 * ptencoders dat information
 */
class PTEncodersData : public virtual ::Ice::Object
{
public:

    typedef PTEncodersDataPrx ProxyType;
    typedef PTEncodersDataPtr PointerType;

    virtual ~PTEncodersData();

    PTEncodersData()
    {
    }

    /**
     * One-shot constructor to initialize all data members.
     */
    PTEncodersData(::Ice::Float panAngle, ::Ice::Float tiltAngle, ::Ice::Int clock) :
        panAngle(panAngle),
        tiltAngle(tiltAngle),
        clock(clock)
    {
    }

    /**
     * Polymporphically clones this object.
     * @return A shallow copy of this object.
     */
    virtual ::Ice::ObjectPtr ice_clone() const;

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

    /**
     * Obtains a value factory that instantiates this class.
     * @return The value factory.
     */
    static ::Ice::ValueFactoryPtr ice_factory();

protected:

    /// \cond STREAM
    virtual void _iceWriteImpl(::Ice::OutputStream*) const;
    virtual void _iceReadImpl(::Ice::InputStream*);
    /// \endcond

public:

    ::Ice::Float panAngle;
    ::Ice::Float tiltAngle;
    ::Ice::Int clock;
};
/// \cond INTERNAL
static ::Ice::ValueFactoryPtr _iceS_PTEncodersData_init = ::jderobot::PTEncodersData::ice_factory();
/// \endcond

/// \cond INTERNAL
inline bool operator==(const PTEncodersData& lhs, const PTEncodersData& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const PTEncodersData& lhs, const PTEncodersData& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

/**
 * Interface to the ptencoders sensor.
 */
class PTEncoders : public virtual ::Ice::Object
{
public:

    typedef PTEncodersPrx ProxyType;
    typedef PTEncodersPtr PointerType;

    virtual ~PTEncoders();

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

    virtual PTEncodersDataPtr getPTEncodersData(const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_getPTEncodersData(::IceInternal::Incoming&, const ::Ice::Current&);
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
inline bool operator==(const PTEncoders& lhs, const PTEncoders& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const PTEncoders& lhs, const PTEncoders& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamWriter< ::jderobot::PTEncodersData, S>
{
    static void write(S* ostr, const ::jderobot::PTEncodersData& v)
    {
        ostr->write(v.panAngle);
        ostr->write(v.tiltAngle);
        ostr->write(v.clock);
    }
};

template<typename S>
struct StreamReader< ::jderobot::PTEncodersData, S>
{
    static void read(S* istr, ::jderobot::PTEncodersData& v)
    {
        istr->read(v.panAngle);
        istr->read(v.tiltAngle);
        istr->read(v.clock);
    }
};

}
/// \endcond

namespace jderobot
{

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::jderobot::PTEncoders::begin_getPTEncodersData.
 * Create a wrapper instance by calling ::jderobot::newCallback_PTEncoders_getPTEncodersData.
 */
template<class T>
class CallbackNC_PTEncoders_getPTEncodersData : public Callback_PTEncoders_getPTEncodersData_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const PTEncodersDataPtr&);

    CallbackNC_PTEncoders_getPTEncodersData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        PTEncodersPrx proxy = PTEncodersPrx::uncheckedCast(result->getProxy());
        PTEncodersDataPtr ret;
        try
        {
            ret = proxy->end_getPTEncodersData(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::CallbackNC<T>::_callback.get()->*_response)(ret);
        }
    }
    /// \endcond

private:

    Response _response;
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTEncoders::begin_getPTEncodersData.
 */
template<class T> Callback_PTEncoders_getPTEncodersDataPtr
newCallback_PTEncoders_getPTEncodersData(const IceUtil::Handle<T>& instance, void (T::*cb)(const PTEncodersDataPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PTEncoders_getPTEncodersData<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTEncoders::begin_getPTEncodersData.
 */
template<class T> Callback_PTEncoders_getPTEncodersDataPtr
newCallback_PTEncoders_getPTEncodersData(T* instance, void (T::*cb)(const PTEncodersDataPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PTEncoders_getPTEncodersData<T>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::jderobot::PTEncoders::begin_getPTEncodersData.
 * Create a wrapper instance by calling ::jderobot::newCallback_PTEncoders_getPTEncodersData.
 */
template<class T, typename CT>
class Callback_PTEncoders_getPTEncodersData : public Callback_PTEncoders_getPTEncodersData_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const PTEncodersDataPtr&, const CT&);

    Callback_PTEncoders_getPTEncodersData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        PTEncodersPrx proxy = PTEncodersPrx::uncheckedCast(result->getProxy());
        PTEncodersDataPtr ret;
        try
        {
            ret = proxy->end_getPTEncodersData(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::Callback<T, CT>::_callback.get()->*_response)(ret, CT::dynamicCast(result->getCookie()));
        }
    }
    /// \endcond

private:

    Response _response;
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTEncoders::begin_getPTEncodersData.
 */
template<class T, typename CT> Callback_PTEncoders_getPTEncodersDataPtr
newCallback_PTEncoders_getPTEncodersData(const IceUtil::Handle<T>& instance, void (T::*cb)(const PTEncodersDataPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PTEncoders_getPTEncodersData<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTEncoders::begin_getPTEncodersData.
 */
template<class T, typename CT> Callback_PTEncoders_getPTEncodersDataPtr
newCallback_PTEncoders_getPTEncodersData(T* instance, void (T::*cb)(const PTEncodersDataPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PTEncoders_getPTEncodersData<T, CT>(instance, cb, excb, sentcb);
}

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif