#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Collections.Hashtable
struct Hashtable_t812069807;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1327782353;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t3140592611;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t4180091357;
// System.Collections.ArrayList
struct ArrayList_t1566659490;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t519808531;
// System.Collections.IComparer
struct IComparer_t214866453;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1566065324;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t438416257;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1249297119;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t431319176;
// System.Version
struct Version_t2319920906;
// System.Uri
struct Uri_t771627871;
// System.Net.ICredentials
struct ICredentials_t1899522304;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t165572934;
// System.IntPtr[]
struct IntPtrU5BU5D_t4204197944;
// System.Collections.IDictionary
struct IDictionary_t3825156092;
// System.UInt16[]
struct UInt16U5BU5D_t79418738;
// System.String[]
struct StringU5BU5D_t148011198;
// System.Char[]
struct CharU5BU5D_t1237632434;
// System.Void
struct Void_t3968031514;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t4018218907;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t2457359570;
// System.Boolean[]
struct BooleanU5BU5D_t1500524663;
// System.Globalization.DaylightTime
struct DaylightTime_t1798532590;
// System.Int32[]
struct Int32U5BU5D_t1884137699;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t4262792808;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t3186798008;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2647231546;
// System.Net.IWebProxy
struct IWebProxy_t2829769363;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t1449675399;
// System.IAsyncResult
struct IAsyncResult_t1055566646;
// System.AsyncCallback
struct AsyncCallback_t4194240925;
// System.Reflection.Assembly
struct Assembly_t;
// System.ResolveEventArgs
struct ResolveEventArgs_t1777217296;
// Mono.Math.BigInteger
struct BigInteger_t1332942125;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2233037486;
// System.EventArgs
struct EventArgs_t608821783;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t2933388577;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3258278373;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2179699090;
// System.Net.ServicePoint
struct ServicePoint_t3354562874;




#ifndef U3CMODULEU3E_T1107393315_H
#define U3CMODULEU3E_T1107393315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1107393315 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1107393315_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef HYBRIDDICTIONARY_T4262792808_H
#define HYBRIDDICTIONARY_T4262792808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t4262792808  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t812069807 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1327782353 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t4262792808, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t4262792808, ___hashtable_1)); }
	inline Hashtable_t812069807 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t812069807 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t812069807 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t4262792808, ___list_2)); }
	inline ListDictionary_t1327782353 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t1327782353 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t1327782353 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T4262792808_H
#ifndef GLOBALPROXYSELECTION_T1397226153_H
#define GLOBALPROXYSELECTION_T1397226153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.GlobalProxySelection
struct  GlobalProxySelection_t1397226153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALPROXYSELECTION_T1397226153_H
#ifndef FILEWEBREQUESTCREATOR_T1476346962_H
#define FILEWEBREQUESTCREATOR_T1476346962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequestCreator
struct  FileWebRequestCreator_t1476346962  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEWEBREQUESTCREATOR_T1476346962_H
#ifndef DEFAULTCERTIFICATEPOLICY_T283648510_H
#define DEFAULTCERTIFICATEPOLICY_T283648510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DefaultCertificatePolicy
struct  DefaultCertificatePolicy_t283648510  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCERTIFICATEPOLICY_T283648510_H
#ifndef TYPECONVERTER_T3104096152_H
#define TYPECONVERTER_T3104096152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t3104096152  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T3104096152_H
#ifndef KEYSCOLLECTION_T438416257_H
#define KEYSCOLLECTION_T438416257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t438416257  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t3140592611 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t438416257, ___m_collection_0)); }
	inline NameObjectCollectionBase_t3140592611 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t3140592611 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t3140592611 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T438416257_H
#ifndef _KEYSENUMERATOR_T36098631_H
#define _KEYSENUMERATOR_T36098631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t36098631  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t3140592611 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t36098631, ___m_collection_0)); }
	inline NameObjectCollectionBase_t3140592611 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t3140592611 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t3140592611 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t36098631, ___m_position_1)); }
	inline int32_t get_m_position_1() const { return ___m_position_1; }
	inline int32_t* get_address_of_m_position_1() { return &___m_position_1; }
	inline void set_m_position_1(int32_t value)
	{
		___m_position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _KEYSENUMERATOR_T36098631_H
#ifndef _ITEM_T4180091357_H
#define _ITEM_T4180091357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t4180091357  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t4180091357, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t4180091357, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _ITEM_T4180091357_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T3140592611_H
#define NAMEOBJECTCOLLECTIONBASE_T3140592611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t3140592611  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t812069807 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t4180091357 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t1566659490 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t1566065324 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t438416257 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___m_ItemsContainer_0)); }
	inline Hashtable_t812069807 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t812069807 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t812069807 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___m_NullKeyItem_1)); }
	inline _Item_t4180091357 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t4180091357 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t4180091357 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___m_ItemsArray_2)); }
	inline ArrayList_t1566659490 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t1566659490 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t1566659490 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___infoCopy_7)); }
	inline SerializationInfo_t1566065324 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t1566065324 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t1566065324 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___keyscoll_8)); }
	inline KeysCollection_t438416257 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t438416257 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t438416257 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3140592611, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T3140592611_H
#ifndef DICTIONARYNODEENUMERATOR_T2009233042_H
#define DICTIONARYNODEENUMERATOR_T2009233042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t2009233042  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t1327782353 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t431319176 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2009233042, ___dict_0)); }
	inline ListDictionary_t1327782353 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1327782353 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1327782353 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2009233042, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2009233042, ___current_2)); }
	inline DictionaryNode_t431319176 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t431319176 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t431319176 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2009233042, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODEENUMERATOR_T2009233042_H
#ifndef DICTIONARYNODE_T431319176_H
#define DICTIONARYNODE_T431319176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t431319176  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t431319176 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t431319176, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t431319176, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t431319176, ___next_2)); }
	inline DictionaryNode_t431319176 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t431319176 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t431319176 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T431319176_H
#ifndef LISTDICTIONARY_T1327782353_H
#define LISTDICTIONARY_T1327782353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1327782353  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t431319176 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1327782353, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1327782353, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1327782353, ___head_2)); }
	inline DictionaryNode_t431319176 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t431319176 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t431319176 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1327782353, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T1327782353_H
#ifndef LOCALE_T2702054803_H
#define LOCALE_T2702054803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t2702054803  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T2702054803_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef HTTPREQUESTCREATOR_T1246480547_H
#define HTTPREQUESTCREATOR_T1246480547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpRequestCreator
struct  HttpRequestCreator_t1246480547  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPREQUESTCREATOR_T1246480547_H
#ifndef HTTPVERSION_T2974878979_H
#define HTTPVERSION_T2974878979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpVersion
struct  HttpVersion_t2974878979  : public RuntimeObject
{
public:

public:
};

struct HttpVersion_t2974878979_StaticFields
{
public:
	// System.Version System.Net.HttpVersion::Version10
	Version_t2319920906 * ___Version10_0;
	// System.Version System.Net.HttpVersion::Version11
	Version_t2319920906 * ___Version11_1;

public:
	inline static int32_t get_offset_of_Version10_0() { return static_cast<int32_t>(offsetof(HttpVersion_t2974878979_StaticFields, ___Version10_0)); }
	inline Version_t2319920906 * get_Version10_0() const { return ___Version10_0; }
	inline Version_t2319920906 ** get_address_of_Version10_0() { return &___Version10_0; }
	inline void set_Version10_0(Version_t2319920906 * value)
	{
		___Version10_0 = value;
		Il2CppCodeGenWriteBarrier((&___Version10_0), value);
	}

	inline static int32_t get_offset_of_Version11_1() { return static_cast<int32_t>(offsetof(HttpVersion_t2974878979_StaticFields, ___Version11_1)); }
	inline Version_t2319920906 * get_Version11_1() const { return ___Version11_1; }
	inline Version_t2319920906 ** get_address_of_Version11_1() { return &___Version11_1; }
	inline void set_Version11_1(Version_t2319920906 * value)
	{
		___Version11_1 = value;
		Il2CppCodeGenWriteBarrier((&___Version11_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPVERSION_T2974878979_H
#ifndef FTPREQUESTCREATOR_T3738807067_H
#define FTPREQUESTCREATOR_T3738807067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpRequestCreator
struct  FtpRequestCreator_t3738807067  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPREQUESTCREATOR_T3738807067_H
#ifndef SPKEY_T1425203948_H
#define SPKEY_T1425203948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePointManager/SPKey
struct  SPKey_t1425203948  : public RuntimeObject
{
public:
	// System.Uri System.Net.ServicePointManager/SPKey::uri
	Uri_t771627871 * ___uri_0;
	// System.Boolean System.Net.ServicePointManager/SPKey::use_connect
	bool ___use_connect_1;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(SPKey_t1425203948, ___uri_0)); }
	inline Uri_t771627871 * get_uri_0() const { return ___uri_0; }
	inline Uri_t771627871 ** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(Uri_t771627871 * value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_0), value);
	}

