//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `exceptions.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __jderobot_exceptions_h__
#define __jderobot_exceptions_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/Optional.h>
#include <Ice/ExceptionHelpers.h>
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

class JderobotException : public ::Ice::UserExceptionHelper<JderobotException, ::Ice::UserException>
{
public:

    virtual ~JderobotException();

    JderobotException(const JderobotException&) = default;

    JderobotException() = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    JderobotException(const ::std::string& what) :
        what(::std::move(what))
    {
    }

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&> ice_tuple() const
    {
        return std::tie(what);
    }

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    ::std::string what;
};

/// \cond INTERNAL
static JderobotException _iceS_JderobotException_init;
/// \endcond

class ConfigurationNotExistException : public ::Ice::UserExceptionHelper<ConfigurationNotExistException, JderobotException>
{
public:

    virtual ~ConfigurationNotExistException();

    ConfigurationNotExistException(const ConfigurationNotExistException&) = default;

    ConfigurationNotExistException() = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    ConfigurationNotExistException(const ::std::string& what) :
        ::Ice::UserExceptionHelper<ConfigurationNotExistException, JderobotException>(::std::move(what))
    {
    }

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&> ice_tuple() const
    {
        return std::tie(what);
    }

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();
};

class DataNotExistException : public ::Ice::UserExceptionHelper<DataNotExistException, JderobotException>
{
public:

    virtual ~DataNotExistException();

    DataNotExistException(const DataNotExistException&) = default;

    DataNotExistException() = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    DataNotExistException(const ::std::string& what) :
        ::Ice::UserExceptionHelper<DataNotExistException, JderobotException>(::std::move(what))
    {
    }

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&> ice_tuple() const
    {
        return std::tie(what);
    }

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();
};

class HardwareFailedException : public ::Ice::UserExceptionHelper<HardwareFailedException, JderobotException>
{
public:

    virtual ~HardwareFailedException();

    HardwareFailedException(const HardwareFailedException&) = default;

    HardwareFailedException() = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    HardwareFailedException(const ::std::string& what) :
        ::Ice::UserExceptionHelper<HardwareFailedException, JderobotException>(::std::move(what))
    {
    }

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&> ice_tuple() const
    {
        return std::tie(what);
    }

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();
};

class NoTopicException : public ::Ice::UserExceptionHelper<NoTopicException, JderobotException>
{
public:

    virtual ~NoTopicException();

    NoTopicException(const NoTopicException&) = default;

    NoTopicException() = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    NoTopicException(const ::std::string& what) :
        ::Ice::UserExceptionHelper<NoTopicException, JderobotException>(::std::move(what))
    {
    }

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&> ice_tuple() const
    {
        return std::tie(what);
    }

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();
};

class SubscriptionFailedException : public ::Ice::UserExceptionHelper<SubscriptionFailedException, JderobotException>
{
public:

    virtual ~SubscriptionFailedException();

    SubscriptionFailedException(const SubscriptionFailedException&) = default;

    SubscriptionFailedException() = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    SubscriptionFailedException(const ::std::string& what) :
        ::Ice::UserExceptionHelper<SubscriptionFailedException, JderobotException>(::std::move(what))
    {
    }

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&> ice_tuple() const
    {
        return std::tie(what);
    }

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();
};

class SubscriptionPushFailedException : public ::Ice::UserExceptionHelper<SubscriptionPushFailedException, JderobotException>
{
public:

    virtual ~SubscriptionPushFailedException();

    SubscriptionPushFailedException(const SubscriptionPushFailedException&) = default;

    SubscriptionPushFailedException() = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    SubscriptionPushFailedException(const ::std::string& what) :
        ::Ice::UserExceptionHelper<SubscriptionPushFailedException, JderobotException>(::std::move(what))
    {
    }

    /**
     * Obtains a tuple containing all of the exception's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&> ice_tuple() const
    {
        return std::tie(what);
    }

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();
};

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamReader<::jderobot::JderobotException, S>
{
    static void read(S* istr, ::jderobot::JderobotException& v)
    {
        istr->readAll(v.what);
    }
};

template<typename S>
struct StreamWriter<::jderobot::ConfigurationNotExistException, S>
{
    static void write(S*, const ::jderobot::ConfigurationNotExistException&)
    {
    }
};

template<typename S>
struct StreamReader<::jderobot::ConfigurationNotExistException, S>
{
    static void read(S*, ::jderobot::ConfigurationNotExistException&)
    {
    }
};

template<typename S>
struct StreamWriter<::jderobot::DataNotExistException, S>
{
    static void write(S*, const ::jderobot::DataNotExistException&)
    {
    }
};

template<typename S>
struct StreamReader<::jderobot::DataNotExistException, S>
{
    static void read(S*, ::jderobot::DataNotExistException&)
    {
    }
};

template<typename S>
struct StreamWriter<::jderobot::HardwareFailedException, S>
{
    static void write(S*, const ::jderobot::HardwareFailedException&)
    {
    }
};

template<typename S>
struct StreamReader<::jderobot::HardwareFailedException, S>
{
    static void read(S*, ::jderobot::HardwareFailedException&)
    {
    }
};

template<typename S>
struct StreamWriter<::jderobot::NoTopicException, S>
{
    static void write(S*, const ::jderobot::NoTopicException&)
    {
    }
};

template<typename S>
struct StreamReader<::jderobot::NoTopicException, S>
{
    static void read(S*, ::jderobot::NoTopicException&)
    {
    }
};

template<typename S>
struct StreamWriter<::jderobot::SubscriptionFailedException, S>
{
    static void write(S*, const ::jderobot::SubscriptionFailedException&)
    {
    }
};

template<typename S>
struct StreamReader<::jderobot::SubscriptionFailedException, S>
{
    static void read(S*, ::jderobot::SubscriptionFailedException&)
    {
    }
};

template<typename S>
struct StreamWriter<::jderobot::SubscriptionPushFailedException, S>
{
    static void write(S*, const ::jderobot::SubscriptionPushFailedException&)
    {
    }
};

template<typename S>
struct StreamReader<::jderobot::SubscriptionPushFailedException, S>
{
    static void read(S*, ::jderobot::SubscriptionPushFailedException&)
    {
    }
};

}
/// \endcond

#else // C++98 mapping

namespace jderobot
{

class JderobotException : public ::Ice::UserException
{
public:

    JderobotException() {}
    /**
     * One-shot constructor to initialize all data members.
     */
    explicit JderobotException(const ::std::string& what);
    virtual ~JderobotException() throw();

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    virtual ::std::string ice_id() const;
    /**
     * Polymporphically clones this exception.
     * @return A shallow copy of this exception.
     */
    virtual JderobotException* ice_clone() const;
    /**
     * Throws this exception.
     */
    virtual void ice_throw() const;

    ::std::string what;

protected:

    /// \cond STREAM
    virtual void _writeImpl(::Ice::OutputStream*) const;
    virtual void _readImpl(::Ice::InputStream*);
    /// \endcond
};

/// \cond INTERNAL
static JderobotException _iceS_JderobotException_init;
/// \endcond

class ConfigurationNotExistException : public JderobotException
{
public:

    ConfigurationNotExistException() {}
    /**
     * One-shot constructor to initialize all data members.
     */
    explicit ConfigurationNotExistException(const ::std::string& what);
    virtual ~ConfigurationNotExistException() throw();

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    virtual ::std::string ice_id() const;
    /**
     * Polymporphically clones this exception.
     * @return A shallow copy of this exception.
     */
    virtual ConfigurationNotExistException* ice_clone() const;
    /**
     * Throws this exception.
     */
    virtual void ice_throw() const;

protected:

    /// \cond STREAM
    virtual void _writeImpl(::Ice::OutputStream*) const;
    virtual void _readImpl(::Ice::InputStream*);
    /// \endcond
};

class DataNotExistException : public JderobotException
{
public:

    DataNotExistException() {}
    /**
     * One-shot constructor to initialize all data members.
     */
    explicit DataNotExistException(const ::std::string& what);
    virtual ~DataNotExistException() throw();

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    virtual ::std::string ice_id() const;
    /**
     * Polymporphically clones this exception.
     * @return A shallow copy of this exception.
     */
    virtual DataNotExistException* ice_clone() const;
    /**
     * Throws this exception.
     */
    virtual void ice_throw() const;

protected:

