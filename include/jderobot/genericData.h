//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `genericData.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __jderobot_genericData_h__
#define __jderobot_genericData_h__

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

class GenericData;
class genericDataProvider;
class genericDataProviderPrx;

}

namespace jderobot
{

class genericDataProvider : public virtual ::Ice::Object
{
public:

    using ProxyType = genericDataProviderPrx;

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

    /**
     * Returns the generic data class
     * @param current The Current object for the invocation.
     */
    virtual ::std::shared_ptr<GenericData> getGenericData(const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_getGenericData(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&) override;
    /// \endcond
};

}

namespace jderobot
{

/**
 * Static description of the image source.
 */
class GenericData : public ::Ice::ValueHelper<GenericData, ::Ice::Value>
{
public:

    virtual ~GenericData();

    GenericData() = default;

    GenericData(const GenericData&) = default;
    GenericData(GenericData&&) = default;
    GenericData& operator=(const GenericData&) = default;
    GenericData& operator=(GenericData&&) = default;

    /**
     * One-shot constructor to initialize all data members.
     * @param name < %The name of the file
     * @param format < % The format of the file
     * @param data < % The file data itself
     */
    GenericData(const ::std::string& name, const ::std::string& format, const ::jderobot::ByteSeq& data) :
        name(::std::move(name)),
        format(::std::move(format)),
        data(::std::move(data))
    {
    }

    /**
     * Obtains a tuple containing all of the value's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&, const ::std::string&, const ::jderobot::ByteSeq&> ice_tuple() const
    {
        return std::tie(name, format, data);
    }

    /**
     * Obtains the Slice type ID of this value.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    /**
     * < %The name of the file
     */
    ::std::string name;
    /**
     * < % The format of the file
     */
    ::std::string format;
    /**
     * < % The file data itself
     */
    ::jderobot::ByteSeq data;
};

/// \cond INTERNAL
static GenericData _iceS_GenericData_init;
/// \endcond

}

namespace jderobot
{

class genericDataProviderPrx : public virtual ::Ice::Proxy<genericDataProviderPrx, ::Ice::ObjectPrx>
{
public:

    /**
     * Returns the generic data class
     * @param context The Context map to send with the invocation.
     */
    ::std::shared_ptr<GenericData> getGenericData(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makePromiseOutgoing<::std::shared_ptr<::jderobot::GenericData>>(true, this, &genericDataProviderPrx::_iceI_getGenericData, context).get();
    }

    /**
     * Returns the generic data class
     * @param context The Context map to send with the invocation.
     * @return The future object for the invocation.
     */
    template<template<typename> class P = ::std::promise>
    auto getGenericDataAsync(const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<::std::shared_ptr<::jderobot::GenericData>>>().get_future())
    {
        return _makePromiseOutgoing<::std::shared_ptr<::jderobot::GenericData>, P>(false, this, &genericDataProviderPrx::_iceI_getGenericData, context);
    }

    /**
     * Returns the generic data class
     * @param response The response callback.
     * @param ex The exception callback.
     * @param sent The sent callback.
     * @param context The Context map to send with the invocation.
     * @return A function that can be called to cancel the invocation locally.
     */
    ::std::function<void()>
    getGenericDataAsync(::std::function<void(::std::shared_ptr<::jderobot::GenericData>)> response,
                        ::std::function<void(::std::exception_ptr)> ex = nullptr,
                        ::std::function<void(bool)> sent = nullptr,
                        const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<::std::shared_ptr<::jderobot::GenericData>>(response, ex, sent, this, &jderobot::genericDataProviderPrx::_iceI_getGenericData, context);
    }

    /// \cond INTERNAL
    void _iceI_getGenericData(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::std::shared_ptr<::jderobot::GenericData>>>&, const ::Ice::Context&);
    /// \endcond