	inline static int32_t get_offset_of_use_connect_1() { return static_cast<int32_t>(offsetof(SPKey_t1425203948, ___use_connect_1)); }
	inline bool get_use_connect_1() const { return ___use_connect_1; }
	inline bool* get_address_of_use_connect_1() { return &___use_connect_1; }
	inline void set_use_connect_1(bool value)
	{
		___use_connect_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPKEY_T1425203948_H
#ifndef WEBPROXY_T879072114_H
#define WEBPROXY_T879072114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebProxy
struct  WebProxy_t879072114  : public RuntimeObject
{
public:
	// System.Uri System.Net.WebProxy::address
	Uri_t771627871 * ___address_0;
	// System.Boolean System.Net.WebProxy::bypassOnLocal
	bool ___bypassOnLocal_1;
	// System.Collections.ArrayList System.Net.WebProxy::bypassList
	ArrayList_t1566659490 * ___bypassList_2;
	// System.Net.ICredentials System.Net.WebProxy::credentials
	RuntimeObject* ___credentials_3;
	// System.Boolean System.Net.WebProxy::useDefaultCredentials
	bool ___useDefaultCredentials_4;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(WebProxy_t879072114, ___address_0)); }
	inline Uri_t771627871 * get_address_0() const { return ___address_0; }
	inline Uri_t771627871 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(Uri_t771627871 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_bypassOnLocal_1() { return static_cast<int32_t>(offsetof(WebProxy_t879072114, ___bypassOnLocal_1)); }
	inline bool get_bypassOnLocal_1() const { return ___bypassOnLocal_1; }
	inline bool* get_address_of_bypassOnLocal_1() { return &___bypassOnLocal_1; }
	inline void set_bypassOnLocal_1(bool value)
	{
		___bypassOnLocal_1 = value;
	}

	inline static int32_t get_offset_of_bypassList_2() { return static_cast<int32_t>(offsetof(WebProxy_t879072114, ___bypassList_2)); }
	inline ArrayList_t1566659490 * get_bypassList_2() const { return ___bypassList_2; }
	inline ArrayList_t1566659490 ** get_address_of_bypassList_2() { return &___bypassList_2; }
	inline void set_bypassList_2(ArrayList_t1566659490 * value)
	{
		___bypassList_2 = value;
		Il2CppCodeGenWriteBarrier((&___bypassList_2), value);
	}

	inline static int32_t get_offset_of_credentials_3() { return static_cast<int32_t>(offsetof(WebProxy_t879072114, ___credentials_3)); }
	inline RuntimeObject* get_credentials_3() const { return ___credentials_3; }
	inline RuntimeObject** get_address_of_credentials_3() { return &___credentials_3; }
	inline void set_credentials_3(RuntimeObject* value)
	{
		___credentials_3 = value;
		Il2CppCodeGenWriteBarrier((&___credentials_3), value);
	}

	inline static int32_t get_offset_of_useDefaultCredentials_4() { return static_cast<int32_t>(offsetof(WebProxy_t879072114, ___useDefaultCredentials_4)); }
	inline bool get_useDefaultCredentials_4() const { return ___useDefaultCredentials_4; }
	inline bool* get_address_of_useDefaultCredentials_4() { return &___useDefaultCredentials_4; }
	inline void set_useDefaultCredentials_4(bool value)
	{
		___useDefaultCredentials_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBPROXY_T879072114_H
#ifndef TIMEZONE_T2254046783_H
#define TIMEZONE_T2254046783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t2254046783  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t2254046783_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t2254046783 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t2254046783_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t2254046783 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t2254046783 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t2254046783 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t2254046783_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t2254046783_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T2254046783_H
#ifndef MARSHALBYREFOBJECT_T2489049657_H
#define MARSHALBYREFOBJECT_T2489049657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2489049657  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t165572934 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2489049657, ____identity_0)); }
	inline ServerIdentity_t165572934 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t165572934 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t165572934 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2489049657_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4204197944* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4204197944* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4204197944** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4204197944* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef ATTRIBUTE_T1013777665_H
#define ATTRIBUTE_T1013777665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1013777665  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1013777665_H
#ifndef EVENTARGS_T608821783_H
#define EVENTARGS_T608821783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t608821783  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t608821783_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t608821783 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t608821783_StaticFields, ___Empty_0)); }
	inline EventArgs_t608821783 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t608821783 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t608821783 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T608821783_H
#ifndef VERSION_T2319920906_H
#define VERSION_T2319920906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t2319920906  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t2319920906, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t2319920906, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t2319920906, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t2319920906, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T2319920906_H
#ifndef IPV6ADDRESS_T2555594540_H
#define IPV6ADDRESS_T2555594540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPv6Address
struct  IPv6Address_t2555594540  : public RuntimeObject
{
public:
	// System.UInt16[] System.Net.IPv6Address::address
	UInt16U5BU5D_t79418738* ___address_0;
	// System.Int32 System.Net.IPv6Address::prefixLength
	int32_t ___prefixLength_1;
	// System.Int64 System.Net.IPv6Address::scopeId
	int64_t ___scopeId_2;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPv6Address_t2555594540, ___address_0)); }
	inline UInt16U5BU5D_t79418738* get_address_0() const { return ___address_0; }
	inline UInt16U5BU5D_t79418738** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(UInt16U5BU5D_t79418738* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_prefixLength_1() { return static_cast<int32_t>(offsetof(IPv6Address_t2555594540, ___prefixLength_1)); }
	inline int32_t get_prefixLength_1() const { return ___prefixLength_1; }
	inline int32_t* get_address_of_prefixLength_1() { return &___prefixLength_1; }
	inline void set_prefixLength_1(int32_t value)
	{
		___prefixLength_1 = value;
	}

	inline static int32_t get_offset_of_scopeId_2() { return static_cast<int32_t>(offsetof(IPv6Address_t2555594540, ___scopeId_2)); }
	inline int64_t get_scopeId_2() const { return ___scopeId_2; }
	inline int64_t* get_address_of_scopeId_2() { return &___scopeId_2; }
	inline void set_scopeId_2(int64_t value)
	{
		___scopeId_2 = value;
	}
};

struct IPv6Address_t2555594540_StaticFields
{
public:
	// System.Net.IPv6Address System.Net.IPv6Address::Loopback
	IPv6Address_t2555594540 * ___Loopback_3;
	// System.Net.IPv6Address System.Net.IPv6Address::Unspecified
	IPv6Address_t2555594540 * ___Unspecified_4;

public:
	inline static int32_t get_offset_of_Loopback_3() { return static_cast<int32_t>(offsetof(IPv6Address_t2555594540_StaticFields, ___Loopback_3)); }
	inline IPv6Address_t2555594540 * get_Loopback_3() const { return ___Loopback_3; }
	inline IPv6Address_t2555594540 ** get_address_of_Loopback_3() { return &___Loopback_3; }
	inline void set_Loopback_3(IPv6Address_t2555594540 * value)
	{
		___Loopback_3 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_3), value);
	}

	inline static int32_t get_offset_of_Unspecified_4() { return static_cast<int32_t>(offsetof(IPv6Address_t2555594540_StaticFields, ___Unspecified_4)); }
	inline IPv6Address_t2555594540 * get_Unspecified_4() const { return ___Unspecified_4; }
	inline IPv6Address_t2555594540 ** get_address_of_Unspecified_4() { return &___Unspecified_4; }
	inline void set_Unspecified_4(IPv6Address_t2555594540 * value)
	{
		___Unspecified_4 = value;
		Il2CppCodeGenWriteBarrier((&___Unspecified_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6ADDRESS_T2555594540_H
#ifndef VALUETYPE_T186291818_H
#define VALUETYPE_T186291818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t186291818  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t186291818_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t186291818_marshaled_com
{
};
#endif // VALUETYPE_T186291818_H
#ifndef U24ARRAYTYPEU24128_T3642357015_H
#define U24ARRAYTYPEU24128_T3642357015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t3642357015 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t3642357015__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T3642357015_H
#ifndef U24ARRAYTYPEU2452_T2308444771_H
#define U24ARRAYTYPEU2452_T2308444771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t2308444771 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t2308444771__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T2308444771_H
#ifndef __IL2CPPCOMDELEGATE_T823668582_H
#define __IL2CPPCOMDELEGATE_T823668582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t823668582  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T823668582_H
#ifndef MONOTODOATTRIBUTE_T668567273_H
#define MONOTODOATTRIBUTE_T668567273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t668567273  : public Attribute_t1013777665
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t668567273, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T668567273_H
#ifndef GCHANDLE_T4291390170_H
#define GCHANDLE_T4291390170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t4291390170 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t4291390170, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T4291390170_H
#ifndef VOID_T3968031514_H
#define VOID_T3968031514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3968031514 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3968031514_H
#ifndef SYSTEMEXCEPTION_T2436044558_H
#define SYSTEMEXCEPTION_T2436044558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2436044558  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2436044558_H
#ifndef NAMEVALUECOLLECTION_T1586477470_H
#define NAMEVALUECOLLECTION_T1586477470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t1586477470  : public NameObjectCollectionBase_t3140592611
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t148011198* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t148011198* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t1586477470, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t148011198* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t148011198** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t148011198* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t1586477470, ___cachedAll_11)); }
	inline StringU5BU5D_t148011198* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t148011198** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t148011198* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T1586477470_H
#ifndef ENUM_T1212945457_H
#define ENUM_T1212945457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1212945457  : public ValueType_t186291818
{
public:

public:
};

struct Enum_t1212945457_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1237632434* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1212945457_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1237632434* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1237632434** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1237632434* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1212945457_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1212945457_marshaled_com
{
};
#endif // ENUM_T1212945457_H
#ifndef TYPECONVERTERATTRIBUTE_T3314042479_H
#define TYPECONVERTERATTRIBUTE_T3314042479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t3314042479  : public Attribute_t1013777665
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::converter_type
	String_t* ___converter_type_1;

public:
	inline static int32_t get_offset_of_converter_type_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3314042479, ___converter_type_1)); }
	inline String_t* get_converter_type_1() const { return ___converter_type_1; }
	inline String_t** get_address_of_converter_type_1() { return &___converter_type_1; }
	inline void set_converter_type_1(String_t* value)
	{
		___converter_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___converter_type_1), value);
	}
};

struct TypeConverterAttribute_t3314042479_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t3314042479 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3314042479_StaticFields, ___Default_0)); }
	inline TypeConverterAttribute_t3314042479 * get_Default_0() const { return ___Default_0; }
	inline TypeConverterAttribute_t3314042479 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TypeConverterAttribute_t3314042479 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T3314042479_H
#ifndef TIMESPAN_T4098384374_H
#define TIMESPAN_T4098384374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t4098384374 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4098384374, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4098384374_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4098384374  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4098384374  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4098384374  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4098384374_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t4098384374  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t4098384374 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t4098384374  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4098384374_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t4098384374  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t4098384374 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t4098384374  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4098384374_StaticFields, ___Zero_2)); }
	inline TimeSpan_t4098384374  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t4098384374 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t4098384374  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T4098384374_H
#ifndef U24ARRAYTYPEU24640_T1869689134_H
#define U24ARRAYTYPEU24640_T1869689134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t1869689134 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t1869689134__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T1869689134_H
#ifndef BOOLEAN_T1241177154_H
#define BOOLEAN_T1241177154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1241177154 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1241177154, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1241177154_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1241177154_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1241177154_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1241177154_H
#ifndef U24ARRAYTYPEU241024_T2203700664_H
#define U24ARRAYTYPEU241024_T2203700664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t2203700664 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t2203700664__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T2203700664_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef U24ARRAYTYPEU242048_T1987446938_H
#define U24ARRAYTYPEU242048_T1987446938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t1987446938 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t1987446938__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T1987446938_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T1449675399_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T1449675399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t1449675399  : public EventArgs_t608821783
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t1449675399, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t1449675399, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T1449675399_H
#ifndef U24ARRAYTYPEU2456_T3951700725_H
#define U24ARRAYTYPEU2456_T3951700725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t3951700725 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t3951700725__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T3951700725_H
#ifndef U24ARRAYTYPEU2424_T435049647_H
#define U24ARRAYTYPEU2424_T435049647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t435049647 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t435049647__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T435049647_H
#ifndef U24ARRAYTYPEU24120_T1587884164_H
#define U24ARRAYTYPEU24120_T1587884164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t1587884164 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t1587884164__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T1587884164_H
#ifndef U24ARRAYTYPEU243132_T693312292_H
#define U24ARRAYTYPEU243132_T693312292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t693312292 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t693312292__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T693312292_H
#ifndef U24ARRAYTYPEU2420_T2681047087_H
#define U24ARRAYTYPEU2420_T2681047087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t2681047087 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t2681047087__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T2681047087_H
#ifndef U24ARRAYTYPEU2432_T2215611852_H
#define U24ARRAYTYPEU2432_T2215611852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t2215611852 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t2215611852__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T2215611852_H
#ifndef U24ARRAYTYPEU2448_T207411747_H
#define U24ARRAYTYPEU2448_T207411747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t207411747 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t207411747__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T207411747_H
#ifndef U24ARRAYTYPEU2416_T3801525909_H
#define U24ARRAYTYPEU2416_T3801525909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t3801525909 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t3801525909__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T3801525909_H
#ifndef U24ARRAYTYPEU2464_T1404950213_H
#define U24ARRAYTYPEU2464_T1404950213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t1404950213 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t1404950213__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T1404950213_H
#ifndef U24ARRAYTYPEU2496_T967074453_H
#define U24ARRAYTYPEU2496_T967074453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t967074453 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t967074453__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T967074453_H
#ifndef U24ARRAYTYPEU24124_T509396634_H
#define U24ARRAYTYPEU24124_T509396634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t509396634 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t509396634__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T509396634_H
#ifndef U24ARRAYTYPEU2472_T3352250755_H
#define U24ARRAYTYPEU2472_T3352250755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t3352250755 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t3352250755__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T3352250755_H
#ifndef U24ARRAYTYPEU24256_T262211290_H
#define U24ARRAYTYPEU24256_T262211290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t262211290 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t262211290__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T262211290_H
#ifndef U24ARRAYTYPEU248_T1362799661_H
#define U24ARRAYTYPEU248_T1362799661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t1362799661 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t1362799661__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T1362799661_H
#ifndef U24ARRAYTYPEU24136_T2891533318_H
#define U24ARRAYTYPEU24136_T2891533318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t2891533318 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t2891533318__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T2891533318_H
#ifndef U24ARRAYTYPEU2412_T1038017045_H
#define U24ARRAYTYPEU2412_T1038017045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t1038017045 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t1038017045__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T1038017045_H
#ifndef DELEGATE_T3679647300_H
#define DELEGATE_T3679647300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3679647300  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t4018218907 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3679647300, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3679647300, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3679647300, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3679647300, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3679647300, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3679647300, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3679647300, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3679647300, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3679647300, ___data_8)); }
	inline DelegateData_t4018218907 * get_data_8() const { return ___data_8; }
	inline DelegateData_t4018218907 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t4018218907 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3679647300_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T1206946446_H
