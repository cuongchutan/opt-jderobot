//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `ir.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __jderobot_ir_h__
#define __jderobot_ir_h__

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

class IRData;
class IR;
class IRPrx;

}

namespace jderobot
{

/**
 * Interface to the Gazebo IR sensor.
 */
class IR : public virtual ::Ice::Object
{
public:

    using ProxyType = IRPrx;

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

    virtual ::std::shared_ptr<IRData> getIRData(const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_getIRData(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&) override;
    /// \endcond
};

}

namespace jderobot
{

class IRData : public ::Ice::ValueHelper<IRData, ::Ice::Value>
{
public:

    virtual ~IRData();

    IRData() = default;

    IRData(const IRData&) = default;
    IRData(IRData&&) = default;
    IRData& operator=(const IRData&) = default;
    IRData& operator=(IRData&&) = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    IRData(int received, const ::jderobot::Time& timeStamp) :
        received(received),
        timeStamp(::std::move(timeStamp))
    {
    }

    /**
     * Obtains a tuple containing all of the value's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const int&, const ::jderobot::Time&> ice_tuple() const
    {
        return std::tie(received, timeStamp);
    }

    /**
     * Obtains the Slice type ID of this value.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    int received;
    ::jderobot::Time timeStamp;
};

/// \cond INTERNAL
static IRData _iceS_IRData_init;
/// \endcond

}

namespace jderobot
{

/**
 * Interface to the Gazebo IR sensor.
 */
class IRPrx : public virtual ::Ice::Proxy<IRPrx, ::Ice::ObjectPrx>
{
public:

