//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `datetime.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __jderobot_datetime_h__
#define __jderobot_datetime_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
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

struct Time
{
    long long int seconds;
    long long int useconds;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const long long int&, const long long int&> ice_tuple() const
    {
        return std::tie(seconds, useconds);
    }
};

using Ice::operator<;
using Ice::operator<=;
using Ice::operator>;
using Ice::operator>=;
using Ice::operator==;
using Ice::operator!=;

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits<::jderobot::Time>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 16;
    static const bool fixedLength = true;
};

template<typename S>
struct StreamReader<::jderobot::Time, S>
{
    static void read(S* istr, ::jderobot::Time& v)
    {
        istr->readAll(v.seconds, v.useconds);
    }
};

}
/// \endcond

#else // C++98 mapping

namespace jderobot
{

struct Time
{
    ::Ice::Long seconds;
    ::Ice::Long useconds;

    bool operator==(const Time& rhs_) const
    {
        if(this == &rhs_)
        {
            return true;
        }
        if(seconds != rhs_.seconds)
        {
            return false;
        }
        if(useconds != rhs_.useconds)
        {
            return false;
        }
        return true;
    }

    bool operator<(const Time& rhs_) const
    {
        if(this == &rhs_)
        {
            return false;
        }
        if(seconds < rhs_.seconds)
        {
            return true;
        }
        else if(rhs_.seconds < seconds)
        {
            return false;
        }
        if(useconds < rhs_.useconds)
        {
            return true;
        }
        else if(rhs_.useconds < useconds)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const Time& rhs_) const
    {
        return !operator==(rhs_);
    }
    bool operator<=(const Time& rhs_) const
    {
        return operator<(rhs_) || operator==(rhs_);
    }
    bool operator>(const Time& rhs_) const
    {
        return !operator<(rhs_) && !operator==(rhs_);
    }
    bool operator>=(const Time& rhs_) const
    {
        return !operator<(rhs_);
    }
};

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::jderobot::Time>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 16;
    static const bool fixedLength = true;
};

template<typename S>
struct StreamWriter< ::jderobot::Time, S>
{
    static void write(S* ostr, const ::jderobot::Time& v)
    {
        ostr->write(v.seconds);
        ostr->write(v.useconds);
    }
};

template<typename S>
struct StreamReader< ::jderobot::Time, S>
{
    static void read(S* istr, ::jderobot::Time& v)
    {
        istr->read(v.seconds);
        istr->read(v.useconds);
    }
};

}
/// \endcond

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