#define TYPEINITIALIZATIONEXCEPTION_T1206946446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t1206946446  : public SystemException_t2436044558
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t1206946446, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T1206946446_H
#ifndef TYPECODE_T3919353840_H
#define TYPECODE_T3919353840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t3919353840 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t3919353840, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T3919353840_H
#ifndef TYPELOADEXCEPTION_T1039666947_H
#define TYPELOADEXCEPTION_T1039666947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t1039666947  : public SystemException_t2436044558
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t1039666947, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t1039666947, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T1039666947_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T3012243568_H
#define UNAUTHORIZEDACCESSEXCEPTION_T3012243568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t3012243568  : public SystemException_t2436044558
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T3012243568_H
#ifndef CONFIDENCEFACTOR_T1231617457_H
#define CONFIDENCEFACTOR_T1231617457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t1231617457 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t1231617457, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T1231617457_H
#ifndef UNITYTYPE_T3702812767_H
#define UNITYTYPE_T3702812767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t3702812767 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t3702812767, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T3702812767_H
#ifndef WEAKREFERENCE_T2568739461_H
#define WEAKREFERENCE_T2568739461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t2568739461  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t4291390170  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t2568739461, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t2568739461, ___gcHandle_1)); }
	inline GCHandle_t4291390170  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t4291390170 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t4291390170  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T2568739461_H
#ifndef WEBHEADERCOLLECTION_T2179699090_H
#define WEBHEADERCOLLECTION_T2179699090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebHeaderCollection
struct  WebHeaderCollection_t2179699090  : public NameValueCollection_t1586477470
{
public:
	// System.Boolean System.Net.WebHeaderCollection::internallyCreated
	bool ___internallyCreated_15;

public:
	inline static int32_t get_offset_of_internallyCreated_15() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t2179699090, ___internallyCreated_15)); }
	inline bool get_internallyCreated_15() const { return ___internallyCreated_15; }
	inline bool* get_address_of_internallyCreated_15() { return &___internallyCreated_15; }
	inline void set_internallyCreated_15(bool value)
	{
		___internallyCreated_15 = value;
	}
};

struct WebHeaderCollection_t2179699090_StaticFields
{
public:
	// System.Collections.Hashtable System.Net.WebHeaderCollection::restricted
	Hashtable_t812069807 * ___restricted_12;
	// System.Collections.Hashtable System.Net.WebHeaderCollection::multiValue
	Hashtable_t812069807 * ___multiValue_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> System.Net.WebHeaderCollection::restricted_response
	Dictionary_2_t2457359570 * ___restricted_response_14;
	// System.Boolean[] System.Net.WebHeaderCollection::allowed_chars
	BooleanU5BU5D_t1500524663* ___allowed_chars_16;

public:
	inline static int32_t get_offset_of_restricted_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t2179699090_StaticFields, ___restricted_12)); }
	inline Hashtable_t812069807 * get_restricted_12() const { return ___restricted_12; }
	inline Hashtable_t812069807 ** get_address_of_restricted_12() { return &___restricted_12; }
	inline void set_restricted_12(Hashtable_t812069807 * value)
	{
		___restricted_12 = value;
		Il2CppCodeGenWriteBarrier((&___restricted_12), value);
	}

	inline static int32_t get_offset_of_multiValue_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t2179699090_StaticFields, ___multiValue_13)); }
	inline Hashtable_t812069807 * get_multiValue_13() const { return ___multiValue_13; }
	inline Hashtable_t812069807 ** get_address_of_multiValue_13() { return &___multiValue_13; }
	inline void set_multiValue_13(Hashtable_t812069807 * value)
	{
		___multiValue_13 = value;
		Il2CppCodeGenWriteBarrier((&___multiValue_13), value);
	}

	inline static int32_t get_offset_of_restricted_response_14() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t2179699090_StaticFields, ___restricted_response_14)); }
	inline Dictionary_2_t2457359570 * get_restricted_response_14() const { return ___restricted_response_14; }
	inline Dictionary_2_t2457359570 ** get_address_of_restricted_response_14() { return &___restricted_response_14; }
	inline void set_restricted_response_14(Dictionary_2_t2457359570 * value)
	{
		___restricted_response_14 = value;
		Il2CppCodeGenWriteBarrier((&___restricted_response_14), value);
	}

	inline static int32_t get_offset_of_allowed_chars_16() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t2179699090_StaticFields, ___allowed_chars_16)); }
	inline BooleanU5BU5D_t1500524663* get_allowed_chars_16() const { return ___allowed_chars_16; }
	inline BooleanU5BU5D_t1500524663** get_address_of_allowed_chars_16() { return &___allowed_chars_16; }
	inline void set_allowed_chars_16(BooleanU5BU5D_t1500524663* value)
	{
		___allowed_chars_16 = value;
		Il2CppCodeGenWriteBarrier((&___allowed_chars_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBHEADERCOLLECTION_T2179699090_H
#ifndef SECURITYPROTOCOLTYPE_T1300439020_H
#define SECURITYPROTOCOLTYPE_T1300439020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SecurityProtocolType
struct  SecurityProtocolType_t1300439020 
{
public:
	// System.Int32 System.Net.SecurityProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityProtocolType_t1300439020, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPROTOCOLTYPE_T1300439020_H
#ifndef FILEACCESS_T3198072366_H
#define FILEACCESS_T3198072366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t3198072366 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t3198072366, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T3198072366_H
#ifndef CURRENTSYSTEMTIMEZONE_T2624784343_H
#define CURRENTSYSTEMTIMEZONE_T2624784343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t2624784343  : public TimeZone_t2254046783
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t812069807 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t4098384374  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t4098384374  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2624784343, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2624784343, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2624784343, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t812069807 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t812069807 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t812069807 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2624784343, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2624784343, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t4098384374  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t4098384374 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t4098384374  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2624784343, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t4098384374  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t4098384374 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t4098384374  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t2624784343_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t1798532590 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2624784343_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2624784343_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t1798532590 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t1798532590 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t1798532590 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T2624784343_H
#ifndef DATETIMEKIND_T820935369_H
#define DATETIMEKIND_T820935369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t820935369 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t820935369, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T820935369_H
#ifndef EDITORBROWSABLESTATE_T729317441_H
#define EDITORBROWSABLESTATE_T729317441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t729317441 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t729317441, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLESTATE_T729317441_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2299327102_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2299327102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2299327102  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t3951700725  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t435049647  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t435049647  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t435049647  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t435049647  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t3801525909  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t3801525909  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t693312292  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t2681047087  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t2215611852  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t207411747  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t1404950213  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t1404950213  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t1404950213  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t1404950213  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t1038017045  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t1038017045  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t1038017045  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t3801525909  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t2891533318  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t3352250755  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t1362799661  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t2681047087  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t1404950213  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t509396634  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t2215611852  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t967074453  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t1987446938  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t3951700725  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t3801525909  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t207411747  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t1987446938  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t1987446938  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t262211290  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t262211290  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t1587884164  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t262211290  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t262211290  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t2203700664  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t2203700664  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t2203700664  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t2203700664  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t2203700664  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t2203700664  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t2203700664  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t2203700664  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t262211290  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t1869689134  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t1038017045  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t3642357015  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t262211290  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t2308444771  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t2308444771  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t3951700725  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t3951700725 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t3951700725  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t435049647  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t435049647 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t435049647  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t435049647  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t435049647 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t435049647  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t435049647  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t435049647 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t435049647  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t435049647  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t435049647 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t435049647  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t3801525909  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t3801525909 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t3801525909  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t3801525909  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t3801525909 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t3801525909  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t693312292  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t693312292 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t693312292  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t2681047087  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t2681047087 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t2681047087  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t2215611852  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t2215611852 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t2215611852  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t207411747  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t207411747 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t207411747  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t1404950213  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t1404950213 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t1404950213  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t1404950213  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t1404950213 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t1404950213  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t1404950213  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t1404950213 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t1404950213  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t1404950213  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t1404950213 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t1404950213  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t1038017045  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t1038017045 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t1038017045  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t1038017045  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t1038017045 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t1038017045  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t1038017045  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t1038017045 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t1038017045  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t3801525909  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t3801525909 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t3801525909  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t2891533318  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t2891533318 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t2891533318  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t3352250755  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t3352250755 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t3352250755  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t1362799661  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t1362799661 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t1362799661  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t2681047087  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t2681047087 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t2681047087  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t1404950213  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t1404950213 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t1404950213  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t509396634  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t509396634 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t509396634  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t2215611852  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t2215611852 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t2215611852  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t967074453  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t967074453 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t967074453  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t1987446938  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t1987446938 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t1987446938  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t3951700725  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t3951700725 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t3951700725  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t3801525909  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t3801525909 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t3801525909  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t207411747  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t207411747 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t207411747  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t1987446938  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t1987446938 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t1987446938  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t1987446938  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t1987446938 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t1987446938  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t262211290  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t262211290 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t262211290  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t262211290  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t262211290 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t262211290  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t1587884164  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t1587884164 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t1587884164  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t262211290  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t262211290 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t262211290  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t262211290  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t262211290 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t262211290  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t2203700664  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t2203700664 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t2203700664  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t2203700664  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t2203700664 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t2203700664  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t2203700664  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t2203700664 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t2203700664  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t2203700664  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t2203700664 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t2203700664  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t2203700664  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t2203700664 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t2203700664  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t2203700664  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t2203700664 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t2203700664  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t2203700664  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t2203700664 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t2203700664  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t2203700664  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t2203700664 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t2203700664  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t262211290  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t262211290 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t262211290  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t1869689134  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t1869689134 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t1869689134  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t1038017045  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t1038017045 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t1038017045  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t3642357015  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t3642357015 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t3642357015  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t262211290  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t262211290 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t262211290  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t2308444771  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t2308444771 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t2308444771  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t2308444771  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t2308444771 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t2308444771  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2299327102_H
#ifndef AUTHENTICATIONLEVEL_T2945175224_H
#define AUTHENTICATIONLEVEL_T2945175224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t2945175224 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t2945175224, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONLEVEL_T2945175224_H
#ifndef SSLPOLICYERRORS_T633183037_H
#define SSLPOLICYERRORS_T633183037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t633183037 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t633183037, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLPOLICYERRORS_T633183037_H
#ifndef ADDRESSFAMILY_T420261665_H
#define ADDRESSFAMILY_T420261665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t420261665 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t420261665, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRESSFAMILY_T420261665_H
#ifndef EDITORBROWSABLEATTRIBUTE_T2369117313_H
#define EDITORBROWSABLEATTRIBUTE_T2369117313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t2369117313  : public Attribute_t1013777665
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t2369117313, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T2369117313_H
#ifndef IPADDRESS_T4117744763_H
#define IPADDRESS_T4117744763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t4117744763  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t79418738* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763, ___m_Address_0)); }
	inline int64_t get_m_Address_0() const { return ___m_Address_0; }
	inline int64_t* get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(int64_t value)
	{
		___m_Address_0 = value;
	}

	inline static int32_t get_offset_of_m_Family_1() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763, ___m_Family_1)); }
	inline int32_t get_m_Family_1() const { return ___m_Family_1; }
	inline int32_t* get_address_of_m_Family_1() { return &___m_Family_1; }
	inline void set_m_Family_1(int32_t value)
	{
		___m_Family_1 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_2() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763, ___m_Numbers_2)); }
	inline UInt16U5BU5D_t79418738* get_m_Numbers_2() const { return ___m_Numbers_2; }
	inline UInt16U5BU5D_t79418738** get_address_of_m_Numbers_2() { return &___m_Numbers_2; }
	inline void set_m_Numbers_2(UInt16U5BU5D_t79418738* value)
	{
		___m_Numbers_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_2), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_3() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763, ___m_ScopeId_3)); }
	inline int64_t get_m_ScopeId_3() const { return ___m_ScopeId_3; }
	inline int64_t* get_address_of_m_ScopeId_3() { return &___m_ScopeId_3; }
	inline void set_m_ScopeId_3(int64_t value)
	{
		___m_ScopeId_3 = value;
	}
};

struct IPAddress_t4117744763_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t4117744763 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t4117744763 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t4117744763 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t4117744763 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t4117744763 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t4117744763 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t4117744763 * ___IPv6None_10;

public:
	inline static int32_t get_offset_of_Any_4() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763_StaticFields, ___Any_4)); }
	inline IPAddress_t4117744763 * get_Any_4() const { return ___Any_4; }
	inline IPAddress_t4117744763 ** get_address_of_Any_4() { return &___Any_4; }
	inline void set_Any_4(IPAddress_t4117744763 * value)
	{
		___Any_4 = value;
		Il2CppCodeGenWriteBarrier((&___Any_4), value);
	}

	inline static int32_t get_offset_of_Broadcast_5() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763_StaticFields, ___Broadcast_5)); }
	inline IPAddress_t4117744763 * get_Broadcast_5() const { return ___Broadcast_5; }
	inline IPAddress_t4117744763 ** get_address_of_Broadcast_5() { return &___Broadcast_5; }
	inline void set_Broadcast_5(IPAddress_t4117744763 * value)
	{
		___Broadcast_5 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_5), value);
	}

	inline static int32_t get_offset_of_Loopback_6() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763_StaticFields, ___Loopback_6)); }
	inline IPAddress_t4117744763 * get_Loopback_6() const { return ___Loopback_6; }
	inline IPAddress_t4117744763 ** get_address_of_Loopback_6() { return &___Loopback_6; }
	inline void set_Loopback_6(IPAddress_t4117744763 * value)
	{
		___Loopback_6 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_6), value);
	}

	inline static int32_t get_offset_of_None_7() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763_StaticFields, ___None_7)); }
	inline IPAddress_t4117744763 * get_None_7() const { return ___None_7; }
	inline IPAddress_t4117744763 ** get_address_of_None_7() { return &___None_7; }
	inline void set_None_7(IPAddress_t4117744763 * value)
	{
		___None_7 = value;
		Il2CppCodeGenWriteBarrier((&___None_7), value);
	}

	inline static int32_t get_offset_of_IPv6Any_8() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763_StaticFields, ___IPv6Any_8)); }
	inline IPAddress_t4117744763 * get_IPv6Any_8() const { return ___IPv6Any_8; }
	inline IPAddress_t4117744763 ** get_address_of_IPv6Any_8() { return &___IPv6Any_8; }
	inline void set_IPv6Any_8(IPAddress_t4117744763 * value)
	{
		___IPv6Any_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_8), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_9() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763_StaticFields, ___IPv6Loopback_9)); }
	inline IPAddress_t4117744763 * get_IPv6Loopback_9() const { return ___IPv6Loopback_9; }
	inline IPAddress_t4117744763 ** get_address_of_IPv6Loopback_9() { return &___IPv6Loopback_9; }
	inline void set_IPv6Loopback_9(IPAddress_t4117744763 * value)
	{
		___IPv6Loopback_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_9), value);
	}

	inline static int32_t get_offset_of_IPv6None_10() { return static_cast<int32_t>(offsetof(IPAddress_t4117744763_StaticFields, ___IPv6None_10)); }
	inline IPAddress_t4117744763 * get_IPv6None_10() const { return ___IPv6None_10; }
	inline IPAddress_t4117744763 ** get_address_of_IPv6None_10() { return &___IPv6None_10; }
	inline void set_IPv6None_10(IPAddress_t4117744763 * value)
	{
		___IPv6None_10 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T4117744763_H
#ifndef DATETIME_T2990056487_H
#define DATETIME_T2990056487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2990056487 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t4098384374  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2990056487, ___ticks_0)); }
	inline TimeSpan_t4098384374  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t4098384374 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t4098384374  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2990056487, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2990056487_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2990056487  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2990056487  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t148011198* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t148011198* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t148011198* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t148011198* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t148011198* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t148011198* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t148011198* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1884137699* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1884137699* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2990056487  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2990056487 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2990056487  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___MinValue_3)); }
	inline DateTime_t2990056487  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2990056487 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2990056487  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t148011198* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t148011198** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t148011198* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t148011198* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t148011198** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t148011198* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t148011198* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t148011198** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t148011198* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t148011198* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t148011198** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t148011198* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t148011198* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t148011198** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t148011198* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t148011198* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t148011198** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t148011198* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t148011198* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t148011198** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t148011198* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t1884137699* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t1884137699** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t1884137699* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t1884137699* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t1884137699** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t1884137699* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2990056487_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T2990056487_H
#ifndef SERVICEPOINTMANAGER_T2653907883_H
#define SERVICEPOINTMANAGER_T2653907883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePointManager
struct  ServicePointManager_t2653907883  : public RuntimeObject
{
public:

public:
};

struct ServicePointManager_t2653907883_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.ServicePointManager::servicePoints
	HybridDictionary_t4262792808 * ___servicePoints_0;
	// System.Net.ICertificatePolicy System.Net.ServicePointManager::policy
	RuntimeObject* ___policy_1;
	// System.Int32 System.Net.ServicePointManager::defaultConnectionLimit
	int32_t ___defaultConnectionLimit_2;
	// System.Int32 System.Net.ServicePointManager::maxServicePointIdleTime
	int32_t ___maxServicePointIdleTime_3;
	// System.Int32 System.Net.ServicePointManager::maxServicePoints
	int32_t ___maxServicePoints_4;
	// System.Boolean System.Net.ServicePointManager::_checkCRL
	bool ____checkCRL_5;
	// System.Net.SecurityProtocolType System.Net.ServicePointManager::_securityProtocol
	int32_t ____securityProtocol_6;
	// System.Boolean System.Net.ServicePointManager::expectContinue
	bool ___expectContinue_7;
	// System.Boolean System.Net.ServicePointManager::useNagle
	bool ___useNagle_8;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::server_cert_cb
	RemoteCertificateValidationCallback_t2647231546 * ___server_cert_cb_9;

public:
	inline static int32_t get_offset_of_servicePoints_0() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ___servicePoints_0)); }
	inline HybridDictionary_t4262792808 * get_servicePoints_0() const { return ___servicePoints_0; }
	inline HybridDictionary_t4262792808 ** get_address_of_servicePoints_0() { return &___servicePoints_0; }
	inline void set_servicePoints_0(HybridDictionary_t4262792808 * value)
	{
		___servicePoints_0 = value;
		Il2CppCodeGenWriteBarrier((&___servicePoints_0), value);
	}

	inline static int32_t get_offset_of_policy_1() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ___policy_1)); }
	inline RuntimeObject* get_policy_1() const { return ___policy_1; }
	inline RuntimeObject** get_address_of_policy_1() { return &___policy_1; }
	inline void set_policy_1(RuntimeObject* value)
	{
		___policy_1 = value;
		Il2CppCodeGenWriteBarrier((&___policy_1), value);
	}

	inline static int32_t get_offset_of_defaultConnectionLimit_2() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ___defaultConnectionLimit_2)); }
	inline int32_t get_defaultConnectionLimit_2() const { return ___defaultConnectionLimit_2; }
	inline int32_t* get_address_of_defaultConnectionLimit_2() { return &___defaultConnectionLimit_2; }
	inline void set_defaultConnectionLimit_2(int32_t value)
	{
		___defaultConnectionLimit_2 = value;
	}

	inline static int32_t get_offset_of_maxServicePointIdleTime_3() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ___maxServicePointIdleTime_3)); }
	inline int32_t get_maxServicePointIdleTime_3() const { return ___maxServicePointIdleTime_3; }
	inline int32_t* get_address_of_maxServicePointIdleTime_3() { return &___maxServicePointIdleTime_3; }
	inline void set_maxServicePointIdleTime_3(int32_t value)
	{
		___maxServicePointIdleTime_3 = value;
	}

	inline static int32_t get_offset_of_maxServicePoints_4() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ___maxServicePoints_4)); }
	inline int32_t get_maxServicePoints_4() const { return ___maxServicePoints_4; }
	inline int32_t* get_address_of_maxServicePoints_4() { return &___maxServicePoints_4; }
	inline void set_maxServicePoints_4(int32_t value)
	{
		___maxServicePoints_4 = value;
	}

	inline static int32_t get_offset_of__checkCRL_5() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ____checkCRL_5)); }
	inline bool get__checkCRL_5() const { return ____checkCRL_5; }
	inline bool* get_address_of__checkCRL_5() { return &____checkCRL_5; }
	inline void set__checkCRL_5(bool value)
	{
		____checkCRL_5 = value;
	}

	inline static int32_t get_offset_of__securityProtocol_6() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ____securityProtocol_6)); }
	inline int32_t get__securityProtocol_6() const { return ____securityProtocol_6; }
	inline int32_t* get_address_of__securityProtocol_6() { return &____securityProtocol_6; }
	inline void set__securityProtocol_6(int32_t value)
	{
		____securityProtocol_6 = value;
	}

	inline static int32_t get_offset_of_expectContinue_7() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ___expectContinue_7)); }
	inline bool get_expectContinue_7() const { return ___expectContinue_7; }
	inline bool* get_address_of_expectContinue_7() { return &___expectContinue_7; }
	inline void set_expectContinue_7(bool value)
	{
		___expectContinue_7 = value;
	}

	inline static int32_t get_offset_of_useNagle_8() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ___useNagle_8)); }
	inline bool get_useNagle_8() const { return ___useNagle_8; }
	inline bool* get_address_of_useNagle_8() { return &___useNagle_8; }
	inline void set_useNagle_8(bool value)
	{
		___useNagle_8 = value;
	}

	inline static int32_t get_offset_of_server_cert_cb_9() { return static_cast<int32_t>(offsetof(ServicePointManager_t2653907883_StaticFields, ___server_cert_cb_9)); }
	inline RemoteCertificateValidationCallback_t2647231546 * get_server_cert_cb_9() const { return ___server_cert_cb_9; }
	inline RemoteCertificateValidationCallback_t2647231546 ** get_address_of_server_cert_cb_9() { return &___server_cert_cb_9; }
	inline void set_server_cert_cb_9(RemoteCertificateValidationCallback_t2647231546 * value)
	{
		___server_cert_cb_9 = value;
		Il2CppCodeGenWriteBarrier((&___server_cert_cb_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEPOINTMANAGER_T2653907883_H
#ifndef WEBREQUEST_T4224408346_H
#define WEBREQUEST_T4224408346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t4224408346  : public MarshalByRefObject_t2489049657
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t4224408346, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t4224408346_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t4262792808 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t4224408346_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t4262792808 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t4262792808 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t4262792808 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t4224408346_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t4224408346_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t4224408346_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T4224408346_H
#ifndef UNITYSERIALIZATIONHOLDER_T1578014241_H
#define UNITYSERIALIZATIONHOLDER_T1578014241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t1578014241  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1578014241, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1578014241, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1578014241, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T1578014241_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t3679647300
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef FTPWEBREQUEST_T2816538681_H
#define FTPWEBREQUEST_T2816538681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpWebRequest
struct  FtpWebRequest_t2816538681  : public WebRequest_t4224408346
{
public:
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t771627871 * ___requestUri_6;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	RuntimeObject* ___proxy_7;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout_8;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout_9;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary_10;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive_11;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method_12;
	// System.Object System.Net.FtpWebRequest::locker
	RuntimeObject * ___locker_13;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t2647231546 * ___callback_15;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681, ___requestUri_6)); }
	inline Uri_t771627871 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t771627871 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t771627871 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___requestUri_6), value);
	}

	inline static int32_t get_offset_of_proxy_7() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681, ___proxy_7)); }
	inline RuntimeObject* get_proxy_7() const { return ___proxy_7; }
	inline RuntimeObject** get_address_of_proxy_7() { return &___proxy_7; }
	inline void set_proxy_7(RuntimeObject* value)
	{
		___proxy_7 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_7), value);
	}

	inline static int32_t get_offset_of_timeout_8() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681, ___timeout_8)); }
	inline int32_t get_timeout_8() const { return ___timeout_8; }
	inline int32_t* get_address_of_timeout_8() { return &___timeout_8; }
	inline void set_timeout_8(int32_t value)
	{
		___timeout_8 = value;
	}

	inline static int32_t get_offset_of_rwTimeout_9() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681, ___rwTimeout_9)); }
	inline int32_t get_rwTimeout_9() const { return ___rwTimeout_9; }
	inline int32_t* get_address_of_rwTimeout_9() { return &___rwTimeout_9; }
	inline void set_rwTimeout_9(int32_t value)
	{
		___rwTimeout_9 = value;
	}

	inline static int32_t get_offset_of_binary_10() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681, ___binary_10)); }
	inline bool get_binary_10() const { return ___binary_10; }
	inline bool* get_address_of_binary_10() { return &___binary_10; }
	inline void set_binary_10(bool value)
	{
		___binary_10 = value;
	}

	inline static int32_t get_offset_of_usePassive_11() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681, ___usePassive_11)); }
	inline bool get_usePassive_11() const { return ___usePassive_11; }
	inline bool* get_address_of_usePassive_11() { return &___usePassive_11; }
	inline void set_usePassive_11(bool value)
	{
		___usePassive_11 = value;
	}

	inline static int32_t get_offset_of_method_12() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681, ___method_12)); }
	inline String_t* get_method_12() const { return ___method_12; }
	inline String_t** get_address_of_method_12() { return &___method_12; }
	inline void set_method_12(String_t* value)
	{
		___method_12 = value;
		Il2CppCodeGenWriteBarrier((&___method_12), value);
	}

	inline static int32_t get_offset_of_locker_13() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681, ___locker_13)); }
	inline RuntimeObject * get_locker_13() const { return ___locker_13; }
	inline RuntimeObject ** get_address_of_locker_13() { return &___locker_13; }
	inline void set_locker_13(RuntimeObject * value)
	{
		___locker_13 = value;
		Il2CppCodeGenWriteBarrier((&___locker_13), value);
	}

	inline static int32_t get_offset_of_callback_15() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681, ___callback_15)); }
	inline RemoteCertificateValidationCallback_t2647231546 * get_callback_15() const { return ___callback_15; }
	inline RemoteCertificateValidationCallback_t2647231546 ** get_address_of_callback_15() { return &___callback_15; }
	inline void set_callback_15(RemoteCertificateValidationCallback_t2647231546 * value)
	{
		___callback_15 = value;
		Il2CppCodeGenWriteBarrier((&___callback_15), value);
	}
};

struct FtpWebRequest_t2816538681_StaticFields
{
public:
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t148011198* ___supportedCommands_14;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t2647231546 * ___U3CU3Ef__amU24cache1C_16;

public:
	inline static int32_t get_offset_of_supportedCommands_14() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681_StaticFields, ___supportedCommands_14)); }
	inline StringU5BU5D_t148011198* get_supportedCommands_14() const { return ___supportedCommands_14; }
	inline StringU5BU5D_t148011198** get_address_of_supportedCommands_14() { return &___supportedCommands_14; }
	inline void set_supportedCommands_14(StringU5BU5D_t148011198* value)
	{
		___supportedCommands_14 = value;
		Il2CppCodeGenWriteBarrier((&___supportedCommands_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_16() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2816538681_StaticFields, ___U3CU3Ef__amU24cache1C_16)); }
	inline RemoteCertificateValidationCallback_t2647231546 * get_U3CU3Ef__amU24cache1C_16() const { return ___U3CU3Ef__amU24cache1C_16; }
	inline RemoteCertificateValidationCallback_t2647231546 ** get_address_of_U3CU3Ef__amU24cache1C_16() { return &___U3CU3Ef__amU24cache1C_16; }
	inline void set_U3CU3Ef__amU24cache1C_16(RemoteCertificateValidationCallback_t2647231546 * value)
	{
		___U3CU3Ef__amU24cache1C_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1C_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPWEBREQUEST_T2816538681_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T1080090931_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T1080090931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t1080090931  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T1080090931_H
#ifndef RESOLVEEVENTHANDLER_T1049062093_H
#define RESOLVEEVENTHANDLER_T1049062093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t1049062093  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T1049062093_H
#ifndef PRIMALITYTEST_T3573054752_H
#define PRIMALITYTEST_T3573054752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t3573054752  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T3573054752_H
#ifndef APPDOMAININITIALIZER_T1228590088_H
#define APPDOMAININITIALIZER_T1228590088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t1228590088  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T1228590088_H
#ifndef MEMBERFILTER_T3716749858_H
#define MEMBERFILTER_T3716749858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t3716749858  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T3716749858_H
#ifndef TYPEFILTER_T952663124_H
#define TYPEFILTER_T952663124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t952663124  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T952663124_H
#ifndef CROSSCONTEXTDELEGATE_T3526864462_H
#define CROSSCONTEXTDELEGATE_T3526864462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t3526864462  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T3526864462_H
#ifndef HEADERHANDLER_T3548379305_H
#define HEADERHANDLER_T3548379305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t3548379305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T3548379305_H
#ifndef SENDORPOSTCALLBACK_T1558833321_H
#define SENDORPOSTCALLBACK_T1558833321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t1558833321  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T1558833321_H
#ifndef EVENTHANDLER_T3317544528_H
#define EVENTHANDLER_T3317544528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t3317544528  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T3317544528_H
#ifndef THREADSTART_T120170336_H
#define THREADSTART_T120170336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t120170336  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T120170336_H
#ifndef SERVICEPOINT_T3354562874_H
#define SERVICEPOINT_T3354562874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePoint
struct  ServicePoint_t3354562874  : public RuntimeObject
{
public:
	// System.Uri System.Net.ServicePoint::uri
	Uri_t771627871 * ___uri_0;
	// System.Int32 System.Net.ServicePoint::connectionLimit
	int32_t ___connectionLimit_1;
	// System.Int32 System.Net.ServicePoint::maxIdleTime
	int32_t ___maxIdleTime_2;
	// System.Int32 System.Net.ServicePoint::currentConnections
	int32_t ___currentConnections_3;
	// System.DateTime System.Net.ServicePoint::idleSince
	DateTime_t2990056487  ___idleSince_4;
	// System.Boolean System.Net.ServicePoint::usesProxy
	bool ___usesProxy_5;
	// System.Boolean System.Net.ServicePoint::sendContinue
	bool ___sendContinue_6;
	// System.Boolean System.Net.ServicePoint::useConnect
	bool ___useConnect_7;
	// System.Object System.Net.ServicePoint::locker
	RuntimeObject * ___locker_8;
	// System.Object System.Net.ServicePoint::hostE
	RuntimeObject * ___hostE_9;
	// System.Boolean System.Net.ServicePoint::useNagle
	bool ___useNagle_10;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___uri_0)); }
	inline Uri_t771627871 * get_uri_0() const { return ___uri_0; }
	inline Uri_t771627871 ** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(Uri_t771627871 * value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_0), value);
	}

	inline static int32_t get_offset_of_connectionLimit_1() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___connectionLimit_1)); }
	inline int32_t get_connectionLimit_1() const { return ___connectionLimit_1; }
	inline int32_t* get_address_of_connectionLimit_1() { return &___connectionLimit_1; }
	inline void set_connectionLimit_1(int32_t value)
	{
		___connectionLimit_1 = value;
	}

	inline static int32_t get_offset_of_maxIdleTime_2() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___maxIdleTime_2)); }
	inline int32_t get_maxIdleTime_2() const { return ___maxIdleTime_2; }
	inline int32_t* get_address_of_maxIdleTime_2() { return &___maxIdleTime_2; }
	inline void set_maxIdleTime_2(int32_t value)
	{
		___maxIdleTime_2 = value;
	}

	inline static int32_t get_offset_of_currentConnections_3() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___currentConnections_3)); }
	inline int32_t get_currentConnections_3() const { return ___currentConnections_3; }
	inline int32_t* get_address_of_currentConnections_3() { return &___currentConnections_3; }
	inline void set_currentConnections_3(int32_t value)
	{
		___currentConnections_3 = value;
	}

	inline static int32_t get_offset_of_idleSince_4() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___idleSince_4)); }
	inline DateTime_t2990056487  get_idleSince_4() const { return ___idleSince_4; }
	inline DateTime_t2990056487 * get_address_of_idleSince_4() { return &___idleSince_4; }
	inline void set_idleSince_4(DateTime_t2990056487  value)
	{
		___idleSince_4 = value;
	}

	inline static int32_t get_offset_of_usesProxy_5() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___usesProxy_5)); }
	inline bool get_usesProxy_5() const { return ___usesProxy_5; }
	inline bool* get_address_of_usesProxy_5() { return &___usesProxy_5; }
	inline void set_usesProxy_5(bool value)
	{
		___usesProxy_5 = value;
	}

	inline static int32_t get_offset_of_sendContinue_6() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___sendContinue_6)); }
	inline bool get_sendContinue_6() const { return ___sendContinue_6; }
	inline bool* get_address_of_sendContinue_6() { return &___sendContinue_6; }
	inline void set_sendContinue_6(bool value)
	{
		___sendContinue_6 = value;
	}

	inline static int32_t get_offset_of_useConnect_7() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___useConnect_7)); }
	inline bool get_useConnect_7() const { return ___useConnect_7; }
	inline bool* get_address_of_useConnect_7() { return &___useConnect_7; }
	inline void set_useConnect_7(bool value)
	{
		___useConnect_7 = value;
	}

	inline static int32_t get_offset_of_locker_8() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___locker_8)); }
	inline RuntimeObject * get_locker_8() const { return ___locker_8; }
	inline RuntimeObject ** get_address_of_locker_8() { return &___locker_8; }
	inline void set_locker_8(RuntimeObject * value)
	{
		___locker_8 = value;
		Il2CppCodeGenWriteBarrier((&___locker_8), value);
	}

	inline static int32_t get_offset_of_hostE_9() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___hostE_9)); }
	inline RuntimeObject * get_hostE_9() const { return ___hostE_9; }
	inline RuntimeObject ** get_address_of_hostE_9() { return &___hostE_9; }
	inline void set_hostE_9(RuntimeObject * value)
	{
		___hostE_9 = value;
		Il2CppCodeGenWriteBarrier((&___hostE_9), value);
	}

	inline static int32_t get_offset_of_useNagle_10() { return static_cast<int32_t>(offsetof(ServicePoint_t3354562874, ___useNagle_10)); }
	inline bool get_useNagle_10() const { return ___useNagle_10; }
	inline bool* get_address_of_useNagle_10() { return &___useNagle_10; }
	inline void set_useNagle_10(bool value)
	{
		___useNagle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEPOINT_T3354562874_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T2585898871_H
#define ASSEMBLYLOADEVENTHANDLER_T2585898871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t2585898871  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T2585898871_H
#ifndef TIMERCALLBACK_T3501641311_H
#define TIMERCALLBACK_T3501641311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t3501641311  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T3501641311_H
#ifndef HTTPWEBREQUEST_T2441666790_H
#define HTTPWEBREQUEST_T2441666790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest
struct  HttpWebRequest_t2441666790  : public WebRequest_t4224408346
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t771627871 * ___requestUri_6;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t771627871 * ___actualUri_7;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_8;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_9;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_10;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t3258278373 * ___certificates_11;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_12;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_13;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_t2179699090 * ___webHeaders_14;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_15;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_16;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_17;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_18;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_19;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_20;
	// System.Version System.Net.HttpWebRequest::version
	Version_t2319920906 * ___version_21;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_22;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_23;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t3354562874 * ___servicePoint_24;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_25;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_26;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject * ___locker_27;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_29;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___requestUri_6)); }
	inline Uri_t771627871 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t771627871 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t771627871 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___requestUri_6), value);
	}

	inline static int32_t get_offset_of_actualUri_7() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___actualUri_7)); }
	inline Uri_t771627871 * get_actualUri_7() const { return ___actualUri_7; }
	inline Uri_t771627871 ** get_address_of_actualUri_7() { return &___actualUri_7; }
	inline void set_actualUri_7(Uri_t771627871 * value)
	{
		___actualUri_7 = value;
		Il2CppCodeGenWriteBarrier((&___actualUri_7), value);
	}

	inline static int32_t get_offset_of_hostChanged_8() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___hostChanged_8)); }
	inline bool get_hostChanged_8() const { return ___hostChanged_8; }
	inline bool* get_address_of_hostChanged_8() { return &___hostChanged_8; }
	inline void set_hostChanged_8(bool value)
	{
		___hostChanged_8 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_9() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___allowAutoRedirect_9)); }
	inline bool get_allowAutoRedirect_9() const { return ___allowAutoRedirect_9; }
	inline bool* get_address_of_allowAutoRedirect_9() { return &___allowAutoRedirect_9; }
	inline void set_allowAutoRedirect_9(bool value)
	{
		___allowAutoRedirect_9 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_10() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___allowBuffering_10)); }
	inline bool get_allowBuffering_10() const { return ___allowBuffering_10; }
	inline bool* get_address_of_allowBuffering_10() { return &___allowBuffering_10; }
	inline void set_allowBuffering_10(bool value)
	{
		___allowBuffering_10 = value;
	}

	inline static int32_t get_offset_of_certificates_11() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___certificates_11)); }
	inline X509CertificateCollection_t3258278373 * get_certificates_11() const { return ___certificates_11; }
	inline X509CertificateCollection_t3258278373 ** get_address_of_certificates_11() { return &___certificates_11; }
	inline void set_certificates_11(X509CertificateCollection_t3258278373 * value)
	{
		___certificates_11 = value;
		Il2CppCodeGenWriteBarrier((&___certificates_11), value);
	}

	inline static int32_t get_offset_of_connectionGroup_12() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___connectionGroup_12)); }
	inline String_t* get_connectionGroup_12() const { return ___connectionGroup_12; }
	inline String_t** get_address_of_connectionGroup_12() { return &___connectionGroup_12; }
	inline void set_connectionGroup_12(String_t* value)
	{
		___connectionGroup_12 = value;
		Il2CppCodeGenWriteBarrier((&___connectionGroup_12), value);
	}

	inline static int32_t get_offset_of_contentLength_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___contentLength_13)); }
	inline int64_t get_contentLength_13() const { return ___contentLength_13; }
	inline int64_t* get_address_of_contentLength_13() { return &___contentLength_13; }
	inline void set_contentLength_13(int64_t value)
	{
		___contentLength_13 = value;
	}

	inline static int32_t get_offset_of_webHeaders_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___webHeaders_14)); }
	inline WebHeaderCollection_t2179699090 * get_webHeaders_14() const { return ___webHeaders_14; }
	inline WebHeaderCollection_t2179699090 ** get_address_of_webHeaders_14() { return &___webHeaders_14; }
	inline void set_webHeaders_14(WebHeaderCollection_t2179699090 * value)
	{
		___webHeaders_14 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_14), value);
	}

	inline static int32_t get_offset_of_keepAlive_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___keepAlive_15)); }
	inline bool get_keepAlive_15() const { return ___keepAlive_15; }
	inline bool* get_address_of_keepAlive_15() { return &___keepAlive_15; }
	inline void set_keepAlive_15(bool value)
	{
		___keepAlive_15 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___maxAutoRedirect_16)); }
	inline int32_t get_maxAutoRedirect_16() const { return ___maxAutoRedirect_16; }
	inline int32_t* get_address_of_maxAutoRedirect_16() { return &___maxAutoRedirect_16; }
	inline void set_maxAutoRedirect_16(int32_t value)
	{
		___maxAutoRedirect_16 = value;
	}

	inline static int32_t get_offset_of_mediaType_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___mediaType_17)); }
	inline String_t* get_mediaType_17() const { return ___mediaType_17; }
	inline String_t** get_address_of_mediaType_17() { return &___mediaType_17; }
	inline void set_mediaType_17(String_t* value)
	{
		___mediaType_17 = value;
		Il2CppCodeGenWriteBarrier((&___mediaType_17), value);
	}

	inline static int32_t get_offset_of_method_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___method_18)); }
	inline String_t* get_method_18() const { return ___method_18; }
	inline String_t** get_address_of_method_18() { return &___method_18; }
	inline void set_method_18(String_t* value)
	{
		___method_18 = value;
		Il2CppCodeGenWriteBarrier((&___method_18), value);
	}

	inline static int32_t get_offset_of_initialMethod_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___initialMethod_19)); }
	inline String_t* get_initialMethod_19() const { return ___initialMethod_19; }
	inline String_t** get_address_of_initialMethod_19() { return &___initialMethod_19; }
	inline void set_initialMethod_19(String_t* value)
	{
		___initialMethod_19 = value;
		Il2CppCodeGenWriteBarrier((&___initialMethod_19), value);
	}

	inline static int32_t get_offset_of_pipelined_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___pipelined_20)); }
	inline bool get_pipelined_20() const { return ___pipelined_20; }
	inline bool* get_address_of_pipelined_20() { return &___pipelined_20; }
	inline void set_pipelined_20(bool value)
	{
		___pipelined_20 = value;
	}

	inline static int32_t get_offset_of_version_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___version_21)); }
	inline Version_t2319920906 * get_version_21() const { return ___version_21; }
	inline Version_t2319920906 ** get_address_of_version_21() { return &___version_21; }
	inline void set_version_21(Version_t2319920906 * value)
	{
		___version_21 = value;
		Il2CppCodeGenWriteBarrier((&___version_21), value);
	}

	inline static int32_t get_offset_of_proxy_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___proxy_22)); }
	inline RuntimeObject* get_proxy_22() const { return ___proxy_22; }
	inline RuntimeObject** get_address_of_proxy_22() { return &___proxy_22; }
	inline void set_proxy_22(RuntimeObject* value)
	{
		___proxy_22 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_22), value);
	}

	inline static int32_t get_offset_of_sendChunked_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___sendChunked_23)); }
	inline bool get_sendChunked_23() const { return ___sendChunked_23; }
	inline bool* get_address_of_sendChunked_23() { return &___sendChunked_23; }
	inline void set_sendChunked_23(bool value)
	{
		___sendChunked_23 = value;
	}

	inline static int32_t get_offset_of_servicePoint_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___servicePoint_24)); }
	inline ServicePoint_t3354562874 * get_servicePoint_24() const { return ___servicePoint_24; }
	inline ServicePoint_t3354562874 ** get_address_of_servicePoint_24() { return &___servicePoint_24; }
	inline void set_servicePoint_24(ServicePoint_t3354562874 * value)
	{
		___servicePoint_24 = value;
		Il2CppCodeGenWriteBarrier((&___servicePoint_24), value);
	}

	inline static int32_t get_offset_of_timeout_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___timeout_25)); }
	inline int32_t get_timeout_25() const { return ___timeout_25; }
	inline int32_t* get_address_of_timeout_25() { return &___timeout_25; }
	inline void set_timeout_25(int32_t value)
	{
		___timeout_25 = value;
	}

	inline static int32_t get_offset_of_redirects_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___redirects_26)); }
	inline int32_t get_redirects_26() const { return ___redirects_26; }
	inline int32_t* get_address_of_redirects_26() { return &___redirects_26; }
	inline void set_redirects_26(int32_t value)
	{
		___redirects_26 = value;
	}

	inline static int32_t get_offset_of_locker_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___locker_27)); }
	inline RuntimeObject * get_locker_27() const { return ___locker_27; }
	inline RuntimeObject ** get_address_of_locker_27() { return &___locker_27; }
	inline void set_locker_27(RuntimeObject * value)
	{
		___locker_27 = value;
		Il2CppCodeGenWriteBarrier((&___locker_27), value);
	}

	inline static int32_t get_offset_of_readWriteTimeout_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790, ___readWriteTimeout_29)); }
	inline int32_t get_readWriteTimeout_29() const { return ___readWriteTimeout_29; }
	inline int32_t* get_address_of_readWriteTimeout_29() { return &___readWriteTimeout_29; }
	inline void set_readWriteTimeout_29(int32_t value)
	{
		___readWriteTimeout_29 = value;
	}
};

struct HttpWebRequest_t2441666790_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_28;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2441666790_StaticFields, ___defaultMaxResponseHeadersLength_28)); }
	inline int32_t get_defaultMaxResponseHeadersLength_28() const { return ___defaultMaxResponseHeadersLength_28; }
	inline int32_t* get_address_of_defaultMaxResponseHeadersLength_28() { return &___defaultMaxResponseHeadersLength_28; }
	inline void set_defaultMaxResponseHeadersLength_28(int32_t value)
	{
		___defaultMaxResponseHeadersLength_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBREQUEST_T2441666790_H
#ifndef WAITCALLBACK_T2662118202_H
#define WAITCALLBACK_T2662118202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t2662118202  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T2662118202_H
#ifndef FILEWEBREQUEST_T742784210_H
#define FILEWEBREQUEST_T742784210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequest
struct  FileWebRequest_t742784210  : public WebRequest_t4224408346
{
public:
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t771627871 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t2179699090 * ___webHeaders_7;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_8;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_9;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_10;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_11;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	RuntimeObject* ___proxy_12;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_13;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_14;

public:
	inline static int32_t get_offset_of_uri_6() { return static_cast<int32_t>(offsetof(FileWebRequest_t742784210, ___uri_6)); }
	inline Uri_t771627871 * get_uri_6() const { return ___uri_6; }
	inline Uri_t771627871 ** get_address_of_uri_6() { return &___uri_6; }
	inline void set_uri_6(Uri_t771627871 * value)
	{
		___uri_6 = value;
		Il2CppCodeGenWriteBarrier((&___uri_6), value);
	}

	inline static int32_t get_offset_of_webHeaders_7() { return static_cast<int32_t>(offsetof(FileWebRequest_t742784210, ___webHeaders_7)); }
	inline WebHeaderCollection_t2179699090 * get_webHeaders_7() const { return ___webHeaders_7; }
	inline WebHeaderCollection_t2179699090 ** get_address_of_webHeaders_7() { return &___webHeaders_7; }
	inline void set_webHeaders_7(WebHeaderCollection_t2179699090 * value)
	{
		___webHeaders_7 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_7), value);
	}

	inline static int32_t get_offset_of_connectionGroup_8() { return static_cast<int32_t>(offsetof(FileWebRequest_t742784210, ___connectionGroup_8)); }
	inline String_t* get_connectionGroup_8() const { return ___connectionGroup_8; }
	inline String_t** get_address_of_connectionGroup_8() { return &___connectionGroup_8; }
	inline void set_connectionGroup_8(String_t* value)
	{
		___connectionGroup_8 = value;
		Il2CppCodeGenWriteBarrier((&___connectionGroup_8), value);
	}

	inline static int32_t get_offset_of_contentLength_9() { return static_cast<int32_t>(offsetof(FileWebRequest_t742784210, ___contentLength_9)); }
	inline int64_t get_contentLength_9() const { return ___contentLength_9; }
	inline int64_t* get_address_of_contentLength_9() { return &___contentLength_9; }
	inline void set_contentLength_9(int64_t value)
	{
		___contentLength_9 = value;
	}

	inline static int32_t get_offset_of_fileAccess_10() { return static_cast<int32_t>(offsetof(FileWebRequest_t742784210, ___fileAccess_10)); }
	inline int32_t get_fileAccess_10() const { return ___fileAccess_10; }
	inline int32_t* get_address_of_fileAccess_10() { return &___fileAccess_10; }
	inline void set_fileAccess_10(int32_t value)
	{
		___fileAccess_10 = value;
	}

	inline static int32_t get_offset_of_method_11() { return static_cast<int32_t>(offsetof(FileWebRequest_t742784210, ___method_11)); }
	inline String_t* get_method_11() const { return ___method_11; }
	inline String_t** get_address_of_method_11() { return &___method_11; }
	inline void set_method_11(String_t* value)
	{
		___method_11 = value;
		Il2CppCodeGenWriteBarrier((&___method_11), value);
	}

	inline static int32_t get_offset_of_proxy_12() { return static_cast<int32_t>(offsetof(FileWebRequest_t742784210, ___proxy_12)); }
	inline RuntimeObject* get_proxy_12() const { return ___proxy_12; }
	inline RuntimeObject** get_address_of_proxy_12() { return &___proxy_12; }
	inline void set_proxy_12(RuntimeObject* value)
	{
		___proxy_12 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_12), value);
	}

	inline static int32_t get_offset_of_preAuthenticate_13() { return static_cast<int32_t>(offsetof(FileWebRequest_t742784210, ___preAuthenticate_13)); }
	inline bool get_preAuthenticate_13() const { return ___preAuthenticate_13; }
	inline bool* get_address_of_preAuthenticate_13() { return &___preAuthenticate_13; }
	inline void set_preAuthenticate_13(bool value)
	{
		___preAuthenticate_13 = value;
	}

	inline static int32_t get_offset_of_timeout_14() { return static_cast<int32_t>(offsetof(FileWebRequest_t742784210, ___timeout_14)); }
	inline int32_t get_timeout_14() const { return ___timeout_14; }
	inline int32_t* get_address_of_timeout_14() { return &___timeout_14; }
	inline void set_timeout_14(int32_t value)
	{
		___timeout_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEWEBREQUEST_T742784210_H
#ifndef WAITORTIMERCALLBACK_T1201829451_H
#define WAITORTIMERCALLBACK_T1201829451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t1201829451  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T1201829451_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (CurrentSystemTimeZone_t2624784343), -1, sizeof(CurrentSystemTimeZone_t2624784343_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable900[8] = 
{
	CurrentSystemTimeZone_t2624784343::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t2624784343::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t2624784343::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t2624784343::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t2624784343::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t2624784343::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t2624784343_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t2624784343_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (TypeCode_t3919353840)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable901[19] = 
{
	TypeCode_t3919353840::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (TypeInitializationException_t1206946446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable902[1] = 
{
	TypeInitializationException_t1206946446::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (TypeLoadException_t1039666947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable903[3] = 
{
	0,
	TypeLoadException_t1039666947::get_offset_of_className_12(),
	TypeLoadException_t1039666947::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (UnauthorizedAccessException_t3012243568), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (UnhandledExceptionEventArgs_t1449675399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable905[2] = 
{
	UnhandledExceptionEventArgs_t1449675399::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t1449675399::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (UnitySerializationHolder_t1578014241), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable906[3] = 
{
	UnitySerializationHolder_t1578014241::get_offset_of__data_0(),
	UnitySerializationHolder_t1578014241::get_offset_of__unityType_1(),
	UnitySerializationHolder_t1578014241::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (UnityType_t3702812767)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable907[5] = 
{
	UnityType_t3702812767::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (Version_t2319920906), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable908[5] = 
{
	0,
	Version_t2319920906::get_offset_of__Major_1(),
	Version_t2319920906::get_offset_of__Minor_2(),
	Version_t2319920906::get_offset_of__Build_3(),
	Version_t2319920906::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (WeakReference_t2568739461), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable909[2] = 
{
	WeakReference_t2568739461::get_offset_of_isLongReference_0(),
	WeakReference_t2568739461::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (PrimalityTest_t3573054752), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (MemberFilter_t3716749858), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (TypeFilter_t952663124), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (CrossContextDelegate_t3526864462), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (HeaderHandler_t3548379305), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (SendOrPostCallback_t1558833321), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (ThreadStart_t120170336), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (TimerCallback_t3501641311), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (WaitCallback_t2662118202), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (WaitOrTimerCallback_t1201829451), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (AppDomainInitializer_t1228590088), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (AssemblyLoadEventHandler_t2585898871), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (EventHandler_t3317544528), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (ResolveEventHandler_t1049062093), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (UnhandledExceptionEventHandler_t1080090931), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (U3CPrivateImplementationDetailsU3E_t2299327102), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable929[53] = 
{
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t2299327102_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (U24ArrayTypeU2456_t3951700725)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t3951700725 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (U24ArrayTypeU2424_t435049647)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t435049647 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (U24ArrayTypeU2416_t3801525909)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t3801525909 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (U24ArrayTypeU24120_t1587884164)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t1587884164 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (U24ArrayTypeU243132_t693312292)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t693312292 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (U24ArrayTypeU2420_t2681047087)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t2681047087 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (U24ArrayTypeU2432_t2215611852)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t2215611852 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (U24ArrayTypeU2448_t207411747)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t207411747 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (U24ArrayTypeU2464_t1404950213)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t1404950213 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (U24ArrayTypeU2412_t1038017045)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t1038017045 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (U24ArrayTypeU24136_t2891533318)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t2891533318 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { sizeof (U24ArrayTypeU248_t1362799661)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t1362799661 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (U24ArrayTypeU2472_t3352250755)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t3352250755 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (U24ArrayTypeU24124_t509396634)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t509396634 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (U24ArrayTypeU2496_t967074453)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t967074453 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (U24ArrayTypeU242048_t1987446938)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t1987446938 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (U24ArrayTypeU24256_t262211290)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t262211290 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (U24ArrayTypeU241024_t2203700664)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t2203700664 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (U24ArrayTypeU24640_t1869689134)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t1869689134 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (U24ArrayTypeU24128_t3642357015)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t3642357015 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (U24ArrayTypeU2452_t2308444771)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t2308444771 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (__Il2CppComDelegate_t823668582), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (U3CModuleU3E_t1107393315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (Locale_t2702054803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (MonoTODOAttribute_t668567273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable955[1] = 
{
	MonoTODOAttribute_t668567273::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable956[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable957[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable958[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable959[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable960[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable961[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable962[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (HybridDictionary_t4262792808), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable963[3] = 
{
	HybridDictionary_t4262792808::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t4262792808::get_offset_of_hashtable_1(),
	HybridDictionary_t4262792808::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (ListDictionary_t1327782353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable964[4] = 
{
	ListDictionary_t1327782353::get_offset_of_count_0(),
	ListDictionary_t1327782353::get_offset_of_version_1(),
	ListDictionary_t1327782353::get_offset_of_head_2(),
	ListDictionary_t1327782353::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (DictionaryNode_t431319176), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable965[3] = 
{
	DictionaryNode_t431319176::get_offset_of_key_0(),
	DictionaryNode_t431319176::get_offset_of_value_1(),
	DictionaryNode_t431319176::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (DictionaryNodeEnumerator_t2009233042), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable966[4] = 
{
	DictionaryNodeEnumerator_t2009233042::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t2009233042::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t2009233042::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t2009233042::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (NameObjectCollectionBase_t3140592611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable967[10] = 
{
	NameObjectCollectionBase_t3140592611::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t3140592611::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t3140592611::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t3140592611::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t3140592611::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t3140592611::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t3140592611::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t3140592611::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t3140592611::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t3140592611::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (_Item_t4180091357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable968[2] = 
{
	_Item_t4180091357::get_offset_of_key_0(),
	_Item_t4180091357::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (_KeysEnumerator_t36098631), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable969[2] = 
{
	_KeysEnumerator_t36098631::get_offset_of_m_collection_0(),
	_KeysEnumerator_t36098631::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (KeysCollection_t438416257), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable970[1] = 
{
	KeysCollection_t438416257::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (NameValueCollection_t1586477470), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable971[2] = 
{
	NameValueCollection_t1586477470::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t1586477470::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (EditorBrowsableAttribute_t2369117313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable972[1] = 
{
	EditorBrowsableAttribute_t2369117313::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (EditorBrowsableState_t729317441)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable973[4] = 
{
	EditorBrowsableState_t729317441::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (TypeConverter_t3104096152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (TypeConverterAttribute_t3314042479), -1, sizeof(TypeConverterAttribute_t3314042479_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable975[2] = 
{
	TypeConverterAttribute_t3314042479_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t3314042479::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (AuthenticationLevel_t2945175224)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable976[4] = 
{
	AuthenticationLevel_t2945175224::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (SslPolicyErrors_t633183037)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable977[5] = 
{
	SslPolicyErrors_t633183037::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (AddressFamily_t420261665)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable978[32] = 
{
	AddressFamily_t420261665::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (DefaultCertificatePolicy_t283648510), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (FileWebRequest_t742784210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable980[9] = 
{
	FileWebRequest_t742784210::get_offset_of_uri_6(),
	FileWebRequest_t742784210::get_offset_of_webHeaders_7(),
	FileWebRequest_t742784210::get_offset_of_connectionGroup_8(),
	FileWebRequest_t742784210::get_offset_of_contentLength_9(),
	FileWebRequest_t742784210::get_offset_of_fileAccess_10(),
	FileWebRequest_t742784210::get_offset_of_method_11(),
	FileWebRequest_t742784210::get_offset_of_proxy_12(),
	FileWebRequest_t742784210::get_offset_of_preAuthenticate_13(),
	FileWebRequest_t742784210::get_offset_of_timeout_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (FileWebRequestCreator_t1476346962), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (FtpRequestCreator_t3738807067), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (FtpWebRequest_t2816538681), -1, sizeof(FtpWebRequest_t2816538681_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable983[11] = 
{
	FtpWebRequest_t2816538681::get_offset_of_requestUri_6(),
	FtpWebRequest_t2816538681::get_offset_of_proxy_7(),
	FtpWebRequest_t2816538681::get_offset_of_timeout_8(),
	FtpWebRequest_t2816538681::get_offset_of_rwTimeout_9(),
	FtpWebRequest_t2816538681::get_offset_of_binary_10(),
	FtpWebRequest_t2816538681::get_offset_of_usePassive_11(),
	FtpWebRequest_t2816538681::get_offset_of_method_12(),
	FtpWebRequest_t2816538681::get_offset_of_locker_13(),
	FtpWebRequest_t2816538681_StaticFields::get_offset_of_supportedCommands_14(),
	FtpWebRequest_t2816538681::get_offset_of_callback_15(),
	FtpWebRequest_t2816538681_StaticFields::get_offset_of_U3CU3Ef__amU24cache1C_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (GlobalProxySelection_t1397226153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (HttpRequestCreator_t1246480547), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (HttpVersion_t2974878979), -1, sizeof(HttpVersion_t2974878979_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable986[2] = 
{
	HttpVersion_t2974878979_StaticFields::get_offset_of_Version10_0(),
	HttpVersion_t2974878979_StaticFields::get_offset_of_Version11_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (HttpWebRequest_t2441666790), -1, sizeof(HttpWebRequest_t2441666790_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable987[24] = 
{
	HttpWebRequest_t2441666790::get_offset_of_requestUri_6(),
	HttpWebRequest_t2441666790::get_offset_of_actualUri_7(),
	HttpWebRequest_t2441666790::get_offset_of_hostChanged_8(),
	HttpWebRequest_t2441666790::get_offset_of_allowAutoRedirect_9(),
	HttpWebRequest_t2441666790::get_offset_of_allowBuffering_10(),
	HttpWebRequest_t2441666790::get_offset_of_certificates_11(),
	HttpWebRequest_t2441666790::get_offset_of_connectionGroup_12(),
	HttpWebRequest_t2441666790::get_offset_of_contentLength_13(),
	HttpWebRequest_t2441666790::get_offset_of_webHeaders_14(),
	HttpWebRequest_t2441666790::get_offset_of_keepAlive_15(),
	HttpWebRequest_t2441666790::get_offset_of_maxAutoRedirect_16(),
	HttpWebRequest_t2441666790::get_offset_of_mediaType_17(),
	HttpWebRequest_t2441666790::get_offset_of_method_18(),
	HttpWebRequest_t2441666790::get_offset_of_initialMethod_19(),
	HttpWebRequest_t2441666790::get_offset_of_pipelined_20(),
	HttpWebRequest_t2441666790::get_offset_of_version_21(),
	HttpWebRequest_t2441666790::get_offset_of_proxy_22(),
	HttpWebRequest_t2441666790::get_offset_of_sendChunked_23(),
	HttpWebRequest_t2441666790::get_offset_of_servicePoint_24(),
	HttpWebRequest_t2441666790::get_offset_of_timeout_25(),
	HttpWebRequest_t2441666790::get_offset_of_redirects_26(),
	HttpWebRequest_t2441666790::get_offset_of_locker_27(),
	HttpWebRequest_t2441666790_StaticFields::get_offset_of_defaultMaxResponseHeadersLength_28(),
	HttpWebRequest_t2441666790::get_offset_of_readWriteTimeout_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (IPAddress_t4117744763), -1, sizeof(IPAddress_t4117744763_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable990[11] = 
{
	IPAddress_t4117744763::get_offset_of_m_Address_0(),
	IPAddress_t4117744763::get_offset_of_m_Family_1(),
	IPAddress_t4117744763::get_offset_of_m_Numbers_2(),
	IPAddress_t4117744763::get_offset_of_m_ScopeId_3(),
	IPAddress_t4117744763_StaticFields::get_offset_of_Any_4(),
	IPAddress_t4117744763_StaticFields::get_offset_of_Broadcast_5(),
	IPAddress_t4117744763_StaticFields::get_offset_of_Loopback_6(),
	IPAddress_t4117744763_StaticFields::get_offset_of_None_7(),
	IPAddress_t4117744763_StaticFields::get_offset_of_IPv6Any_8(),
	IPAddress_t4117744763_StaticFields::get_offset_of_IPv6Loopback_9(),
	IPAddress_t4117744763_StaticFields::get_offset_of_IPv6None_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (IPv6Address_t2555594540), -1, sizeof(IPv6Address_t2555594540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable991[5] = 
{
	IPv6Address_t2555594540::get_offset_of_address_0(),
	IPv6Address_t2555594540::get_offset_of_prefixLength_1(),
	IPv6Address_t2555594540::get_offset_of_scopeId_2(),
	IPv6Address_t2555594540_StaticFields::get_offset_of_Loopback_3(),
	IPv6Address_t2555594540_StaticFields::get_offset_of_Unspecified_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (SecurityProtocolType_t1300439020)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable994[3] = 
{
	SecurityProtocolType_t1300439020::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (ServicePoint_t3354562874), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable995[11] = 
{
	ServicePoint_t3354562874::get_offset_of_uri_0(),
	ServicePoint_t3354562874::get_offset_of_connectionLimit_1(),
	ServicePoint_t3354562874::get_offset_of_maxIdleTime_2(),
	ServicePoint_t3354562874::get_offset_of_currentConnections_3(),
	ServicePoint_t3354562874::get_offset_of_idleSince_4(),
	ServicePoint_t3354562874::get_offset_of_usesProxy_5(),
	ServicePoint_t3354562874::get_offset_of_sendContinue_6(),
	ServicePoint_t3354562874::get_offset_of_useConnect_7(),
	ServicePoint_t3354562874::get_offset_of_locker_8(),
	ServicePoint_t3354562874::get_offset_of_hostE_9(),
	ServicePoint_t3354562874::get_offset_of_useNagle_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (ServicePointManager_t2653907883), -1, sizeof(ServicePointManager_t2653907883_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable996[10] = 
{
	ServicePointManager_t2653907883_StaticFields::get_offset_of_servicePoints_0(),
	ServicePointManager_t2653907883_StaticFields::get_offset_of_policy_1(),
	ServicePointManager_t2653907883_StaticFields::get_offset_of_defaultConnectionLimit_2(),
	ServicePointManager_t2653907883_StaticFields::get_offset_of_maxServicePointIdleTime_3(),
	ServicePointManager_t2653907883_StaticFields::get_offset_of_maxServicePoints_4(),
	ServicePointManager_t2653907883_StaticFields::get_offset_of__checkCRL_5(),
	ServicePointManager_t2653907883_StaticFields::get_offset_of__securityProtocol_6(),
	ServicePointManager_t2653907883_StaticFields::get_offset_of_expectContinue_7(),
	ServicePointManager_t2653907883_StaticFields::get_offset_of_useNagle_8(),
	ServicePointManager_t2653907883_StaticFields::get_offset_of_server_cert_cb_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (SPKey_t1425203948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable997[2] = 
{
	SPKey_t1425203948::get_offset_of_uri_0(),
	SPKey_t1425203948::get_offset_of_use_connect_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (WebHeaderCollection_t2179699090), -1, sizeof(WebHeaderCollection_t2179699090_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable998[5] = 
{
	WebHeaderCollection_t2179699090_StaticFields::get_offset_of_restricted_12(),
	WebHeaderCollection_t2179699090_StaticFields::get_offset_of_multiValue_13(),
	WebHeaderCollection_t2179699090_StaticFields::get_offset_of_restricted_response_14(),
	WebHeaderCollection_t2179699090::get_offset_of_internallyCreated_15(),
	WebHeaderCollection_t2179699090_StaticFields::get_offset_of_allowed_chars_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (WebProxy_t879072114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable999[5] = 
{
	WebProxy_t879072114::get_offset_of_address_0(),
	WebProxy_t879072114::get_offset_of_bypassOnLocal_1(),
	WebProxy_t879072114::get_offset_of_bypassList_2(),
	WebProxy_t879072114::get_offset_of_credentials_3(),
	WebProxy_t879072114::get_offset_of_useDefaultCredentials_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