    /**
     * Obtains the Slice type ID of this interface.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:

    /// \cond INTERNAL
    genericDataProviderPrx() = default;
    friend ::std::shared_ptr<genericDataProviderPrx> IceInternal::createProxy<genericDataProviderPrx>();

    virtual ::std::shared_ptr<::Ice::ObjectPrx> _newInstance() const override;
    /// \endcond
};

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamReader<::jderobot::GenericData, S>
{
    static void read(S* istr, ::jderobot::GenericData& v)
    {
        istr->readAll(v.name, v.format, v.data);
    }
};

}
/// \endcond

/// \cond INTERNAL
namespace jderobot
{

using GenericDataPtr = ::std::shared_ptr<GenericData>;

using genericDataProviderPtr = ::std::shared_ptr<genericDataProvider>;
using genericDataProviderPrxPtr = ::std::shared_ptr<genericDataProviderPrx>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace jderobot
{

class GenericData;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< GenericData>&);
::IceProxy::Ice::Object* upCast(GenericData*);
/// \endcond

class genericDataProvider;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< genericDataProvider>&);
::IceProxy::Ice::Object* upCast(genericDataProvider*);
/// \endcond

}

}

namespace jderobot
{

class GenericData;
/// \cond INTERNAL
::Ice::Object* upCast(GenericData*);
/// \endcond
typedef ::IceInternal::Handle< GenericData> GenericDataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::GenericData> GenericDataPrx;
typedef GenericDataPrx GenericDataPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(GenericDataPtr&, const ::Ice::ObjectPtr&);
/// \endcond

class genericDataProvider;
/// \cond INTERNAL
::Ice::Object* upCast(genericDataProvider*);
/// \endcond
typedef ::IceInternal::Handle< genericDataProvider> genericDataProviderPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::genericDataProvider> genericDataProviderPrx;
typedef genericDataProviderPrx genericDataProviderPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(genericDataProviderPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

namespace jderobot
{

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::jderobot::genericDataProvider::begin_getGenericData.
 * Create a wrapper instance by calling ::jderobot::newCallback_genericDataProvider_getGenericData.
 */
class Callback_genericDataProvider_getGenericData_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_genericDataProvider_getGenericData_Base> Callback_genericDataProvider_getGenericDataPtr;

}

namespace IceProxy
{

namespace jderobot
{

class GenericData : public virtual ::Ice::Proxy<GenericData, ::IceProxy::Ice::Object>
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

class genericDataProvider : public virtual ::Ice::Proxy<genericDataProvider, ::IceProxy::Ice::Object>
{
public:

    /**
     * Returns the generic data class
     * @param context The Context map to send with the invocation.
     */
    ::jderobot::GenericDataPtr getGenericData(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return end_getGenericData(_iceI_begin_getGenericData(context, ::IceInternal::dummyCallback, 0, true));
    }

    /**
     * Returns the generic data class
     * @param context The Context map to send with the invocation.
     * @return The asynchronous result object for the invocation.
     */
    ::Ice::AsyncResultPtr begin_getGenericData(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_getGenericData(context, ::IceInternal::dummyCallback, 0);
    }

    /**
     * Returns the generic data class
     * @param cb Asynchronous callback object.
     * @param cookie User-defined data to associate with the invocation.
     * @return The asynchronous result object for the invocation.
     */
    ::Ice::AsyncResultPtr begin_getGenericData(const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getGenericData(::Ice::noExplicitContext, cb, cookie);
    }

    /**
     * Returns the generic data class
     * @param context The Context map to send with the invocation.
     * @param cb Asynchronous callback object.
     * @param cookie User-defined data to associate with the invocation.
     * @return The asynchronous result object for the invocation.
     */
    ::Ice::AsyncResultPtr begin_getGenericData(const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getGenericData(context, cb, cookie);
    }

    /**
     * Returns the generic data class
     * @param cb Asynchronous callback object.
     * @param cookie User-defined data to associate with the invocation.
     * @return The asynchronous result object for the invocation.
     */
    ::Ice::AsyncResultPtr begin_getGenericData(const ::jderobot::Callback_genericDataProvider_getGenericDataPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getGenericData(::Ice::noExplicitContext, cb, cookie);
    }

    /**
     * Returns the generic data class
     * @param context The Context map to send with the invocation.
     * @param cb Asynchronous callback object.
     * @param cookie User-defined data to associate with the invocation.
     * @return The asynchronous result object for the invocation.
     */
    ::Ice::AsyncResultPtr begin_getGenericData(const ::Ice::Context& context, const ::jderobot::Callback_genericDataProvider_getGenericDataPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getGenericData(context, cb, cookie);
    }