    /// \cond STREAM
    virtual void _writeImpl(::Ice::OutputStream*) const;
    virtual void _readImpl(::Ice::InputStream*);
    /// \endcond
};

class HardwareFailedException : public JderobotException
{
public:

    HardwareFailedException() {}
    /**
     * One-shot constructor to initialize all data members.
     */
    explicit HardwareFailedException(const ::std::string& what);
    virtual ~HardwareFailedException() throw();

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    virtual ::std::string ice_id() const;
    /**
     * Polymporphically clones this exception.
     * @return A shallow copy of this exception.
     */
    virtual HardwareFailedException* ice_clone() const;
    /**
     * Throws this exception.
     */
    virtual void ice_throw() const;

protected:

    /// \cond STREAM
    virtual void _writeImpl(::Ice::OutputStream*) const;
    virtual void _readImpl(::Ice::InputStream*);
    /// \endcond
};

class NoTopicException : public JderobotException
{
public:

    NoTopicException() {}
    /**
     * One-shot constructor to initialize all data members.
     */
    explicit NoTopicException(const ::std::string& what);
    virtual ~NoTopicException() throw();

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    virtual ::std::string ice_id() const;
    /**
     * Polymporphically clones this exception.
     * @return A shallow copy of this exception.
     */
    virtual NoTopicException* ice_clone() const;
    /**
     * Throws this exception.
     */
    virtual void ice_throw() const;

protected:

    /// \cond STREAM
    virtual void _writeImpl(::Ice::OutputStream*) const;
    virtual void _readImpl(::Ice::InputStream*);
    /// \endcond
};

class SubscriptionFailedException : public JderobotException
{
public:

    SubscriptionFailedException() {}
    /**
     * One-shot constructor to initialize all data members.
     */
    explicit SubscriptionFailedException(const ::std::string& what);
    virtual ~SubscriptionFailedException() throw();

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    virtual ::std::string ice_id() const;
    /**
     * Polymporphically clones this exception.
     * @return A shallow copy of this exception.
     */
    virtual SubscriptionFailedException* ice_clone() const;
    /**
     * Throws this exception.
     */
    virtual void ice_throw() const;

protected:

    /// \cond STREAM
    virtual void _writeImpl(::Ice::OutputStream*) const;
    virtual void _readImpl(::Ice::InputStream*);
    /// \endcond
};

class SubscriptionPushFailedException : public JderobotException
{
public:

    SubscriptionPushFailedException() {}
    /**
     * One-shot constructor to initialize all data members.
     */
    explicit SubscriptionPushFailedException(const ::std::string& what);
    virtual ~SubscriptionPushFailedException() throw();

    /**
     * Obtains the Slice type ID of this exception.
     * @return The fully-scoped type ID.
     */
    virtual ::std::string ice_id() const;
    /**
     * Polymporphically clones this exception.
     * @return A shallow copy of this exception.
     */
    virtual SubscriptionPushFailedException* ice_clone() const;
    /**
     * Throws this exception.
     */
    virtual void ice_throw() const;

protected:

    /// \cond STREAM
    virtual void _writeImpl(::Ice::OutputStream*) const;
    virtual void _readImpl(::Ice::InputStream*);
    /// \endcond
};

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::jderobot::JderobotException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<typename S>
struct StreamWriter< ::jderobot::JderobotException, S>
{
    static void write(S* ostr, const ::jderobot::JderobotException& v)
    {
        ostr->write(v.what);
    }
};

template<typename S>
struct StreamReader< ::jderobot::JderobotException, S>
{
    static void read(S* istr, ::jderobot::JderobotException& v)
    {
        istr->read(v.what);
    }
};

template<>
struct StreamableTraits< ::jderobot::ConfigurationNotExistException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::DataNotExistException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::HardwareFailedException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::NoTopicException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::SubscriptionFailedException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::SubscriptionPushFailedException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

}
/// \endcond

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif