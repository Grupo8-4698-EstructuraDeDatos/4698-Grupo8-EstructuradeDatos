/// @file xml/schema/xml_schema_complex_content_extension.h

#pragma once

#include <xml/schema/xml_schema_content.h>
#include <system/shared_ptr.h>


/// @cond
namespace System
{
namespace Xml
{
namespace Schema
{
class XmlSchemaAnyAttribute;
class XmlSchemaComplexType;
class XmlSchemaObjectCollection;
class XmlSchemaParticle;
} // namespace Schema
class XmlQualifiedName;
} // namespace Xml
} // namespace System
/// @endcond

namespace System {

namespace Xml {

namespace Schema {

/// Represents the @c extension element from XML Schema as specified by the World Wide Web Consortium (W3C).
/// This class is for complex types with complex content model derived by extension. It extends the complex type by adding attributes or elements.
/// @attention Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instances of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlSchemaComplexContentExtension : public XmlSchemaContent
{
    typedef XmlSchemaComplexContentExtension ThisType;
    typedef XmlSchemaContent BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:

    /// An alias for shared pointer to an instance of this class.
    using Ptr = SharedPtr<XmlSchemaComplexContentExtension>;

private:
    /// @cond
    friend class XmlSchemaComplexType;
    /// @endcond

public:

    /// Returns the name of the complex type from which this type is derived by extension.
    /// @returns The name of the complex type from which this type is derived by extension.
    ASPOSECPP_SHARED_API SharedPtr<XmlQualifiedName> get_BaseTypeName();
    /// Sets the name of the complex type from which this type is derived by extension.
    /// @param value The value to set.
    ASPOSECPP_SHARED_API void set_BaseTypeName(const SharedPtr<XmlQualifiedName>& value);
    /// Returns one of the XmlSchemaGroupRef, XmlSchemaChoice, XmlSchemaAll, or XmlSchemaSequence classes.
    /// @returns One of the XmlSchemaGroupRef, XmlSchemaChoice, XmlSchemaAll, or XmlSchemaSequence classes.
    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaParticle> get_Particle();
    /// Sets one of the XmlSchemaGroupRef, XmlSchemaChoice, XmlSchemaAll, or XmlSchemaSequence classes.
    /// @param value The value to set.
    ASPOSECPP_SHARED_API void set_Particle(const SharedPtr<XmlSchemaParticle>& value);
    /// Returns the collection of attributes for the complex content.
    /// Contains XmlSchemaAttribute and XmlSchemaAttributeGroupRef elements.
    /// @returns The collection of attributes for the complex content.
    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaObjectCollection> get_Attributes();
    /// Returns the XmlSchemaAnyAttribute component of the complex content model.
    /// @returns The XmlSchemaAnyAttribute component of the complex content model.
    ASPOSECPP_SHARED_API SharedPtr<XmlSchemaAnyAttribute> get_AnyAttribute();
    /// Sets the XmlSchemaAnyAttribute component of the complex content model.
    /// @param value The value to set.
    ASPOSECPP_SHARED_API void set_AnyAttribute(const SharedPtr<XmlSchemaAnyAttribute>& value);

    /// Initializes a new instance of the XmlSchemaComplexContentExtension class.
    ASPOSECPP_SHARED_API XmlSchemaComplexContentExtension();

protected:

    /// @cond
    void SetAttributes(const SharedPtr<XmlSchemaObjectCollection>& newAttributes);

    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    /// @endcond

private:

    SharedPtr<XmlSchemaParticle> _particle;
    SharedPtr<XmlSchemaObjectCollection> _attributes;
    SharedPtr<XmlSchemaAnyAttribute> _anyAttribute;
    SharedPtr<XmlQualifiedName> _baseTypeName;

    ThisType* CppMemberwiseClone() const override { return new ThisType(*this); } 

};

} // namespace Schema
} // namespace Xml
} // namespace System