    /**
     * Completes an invocation of begin_getGenericData.
     * @param result The asynchronous result object for the invocation.
     */
    ::jderobot::GenericDataPtr end_getGenericData(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_getGenericData(const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

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
 * Static description of the image source.
 */
class GenericData : public virtual ::Ice::Object
{
public:

    typedef GenericDataPrx ProxyType;
    typedef GenericDataPtr PointerType;

    virtual ~GenericData();

    GenericData()
    {
    }

    /**
     * One-shot constructor to initialize all data members.
     * @param name < %The name of the file
     * @param format < % The format of the file
     * @param data < % The file data itself
     */
    GenericData(const ::std::string& name, const ::std::string& format, const ::jderobot::ByteSeq& data) :
        name(name),
        format(format),
        data(data)
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

    /**
     * < %The name of the file
     */
    ::std::string name;
    /**
     * < % The format of the file
     */
    ::std::string format;
    /**
     * < % The file data itself
     */
    ::jderobot::ByteSeq data;
};
/// \cond INTERNAL
static ::Ice::ValueFactoryPtr _iceS_GenericData_init = ::jderobot::GenericData::ice_factory();
/// \endcond

/// \cond INTERNAL
inline bool operator==(const GenericData& lhs, const GenericData& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const GenericData& lhs, const GenericData& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

class genericDataProvider : public virtual ::Ice::Object
{
public:

    typedef genericDataProviderPrx ProxyType;
    typedef genericDataProviderPtr PointerType;

    virtual ~genericDataProvider();

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
     * Returns the generic data class
     * @param current The Current object for the invocation.
     */
    virtual GenericDataPtr getGenericData(const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_getGenericData(::IceInternal::Incoming&, const ::Ice::Current&);
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
inline bool operator==(const genericDataProvider& lhs, const genericDataProvider& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const genericDataProvider& lhs, const genericDataProvider& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamWriter< ::jderobot::GenericData, S>
{
    static void write(S* ostr, const ::jderobot::GenericData& v)
    {
        ostr->write(v.name);
        ostr->write(v.format);
        ostr->write(v.data);
    }
};

template<typename S>
struct StreamReader< ::jderobot::GenericData, S>
{
    static void read(S* istr, ::jderobot::GenericData& v)
    {
        istr->read(v.name);
        istr->read(v.format);
        istr->read(v.data);
    }
};

}
/// \endcond

namespace jderobot
{

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::jderobot::genericDataProvider::begin_getGenericData.
 * Create a wrapper instance by calling ::jderobot::newCallback_genericDataProvider_getGenericData.
 */
template<class T>
class CallbackNC_genericDataProvider_getGenericData : public Callback_genericDataProvider_getGenericData_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const GenericDataPtr&);

    CallbackNC_genericDataProvider_getGenericData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        genericDataProviderPrx proxy = genericDataProviderPrx::uncheckedCast(result->getProxy());
        GenericDataPtr ret;
        try
        {
            ret = proxy->end_getGenericData(result);
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
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::genericDataProvider::begin_getGenericData.
 */
template<class T> Callback_genericDataProvider_getGenericDataPtr
newCallback_genericDataProvider_getGenericData(const IceUtil::Handle<T>& instance, void (T::*cb)(const GenericDataPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_genericDataProvider_getGenericData<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::genericDataProvider::begin_getGenericData.
 */
template<class T> Callback_genericDataProvider_getGenericDataPtr
newCallback_genericDataProvider_getGenericData(T* instance, void (T::*cb)(const GenericDataPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_genericDataProvider_getGenericData<T>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::jderobot::genericDataProvider::begin_getGenericData.
 * Create a wrapper instance by calling ::jderobot::newCallback_genericDataProvider_getGenericData.
 */
template<class T, typename CT>
class Callback_genericDataProvider_getGenericData : public Callback_genericDataProvider_getGenericData_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const GenericDataPtr&, const CT&);

    Callback_genericDataProvider_getGenericData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        genericDataProviderPrx proxy = genericDataProviderPrx::uncheckedCast(result->getProxy());
        GenericDataPtr ret;
        try
        {
            ret = proxy->end_getGenericData(result);
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
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::genericDataProvider::begin_getGenericData.
 */
template<class T, typename CT> Callback_genericDataProvider_getGenericDataPtr
newCallback_genericDataProvider_getGenericData(const IceUtil::Handle<T>& instance, void (T::*cb)(const GenericDataPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_genericDataProvider_getGenericData<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::genericDataProvider::begin_getGenericData.
 */
template<class T, typename CT> Callback_genericDataProvider_getGenericDataPtr
newCallback_genericDataProvider_getGenericData(T* instance, void (T::*cb)(const GenericDataPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_genericDataProvider_getGenericData<T, CT>(instance, cb, excb, sentcb);
}

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
