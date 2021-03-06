//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `ptmotors.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __jderobot_ptmotors_h__
#define __jderobot_ptmotors_h__

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

class PTMotorsData;
class PTMotorsParams;
class PTMotors;
class PTMotorsPrx;

}

namespace jderobot
{

/**
 * Interface to the PTMotors Actuators interaction.
 */
class PTMotors : public virtual ::Ice::Object
{
public:

    using ProxyType = PTMotorsPrx;

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

    virtual int setPTMotorsData(::std::shared_ptr<PTMotorsData> data, const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_setPTMotorsData(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    virtual ::std::shared_ptr<PTMotorsParams> getPTMotorsParams(const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_getPTMotorsParams(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&) override;
    /// \endcond
};

}

namespace jderobot
{

/**
 * PTMotorsData a class that contains the pantilt data
 */
class PTMotorsData : public ::Ice::ValueHelper<PTMotorsData, ::Ice::Value>
{
public:

    virtual ~PTMotorsData();

    PTMotorsData() = default;

    PTMotorsData(const PTMotorsData&) = default;
    PTMotorsData(PTMotorsData&&) = default;
    PTMotorsData& operator=(const PTMotorsData&) = default;
    PTMotorsData& operator=(PTMotorsData&&) = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    PTMotorsData(float pan, float panSpeed, float tilt, float tiltSpeed, long long int timeStamp) :
        pan(pan),
        panSpeed(panSpeed),
        tilt(tilt),
        tiltSpeed(tiltSpeed),
        timeStamp(timeStamp)
    {
    }

    /**
     * Obtains a tuple containing all of the value's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const float&, const float&, const float&, const float&, const long long int&> ice_tuple() const
    {
        return std::tie(pan, panSpeed, tilt, tiltSpeed, timeStamp);
    }

    /**
     * Obtains the Slice type ID of this value.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    float pan;
    float panSpeed;
    float tilt;
    float tiltSpeed;
    long long int timeStamp;
};

/// \cond INTERNAL
static PTMotorsData _iceS_PTMotorsData_init;
/// \endcond

/**
 * PTMotorsParams a class that contains the motors parametres.
 */
class PTMotorsParams : public ::Ice::ValueHelper<PTMotorsParams, ::Ice::Value>
{
public:

    virtual ~PTMotorsParams();

    PTMotorsParams() = default;

    PTMotorsParams(const PTMotorsParams&) = default;
    PTMotorsParams(PTMotorsParams&&) = default;
    PTMotorsParams& operator=(const PTMotorsParams&) = default;
    PTMotorsParams& operator=(PTMotorsParams&&) = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    PTMotorsParams(float maxPan, float minPan, float maxTilt, float minTilt, float maxPanSpeed, float maxTiltSpeed) :
        maxPan(maxPan),
        minPan(minPan),
        maxTilt(maxTilt),
        minTilt(minTilt),
        maxPanSpeed(maxPanSpeed),
        maxTiltSpeed(maxTiltSpeed)
    {
    }

    /**
     * Obtains a tuple containing all of the value's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const float&, const float&, const float&, const float&, const float&, const float&> ice_tuple() const
    {
        return std::tie(maxPan, minPan, maxTilt, minTilt, maxPanSpeed, maxTiltSpeed);
    }

    /**
     * Obtains the Slice type ID of this value.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    float maxPan;
    float minPan;
    float maxTilt;
    float minTilt;
    float maxPanSpeed;
    float maxTiltSpeed;
};

}

namespace jderobot
{

/**
 * Interface to the PTMotors Actuators interaction.
 */
class PTMotorsPrx : public virtual ::Ice::Proxy<PTMotorsPrx, ::Ice::ObjectPrx>
{
public:

    int setPTMotorsData(const ::std::shared_ptr<PTMotorsData>& data, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makePromiseOutgoing<int>(true, this, &PTMotorsPrx::_iceI_setPTMotorsData, data, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto setPTMotorsDataAsync(const ::std::shared_ptr<PTMotorsData>& data, const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<int>>().get_future())
    {
        return _makePromiseOutgoing<int, P>(false, this, &PTMotorsPrx::_iceI_setPTMotorsData, data, context);
    }

    ::std::function<void()>
    setPTMotorsDataAsync(const ::std::shared_ptr<PTMotorsData>& data,
                         ::std::function<void(int)> response,
                         ::std::function<void(::std::exception_ptr)> ex = nullptr,
                         ::std::function<void(bool)> sent = nullptr,
                         const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<int>(response, ex, sent, this, &jderobot::PTMotorsPrx::_iceI_setPTMotorsData, data, context);
    }

    /// \cond INTERNAL
    void _iceI_setPTMotorsData(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<int>>&, const ::std::shared_ptr<PTMotorsData>&, const ::Ice::Context&);
    /// \endcond

    ::std::shared_ptr<PTMotorsParams> getPTMotorsParams(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makePromiseOutgoing<::std::shared_ptr<::jderobot::PTMotorsParams>>(true, this, &PTMotorsPrx::_iceI_getPTMotorsParams, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto getPTMotorsParamsAsync(const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<::std::shared_ptr<::jderobot::PTMotorsParams>>>().get_future())
    {
        return _makePromiseOutgoing<::std::shared_ptr<::jderobot::PTMotorsParams>, P>(false, this, &PTMotorsPrx::_iceI_getPTMotorsParams, context);
    }

    ::std::function<void()>
    getPTMotorsParamsAsync(::std::function<void(::std::shared_ptr<::jderobot::PTMotorsParams>)> response,
                           ::std::function<void(::std::exception_ptr)> ex = nullptr,
                           ::std::function<void(bool)> sent = nullptr,
                           const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<::std::shared_ptr<::jderobot::PTMotorsParams>>(response, ex, sent, this, &jderobot::PTMotorsPrx::_iceI_getPTMotorsParams, context);
    }

    /// \cond INTERNAL
    void _iceI_getPTMotorsParams(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::std::shared_ptr<::jderobot::PTMotorsParams>>>&, const ::Ice::Context&);
    /// \endcond

    /**
     * Obtains the Slice type ID of this interface.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:

    /// \cond INTERNAL
    PTMotorsPrx() = default;
    friend ::std::shared_ptr<PTMotorsPrx> IceInternal::createProxy<PTMotorsPrx>();

    virtual ::std::shared_ptr<::Ice::ObjectPrx> _newInstance() const override;
    /// \endcond
};

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamReader<::jderobot::PTMotorsData, S>
{
    static void read(S* istr, ::jderobot::PTMotorsData& v)
    {
        istr->readAll(v.pan, v.panSpeed, v.tilt, v.tiltSpeed, v.timeStamp);
    }
};

template<typename S>
struct StreamReader<::jderobot::PTMotorsParams, S>
{
    static void read(S* istr, ::jderobot::PTMotorsParams& v)
    {
        istr->readAll(v.maxPan, v.minPan, v.maxTilt, v.minTilt, v.maxPanSpeed, v.maxTiltSpeed);
    }
};

}
/// \endcond

/// \cond INTERNAL
namespace jderobot
{

using PTMotorsDataPtr = ::std::shared_ptr<PTMotorsData>;

using PTMotorsParamsPtr = ::std::shared_ptr<PTMotorsParams>;

using PTMotorsPtr = ::std::shared_ptr<PTMotors>;
using PTMotorsPrxPtr = ::std::shared_ptr<PTMotorsPrx>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace jderobot
{

class PTMotorsData;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< PTMotorsData>&);
::IceProxy::Ice::Object* upCast(PTMotorsData*);
/// \endcond

class PTMotorsParams;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< PTMotorsParams>&);
::IceProxy::Ice::Object* upCast(PTMotorsParams*);
/// \endcond

class PTMotors;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< PTMotors>&);
::IceProxy::Ice::Object* upCast(PTMotors*);
/// \endcond

}

}

namespace jderobot
{

class PTMotorsData;
/// \cond INTERNAL
::Ice::Object* upCast(PTMotorsData*);
/// \endcond
typedef ::IceInternal::Handle< PTMotorsData> PTMotorsDataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::PTMotorsData> PTMotorsDataPrx;
typedef PTMotorsDataPrx PTMotorsDataPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(PTMotorsDataPtr&, const ::Ice::ObjectPtr&);
/// \endcond

class PTMotorsParams;
/// \cond INTERNAL
::Ice::Object* upCast(PTMotorsParams*);
/// \endcond
typedef ::IceInternal::Handle< PTMotorsParams> PTMotorsParamsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::PTMotorsParams> PTMotorsParamsPrx;
typedef PTMotorsParamsPrx PTMotorsParamsPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(PTMotorsParamsPtr&, const ::Ice::ObjectPtr&);
/// \endcond

class PTMotors;
/// \cond INTERNAL
::Ice::Object* upCast(PTMotors*);
/// \endcond
typedef ::IceInternal::Handle< PTMotors> PTMotorsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::PTMotors> PTMotorsPrx;
typedef PTMotorsPrx PTMotorsPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(PTMotorsPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

namespace jderobot
{

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::jderobot::PTMotors::begin_setPTMotorsData.
 * Create a wrapper instance by calling ::jderobot::newCallback_PTMotors_setPTMotorsData.
 */
class Callback_PTMotors_setPTMotorsData_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_PTMotors_setPTMotorsData_Base> Callback_PTMotors_setPTMotorsDataPtr;

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::jderobot::PTMotors::begin_getPTMotorsParams.
 * Create a wrapper instance by calling ::jderobot::newCallback_PTMotors_getPTMotorsParams.
 */
class Callback_PTMotors_getPTMotorsParams_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_PTMotors_getPTMotorsParams_Base> Callback_PTMotors_getPTMotorsParamsPtr;

}

namespace IceProxy
{

namespace jderobot
{

class PTMotorsData : public virtual ::Ice::Proxy<PTMotorsData, ::IceProxy::Ice::Object>
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

class PTMotorsParams : public virtual ::Ice::Proxy<PTMotorsParams, ::IceProxy::Ice::Object>
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

class PTMotors : public virtual ::Ice::Proxy<PTMotors, ::IceProxy::Ice::Object>
{
public:

    ::Ice::Int setPTMotorsData(const ::jderobot::PTMotorsDataPtr& data, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return end_setPTMotorsData(_iceI_begin_setPTMotorsData(data, context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_setPTMotorsData(const ::jderobot::PTMotorsDataPtr& data, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_setPTMotorsData(data, context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setPTMotorsData(const ::jderobot::PTMotorsDataPtr& data, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_setPTMotorsData(data, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_setPTMotorsData(const ::jderobot::PTMotorsDataPtr& data, const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_setPTMotorsData(data, context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_setPTMotorsData(const ::jderobot::PTMotorsDataPtr& data, const ::jderobot::Callback_PTMotors_setPTMotorsDataPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_setPTMotorsData(data, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_setPTMotorsData(const ::jderobot::PTMotorsDataPtr& data, const ::Ice::Context& context, const ::jderobot::Callback_PTMotors_setPTMotorsDataPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_setPTMotorsData(data, context, cb, cookie);
    }

    ::Ice::Int end_setPTMotorsData(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_setPTMotorsData(const ::jderobot::PTMotorsDataPtr&, const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

public:

    ::jderobot::PTMotorsParamsPtr getPTMotorsParams(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return end_getPTMotorsParams(_iceI_begin_getPTMotorsParams(context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_getPTMotorsParams(const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_getPTMotorsParams(context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getPTMotorsParams(const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getPTMotorsParams(::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getPTMotorsParams(const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getPTMotorsParams(context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getPTMotorsParams(const ::jderobot::Callback_PTMotors_getPTMotorsParamsPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getPTMotorsParams(::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_getPTMotorsParams(const ::Ice::Context& context, const ::jderobot::Callback_PTMotors_getPTMotorsParamsPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_getPTMotorsParams(context, cb, cookie);
    }

    ::jderobot::PTMotorsParamsPtr end_getPTMotorsParams(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_getPTMotorsParams(const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

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
 * PTMotorsData a class that contains the pantilt data
 */
class PTMotorsData : public virtual ::Ice::Object
{
public:

    typedef PTMotorsDataPrx ProxyType;
    typedef PTMotorsDataPtr PointerType;

    virtual ~PTMotorsData();

    PTMotorsData()
    {
    }

    /**
     * One-shot constructor to initialize all data members.
     */
    PTMotorsData(::Ice::Float pan, ::Ice::Float panSpeed, ::Ice::Float tilt, ::Ice::Float tiltSpeed, ::Ice::Long timeStamp) :
        pan(pan),
        panSpeed(panSpeed),
        tilt(tilt),
        tiltSpeed(tiltSpeed),
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

    ::Ice::Float pan;
    ::Ice::Float panSpeed;
    ::Ice::Float tilt;
    ::Ice::Float tiltSpeed;
    ::Ice::Long timeStamp;
};
/// \cond INTERNAL
static ::Ice::ValueFactoryPtr _iceS_PTMotorsData_init = ::jderobot::PTMotorsData::ice_factory();
/// \endcond

/// \cond INTERNAL
inline bool operator==(const PTMotorsData& lhs, const PTMotorsData& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const PTMotorsData& lhs, const PTMotorsData& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

/**
 * PTMotorsParams a class that contains the motors parametres.
 */
class PTMotorsParams : public virtual ::Ice::Object
{
public:

    typedef PTMotorsParamsPrx ProxyType;
    typedef PTMotorsParamsPtr PointerType;

    virtual ~PTMotorsParams();

    PTMotorsParams()
    {
    }

    /**
     * One-shot constructor to initialize all data members.
     */
    PTMotorsParams(::Ice::Float maxPan, ::Ice::Float minPan, ::Ice::Float maxTilt, ::Ice::Float minTilt, ::Ice::Float maxPanSpeed, ::Ice::Float maxTiltSpeed) :
        maxPan(maxPan),
        minPan(minPan),
        maxTilt(maxTilt),
        minTilt(minTilt),
        maxPanSpeed(maxPanSpeed),
        maxTiltSpeed(maxTiltSpeed)
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

    ::Ice::Float maxPan;
    ::Ice::Float minPan;
    ::Ice::Float maxTilt;
    ::Ice::Float minTilt;
    ::Ice::Float maxPanSpeed;
    ::Ice::Float maxTiltSpeed;
};
/// \cond INTERNAL
static ::Ice::ValueFactoryPtr _iceS_PTMotorsParams_init = ::jderobot::PTMotorsParams::ice_factory();
/// \endcond

/// \cond INTERNAL
inline bool operator==(const PTMotorsParams& lhs, const PTMotorsParams& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const PTMotorsParams& lhs, const PTMotorsParams& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

/**
 * Interface to the PTMotors Actuators interaction.
 */
class PTMotors : public virtual ::Ice::Object
{
public:

    typedef PTMotorsPrx ProxyType;
    typedef PTMotorsPtr PointerType;

    virtual ~PTMotors();

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

    virtual ::Ice::Int setPTMotorsData(const PTMotorsDataPtr& data, const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_setPTMotorsData(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    virtual PTMotorsParamsPtr getPTMotorsParams(const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_getPTMotorsParams(::IceInternal::Incoming&, const ::Ice::Current&);
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
inline bool operator==(const PTMotors& lhs, const PTMotors& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const PTMotors& lhs, const PTMotors& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamWriter< ::jderobot::PTMotorsData, S>
{
    static void write(S* ostr, const ::jderobot::PTMotorsData& v)
    {
        ostr->write(v.pan);
        ostr->write(v.panSpeed);
        ostr->write(v.tilt);
        ostr->write(v.tiltSpeed);
        ostr->write(v.timeStamp);
    }
};

template<typename S>
struct StreamReader< ::jderobot::PTMotorsData, S>
{
    static void read(S* istr, ::jderobot::PTMotorsData& v)
    {
        istr->read(v.pan);
        istr->read(v.panSpeed);
        istr->read(v.tilt);
        istr->read(v.tiltSpeed);
        istr->read(v.timeStamp);
    }
};

template<typename S>
struct StreamWriter< ::jderobot::PTMotorsParams, S>
{
    static void write(S* ostr, const ::jderobot::PTMotorsParams& v)
    {
        ostr->write(v.maxPan);
        ostr->write(v.minPan);
        ostr->write(v.maxTilt);
        ostr->write(v.minTilt);
        ostr->write(v.maxPanSpeed);
        ostr->write(v.maxTiltSpeed);
    }
};

template<typename S>
struct StreamReader< ::jderobot::PTMotorsParams, S>
{
    static void read(S* istr, ::jderobot::PTMotorsParams& v)
    {
        istr->read(v.maxPan);
        istr->read(v.minPan);
        istr->read(v.maxTilt);
        istr->read(v.minTilt);
        istr->read(v.maxPanSpeed);
        istr->read(v.maxTiltSpeed);
    }
};

}
/// \endcond

namespace jderobot
{

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::jderobot::PTMotors::begin_setPTMotorsData.
 * Create a wrapper instance by calling ::jderobot::newCallback_PTMotors_setPTMotorsData.
 */
template<class T>
class CallbackNC_PTMotors_setPTMotorsData : public Callback_PTMotors_setPTMotorsData_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(::Ice::Int);

    CallbackNC_PTMotors_setPTMotorsData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        PTMotorsPrx proxy = PTMotorsPrx::uncheckedCast(result->getProxy());
        ::Ice::Int ret;
        try
        {
            ret = proxy->end_setPTMotorsData(result);
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
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTMotors::begin_setPTMotorsData.
 */
template<class T> Callback_PTMotors_setPTMotorsDataPtr
newCallback_PTMotors_setPTMotorsData(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PTMotors_setPTMotorsData<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTMotors::begin_setPTMotorsData.
 */
template<class T> Callback_PTMotors_setPTMotorsDataPtr
newCallback_PTMotors_setPTMotorsData(T* instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PTMotors_setPTMotorsData<T>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::jderobot::PTMotors::begin_setPTMotorsData.
 * Create a wrapper instance by calling ::jderobot::newCallback_PTMotors_setPTMotorsData.
 */
template<class T, typename CT>
class Callback_PTMotors_setPTMotorsData : public Callback_PTMotors_setPTMotorsData_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(::Ice::Int, const CT&);

    Callback_PTMotors_setPTMotorsData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        PTMotorsPrx proxy = PTMotorsPrx::uncheckedCast(result->getProxy());
        ::Ice::Int ret;
        try
        {
            ret = proxy->end_setPTMotorsData(result);
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
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTMotors::begin_setPTMotorsData.
 */
template<class T, typename CT> Callback_PTMotors_setPTMotorsDataPtr
newCallback_PTMotors_setPTMotorsData(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PTMotors_setPTMotorsData<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTMotors::begin_setPTMotorsData.
 */
template<class T, typename CT> Callback_PTMotors_setPTMotorsDataPtr
newCallback_PTMotors_setPTMotorsData(T* instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PTMotors_setPTMotorsData<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::jderobot::PTMotors::begin_getPTMotorsParams.
 * Create a wrapper instance by calling ::jderobot::newCallback_PTMotors_getPTMotorsParams.
 */
template<class T>
class CallbackNC_PTMotors_getPTMotorsParams : public Callback_PTMotors_getPTMotorsParams_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const PTMotorsParamsPtr&);

    CallbackNC_PTMotors_getPTMotorsParams(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        PTMotorsPrx proxy = PTMotorsPrx::uncheckedCast(result->getProxy());
        PTMotorsParamsPtr ret;
        try
        {
            ret = proxy->end_getPTMotorsParams(result);
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
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTMotors::begin_getPTMotorsParams.
 */
template<class T> Callback_PTMotors_getPTMotorsParamsPtr
newCallback_PTMotors_getPTMotorsParams(const IceUtil::Handle<T>& instance, void (T::*cb)(const PTMotorsParamsPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PTMotors_getPTMotorsParams<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTMotors::begin_getPTMotorsParams.
 */
template<class T> Callback_PTMotors_getPTMotorsParamsPtr
newCallback_PTMotors_getPTMotorsParams(T* instance, void (T::*cb)(const PTMotorsParamsPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PTMotors_getPTMotorsParams<T>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::jderobot::PTMotors::begin_getPTMotorsParams.
 * Create a wrapper instance by calling ::jderobot::newCallback_PTMotors_getPTMotorsParams.
 */
template<class T, typename CT>
class Callback_PTMotors_getPTMotorsParams : public Callback_PTMotors_getPTMotorsParams_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const PTMotorsParamsPtr&, const CT&);

    Callback_PTMotors_getPTMotorsParams(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        PTMotorsPrx proxy = PTMotorsPrx::uncheckedCast(result->getProxy());
        PTMotorsParamsPtr ret;
        try
        {
            ret = proxy->end_getPTMotorsParams(result);
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
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTMotors::begin_getPTMotorsParams.
 */
template<class T, typename CT> Callback_PTMotors_getPTMotorsParamsPtr
newCallback_PTMotors_getPTMotorsParams(const IceUtil::Handle<T>& instance, void (T::*cb)(const PTMotorsParamsPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PTMotors_getPTMotorsParams<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::jderobot::PTMotors::begin_getPTMotorsParams.
 */
template<class T, typename CT> Callback_PTMotors_getPTMotorsParamsPtr
newCallback_PTMotors_getPTMotorsParams(T* instance, void (T::*cb)(const PTMotorsParamsPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PTMotors_getPTMotorsParams<T, CT>(instance, cb, excb, sentcb);
}

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif