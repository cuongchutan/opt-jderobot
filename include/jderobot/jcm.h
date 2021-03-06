//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `jcm.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __jderobot_jcm_h__
#define __jderobot_jcm_h__

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

struct FQExecutableName
{
    ::std::string executable;
    ::std::string host;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&, const ::std::string&> ice_tuple() const
    {
        return std::tie(executable, host);
    }
};

struct FQComponentName
{
    ::std::string platform;
    ::std::string component;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&, const ::std::string&> ice_tuple() const
    {
        return std::tie(platform, component);
    }
};

struct FQInterfaceName
{
    ::std::string platform;
    ::std::string component;
    ::std::string iface;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&, const ::std::string&, const ::std::string&> ice_tuple() const
    {
        return std::tie(platform, component, iface);
    }
};

struct FQTopicName
{
    ::std::string platform;
    ::std::string component;
    ::std::string iface;
    ::std::string topic;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&> ice_tuple() const
    {
        return std::tie(platform, component, iface, topic);
    }
};

struct ProvidedInterface
{
    ::std::string name;
    ::std::string id;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&, const ::std::string&> ice_tuple() const
    {
        return std::tie(name, id);
    }
};

struct RequiredInterface
{
    ::jderobot::FQInterfaceName name;
    ::std::string id;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::jderobot::FQInterfaceName&, const ::std::string&> ice_tuple() const
    {
        return std::tie(name, id);
    }
};

using ProvidesInterfaces = ::std::vector<ProvidedInterface>;

using RequiresInterfaces = ::std::vector<RequiredInterface>;

struct ComponentData
{
    ::jderobot::FQComponentName name;
    ::jderobot::ProvidesInterfaces provides;
    ::jderobot::RequiresInterfaces requires;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::jderobot::FQComponentName&, const ::jderobot::ProvidesInterfaces&, const ::jderobot::RequiresInterfaces&> ice_tuple() const
    {
        return std::tie(name, provides, requires);
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
struct StreamableTraits<::jderobot::FQExecutableName>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamReader<::jderobot::FQExecutableName, S>
{
    static void read(S* istr, ::jderobot::FQExecutableName& v)
    {
        istr->readAll(v.executable, v.host);
    }
};

template<>
struct StreamableTraits<::jderobot::FQComponentName>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamReader<::jderobot::FQComponentName, S>
{
    static void read(S* istr, ::jderobot::FQComponentName& v)
    {
        istr->readAll(v.platform, v.component);
    }
};

template<>
struct StreamableTraits<::jderobot::FQInterfaceName>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 3;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamReader<::jderobot::FQInterfaceName, S>
{
    static void read(S* istr, ::jderobot::FQInterfaceName& v)
    {
        istr->readAll(v.platform, v.component, v.iface);
    }
};

template<>
struct StreamableTraits<::jderobot::FQTopicName>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 4;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamReader<::jderobot::FQTopicName, S>
{
    static void read(S* istr, ::jderobot::FQTopicName& v)
    {
        istr->readAll(v.platform, v.component, v.iface, v.topic);
    }
};

template<>
struct StreamableTraits<::jderobot::ProvidedInterface>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamReader<::jderobot::ProvidedInterface, S>
{
    static void read(S* istr, ::jderobot::ProvidedInterface& v)
    {
        istr->readAll(v.name, v.id);
    }
};

template<>
struct StreamableTraits<::jderobot::RequiredInterface>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 4;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamReader<::jderobot::RequiredInterface, S>
{
    static void read(S* istr, ::jderobot::RequiredInterface& v)
    {
        istr->readAll(v.name, v.id);
    }
};

template<>
struct StreamableTraits<::jderobot::ComponentData>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 4;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamReader<::jderobot::ComponentData, S>
{
    static void read(S* istr, ::jderobot::ComponentData& v)
    {
        istr->readAll(v.name, v.provides, v.requires);
    }
};

}
/// \endcond

#else // C++98 mapping

namespace jderobot
{

struct FQExecutableName
{
    ::std::string executable;
    ::std::string host;

    bool operator==(const FQExecutableName& rhs_) const
    {
        if(this == &rhs_)
        {
            return true;
        }
        if(executable != rhs_.executable)
        {
            return false;
        }
        if(host != rhs_.host)
        {
            return false;
        }
        return true;
    }

    bool operator<(const FQExecutableName& rhs_) const
    {
        if(this == &rhs_)
        {
            return false;
        }
        if(executable < rhs_.executable)
        {
            return true;
        }
        else if(rhs_.executable < executable)
        {
            return false;
        }
        if(host < rhs_.host)
        {
            return true;
        }
        else if(rhs_.host < host)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const FQExecutableName& rhs_) const
    {
        return !operator==(rhs_);
    }
    bool operator<=(const FQExecutableName& rhs_) const
    {
        return operator<(rhs_) || operator==(rhs_);
    }
    bool operator>(const FQExecutableName& rhs_) const
    {
        return !operator<(rhs_) && !operator==(rhs_);
    }
    bool operator>=(const FQExecutableName& rhs_) const
    {
        return !operator<(rhs_);
    }
};

struct FQComponentName
{
    ::std::string platform;
    ::std::string component;

    bool operator==(const FQComponentName& rhs_) const
    {
        if(this == &rhs_)
        {
            return true;
        }
        if(platform != rhs_.platform)
        {
            return false;
        }
        if(component != rhs_.component)
        {
            return false;
        }
        return true;
    }

    bool operator<(const FQComponentName& rhs_) const
    {
        if(this == &rhs_)
        {
            return false;
        }
        if(platform < rhs_.platform)
        {
            return true;
        }
        else if(rhs_.platform < platform)
        {
            return false;
        }
        if(component < rhs_.component)
        {
            return true;
        }
        else if(rhs_.component < component)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const FQComponentName& rhs_) const
    {
        return !operator==(rhs_);
    }
    bool operator<=(const FQComponentName& rhs_) const
    {
        return operator<(rhs_) || operator==(rhs_);
    }
    bool operator>(const FQComponentName& rhs_) const
    {
        return !operator<(rhs_) && !operator==(rhs_);
    }
    bool operator>=(const FQComponentName& rhs_) const
    {
        return !operator<(rhs_);
    }
};

struct FQInterfaceName
{
    ::std::string platform;
    ::std::string component;
    ::std::string iface;

    bool operator==(const FQInterfaceName& rhs_) const
    {
        if(this == &rhs_)
        {
            return true;
        }
        if(platform != rhs_.platform)
        {
            return false;
        }
        if(component != rhs_.component)
        {
            return false;
        }
        if(iface != rhs_.iface)
        {
            return false;
        }
        return true;
    }

    bool operator<(const FQInterfaceName& rhs_) const
    {
        if(this == &rhs_)
        {
            return false;
        }
        if(platform < rhs_.platform)
        {
            return true;
        }
        else if(rhs_.platform < platform)
        {
            return false;
        }
        if(component < rhs_.component)
        {
            return true;
        }
        else if(rhs_.component < component)
        {
            return false;
        }
        if(iface < rhs_.iface)
        {
            return true;
        }
        else if(rhs_.iface < iface)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const FQInterfaceName& rhs_) const
    {
        return !operator==(rhs_);
    }
    bool operator<=(const FQInterfaceName& rhs_) const
    {
        return operator<(rhs_) || operator==(rhs_);
    }
    bool operator>(const FQInterfaceName& rhs_) const
    {
        return !operator<(rhs_) && !operator==(rhs_);
    }
    bool operator>=(const FQInterfaceName& rhs_) const
    {
        return !operator<(rhs_);
    }
};

struct FQTopicName
{
    ::std::string platform;
    ::std::string component;
    ::std::string iface;
    ::std::string topic;

    bool operator==(const FQTopicName& rhs_) const
    {
        if(this == &rhs_)
        {
            return true;
        }
        if(platform != rhs_.platform)
        {
            return false;
        }
        if(component != rhs_.component)
        {
            return false;
        }
        if(iface != rhs_.iface)
        {
            return false;
        }
        if(topic != rhs_.topic)
        {
            return false;
        }
        return true;
    }

    bool operator<(const FQTopicName& rhs_) const
    {
        if(this == &rhs_)
        {
            return false;
        }
        if(platform < rhs_.platform)
        {
            return true;
        }
        else if(rhs_.platform < platform)
        {
            return false;
        }
        if(component < rhs_.component)
        {
            return true;
        }
        else if(rhs_.component < component)
        {
            return false;
        }
        if(iface < rhs_.iface)
        {
            return true;
        }
        else if(rhs_.iface < iface)
        {
            return false;
        }
        if(topic < rhs_.topic)
        {
            return true;
        }
        else if(rhs_.topic < topic)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const FQTopicName& rhs_) const
    {
        return !operator==(rhs_);
    }
    bool operator<=(const FQTopicName& rhs_) const
    {
        return operator<(rhs_) || operator==(rhs_);
    }
    bool operator>(const FQTopicName& rhs_) const
    {
        return !operator<(rhs_) && !operator==(rhs_);
    }
    bool operator>=(const FQTopicName& rhs_) const
    {
        return !operator<(rhs_);
    }
};

struct ProvidedInterface
{
    ::std::string name;
    ::std::string id;

    bool operator==(const ProvidedInterface& rhs_) const
    {
        if(this == &rhs_)
        {
            return true;
        }
        if(name != rhs_.name)
        {
            return false;
        }
        if(id != rhs_.id)
        {
            return false;
        }
        return true;
    }

    bool operator<(const ProvidedInterface& rhs_) const
    {
        if(this == &rhs_)
        {
            return false;
        }
        if(name < rhs_.name)
        {
            return true;
        }
        else if(rhs_.name < name)
        {
            return false;
        }
        if(id < rhs_.id)
        {
            return true;
        }
        else if(rhs_.id < id)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const ProvidedInterface& rhs_) const
    {
        return !operator==(rhs_);
    }
    bool operator<=(const ProvidedInterface& rhs_) const
    {
        return operator<(rhs_) || operator==(rhs_);
    }
    bool operator>(const ProvidedInterface& rhs_) const
    {
        return !operator<(rhs_) && !operator==(rhs_);
    }
    bool operator>=(const ProvidedInterface& rhs_) const
    {
        return !operator<(rhs_);
    }
};

struct RequiredInterface
{
    ::jderobot::FQInterfaceName name;
    ::std::string id;

    bool operator==(const RequiredInterface& rhs_) const
    {
        if(this == &rhs_)
        {
            return true;
        }
        if(name != rhs_.name)
        {
            return false;
        }
        if(id != rhs_.id)
        {
            return false;
        }
        return true;
    }

    bool operator<(const RequiredInterface& rhs_) const
    {
        if(this == &rhs_)
        {
            return false;
        }
        if(name < rhs_.name)
        {
            return true;
        }
        else if(rhs_.name < name)
        {
            return false;
        }
        if(id < rhs_.id)
        {
            return true;
        }
        else if(rhs_.id < id)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const RequiredInterface& rhs_) const
    {
        return !operator==(rhs_);
    }
    bool operator<=(const RequiredInterface& rhs_) const
    {
        return operator<(rhs_) || operator==(rhs_);
    }
    bool operator>(const RequiredInterface& rhs_) const
    {
        return !operator<(rhs_) && !operator==(rhs_);
    }
    bool operator>=(const RequiredInterface& rhs_) const
    {
        return !operator<(rhs_);
    }
};

typedef ::std::vector<ProvidedInterface> ProvidesInterfaces;

typedef ::std::vector<RequiredInterface> RequiresInterfaces;

struct ComponentData
{
    ::jderobot::FQComponentName name;
    ::jderobot::ProvidesInterfaces provides;
    ::jderobot::RequiresInterfaces requires;
};

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::jderobot::FQExecutableName>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamWriter< ::jderobot::FQExecutableName, S>
{
    static void write(S* ostr, const ::jderobot::FQExecutableName& v)
    {
        ostr->write(v.executable);
        ostr->write(v.host);
    }
};

template<typename S>
struct StreamReader< ::jderobot::FQExecutableName, S>
{
    static void read(S* istr, ::jderobot::FQExecutableName& v)
    {
        istr->read(v.executable);
        istr->read(v.host);
    }
};

template<>
struct StreamableTraits< ::jderobot::FQComponentName>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamWriter< ::jderobot::FQComponentName, S>
{
    static void write(S* ostr, const ::jderobot::FQComponentName& v)
    {
        ostr->write(v.platform);
        ostr->write(v.component);
    }
};

template<typename S>
struct StreamReader< ::jderobot::FQComponentName, S>
{
    static void read(S* istr, ::jderobot::FQComponentName& v)
    {
        istr->read(v.platform);
        istr->read(v.component);
    }
};

template<>
struct StreamableTraits< ::jderobot::FQInterfaceName>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 3;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamWriter< ::jderobot::FQInterfaceName, S>
{
    static void write(S* ostr, const ::jderobot::FQInterfaceName& v)
    {
        ostr->write(v.platform);
        ostr->write(v.component);
        ostr->write(v.iface);
    }
};

template<typename S>
struct StreamReader< ::jderobot::FQInterfaceName, S>
{
    static void read(S* istr, ::jderobot::FQInterfaceName& v)
    {
        istr->read(v.platform);
        istr->read(v.component);
        istr->read(v.iface);
    }
};

template<>
struct StreamableTraits< ::jderobot::FQTopicName>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 4;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamWriter< ::jderobot::FQTopicName, S>
{
    static void write(S* ostr, const ::jderobot::FQTopicName& v)
    {
        ostr->write(v.platform);
        ostr->write(v.component);
        ostr->write(v.iface);
        ostr->write(v.topic);
    }
};

template<typename S>
struct StreamReader< ::jderobot::FQTopicName, S>
{
    static void read(S* istr, ::jderobot::FQTopicName& v)
    {
        istr->read(v.platform);
        istr->read(v.component);
        istr->read(v.iface);
        istr->read(v.topic);
    }
};

template<>
struct StreamableTraits< ::jderobot::ProvidedInterface>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamWriter< ::jderobot::ProvidedInterface, S>
{
    static void write(S* ostr, const ::jderobot::ProvidedInterface& v)
    {
        ostr->write(v.name);
        ostr->write(v.id);
    }
};

template<typename S>
struct StreamReader< ::jderobot::ProvidedInterface, S>
{
    static void read(S* istr, ::jderobot::ProvidedInterface& v)
    {
        istr->read(v.name);
        istr->read(v.id);
    }
};

template<>
struct StreamableTraits< ::jderobot::RequiredInterface>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 4;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamWriter< ::jderobot::RequiredInterface, S>
{
    static void write(S* ostr, const ::jderobot::RequiredInterface& v)
    {
        ostr->write(v.name);
        ostr->write(v.id);
    }
};

template<typename S>
struct StreamReader< ::jderobot::RequiredInterface, S>
{
    static void read(S* istr, ::jderobot::RequiredInterface& v)
    {
        istr->read(v.name);
        istr->read(v.id);
    }
};

template<>
struct StreamableTraits< ::jderobot::ComponentData>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 4;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamWriter< ::jderobot::ComponentData, S>
{
    static void write(S* ostr, const ::jderobot::ComponentData& v)
    {
        ostr->write(v.name);
        ostr->write(v.provides);
        ostr->write(v.requires);
    }
};

template<typename S>
struct StreamReader< ::jderobot::ComponentData, S>
{
    static void read(S* istr, ::jderobot::ComponentData& v)
    {
        istr->read(v.name);
        istr->read(v.provides);
        istr->read(v.requires);
    }
};

}
/// \endcond

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