    ::std::shared_ptr<IRData> getIRData(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makePromiseOutgoing<::std::shared_ptr<::jderobot::IRData>>(true, this, &IRPrx::_iceI_getIRData, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto getIRDataAsync(const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<::std::shared_ptr<::jderobot::IRData>>>().get_future())
    {
        return _makePromiseOutgoing<::std::shared_ptr<::jderobot::IRData>, P>(false, this, &IRPrx::_iceI_getIRData, context);
    }

    ::std::function<void()>
    getIRDataAsync(::std::function<void(::std::shared_ptr<::jderobot::IRData>)> response,
                   ::std::function<void(::std::exception_ptr)> ex = nullptr,
                   ::std::function<void(bool)> sent = nullptr,
                   const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<::std::shared_ptr<::jderobot::IRData>>(response, ex, sent, this, &jderobot::IRPrx::_iceI_getIRData, context);
    }

    /// \cond INTERNAL
    void _iceI_getIRData(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::std::shared_ptr<::jderobot::IRData>>>&, const ::Ice::Context&);
    /// \endcond

    /**
     * Obtains the Slice type ID of this interface.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:

    /// \cond INTERNAL
    IRPrx() = default;
    friend ::std::shared_ptr<IRPrx> IceInternal::createProxy<IRPrx>();

    virtual ::std::shared_ptr<::Ice::ObjectPrx> _newInstance() const override;
    /// \endcond
};

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamReader<::jderobot::IRData, S>
{
    static void read(S* istr, ::jderobot::IRData& v)
    {
        istr->readAll(v.received, v.timeStamp);
    }
};

}
/// \endcond

/// \cond INTERNAL
namespace jderobot
{

using IRDataPtr = ::std::shared_ptr<IRData>;

using IRPtr = ::std::shared_ptr<IR>;
using IRPrxPtr = ::std::shared_ptr<IRPrx>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace jderobot
{

class IRData;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< IRData>&);
::IceProxy::Ice::Object* upCast(IRData*);
/// \endcond

class IR;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< IR>&);
::IceProxy::Ice::Object* upCast(IR*);
/// \endcond

}

}

namespace jderobot
{

class IRData;
/// \cond INTERNAL
::Ice::Object* upCast(IRData*);
/// \endcond
typedef ::IceInternal::Handle< IRData> IRDataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::IRData> IRDataPrx;
typedef IRDataPrx IRDataPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(IRDataPtr&, const ::Ice::ObjectPtr&);
/// \endcond

class IR;
/// \cond INTERNAL
::Ice::Object* upCast(IR*);
/// \endcond
typedef ::IceInternal::Handle< IR> IRPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::IR> IRPrx;
typedef IRPrx IRPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(IRPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

namespace jderobot
{

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::jderobot::IR::begin_getIRData.
 * Create a wrapper instance by calling ::jderobot::newCallback_IR_getIRData.
 */
class Callback_IR_getIRData_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_IR_getIRData_Base> Callback_IR_getIRDataPtr;

}

namespace IceProxy
{

namespace jderobot
{

class IRData : public virtual ::Ice::Proxy<IRData, ::IceProxy::Ice::Object>
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

class IR : public virtual ::Ice::Proxy<IR, ::IceProxy::Ice::Object>
{
public:

    ::jderobot::IRDataPtr getIRData(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return end_getIRData(_iceI_begin_getIRData(context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_getIRData(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_getIRData(context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getIRData(const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getIRData(::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getIRData(const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getIRData(context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getIRData(const ::jderobot::Callback_IR_getIRDataPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getIRData(::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getIRData(const ::Ice::Context& context, const ::jderobot::Callback_IR_getIRDataPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getIRData(context, cb, cookie);
    }

    ::jderobot::IRDataPtr end_getIRData(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_getIRData(const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

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

class IRData : public virtual ::Ice::Object
{
public:

    typedef IRDataPrx ProxyType;
    typedef IRDataPtr PointerType;

    virtual ~IRData();

    IRData()
    {
    }

    /**
     * One-shot constructor to initialize all data members.
     */
    IRData(::Ice::Int received, const ::jderobot::Time& timeStamp) :
        received(received),
        timeStamp(timeStamp)
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

    ::Ice::Int received;
    ::jderobot::Time timeStamp;
};
/// \cond INTERNAL
static ::Ice::ValueFactoryPtr _iceS_IRData_init = ::jderobot::IRData::ice_factory();
/// \endcond

/// \cond INTERNAL
inline bool operator==(const IRData& lhs, const IRData& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const IRData& lhs, const IRData& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

/**
 * Interface to the Gazebo IR sensor.
 */
class IR : public virtual ::Ice::Object
{
public:

    typedef IRPrx ProxyType;
    typedef IRPtr PointerType;

    virtual ~IR();

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

    virtual IRDataPtr getIRData(const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_getIRData(::IceInternal::Incoming&, const ::Ice::Current&);
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
inline bool operator==(const IR& lhs, const IR& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const IR& lhs, const IR& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamWriter< ::jderobot::IRData, S>
{
    static void write(S* ostr, const ::jderobot::IRData& v)
    {
        ostr->write(v.received);
        ostr->write(v.timeStamp);
    }
};

template<typename S>
struct StreamReader< ::jderobot::IRData, S>
{
    static void read(S* istr, ::jderobot::IRData& v)
    {
        istr->read(v.received);
        istr->read(v.timeStamp);
    }
};

}
/// \endcond

namespace jderobot
{

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::jderobot::IR::begin_getIRData.
 * Create a wrapper instance by calling ::jderobot::newCallback_IR_getIRData.
 */
template<class T>
class CallbackNC_IR_getIRData : public Callback_IR_getIRData_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const IRDataPtr&);

    CallbackNC_IR_getIRData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        IRPrx proxy = IRPrx::uncheckedCast(result->getProxy());
        IRDataPtr ret;
        try
        {
            ret = proxy->end_getIRData(result);
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
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::IR::begin_getIRData.
 */
template<class T> Callback_IR_getIRDataPtr
newCallback_IR_getIRData(const IceUtil::Handle<T>& instance, void (T::*cb)(const IRDataPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_IR_getIRData<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::IR::begin_getIRData.
 */
template<class T> Callback_IR_getIRDataPtr
newCallback_IR_getIRData(T* instance, void (T::*cb)(const IRDataPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_IR_getIRData<T>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::jderobot::IR::begin_getIRData.
 * Create a wrapper instance by calling ::jderobot::newCallback_IR_getIRData.
 */
template<class T, typename CT>
class Callback_IR_getIRData : public Callback_IR_getIRData_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const IRDataPtr&, const CT&);

    Callback_IR_getIRData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        IRPrx proxy = IRPrx::uncheckedCast(result->getProxy());
        IRDataPtr ret;
        try
        {
            ret = proxy->end_getIRData(result);
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
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::IR::begin_getIRData.
 */
template<class T, typename CT> Callback_IR_getIRDataPtr
newCallback_IR_getIRData(const IceUtil::Handle<T>& instance, void (T::*cb)(const IRDataPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_IR_getIRData<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::IR::begin_getIRData.
 */
template<class T, typename CT> Callback_IR_getIRDataPtr
newCallback_IR_getIRData(T* instance, void (T::*cb)(const IRDataPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_IR_getIRData<T, CT>(instance, cb, excb, sentcb);
}

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif