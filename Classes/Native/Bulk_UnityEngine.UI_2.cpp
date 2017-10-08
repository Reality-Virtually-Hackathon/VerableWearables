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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// UnityEngine.UI.Toggle
struct Toggle_t2028432460;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1286222375;
// UnityEngine.UI.Selectable
struct Selectable_t3497516189;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1667690648;
// UnityEngine.Object
struct Object_t948050745;
// UnityEngine.UI.Graphic
struct Graphic_t4051857987;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t3562803580;
// System.String
struct String_t;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t3218516856;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3836843803;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2100590868;
// UnityEngine.Transform
struct Transform_t1912080223;
// UnityEngine.Component
struct Component_t4119265833;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t3793437678;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3976455761;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t348922653;
// System.Object[]
struct ObjectU5BU5D_t3878505910;
// System.ArgumentException
struct ArgumentException_t3402785744;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t4157104043;
// System.Predicate`1<System.Object>
struct Predicate_1_t45154830;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t1385918459;
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t260217174;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t66464263;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1568936542;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t3490760292;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t2304019315;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3762562027;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1099340063;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t667486673;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2194049768;
// UnityEngine.Mesh
struct Mesh_t3980991349;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t2749240780;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t4191467392;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2793501812;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t1355042808;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t223256560;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t2986788140;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t2571742262;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t2554934750;
// System.Int32[]
struct Int32U5BU5D_t1884137699;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4081497845;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1221523387;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t613724912;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t1595007963;
// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_t693476021;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t2503084249;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t3983655577;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t1173970226;
// System.IntPtr[]
struct IntPtrU5BU5D_t4204197944;
// System.Collections.IDictionary
struct IDictionary_t3825156092;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t4072258821;
// System.Char[]
struct CharU5BU5D_t1237632434;
// UnityEngine.Sprite
struct Sprite_t3015293829;
// System.Void
struct Void_t3968031514;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t2462524240;
// UnityEngine.GameObject
struct GameObject_t2527051794;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t1873198396;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t4018218907;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t4292057012;
// System.IAsyncResult
struct IAsyncResult_t1055566646;
// System.AsyncCallback
struct AsyncCallback_t4194240925;
// UnityEngine.Material
struct Material_t1787675033;
// UnityEngine.Texture2D
struct Texture2D_t601339354;
// UnityEngine.RectTransform
struct RectTransform_t3743713302;
// UnityEngine.Canvas
struct Canvas_t541483223;
// UnityEngine.Events.UnityAction
struct UnityAction_t2239667601;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t1944769786;
// UnityEngine.RectOffset
struct RectOffset_t1700670968;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t1213751224;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t967554111;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t1011019008;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1926213249;

extern RuntimeClass* ToggleEvent_t1286222375_il2cpp_TypeInfo_var;
extern RuntimeClass* Selectable_t3497516189_il2cpp_TypeInfo_var;
extern const uint32_t Toggle__ctor_m36168811_MetadataUsageId;
extern RuntimeClass* Object_t948050745_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t330283615_il2cpp_TypeInfo_var;
extern const uint32_t Toggle_OnDidApplyAnimationProperties_m389703441_MetadataUsageId;
extern const uint32_t Toggle_SetToggleGroup_m3282172488_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_Invoke_m4291855693_RuntimeMethod_var;
extern String_t* _stringLiteral2020529103;
extern const uint32_t Toggle_Set_m889303675_MetadataUsageId;
extern const uint32_t Toggle_PlayEffect_m2647711912_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1__ctor_m1158168607_RuntimeMethod_var;
extern const uint32_t ToggleEvent__ctor_m158257098_MetadataUsageId;
extern RuntimeClass* List_1_t3793437678_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706650945_RuntimeMethod_var;
extern const uint32_t ToggleGroup__ctor_m1157248414_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t3878505910_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t3402785744_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Contains_m765978726_RuntimeMethod_var;
extern String_t* _stringLiteral553396747;
extern const uint32_t ToggleGroup_ValidateToggleIsInGroup_m166236784_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m2642593961_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1943679014_RuntimeMethod_var;
extern const uint32_t ToggleGroup_NotifyToggleOn_m3486424751_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m1434396289_RuntimeMethod_var;
extern const uint32_t ToggleGroup_UnregisterToggle_m3297871363_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m2196678616_RuntimeMethod_var;
extern const uint32_t ToggleGroup_RegisterToggle_m3430917418_MetadataUsageId;
extern RuntimeClass* ToggleGroup_t1667690648_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t4157104043_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ToggleGroup_U3CAnyTogglesOnU3Em__0_m909475426_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_m1446965918_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Find_m2028517492_RuntimeMethod_var;
extern const uint32_t ToggleGroup_AnyTogglesOn_m2029130407_MetadataUsageId;
extern RuntimeClass* Func_2_t260217174_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ToggleGroup_U3CActiveTogglesU3Em__1_m2987193891_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2189824888_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisToggle_t2028432460_m2797001356_RuntimeMethod_var;
extern const uint32_t ToggleGroup_ActiveToggles_m1609914701_MetadataUsageId;
extern const uint32_t ToggleGroup_SetAllTogglesOff_m4087873876_MetadataUsageId;
extern RuntimeClass* ListPool_1_t3690322720_il2cpp_TypeInfo_var;
extern RuntimeClass* ListPool_1_t853898136_il2cpp_TypeInfo_var;
extern RuntimeClass* ListPool_1_t2485643468_il2cpp_TypeInfo_var;
extern RuntimeClass* ListPool_1_t2053790078_il2cpp_TypeInfo_var;
extern RuntimeClass* ListPool_1_t3580353173_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ListPool_1_Get_m1557037846_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Get_m1820967329_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Get_m1185189418_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Get_m3344342879_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Get_m3059886837_RuntimeMethod_var;
extern const uint32_t VertexHelper__ctor_m2610929065_MetadataUsageId;
extern const RuntimeMethod* List_1_AddRange_m3734003385_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m219234875_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m1986007995_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m1443945211_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3164297150_RuntimeMethod_var;
extern const uint32_t VertexHelper__ctor_m2306075082_MetadataUsageId;
extern const RuntimeMethod* List_1_Clear_m3934547908_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m728292554_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3458157773_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3151567674_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2634858558_RuntimeMethod_var;
extern const uint32_t VertexHelper_Clear_m3233362608_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m1137088036_RuntimeMethod_var;
extern const uint32_t VertexHelper_get_currentVertCount_m2919873245_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m2921952376_RuntimeMethod_var;
extern const uint32_t VertexHelper_get_currentIndexCount_m3382619846_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m3643680419_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1611827731_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m528239902_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2336204678_RuntimeMethod_var;
extern const uint32_t VertexHelper_PopulateUIVertex_m511922530_MetadataUsageId;
extern const RuntimeMethod* List_1_set_Item_m2319232235_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m1464298370_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m227536386_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m2280661285_RuntimeMethod_var;
extern const uint32_t VertexHelper_SetUIVertex_m2499934554_MetadataUsageId;
extern String_t* _stringLiteral557823775;
extern const uint32_t VertexHelper_FillMesh_m3323642940_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Release_m2077417339_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Release_m309493837_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Release_m2693915268_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Release_m3432441777_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Release_m1395250361_RuntimeMethod_var;
extern const uint32_t VertexHelper_Dispose_m2402033223_MetadataUsageId;
extern RuntimeClass* Vector2_t3629302141_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m712915333_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1402018060_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2558363720_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m340864592_RuntimeMethod_var;
extern const uint32_t VertexHelper_AddVert_m2232991513_MetadataUsageId;
extern RuntimeClass* VertexHelper_t3490760292_il2cpp_TypeInfo_var;
extern const uint32_t VertexHelper_AddVert_m314293972_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3664818724_RuntimeMethod_var;
extern const uint32_t VertexHelper_AddTriangle_m1107695520_MetadataUsageId;
extern const uint32_t VertexHelper_AddUIVertexStream_m600532192_MetadataUsageId;
extern RuntimeClass* Vector3_t539014097_il2cpp_TypeInfo_var;
extern const uint32_t VertexHelper__cctor_m1292849532_MetadataUsageId;

struct ObjectU5BU5D_t3878505910;
struct Vector3U5BU5D_t2749240780;
struct Color32U5BU5D_t2793501812;
struct Vector2U5BU5D_t223256560;
struct Vector4U5BU5D_t2571742262;
struct Int32U5BU5D_t1884137699;
struct UIVertexU5BU5D_t1221523387;


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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ABSTRACTEVENTDATA_T3238656247_H
#define ABSTRACTEVENTDATA_T3238656247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t3238656247  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t3238656247, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T3238656247_H
#ifndef UNITYEVENTBASE_T1641290266_H
#define UNITYEVENTBASE_T1641290266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t1641290266  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t3983655577 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t1173970226 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t1641290266, ___m_Calls_0)); }
	inline InvokableCallList_t3983655577 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t3983655577 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t3983655577 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t1641290266, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t1173970226 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t1173970226 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t1173970226 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t1641290266, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t1641290266, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T1641290266_H
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
#ifndef LIST_1_T613724912_H
#define LIST_1_T613724912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t613724912  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_t1221523387* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t613724912, ____items_1)); }
	inline UIVertexU5BU5D_t1221523387* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_t1221523387** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_t1221523387* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t613724912, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t613724912, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t613724912_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UIVertexU5BU5D_t1221523387* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t613724912_StaticFields, ___EmptyArray_4)); }
	inline UIVertexU5BU5D_t1221523387* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UIVertexU5BU5D_t1221523387** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UIVertexU5BU5D_t1221523387* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T613724912_H
#ifndef LIST_1_T2194049768_H
#define LIST_1_T2194049768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t2194049768  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t1884137699* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2194049768, ____items_1)); }
	inline Int32U5BU5D_t1884137699* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t1884137699** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t1884137699* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2194049768, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2194049768, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2194049768_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t1884137699* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2194049768_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t1884137699* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t1884137699** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t1884137699* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2194049768_H
#ifndef LIST_1_T667486673_H
#define LIST_1_T667486673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_t667486673  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t2571742262* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t667486673, ____items_1)); }
	inline Vector4U5BU5D_t2571742262* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t2571742262** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t2571742262* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t667486673, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t667486673, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t667486673_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector4U5BU5D_t2571742262* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t667486673_StaticFields, ___EmptyArray_4)); }
	inline Vector4U5BU5D_t2571742262* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector4U5BU5D_t2571742262** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector4U5BU5D_t2571742262* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T667486673_H
#ifndef LIST_1_T1099340063_H
#define LIST_1_T1099340063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t1099340063  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_t223256560* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1099340063, ____items_1)); }
	inline Vector2U5BU5D_t223256560* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_t223256560** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_t223256560* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1099340063, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1099340063, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1099340063_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2U5BU5D_t223256560* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1099340063_StaticFields, ___EmptyArray_4)); }
	inline Vector2U5BU5D_t223256560* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2U5BU5D_t223256560** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2U5BU5D_t223256560* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1099340063_H
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
#ifndef LIST_1_T2304019315_H
#define LIST_1_T2304019315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t2304019315  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t2749240780* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2304019315, ____items_1)); }
	inline Vector3U5BU5D_t2749240780* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t2749240780** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t2749240780* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2304019315, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2304019315, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2304019315_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t2749240780* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2304019315_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t2749240780* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t2749240780** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t2749240780* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2304019315_H
#ifndef LIST_1_T3793437678_H
#define LIST_1_T3793437678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct  List_1_t3793437678  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ToggleU5BU5D_t4072258821* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3793437678, ____items_1)); }
	inline ToggleU5BU5D_t4072258821* get__items_1() const { return ____items_1; }
	inline ToggleU5BU5D_t4072258821** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ToggleU5BU5D_t4072258821* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3793437678, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3793437678, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3793437678_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ToggleU5BU5D_t4072258821* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3793437678_StaticFields, ___EmptyArray_4)); }
	inline ToggleU5BU5D_t4072258821* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ToggleU5BU5D_t4072258821** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ToggleU5BU5D_t4072258821* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3793437678_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1237632434* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1237632434* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1237632434** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1237632434* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef LIST_1_T3762562027_H
#define LIST_1_T3762562027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t3762562027  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t2793501812* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3762562027, ____items_1)); }
	inline Color32U5BU5D_t2793501812* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t2793501812** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t2793501812* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3762562027, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3762562027, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3762562027_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Color32U5BU5D_t2793501812* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3762562027_StaticFields, ___EmptyArray_4)); }
	inline Color32U5BU5D_t2793501812* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Color32U5BU5D_t2793501812** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Color32U5BU5D_t2793501812* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3762562027_H
#ifndef VECTOR2_T3629302141_H
#define VECTOR2_T3629302141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3629302141 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3629302141, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3629302141, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3629302141_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3629302141  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3629302141  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3629302141  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3629302141  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3629302141  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3629302141  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3629302141  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3629302141  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3629302141_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3629302141  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3629302141 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3629302141  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3629302141_StaticFields, ___oneVector_3)); }
	inline Vector2_t3629302141  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3629302141 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3629302141  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3629302141_StaticFields, ___upVector_4)); }
	inline Vector2_t3629302141  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3629302141 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3629302141  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3629302141_StaticFields, ___downVector_5)); }
	inline Vector2_t3629302141  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3629302141 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3629302141  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3629302141_StaticFields, ___leftVector_6)); }
	inline Vector2_t3629302141  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3629302141 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3629302141  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3629302141_StaticFields, ___rightVector_7)); }
	inline Vector2_t3629302141  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3629302141 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3629302141  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3629302141_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3629302141  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3629302141 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3629302141  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3629302141_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3629302141  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3629302141 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3629302141  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3629302141_H
#ifndef VECTOR3_T539014097_H
#define VECTOR3_T539014097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t539014097 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t539014097, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t539014097, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t539014097, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t539014097_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t539014097  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t539014097  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t539014097  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t539014097  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t539014097  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t539014097  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t539014097  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t539014097  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t539014097  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t539014097  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___zeroVector_4)); }
	inline Vector3_t539014097  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t539014097 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t539014097  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___oneVector_5)); }
	inline Vector3_t539014097  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t539014097 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t539014097  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___upVector_6)); }
	inline Vector3_t539014097  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t539014097 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t539014097  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___downVector_7)); }
	inline Vector3_t539014097  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t539014097 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t539014097  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___leftVector_8)); }
	inline Vector3_t539014097  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t539014097 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t539014097  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___rightVector_9)); }
	inline Vector3_t539014097  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t539014097 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t539014097  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___forwardVector_10)); }
	inline Vector3_t539014097  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t539014097 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t539014097  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___backVector_11)); }
	inline Vector3_t539014097  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t539014097 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t539014097  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t539014097  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t539014097 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t539014097  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t539014097_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t539014097  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t539014097 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t539014097  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T539014097_H
#ifndef VECTOR4_T3197448751_H
#define VECTOR4_T3197448751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3197448751 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3197448751, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3197448751, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3197448751, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3197448751, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3197448751_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3197448751  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3197448751  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3197448751  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3197448751  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3197448751_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3197448751  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3197448751 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3197448751  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3197448751_StaticFields, ___oneVector_6)); }
	inline Vector4_t3197448751  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3197448751 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3197448751  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3197448751_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3197448751  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3197448751 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3197448751  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3197448751_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3197448751  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3197448751 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3197448751  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3197448751_H
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
#ifndef SPRITESTATE_T1748043945_H
#define SPRITESTATE_T1748043945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1748043945 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t3015293829 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t3015293829 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t3015293829 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1748043945, ___m_HighlightedSprite_0)); }
	inline Sprite_t3015293829 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t3015293829 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t3015293829 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1748043945, ___m_PressedSprite_1)); }
	inline Sprite_t3015293829 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t3015293829 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t3015293829 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1748043945, ___m_DisabledSprite_2)); }
	inline Sprite_t3015293829 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t3015293829 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t3015293829 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1748043945_marshaled_pinvoke
{
	Sprite_t3015293829 * ___m_HighlightedSprite_0;
	Sprite_t3015293829 * ___m_PressedSprite_1;
	Sprite_t3015293829 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1748043945_marshaled_com
{
	Sprite_t3015293829 * ___m_HighlightedSprite_0;
	Sprite_t3015293829 * ___m_PressedSprite_1;
	Sprite_t3015293829 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1748043945_H
#ifndef COLOR32_T1997556809_H
#define COLOR32_T1997556809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t1997556809 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t1997556809, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t1997556809, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t1997556809, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t1997556809, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t1997556809, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T1997556809_H
#ifndef INT32_T429044550_H
#define INT32_T429044550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t429044550 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t429044550, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T429044550_H
#ifndef COLOR_T3771351350_H
#define COLOR_T3771351350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t3771351350 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t3771351350, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t3771351350, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t3771351350, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t3771351350, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T3771351350_H
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
#ifndef BASEEVENTDATA_T2100590868_H
#define BASEEVENTDATA_T2100590868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t2100590868  : public AbstractEventData_t3238656247
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t2462524240 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t2100590868, ___m_EventSystem_1)); }
	inline EventSystem_t2462524240 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t2462524240 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t2462524240 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T2100590868_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T3549049435_H
#define DRIVENRECTTRANSFORMTRACKER_T3549049435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t3549049435 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T3549049435_H
#ifndef UNITYEVENT_1_T3218516856_H
#define UNITYEVENT_1_T3218516856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_t3218516856  : public UnityEventBase_t1641290266
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3878505910* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3218516856, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3878505910* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3878505910** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3878505910* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3218516856_H
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
#ifndef SINGLE_T3230175740_H
#define SINGLE_T3230175740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3230175740 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t3230175740, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T3230175740_H
#ifndef SELECTIONSTATE_T3146807259_H
#define SELECTIONSTATE_T3146807259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t3146807259 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t3146807259, ___value___1)); }
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
#endif // SELECTIONSTATE_T3146807259_H
#ifndef RAYCASTRESULT_T2879055399_H
#define RAYCASTRESULT_T2879055399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t2879055399 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t2527051794 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t1873198396 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t539014097  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t539014097  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t3629302141  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___m_GameObject_0)); }
	inline GameObject_t2527051794 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t2527051794 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t2527051794 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___module_1)); }
	inline BaseRaycaster_t1873198396 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t1873198396 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t1873198396 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___worldPosition_7)); }
	inline Vector3_t539014097  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t539014097 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t539014097  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___worldNormal_8)); }
	inline Vector3_t539014097  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t539014097 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t539014097  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t2879055399, ___screenPosition_9)); }
	inline Vector2_t3629302141  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t3629302141 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t3629302141  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t2879055399_marshaled_pinvoke
{
	GameObject_t2527051794 * ___m_GameObject_0;
	BaseRaycaster_t1873198396 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t539014097  ___worldPosition_7;
	Vector3_t539014097  ___worldNormal_8;
	Vector2_t3629302141  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t2879055399_marshaled_com
{
	GameObject_t2527051794 * ___m_GameObject_0;
	BaseRaycaster_t1873198396 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t539014097  ___worldPosition_7;
	Vector3_t539014097  ___worldNormal_8;
	Vector2_t3629302141  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T2879055399_H
#ifndef COLORBLOCK_T647289914_H
#define COLORBLOCK_T647289914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t647289914 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t3771351350  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t3771351350  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t3771351350  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t3771351350  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t647289914, ___m_NormalColor_0)); }
	inline Color_t3771351350  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t3771351350 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t3771351350  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t647289914, ___m_HighlightedColor_1)); }
	inline Color_t3771351350  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t3771351350 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t3771351350  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t647289914, ___m_PressedColor_2)); }
	inline Color_t3771351350  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t3771351350 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t3771351350  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t647289914, ___m_DisabledColor_3)); }
	inline Color_t3771351350  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t3771351350 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t3771351350  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t647289914, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t647289914, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T647289914_H
#ifndef TRANSITION_T688563524_H
#define TRANSITION_T688563524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t688563524 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t688563524, ___value___1)); }
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
#endif // TRANSITION_T688563524_H
#ifndef TEXTANCHOR_T3855732528_H
#define TEXTANCHOR_T3855732528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t3855732528 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t3855732528, ___value___1)); }
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
#endif // TEXTANCHOR_T3855732528_H
#ifndef TOGGLETRANSITION_T1258898287_H
#define TOGGLETRANSITION_T1258898287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleTransition
struct  ToggleTransition_t1258898287 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToggleTransition_t1258898287, ___value___1)); }
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
#endif // TOGGLETRANSITION_T1258898287_H
#ifndef TOGGLEEVENT_T1286222375_H
#define TOGGLEEVENT_T1286222375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleEvent
struct  ToggleEvent_t1286222375  : public UnityEvent_1_t3218516856
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEEVENT_T1286222375_H
#ifndef UIVERTEX_T3143686990_H
#define UIVERTEX_T3143686990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t3143686990 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t539014097  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t539014097  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t1997556809  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t3629302141  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t3629302141  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t3629302141  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t3629302141  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t3197448751  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990, ___position_0)); }
	inline Vector3_t539014097  get_position_0() const { return ___position_0; }
	inline Vector3_t539014097 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t539014097  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990, ___normal_1)); }
	inline Vector3_t539014097  get_normal_1() const { return ___normal_1; }
	inline Vector3_t539014097 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t539014097  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990, ___color_2)); }
	inline Color32_t1997556809  get_color_2() const { return ___color_2; }
	inline Color32_t1997556809 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t1997556809  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990, ___uv0_3)); }
	inline Vector2_t3629302141  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t3629302141 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t3629302141  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990, ___uv1_4)); }
	inline Vector2_t3629302141  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t3629302141 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t3629302141  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990, ___uv2_5)); }
	inline Vector2_t3629302141  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t3629302141 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t3629302141  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990, ___uv3_6)); }
	inline Vector2_t3629302141  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t3629302141 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t3629302141  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990, ___tangent_7)); }
	inline Vector4_t3197448751  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t3197448751 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t3197448751  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t3143686990_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t1997556809  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t3197448751  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t3143686990  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t1997556809  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t1997556809 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t1997556809  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3197448751  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3197448751 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3197448751  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t3143686990_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t3143686990  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t3143686990 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t3143686990  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T3143686990_H
#ifndef MODE_T3198351107_H
#define MODE_T3198351107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t3198351107 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t3198351107, ___value___1)); }
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
#endif // MODE_T3198351107_H
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
#ifndef ARGUMENTEXCEPTION_T3402785744_H
#define ARGUMENTEXCEPTION_T3402785744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3402785744  : public SystemException_t2436044558
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3402785744, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T3402785744_H
#ifndef INPUTBUTTON_T4087320820_H
#define INPUTBUTTON_T4087320820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t4087320820 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t4087320820, ___value___1)); }
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
#endif // INPUTBUTTON_T4087320820_H
#ifndef CANVASUPDATE_T3772902893_H
#define CANVASUPDATE_T3772902893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasUpdate
struct  CanvasUpdate_t3772902893 
{
public:
	// System.Int32 UnityEngine.UI.CanvasUpdate::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CanvasUpdate_t3772902893, ___value___1)); }
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
#endif // CANVASUPDATE_T3772902893_H
#ifndef OBJECT_T948050745_H
#define OBJECT_T948050745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t948050745  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t948050745, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t948050745_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t948050745_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t948050745_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t948050745_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T948050745_H
#ifndef VERTEXHELPER_T3490760292_H
#define VERTEXHELPER_T3490760292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t3490760292  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t2304019315 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3762562027 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t1099340063 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t1099340063 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t1099340063 * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t1099340063 * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t2304019315 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t667486673 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t2194049768 * ___m_Indices_8;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292, ___m_Positions_0)); }
	inline List_1_t2304019315 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t2304019315 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t2304019315 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Positions_0), value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292, ___m_Colors_1)); }
	inline List_1_t3762562027 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t3762562027 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t3762562027 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Colors_1), value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292, ___m_Uv0S_2)); }
	inline List_1_t1099340063 * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t1099340063 ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t1099340063 * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv0S_2), value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292, ___m_Uv1S_3)); }
	inline List_1_t1099340063 * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t1099340063 ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t1099340063 * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv1S_3), value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292, ___m_Uv2S_4)); }
	inline List_1_t1099340063 * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t1099340063 ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t1099340063 * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv2S_4), value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292, ___m_Uv3S_5)); }
	inline List_1_t1099340063 * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t1099340063 ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t1099340063 * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv3S_5), value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292, ___m_Normals_6)); }
	inline List_1_t2304019315 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t2304019315 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t2304019315 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normals_6), value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292, ___m_Tangents_7)); }
	inline List_1_t667486673 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t667486673 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t667486673 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tangents_7), value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292, ___m_Indices_8)); }
	inline List_1_t2194049768 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t2194049768 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t2194049768 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Indices_8), value);
	}
};

struct VertexHelper_t3490760292_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t3197448751  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t539014097  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3197448751  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3197448751 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3197448751  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t3490760292_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t539014097  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t539014097 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t539014097  value)
	{
		___s_DefaultNormal_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXHELPER_T3490760292_H
#ifndef POINTEREVENTDATA_T3836843803_H
#define POINTEREVENTDATA_T3836843803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3836843803  : public BaseEventData_t2100590868
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t2527051794 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t2527051794 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t2527051794 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t2527051794 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t2527051794 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t2879055399  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t2879055399  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t4292057012 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t3629302141  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t3629302141  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t3629302141  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t539014097  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t539014097  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t3629302141  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t2527051794 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t2527051794 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t2527051794 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___m_PointerPress_3)); }
	inline GameObject_t2527051794 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t2527051794 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t2527051794 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t2527051794 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t2527051794 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t2527051794 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t2527051794 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t2527051794 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t2527051794 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t2527051794 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t2527051794 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t2527051794 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t2879055399  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t2879055399 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t2879055399  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t2879055399  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t2879055399 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t2879055399  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___hovered_9)); }
	inline List_1_t4292057012 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t4292057012 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t4292057012 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t3629302141  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t3629302141 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t3629302141  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t3629302141  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t3629302141 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t3629302141  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t3629302141  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t3629302141 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t3629302141  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t539014097  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t539014097 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t539014097  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t539014097  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t539014097 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t539014097  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t3629302141  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t3629302141 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t3629302141  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3836843803, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3836843803_H
#ifndef NAVIGATION_T2031445705_H
#define NAVIGATION_T2031445705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t2031445705 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3497516189 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3497516189 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3497516189 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3497516189 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t2031445705, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t2031445705, ___m_SelectOnUp_1)); }
	inline Selectable_t3497516189 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3497516189 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3497516189 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t2031445705, ___m_SelectOnDown_2)); }
	inline Selectable_t3497516189 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3497516189 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3497516189 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t2031445705, ___m_SelectOnLeft_3)); }
	inline Selectable_t3497516189 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3497516189 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3497516189 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t2031445705, ___m_SelectOnRight_4)); }
	inline Selectable_t3497516189 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3497516189 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3497516189 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t2031445705_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3497516189 * ___m_SelectOnUp_1;
	Selectable_t3497516189 * ___m_SelectOnDown_2;
	Selectable_t3497516189 * ___m_SelectOnLeft_3;
	Selectable_t3497516189 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t2031445705_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3497516189 * ___m_SelectOnUp_1;
	Selectable_t3497516189 * ___m_SelectOnDown_2;
	Selectable_t3497516189 * ___m_SelectOnLeft_3;
	Selectable_t3497516189 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T2031445705_H
#ifndef MESH_T3980991349_H
#define MESH_T3980991349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3980991349  : public Object_t948050745
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3980991349_H
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
#ifndef COMPONENT_T4119265833_H
#define COMPONENT_T4119265833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t4119265833  : public Object_t948050745
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T4119265833_H
#ifndef BEHAVIOUR_T953122217_H
#define BEHAVIOUR_T953122217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t953122217  : public Component_t4119265833
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T953122217_H
#ifndef CANVASRENDERER_T3562803580_H
#define CANVASRENDERER_T3562803580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasRenderer
struct  CanvasRenderer_t3562803580  : public Component_t4119265833
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASRENDERER_T3562803580_H
#ifndef FUNC_2_T260217174_H
#define FUNC_2_T260217174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct  Func_2_t260217174  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T260217174_H
#ifndef PREDICATE_1_T4157104043_H
#define PREDICATE_1_T4157104043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.UI.Toggle>
struct  Predicate_1_t4157104043  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T4157104043_H
#ifndef TRANSFORM_T1912080223_H
#define TRANSFORM_T1912080223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t1912080223  : public Component_t4119265833
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T1912080223_H
#ifndef MONOBEHAVIOUR_T3521571575_H
#define MONOBEHAVIOUR_T3521571575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3521571575  : public Behaviour_t953122217
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3521571575_H
#ifndef UIBEHAVIOUR_T348922653_H
#define UIBEHAVIOUR_T348922653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t348922653  : public MonoBehaviour_t3521571575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T348922653_H
#ifndef GRAPHIC_T4051857987_H
#define GRAPHIC_T4051857987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t4051857987  : public UIBehaviour_t348922653
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t1787675033 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t3771351350  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3743713302 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t3562803580 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t541483223 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t2239667601 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t2239667601 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t2239667601 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t1944769786 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_Material_4)); }
	inline Material_t1787675033 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t1787675033 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t1787675033 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_Color_5)); }
	inline Color_t3771351350  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t3771351350 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t3771351350  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_RectTransform_7)); }
	inline RectTransform_t3743713302 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3743713302 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3743713302 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t3562803580 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t3562803580 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t3562803580 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_Canvas_9)); }
	inline Canvas_t541483223 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t541483223 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t541483223 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t2239667601 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t2239667601 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t2239667601 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t2239667601 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t2239667601 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t2239667601 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t2239667601 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t2239667601 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t2239667601 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t1944769786 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t1944769786 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t1944769786 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t4051857987, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t4051857987_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t1787675033 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t601339354 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3980991349 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t3490760292 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t4051857987_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t1787675033 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t1787675033 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t1787675033 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t4051857987_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t601339354 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t601339354 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t601339354 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t4051857987_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3980991349 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3980991349 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3980991349 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t4051857987_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t3490760292 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t3490760292 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t3490760292 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T4051857987_H
#ifndef LAYOUTGROUP_T2503084249_H
#define LAYOUTGROUP_T2503084249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t2503084249  : public UIBehaviour_t348922653
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t1700670968 * ___m_Padding_2;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_3;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t3743713302 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t3549049435  ___m_Tracker_5;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t3629302141  ___m_TotalMinSize_6;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t3629302141  ___m_TotalPreferredSize_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t3629302141  ___m_TotalFlexibleSize_8;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t1213751224 * ___m_RectChildren_9;

public:
	inline static int32_t get_offset_of_m_Padding_2() { return static_cast<int32_t>(offsetof(LayoutGroup_t2503084249, ___m_Padding_2)); }
	inline RectOffset_t1700670968 * get_m_Padding_2() const { return ___m_Padding_2; }
	inline RectOffset_t1700670968 ** get_address_of_m_Padding_2() { return &___m_Padding_2; }
	inline void set_m_Padding_2(RectOffset_t1700670968 * value)
	{
		___m_Padding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_2), value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_3() { return static_cast<int32_t>(offsetof(LayoutGroup_t2503084249, ___m_ChildAlignment_3)); }
	inline int32_t get_m_ChildAlignment_3() const { return ___m_ChildAlignment_3; }
	inline int32_t* get_address_of_m_ChildAlignment_3() { return &___m_ChildAlignment_3; }
	inline void set_m_ChildAlignment_3(int32_t value)
	{
		___m_ChildAlignment_3 = value;
	}

	inline static int32_t get_offset_of_m_Rect_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t2503084249, ___m_Rect_4)); }
	inline RectTransform_t3743713302 * get_m_Rect_4() const { return ___m_Rect_4; }
	inline RectTransform_t3743713302 ** get_address_of_m_Rect_4() { return &___m_Rect_4; }
	inline void set_m_Rect_4(RectTransform_t3743713302 * value)
	{
		___m_Rect_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_4), value);
	}

	inline static int32_t get_offset_of_m_Tracker_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t2503084249, ___m_Tracker_5)); }
	inline DrivenRectTransformTracker_t3549049435  get_m_Tracker_5() const { return ___m_Tracker_5; }
	inline DrivenRectTransformTracker_t3549049435 * get_address_of_m_Tracker_5() { return &___m_Tracker_5; }
	inline void set_m_Tracker_5(DrivenRectTransformTracker_t3549049435  value)
	{
		___m_Tracker_5 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t2503084249, ___m_TotalMinSize_6)); }
	inline Vector2_t3629302141  get_m_TotalMinSize_6() const { return ___m_TotalMinSize_6; }
	inline Vector2_t3629302141 * get_address_of_m_TotalMinSize_6() { return &___m_TotalMinSize_6; }
	inline void set_m_TotalMinSize_6(Vector2_t3629302141  value)
	{
		___m_TotalMinSize_6 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t2503084249, ___m_TotalPreferredSize_7)); }
	inline Vector2_t3629302141  get_m_TotalPreferredSize_7() const { return ___m_TotalPreferredSize_7; }
	inline Vector2_t3629302141 * get_address_of_m_TotalPreferredSize_7() { return &___m_TotalPreferredSize_7; }
	inline void set_m_TotalPreferredSize_7(Vector2_t3629302141  value)
	{
		___m_TotalPreferredSize_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t2503084249, ___m_TotalFlexibleSize_8)); }
	inline Vector2_t3629302141  get_m_TotalFlexibleSize_8() const { return ___m_TotalFlexibleSize_8; }
	inline Vector2_t3629302141 * get_address_of_m_TotalFlexibleSize_8() { return &___m_TotalFlexibleSize_8; }
	inline void set_m_TotalFlexibleSize_8(Vector2_t3629302141  value)
	{
		___m_TotalFlexibleSize_8 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t2503084249, ___m_RectChildren_9)); }
	inline List_1_t1213751224 * get_m_RectChildren_9() const { return ___m_RectChildren_9; }
	inline List_1_t1213751224 ** get_address_of_m_RectChildren_9() { return &___m_RectChildren_9; }
	inline void set_m_RectChildren_9(List_1_t1213751224 * value)
	{
		___m_RectChildren_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectChildren_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTGROUP_T2503084249_H
#ifndef TOGGLEGROUP_T1667690648_H
#define TOGGLEGROUP_T1667690648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ToggleGroup
struct  ToggleGroup_t1667690648  : public UIBehaviour_t348922653
{
public:
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_2;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t3793437678 * ___m_Toggles_3;

public:
	inline static int32_t get_offset_of_m_AllowSwitchOff_2() { return static_cast<int32_t>(offsetof(ToggleGroup_t1667690648, ___m_AllowSwitchOff_2)); }
	inline bool get_m_AllowSwitchOff_2() const { return ___m_AllowSwitchOff_2; }
	inline bool* get_address_of_m_AllowSwitchOff_2() { return &___m_AllowSwitchOff_2; }
	inline void set_m_AllowSwitchOff_2(bool value)
	{
		___m_AllowSwitchOff_2 = value;
	}

	inline static int32_t get_offset_of_m_Toggles_3() { return static_cast<int32_t>(offsetof(ToggleGroup_t1667690648, ___m_Toggles_3)); }
	inline List_1_t3793437678 * get_m_Toggles_3() const { return ___m_Toggles_3; }
	inline List_1_t3793437678 ** get_address_of_m_Toggles_3() { return &___m_Toggles_3; }
	inline void set_m_Toggles_3(List_1_t3793437678 * value)
	{
		___m_Toggles_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Toggles_3), value);
	}
};

struct ToggleGroup_t1667690648_StaticFields
{
public:
	// System.Predicate`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::<>f__am$cache0
	Predicate_1_t4157104043 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<UnityEngine.UI.Toggle,System.Boolean> UnityEngine.UI.ToggleGroup::<>f__am$cache1
	Func_2_t260217174 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(ToggleGroup_t1667690648_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Predicate_1_t4157104043 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Predicate_1_t4157104043 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Predicate_1_t4157104043 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(ToggleGroup_t1667690648_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t260217174 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t260217174 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t260217174 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEGROUP_T1667690648_H
#ifndef SELECTABLE_T3497516189_H
#define SELECTABLE_T3497516189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3497516189  : public UIBehaviour_t348922653
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t2031445705  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t647289914  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1748043945  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t1011019008 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t4051857987 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1926213249 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_Navigation_3)); }
	inline Navigation_t2031445705  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t2031445705 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t2031445705  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_Colors_5)); }
	inline ColorBlock_t647289914  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t647289914 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t647289914  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_SpriteState_6)); }
	inline SpriteState_t1748043945  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1748043945 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1748043945  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t1011019008 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t1011019008 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t1011019008 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_TargetGraphic_9)); }
	inline Graphic_t4051857987 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t4051857987 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t4051857987 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3497516189, ___m_CanvasGroupCache_15)); }
	inline List_1_t1926213249 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1926213249 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1926213249 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3497516189_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t967554111 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3497516189_StaticFields, ___s_List_2)); }
	inline List_1_t967554111 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t967554111 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t967554111 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3497516189_H
#ifndef HORIZONTALORVERTICALLAYOUTGROUP_T693476021_H
#define HORIZONTALORVERTICALLAYOUTGROUP_T693476021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct  HorizontalOrVerticalLayoutGroup_t693476021  : public LayoutGroup_t2503084249
{
public:
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_10;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_11;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_14;

public:
	inline static int32_t get_offset_of_m_Spacing_10() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t693476021, ___m_Spacing_10)); }
	inline float get_m_Spacing_10() const { return ___m_Spacing_10; }
	inline float* get_address_of_m_Spacing_10() { return &___m_Spacing_10; }
	inline void set_m_Spacing_10(float value)
	{
		___m_Spacing_10 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandWidth_11() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t693476021, ___m_ChildForceExpandWidth_11)); }
	inline bool get_m_ChildForceExpandWidth_11() const { return ___m_ChildForceExpandWidth_11; }
	inline bool* get_address_of_m_ChildForceExpandWidth_11() { return &___m_ChildForceExpandWidth_11; }
	inline void set_m_ChildForceExpandWidth_11(bool value)
	{
		___m_ChildForceExpandWidth_11 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandHeight_12() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t693476021, ___m_ChildForceExpandHeight_12)); }
	inline bool get_m_ChildForceExpandHeight_12() const { return ___m_ChildForceExpandHeight_12; }
	inline bool* get_address_of_m_ChildForceExpandHeight_12() { return &___m_ChildForceExpandHeight_12; }
	inline void set_m_ChildForceExpandHeight_12(bool value)
	{
		___m_ChildForceExpandHeight_12 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlWidth_13() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t693476021, ___m_ChildControlWidth_13)); }
	inline bool get_m_ChildControlWidth_13() const { return ___m_ChildControlWidth_13; }
	inline bool* get_address_of_m_ChildControlWidth_13() { return &___m_ChildControlWidth_13; }
	inline void set_m_ChildControlWidth_13(bool value)
	{
		___m_ChildControlWidth_13 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlHeight_14() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t693476021, ___m_ChildControlHeight_14)); }
	inline bool get_m_ChildControlHeight_14() const { return ___m_ChildControlHeight_14; }
	inline bool* get_address_of_m_ChildControlHeight_14() { return &___m_ChildControlHeight_14; }
	inline void set_m_ChildControlHeight_14(bool value)
	{
		___m_ChildControlHeight_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIZONTALORVERTICALLAYOUTGROUP_T693476021_H
#ifndef TOGGLE_T2028432460_H
#define TOGGLE_T2028432460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t2028432460  : public Selectable_t3497516189
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t4051857987 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t1667690648 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1286222375 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;

public:
	inline static int32_t get_offset_of_toggleTransition_16() { return static_cast<int32_t>(offsetof(Toggle_t2028432460, ___toggleTransition_16)); }
	inline int32_t get_toggleTransition_16() const { return ___toggleTransition_16; }
	inline int32_t* get_address_of_toggleTransition_16() { return &___toggleTransition_16; }
	inline void set_toggleTransition_16(int32_t value)
	{
		___toggleTransition_16 = value;
	}

	inline static int32_t get_offset_of_graphic_17() { return static_cast<int32_t>(offsetof(Toggle_t2028432460, ___graphic_17)); }
	inline Graphic_t4051857987 * get_graphic_17() const { return ___graphic_17; }
	inline Graphic_t4051857987 ** get_address_of_graphic_17() { return &___graphic_17; }
	inline void set_graphic_17(Graphic_t4051857987 * value)
	{
		___graphic_17 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_17), value);
	}

	inline static int32_t get_offset_of_m_Group_18() { return static_cast<int32_t>(offsetof(Toggle_t2028432460, ___m_Group_18)); }
	inline ToggleGroup_t1667690648 * get_m_Group_18() const { return ___m_Group_18; }
	inline ToggleGroup_t1667690648 ** get_address_of_m_Group_18() { return &___m_Group_18; }
	inline void set_m_Group_18(ToggleGroup_t1667690648 * value)
	{
		___m_Group_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_18), value);
	}

	inline static int32_t get_offset_of_onValueChanged_19() { return static_cast<int32_t>(offsetof(Toggle_t2028432460, ___onValueChanged_19)); }
	inline ToggleEvent_t1286222375 * get_onValueChanged_19() const { return ___onValueChanged_19; }
	inline ToggleEvent_t1286222375 ** get_address_of_onValueChanged_19() { return &___onValueChanged_19; }
	inline void set_onValueChanged_19(ToggleEvent_t1286222375 * value)
	{
		___onValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_19), value);
	}

	inline static int32_t get_offset_of_m_IsOn_20() { return static_cast<int32_t>(offsetof(Toggle_t2028432460, ___m_IsOn_20)); }
	inline bool get_m_IsOn_20() const { return ___m_IsOn_20; }
	inline bool* get_address_of_m_IsOn_20() { return &___m_IsOn_20; }
	inline void set_m_IsOn_20(bool value)
	{
		___m_IsOn_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLE_T2028432460_H
#ifndef VERTICALLAYOUTGROUP_T1595007963_H
#define VERTICALLAYOUTGROUP_T1595007963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VerticalLayoutGroup
struct  VerticalLayoutGroup_t1595007963  : public HorizontalOrVerticalLayoutGroup_t693476021
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTICALLAYOUTGROUP_T1595007963_H
// System.Object[]
struct ObjectU5BU5D_t3878505910  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t2749240780  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t539014097  m_Items[1];

public:
	inline Vector3_t539014097  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t539014097 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t539014097  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t539014097  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t539014097 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t539014097  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t2793501812  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t1997556809  m_Items[1];

public:
	inline Color32_t1997556809  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t1997556809 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t1997556809  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t1997556809  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t1997556809 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t1997556809  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t223256560  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t3629302141  m_Items[1];

public:
	inline Vector2_t3629302141  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t3629302141 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t3629302141  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t3629302141  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t3629302141 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t3629302141  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t2571742262  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_t3197448751  m_Items[1];

public:
	inline Vector4_t3197448751  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t3197448751 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t3197448751  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t3197448751  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t3197448751 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t3197448751  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t1884137699  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1221523387  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIVertex_t3143686990  m_Items[1];

public:
	inline UIVertex_t3143686990  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_t3143686990 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_t3143686990  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_t3143686990  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_t3143686990 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_t3143686990  value)
	{
		m_Items[index] = value;
	}
};


// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
extern "C"  void UnityEvent_1_Invoke_m4291855693_gshared (UnityEvent_1_t3218516856 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C"  void UnityEvent_1__ctor_m1158168607_gshared (UnityEvent_1_t3218516856 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m4002443743_gshared (List_1_t3976455761 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m463149724_gshared (List_1_t3976455761 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m3892810357_gshared (List_1_t3976455761 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m4145137978_gshared (List_1_t3976455761 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m271562645_gshared (List_1_t3976455761 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m1862698926_gshared (List_1_t3976455761 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3212803510_gshared (Predicate_1_t45154830 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
extern "C"  RuntimeObject * List_1_Find_m1528371225_gshared (List_1_t3976455761 * __this, Predicate_1_t45154830 * p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2022416843_gshared (Func_2_t66464263 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject* Enumerable_Where_TisRuntimeObject_m3635900317_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t66464263 * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
extern "C"  List_1_t2304019315 * ListPool_1_Get_m1557037846_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
extern "C"  List_1_t3762562027 * ListPool_1_Get_m1820967329_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
extern "C"  List_1_t1099340063 * ListPool_1_Get_m1185189418_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C"  List_1_t667486673 * ListPool_1_Get_m3344342879_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
extern "C"  List_1_t2194049768 * ListPool_1_Get_m3059886837_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3734003385_gshared (List_1_t2304019315 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m219234875_gshared (List_1_t3762562027 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m1986007995_gshared (List_1_t1099340063 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m1443945211_gshared (List_1_t667486673 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3164297150_gshared (List_1_t2194049768 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C"  void List_1_Clear_m3934547908_gshared (List_1_t2304019315 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
extern "C"  void List_1_Clear_m728292554_gshared (List_1_t3762562027 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C"  void List_1_Clear_m3458157773_gshared (List_1_t1099340063 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
extern "C"  void List_1_Clear_m3151567674_gshared (List_1_t667486673 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C"  void List_1_Clear_m2634858558_gshared (List_1_t2194049768 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C"  int32_t List_1_get_Count_m1137088036_gshared (List_1_t2304019315 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C"  int32_t List_1_get_Count_m2921952376_gshared (List_1_t2194049768 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C"  Vector3_t539014097  List_1_get_Item_m3643680419_gshared (List_1_t2304019315 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C"  Color32_t1997556809  List_1_get_Item_m1611827731_gshared (List_1_t3762562027 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C"  Vector2_t3629302141  List_1_get_Item_m528239902_gshared (List_1_t1099340063 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C"  Vector4_t3197448751  List_1_get_Item_m2336204678_gshared (List_1_t667486673 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m2319232235_gshared (List_1_t2304019315 * __this, int32_t p0, Vector3_t539014097  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m1464298370_gshared (List_1_t3762562027 * __this, int32_t p0, Color32_t1997556809  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m227536386_gshared (List_1_t1099340063 * __this, int32_t p0, Vector2_t3629302141  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m2280661285_gshared (List_1_t667486673 * __this, int32_t p0, Vector4_t3197448751  p1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m2077417339_gshared (RuntimeObject * __this /* static, unused */, List_1_t2304019315 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m309493837_gshared (RuntimeObject * __this /* static, unused */, List_1_t3762562027 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m2693915268_gshared (RuntimeObject * __this /* static, unused */, List_1_t1099340063 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m3432441777_gshared (RuntimeObject * __this /* static, unused */, List_1_t667486673 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m1395250361_gshared (RuntimeObject * __this /* static, unused */, List_1_t2194049768 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C"  void List_1_Add_m712915333_gshared (List_1_t2304019315 * __this, Vector3_t539014097  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(!0)
extern "C"  void List_1_Add_m1402018060_gshared (List_1_t3762562027 * __this, Color32_t1997556809  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
extern "C"  void List_1_Add_m2558363720_gshared (List_1_t1099340063 * __this, Vector2_t3629302141  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(!0)
extern "C"  void List_1_Add_m340864592_gshared (List_1_t667486673 * __this, Vector4_t3197448751  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m3664818724_gshared (List_1_t2194049768 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void UnityEngine.UI.Toggle/ToggleEvent::.ctor()
extern "C"  void ToggleEvent__ctor_m158257098 (ToggleEvent_t1286222375 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.ctor()
extern "C"  void Selectable__ctor_m2623503290 (Selectable_t3497516189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C"  void Toggle_SetToggleGroup_m3282172488 (Toggle_t2028432460 * __this, ToggleGroup_t1667690648 * ___newGroup0, bool ___setMemberValue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C"  void Toggle_PlayEffect_m2647711912 (Toggle_t2028432460 * __this, bool ___instant0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
extern "C"  void Selectable_OnEnable_m3090488105 (Selectable_t3497516189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
extern "C"  void Selectable_OnDisable_m1736064990 (Selectable_t3497516189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m864207549 (RuntimeObject * __this /* static, unused */, Object_t948050745 * p0, Object_t948050745 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C"  CanvasRenderer_t3562803580 * Graphic_get_canvasRenderer_m2279392263 (Graphic_t4051857987 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C"  Color_t3771351350  CanvasRenderer_GetColor_m2070153453 (CanvasRenderer_t3562803580 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C"  bool Mathf_Approximately_m2307678847 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C"  void Toggle_Set_m2424241334 (Toggle_t2028432460 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
extern "C"  void Selectable_OnDidApplyAnimationProperties_m1761937977 (Selectable_t3497516189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::UnregisterToggle(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_UnregisterToggle_m3297871363 (ToggleGroup_t1667690648 * __this, Toggle_t2028432460 * ___toggle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::RegisterToggle(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_RegisterToggle_m3430917418 (ToggleGroup_t1667690648 * __this, Toggle_t2028432460 * ___toggle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m1726121288 (Toggle_t2028432460 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::NotifyToggleOn(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_NotifyToggleOn_m3486424751 (ToggleGroup_t1667690648 * __this, Toggle_t2028432460 * ___toggle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C"  void Toggle_Set_m889303675 (Toggle_t2028432460 * __this, bool ___value0, bool ___sendCallback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::AnyTogglesOn()
extern "C"  bool ToggleGroup_AnyTogglesOn_m2029130407 (ToggleGroup_t1667690648 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::get_allowSwitchOff()
extern "C"  bool ToggleGroup_get_allowSwitchOff_m2228151442 (ToggleGroup_t1667690648 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UISystemProfilerApi::AddMarker(System.String,UnityEngine.Object)
extern "C"  void UISystemProfilerApi_AddMarker_m3946739027 (RuntimeObject * __this /* static, unused */, String_t* p0, Object_t948050745 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
#define UnityEvent_1_Invoke_m4291855693(__this, p0, method) ((  void (*) (UnityEvent_1_t3218516856 *, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4291855693_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3469215971 (RuntimeObject * __this /* static, unused */, Object_t948050745 * p0, Object_t948050745 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C"  void Toggle_set_isOn_m2198593619 (Toggle_t2028432460 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C"  int32_t PointerEventData_get_button_m962870548 (PointerEventData_t3836843803 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C"  void Toggle_InternalToggle_m2745364707 (Toggle_t2028432460 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t1912080223 * Component_get_transform_m2486953316 (Component_t4119265833 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
#define UnityEvent_1__ctor_m1158168607(__this, method) ((  void (*) (UnityEvent_1_t3218516856 *, const RuntimeMethod*))UnityEvent_1__ctor_m1158168607_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
#define List_1__ctor_m706650945(__this, method) ((  void (*) (List_1_t3793437678 *, const RuntimeMethod*))List_1__ctor_m4002443743_gshared)(__this, method)
// System.Void UnityEngine.EventSystems.UIBehaviour::.ctor()
extern "C"  void UIBehaviour__ctor_m2895210200 (UIBehaviour_t348922653 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(!0)
#define List_1_Contains_m765978726(__this, p0, method) ((  bool (*) (List_1_t3793437678 *, Toggle_t2028432460 *, const RuntimeMethod*))List_1_Contains_m463149724_gshared)(__this, p0, method)
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m114329518 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t3878505910* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m947310639 (ArgumentException_t3402785744 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_ValidateToggleIsInGroup_m166236784 (ToggleGroup_t1667690648 * __this, Toggle_t2028432460 * ___toggle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
#define List_1_get_Item_m2642593961(__this, p0, method) ((  Toggle_t2028432460 * (*) (List_1_t3793437678 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3892810357_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
#define List_1_get_Count_m1943679014(__this, method) ((  int32_t (*) (List_1_t3793437678 *, const RuntimeMethod*))List_1_get_Count_m4145137978_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(!0)
#define List_1_Remove_m1434396289(__this, p0, method) ((  bool (*) (List_1_t3793437678 *, Toggle_t2028432460 *, const RuntimeMethod*))List_1_Remove_m271562645_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(!0)
#define List_1_Add_m2196678616(__this, p0, method) ((  void (*) (List_1_t3793437678 *, Toggle_t2028432460 *, const RuntimeMethod*))List_1_Add_m1862698926_gshared)(__this, p0, method)
// System.Void System.Predicate`1<UnityEngine.UI.Toggle>::.ctor(System.Object,System.IntPtr)
#define Predicate_1__ctor_m1446965918(__this, p0, p1, method) ((  void (*) (Predicate_1_t4157104043 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3212803510_gshared)(__this, p0, p1, method)
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<!0>)
#define List_1_Find_m2028517492(__this, p0, method) ((  Toggle_t2028432460 * (*) (List_1_t3793437678 *, Predicate_1_t4157104043 *, const RuntimeMethod*))List_1_Find_m1528371225_gshared)(__this, p0, method)
// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m2189824888(__this, p0, p1, method) ((  void (*) (Func_2_t260217174 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2022416843_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.UI.Toggle>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisToggle_t2028432460_m2797001356(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t260217174 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3635900317_gshared)(__this /* static, unused */, p0, p1, method)
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
#define ListPool_1_Get_m1557037846(__this /* static, unused */, method) ((  List_1_t2304019315 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ListPool_1_Get_m1557037846_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
#define ListPool_1_Get_m1820967329(__this /* static, unused */, method) ((  List_1_t3762562027 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ListPool_1_Get_m1820967329_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
#define ListPool_1_Get_m1185189418(__this /* static, unused */, method) ((  List_1_t1099340063 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ListPool_1_Get_m1185189418_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
#define ListPool_1_Get_m3344342879(__this /* static, unused */, method) ((  List_1_t667486673 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ListPool_1_Get_m3344342879_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
#define ListPool_1_Get_m3059886837(__this /* static, unused */, method) ((  List_1_t2194049768 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ListPool_1_Get_m3059886837_gshared)(__this /* static, unused */, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m754512582 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t2749240780* Mesh_get_vertices_m3785957846 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m3734003385(__this, p0, method) ((  void (*) (List_1_t2304019315 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3734003385_gshared)(__this, p0, method)
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C"  Color32U5BU5D_t2793501812* Mesh_get_colors32_m866433688 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m219234875(__this, p0, method) ((  void (*) (List_1_t3762562027 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m219234875_gshared)(__this, p0, method)
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t223256560* Mesh_get_uv_m1477553283 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m1986007995(__this, p0, method) ((  void (*) (List_1_t1099340063 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1986007995_gshared)(__this, p0, method)
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C"  Vector2U5BU5D_t223256560* Mesh_get_uv2_m2174032018 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv3()
extern "C"  Vector2U5BU5D_t223256560* Mesh_get_uv3_m2874069789 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv4()
extern "C"  Vector2U5BU5D_t223256560* Mesh_get_uv4_m2032374564 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t2749240780* Mesh_get_normals_m2977171667 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C"  Vector4U5BU5D_t2571742262* Mesh_get_tangents_m948517805 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m1443945211(__this, p0, method) ((  void (*) (List_1_t667486673 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1443945211_gshared)(__this, p0, method)
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C"  Int32U5BU5D_t1884137699* Mesh_GetIndices_m3829476674 (Mesh_t3980991349 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m3164297150(__this, p0, method) ((  void (*) (List_1_t2194049768 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3164297150_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
#define List_1_Clear_m3934547908(__this, method) ((  void (*) (List_1_t2304019315 *, const RuntimeMethod*))List_1_Clear_m3934547908_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
#define List_1_Clear_m728292554(__this, method) ((  void (*) (List_1_t3762562027 *, const RuntimeMethod*))List_1_Clear_m728292554_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
#define List_1_Clear_m3458157773(__this, method) ((  void (*) (List_1_t1099340063 *, const RuntimeMethod*))List_1_Clear_m3458157773_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
#define List_1_Clear_m3151567674(__this, method) ((  void (*) (List_1_t667486673 *, const RuntimeMethod*))List_1_Clear_m3151567674_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
#define List_1_Clear_m2634858558(__this, method) ((  void (*) (List_1_t2194049768 *, const RuntimeMethod*))List_1_Clear_m2634858558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
#define List_1_get_Count_m1137088036(__this, method) ((  int32_t (*) (List_1_t2304019315 *, const RuntimeMethod*))List_1_get_Count_m1137088036_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
#define List_1_get_Count_m2921952376(__this, method) ((  int32_t (*) (List_1_t2194049768 *, const RuntimeMethod*))List_1_get_Count_m2921952376_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
#define List_1_get_Item_m3643680419(__this, p0, method) ((  Vector3_t539014097  (*) (List_1_t2304019315 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3643680419_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
#define List_1_get_Item_m1611827731(__this, p0, method) ((  Color32_t1997556809  (*) (List_1_t3762562027 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1611827731_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
#define List_1_get_Item_m528239902(__this, p0, method) ((  Vector2_t3629302141  (*) (List_1_t1099340063 *, int32_t, const RuntimeMethod*))List_1_get_Item_m528239902_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
#define List_1_get_Item_m2336204678(__this, p0, method) ((  Vector4_t3197448751  (*) (List_1_t667486673 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2336204678_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
#define List_1_set_Item_m2319232235(__this, p0, p1, method) ((  void (*) (List_1_t2304019315 *, int32_t, Vector3_t539014097 , const RuntimeMethod*))List_1_set_Item_m2319232235_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,!0)
#define List_1_set_Item_m1464298370(__this, p0, p1, method) ((  void (*) (List_1_t3762562027 *, int32_t, Color32_t1997556809 , const RuntimeMethod*))List_1_set_Item_m1464298370_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,!0)
#define List_1_set_Item_m227536386(__this, p0, p1, method) ((  void (*) (List_1_t1099340063 *, int32_t, Vector2_t3629302141 , const RuntimeMethod*))List_1_set_Item_m227536386_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,!0)
#define List_1_set_Item_m2280661285(__this, p0, p1, method) ((  void (*) (List_1_t667486673 *, int32_t, Vector4_t3197448751 , const RuntimeMethod*))List_1_set_Item_m2280661285_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m1035832199 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetVertices_m1295980496 (Mesh_t3980991349 * __this, List_1_t2304019315 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C"  void Mesh_SetColors_m2069626942 (Mesh_t3980991349 * __this, List_1_t3762562027 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void Mesh_SetUVs_m416887114 (Mesh_t3980991349 * __this, int32_t p0, List_1_t1099340063 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetNormals_m2012274003 (Mesh_t3980991349 * __this, List_1_t2304019315 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_SetTangents_m4172143889 (Mesh_t3980991349 * __this, List_1_t667486673 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C"  void Mesh_SetTriangles_m2611446446 (Mesh_t3980991349 * __this, List_1_t2194049768 * p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C"  void Mesh_RecalculateBounds_m2524795740 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
#define ListPool_1_Release_m2077417339(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, List_1_t2304019315 *, const RuntimeMethod*))ListPool_1_Release_m2077417339_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
#define ListPool_1_Release_m309493837(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, List_1_t3762562027 *, const RuntimeMethod*))ListPool_1_Release_m309493837_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
#define ListPool_1_Release_m2693915268(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, List_1_t1099340063 *, const RuntimeMethod*))ListPool_1_Release_m2693915268_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
#define ListPool_1_Release_m3432441777(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, List_1_t667486673 *, const RuntimeMethod*))ListPool_1_Release_m3432441777_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
#define ListPool_1_Release_m1395250361(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, List_1_t2194049768 *, const RuntimeMethod*))ListPool_1_Release_m1395250361_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
#define List_1_Add_m712915333(__this, p0, method) ((  void (*) (List_1_t2304019315 *, Vector3_t539014097 , const RuntimeMethod*))List_1_Add_m712915333_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(!0)
#define List_1_Add_m1402018060(__this, p0, method) ((  void (*) (List_1_t3762562027 *, Color32_t1997556809 , const RuntimeMethod*))List_1_Add_m1402018060_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
#define List_1_Add_m2558363720(__this, p0, method) ((  void (*) (List_1_t1099340063 *, Vector2_t3629302141 , const RuntimeMethod*))List_1_Add_m2558363720_gshared)(__this, p0, method)
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t3629302141  Vector2_get_zero_m3836186923 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(!0)
#define List_1_Add_m340864592(__this, p0, method) ((  void (*) (List_1_t667486673 *, Vector4_t3197448751 , const RuntimeMethod*))List_1_Add_m340864592_gshared)(__this, p0, method)
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C"  void VertexHelper_AddVert_m2232991513 (VertexHelper_t3490760292 * __this, Vector3_t539014097  ___position0, Color32_t1997556809  ___color1, Vector2_t3629302141  ___uv02, Vector2_t3629302141  ___uv13, Vector3_t539014097  ___normal4, Vector4_t3197448751  ___tangent5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m3664818724(__this, p0, method) ((  void (*) (List_1_t2194049768 *, int32_t, const RuntimeMethod*))List_1_Add_m3664818724_gshared)(__this, p0, method)
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C"  int32_t VertexHelper_get_currentVertCount_m2919873245 (VertexHelper_t3490760292 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C"  void VertexHelper_AddTriangle_m1107695520 (VertexHelper_t3490760292 * __this, int32_t ___idx00, int32_t ___idx11, int32_t ___idx22, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void CanvasRenderer_AddUIVertexStream_m666139778 (RuntimeObject * __this /* static, unused */, List_1_t613724912 * p0, List_1_t2304019315 * p1, List_1_t3762562027 * p2, List_1_t1099340063 * p3, List_1_t1099340063 * p4, List_1_t1099340063 * p5, List_1_t1099340063 * p6, List_1_t2304019315 * p7, List_1_t667486673 * p8, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void CanvasRenderer_SplitUIVertexStreams_m3408956257 (RuntimeObject * __this /* static, unused */, List_1_t613724912 * p0, List_1_t2304019315 * p1, List_1_t3762562027 * p2, List_1_t1099340063 * p3, List_1_t1099340063 * p4, List_1_t1099340063 * p5, List_1_t1099340063 * p6, List_1_t2304019315 * p7, List_1_t667486673 * p8, List_1_t2194049768 * p9, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void CanvasRenderer_CreateUIVertexStream_m3195358329 (RuntimeObject * __this /* static, unused */, List_1_t613724912 * p0, List_1_t2304019315 * p1, List_1_t3762562027 * p2, List_1_t1099340063 * p3, List_1_t1099340063 * p4, List_1_t1099340063 * p5, List_1_t1099340063 * p6, List_1_t2304019315 * p7, List_1_t667486673 * p8, List_1_t2194049768 * p9, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m3717576313 (Vector4_t3197448751 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t539014097  Vector3_get_back_m100459210 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::.ctor()
extern "C"  void HorizontalOrVerticalLayoutGroup__ctor_m2166191989 (HorizontalOrVerticalLayoutGroup_t693476021 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
extern "C"  void LayoutGroup_CalculateLayoutInputHorizontal_m2349246622 (LayoutGroup_t2503084249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::CalcAlongAxis(System.Int32,System.Boolean)
extern "C"  void HorizontalOrVerticalLayoutGroup_CalcAlongAxis_m2780122631 (HorizontalOrVerticalLayoutGroup_t693476021 * __this, int32_t ___axis0, bool ___isVertical1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::SetChildrenAlongAxis(System.Int32,System.Boolean)
extern "C"  void HorizontalOrVerticalLayoutGroup_SetChildrenAlongAxis_m3078638777 (HorizontalOrVerticalLayoutGroup_t693476021 * __this, int32_t ___axis0, bool ___isVertical1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.Toggle::.ctor()
extern "C"  void Toggle__ctor_m36168811 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Toggle__ctor_m36168811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_toggleTransition_16(1);
		ToggleEvent_t1286222375 * L_0 = (ToggleEvent_t1286222375 *)il2cpp_codegen_object_new(ToggleEvent_t1286222375_il2cpp_TypeInfo_var);
		ToggleEvent__ctor_m158257098(L_0, /*hidden argument*/NULL);
		__this->set_onValueChanged_19(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Selectable_t3497516189_il2cpp_TypeInfo_var);
		Selectable__ctor_m2623503290(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::get_group()
extern "C"  ToggleGroup_t1667690648 * Toggle_get_group_m878984578 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	ToggleGroup_t1667690648 * V_0 = NULL;
	{
		ToggleGroup_t1667690648 * L_0 = __this->get_m_Group_18();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ToggleGroup_t1667690648 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
extern "C"  void Toggle_set_group_m1895305932 (Toggle_t2028432460 * __this, ToggleGroup_t1667690648 * ___value0, const RuntimeMethod* method)
{
	{
		ToggleGroup_t1667690648 * L_0 = ___value0;
		__this->set_m_Group_18(L_0);
		ToggleGroup_t1667690648 * L_1 = __this->get_m_Group_18();
		Toggle_SetToggleGroup_m3282172488(__this, L_1, (bool)1, /*hidden argument*/NULL);
		Toggle_PlayEffect_m2647711912(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Toggle_Rebuild_m1772144988 (Toggle_t2028432460 * __this, int32_t ___executing0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::LayoutComplete()
extern "C"  void Toggle_LayoutComplete_m1293141628 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::GraphicUpdateComplete()
extern "C"  void Toggle_GraphicUpdateComplete_m4036244413 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::OnEnable()
extern "C"  void Toggle_OnEnable_m3347938608 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	{
		Selectable_OnEnable_m3090488105(__this, /*hidden argument*/NULL);
		ToggleGroup_t1667690648 * L_0 = __this->get_m_Group_18();
		Toggle_SetToggleGroup_m3282172488(__this, L_0, (bool)0, /*hidden argument*/NULL);
		Toggle_PlayEffect_m2647711912(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::OnDisable()
extern "C"  void Toggle_OnDisable_m1215927927 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	{
		Toggle_SetToggleGroup_m3282172488(__this, (ToggleGroup_t1667690648 *)NULL, (bool)0, /*hidden argument*/NULL);
		Selectable_OnDisable_m1736064990(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::OnDidApplyAnimationProperties()
extern "C"  void Toggle_OnDidApplyAnimationProperties_m389703441 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Toggle_OnDidApplyAnimationProperties_m389703441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_t3771351350  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Graphic_t4051857987 * L_0 = __this->get_graphic_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m864207549(NULL /*static, unused*/, L_0, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		Graphic_t4051857987 * L_2 = __this->get_graphic_17();
		NullCheck(L_2);
		CanvasRenderer_t3562803580 * L_3 = Graphic_get_canvasRenderer_m2279392263(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Color_t3771351350  L_4 = CanvasRenderer_GetColor_m2070153453(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_a_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t330283615_il2cpp_TypeInfo_var);
		bool L_6 = Mathf_Approximately_m2307678847(NULL /*static, unused*/, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = __this->get_m_IsOn_20();
		bool L_8 = V_0;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		bool L_9 = V_0;
		__this->set_m_IsOn_20(L_9);
		bool L_10 = V_0;
		Toggle_Set_m2424241334(__this, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0058:
	{
	}

IL_0059:
	{
		Selectable_OnDidApplyAnimationProperties_m1761937977(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C"  void Toggle_SetToggleGroup_m3282172488 (Toggle_t2028432460 * __this, ToggleGroup_t1667690648 * ___newGroup0, bool ___setMemberValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Toggle_SetToggleGroup_m3282172488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ToggleGroup_t1667690648 * V_0 = NULL;
	{
		ToggleGroup_t1667690648 * L_0 = __this->get_m_Group_18();
		V_0 = L_0;
		ToggleGroup_t1667690648 * L_1 = __this->get_m_Group_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m864207549(NULL /*static, unused*/, L_1, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ToggleGroup_t1667690648 * L_3 = __this->get_m_Group_18();
		NullCheck(L_3);
		ToggleGroup_UnregisterToggle_m3297871363(L_3, __this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		bool L_4 = ___setMemberValue1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		ToggleGroup_t1667690648 * L_5 = ___newGroup0;
		__this->set_m_Group_18(L_5);
	}

IL_0032:
	{
		ToggleGroup_t1667690648 * L_6 = ___newGroup0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m864207549(NULL /*static, unused*/, L_6, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		ToggleGroup_t1667690648 * L_9 = ___newGroup0;
		NullCheck(L_9);
		ToggleGroup_RegisterToggle_m3430917418(L_9, __this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		ToggleGroup_t1667690648 * L_10 = ___newGroup0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m864207549(NULL /*static, unused*/, L_10, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		ToggleGroup_t1667690648 * L_12 = ___newGroup0;
		ToggleGroup_t1667690648 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m864207549(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		bool L_15 = Toggle_get_isOn_m1726121288(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0085;
		}
	}
	{
		bool L_16 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_16)
		{
			goto IL_0085;
		}
	}
	{
		ToggleGroup_t1667690648 * L_17 = ___newGroup0;
		NullCheck(L_17);
		ToggleGroup_NotifyToggleOn_m3486424751(L_17, __this, /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m1726121288 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_IsOn_20();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C"  void Toggle_set_isOn_m2198593619 (Toggle_t2028432460 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Toggle_Set_m2424241334(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C"  void Toggle_Set_m2424241334 (Toggle_t2028432460 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Toggle_Set_m889303675(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C"  void Toggle_Set_m889303675 (Toggle_t2028432460 * __this, bool ___value0, bool ___sendCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Toggle_Set_m889303675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_IsOn_20();
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_00aa;
	}

IL_0012:
	{
		bool L_2 = ___value0;
		__this->set_m_IsOn_20(L_2);
		ToggleGroup_t1667690648 * L_3 = __this->get_m_Group_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m864207549(NULL /*static, unused*/, L_3, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_5)
		{
			goto IL_0077;
		}
	}
	{
		bool L_6 = __this->get_m_IsOn_20();
		if (L_6)
		{
			goto IL_0061;
		}
	}
	{
		ToggleGroup_t1667690648 * L_7 = __this->get_m_Group_18();
		NullCheck(L_7);
		bool L_8 = ToggleGroup_AnyTogglesOn_m2029130407(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0076;
		}
	}
	{
		ToggleGroup_t1667690648 * L_9 = __this->get_m_Group_18();
		NullCheck(L_9);
		bool L_10 = ToggleGroup_get_allowSwitchOff_m2228151442(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0076;
		}
	}

IL_0061:
	{
		__this->set_m_IsOn_20((bool)1);
		ToggleGroup_t1667690648 * L_11 = __this->get_m_Group_18();
		NullCheck(L_11);
		ToggleGroup_NotifyToggleOn_m3486424751(L_11, __this, /*hidden argument*/NULL);
	}

IL_0076:
	{
	}

IL_0077:
	{
		int32_t L_12 = __this->get_toggleTransition_16();
		Toggle_PlayEffect_m2647711912(__this, (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		bool L_13 = ___sendCallback1;
		if (!L_13)
		{
			goto IL_00aa;
		}
	}
	{
		UISystemProfilerApi_AddMarker_m3946739027(NULL /*static, unused*/, _stringLiteral2020529103, __this, /*hidden argument*/NULL);
		ToggleEvent_t1286222375 * L_14 = __this->get_onValueChanged_19();
		bool L_15 = __this->get_m_IsOn_20();
		NullCheck(L_14);
		UnityEvent_1_Invoke_m4291855693(L_14, L_15, /*hidden argument*/UnityEvent_1_Invoke_m4291855693_RuntimeMethod_var);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C"  void Toggle_PlayEffect_m2647711912 (Toggle_t2028432460 * __this, bool ___instant0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Toggle_PlayEffect_m2647711912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Graphic_t4051857987 * G_B4_0 = NULL;
	Graphic_t4051857987 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Graphic_t4051857987 * G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	Graphic_t4051857987 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	Graphic_t4051857987 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Graphic_t4051857987 * G_B8_2 = NULL;
	{
		Graphic_t4051857987 * L_0 = __this->get_graphic_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3469215971(NULL /*static, unused*/, L_0, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0052;
	}

IL_0017:
	{
		Graphic_t4051857987 * L_2 = __this->get_graphic_17();
		bool L_3 = __this->get_m_IsOn_20();
		G_B3_0 = L_2;
		if (!L_3)
		{
			G_B4_0 = L_2;
			goto IL_0032;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		goto IL_0037;
	}

IL_0032:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_0037:
	{
		bool L_4 = ___instant0;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (!L_4)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_0047;
		}
	}
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_004c;
	}

IL_0047:
	{
		G_B8_0 = (0.1f);
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_004c:
	{
		NullCheck(G_B8_2);
		VirtActionInvoker3< float, float, bool >::Invoke(48 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, G_B8_2, G_B8_1, G_B8_0, (bool)1);
	}

IL_0052:
	{
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::Start()
extern "C"  void Toggle_Start_m1101087981 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	{
		Toggle_PlayEffect_m2647711912(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C"  void Toggle_InternalToggle_m2745364707 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, __this);
		if (L_1)
		{
			goto IL_001c;
		}
	}

IL_0017:
	{
		goto IL_002b;
	}

IL_001c:
	{
		bool L_2 = Toggle_get_isOn_m1726121288(__this, /*hidden argument*/NULL);
		Toggle_set_isOn_m2198593619(__this, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Toggle_OnPointerClick_m674678280 (Toggle_t2028432460 * __this, PointerEventData_t3836843803 * ___eventData0, const RuntimeMethod* method)
{
	{
		PointerEventData_t3836843803 * L_0 = ___eventData0;
		NullCheck(L_0);
		int32_t L_1 = PointerEventData_get_button_m962870548(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0017;
	}

IL_0011:
	{
		Toggle_InternalToggle_m2745364707(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.UI.Toggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void Toggle_OnSubmit_m2245823012 (Toggle_t2028432460 * __this, BaseEventData_t2100590868 * ___eventData0, const RuntimeMethod* method)
{
	{
		Toggle_InternalToggle_m2745364707(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t1912080223 * Toggle_UnityEngine_UI_ICanvasElement_get_transform_m3247304318 (Toggle_t2028432460 * __this, const RuntimeMethod* method)
{
	{
		Transform_t1912080223 * L_0 = Component_get_transform_m2486953316(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.Toggle/ToggleEvent::.ctor()
extern "C"  void ToggleEvent__ctor_m158257098 (ToggleEvent_t1286222375 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleEvent__ctor_m158257098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1158168607(__this, /*hidden argument*/UnityEvent_1__ctor_m1158168607_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ToggleGroup::.ctor()
extern "C"  void ToggleGroup__ctor_m1157248414 (ToggleGroup_t1667690648 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroup__ctor_m1157248414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_AllowSwitchOff_2((bool)0);
		List_1_t3793437678 * L_0 = (List_1_t3793437678 *)il2cpp_codegen_object_new(List_1_t3793437678_il2cpp_TypeInfo_var);
		List_1__ctor_m706650945(L_0, /*hidden argument*/List_1__ctor_m706650945_RuntimeMethod_var);
		__this->set_m_Toggles_3(L_0);
		UIBehaviour__ctor_m2895210200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.ToggleGroup::get_allowSwitchOff()
extern "C"  bool ToggleGroup_get_allowSwitchOff_m2228151442 (ToggleGroup_t1667690648 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_AllowSwitchOff_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.ToggleGroup::set_allowSwitchOff(System.Boolean)
extern "C"  void ToggleGroup_set_allowSwitchOff_m2883309303 (ToggleGroup_t1667690648 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_AllowSwitchOff_2(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.ToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_ValidateToggleIsInGroup_m166236784 (ToggleGroup_t1667690648 * __this, Toggle_t2028432460 * ___toggle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroup_ValidateToggleIsInGroup_m166236784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Toggle_t2028432460 * L_0 = ___toggle0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3469215971(NULL /*static, unused*/, L_0, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t3793437678 * L_2 = __this->get_m_Toggles_3();
		Toggle_t2028432460 * L_3 = ___toggle0;
		NullCheck(L_2);
		bool L_4 = List_1_Contains_m765978726(L_2, L_3, /*hidden argument*/List_1_Contains_m765978726_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_003c;
		}
	}

IL_001e:
	{
		ObjectU5BU5D_t3878505910* L_5 = ((ObjectU5BU5D_t3878505910*)SZArrayNew(ObjectU5BU5D_t3878505910_il2cpp_TypeInfo_var, (uint32_t)2));
		Toggle_t2028432460 * L_6 = ___toggle0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3878505910* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, __this);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m114329518(NULL /*static, unused*/, _stringLiteral553396747, L_7, /*hidden argument*/NULL);
		ArgumentException_t3402785744 * L_9 = (ArgumentException_t3402785744 *)il2cpp_codegen_object_new(ArgumentException_t3402785744_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m947310639(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_003c:
	{
		return;
	}
}
// System.Void UnityEngine.UI.ToggleGroup::NotifyToggleOn(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_NotifyToggleOn_m3486424751 (ToggleGroup_t1667690648 * __this, Toggle_t2028432460 * ___toggle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroup_NotifyToggleOn_m3486424751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Toggle_t2028432460 * L_0 = ___toggle0;
		ToggleGroup_ValidateToggleIsInGroup_m166236784(__this, L_0, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0043;
	}

IL_000f:
	{
		List_1_t3793437678 * L_1 = __this->get_m_Toggles_3();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Toggle_t2028432460 * L_3 = List_1_get_Item_m2642593961(L_1, L_2, /*hidden argument*/List_1_get_Item_m2642593961_RuntimeMethod_var);
		Toggle_t2028432460 * L_4 = ___toggle0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m3469215971(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_003f;
	}

IL_002c:
	{
		List_1_t3793437678 * L_6 = __this->get_m_Toggles_3();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Toggle_t2028432460 * L_8 = List_1_get_Item_m2642593961(L_6, L_7, /*hidden argument*/List_1_get_Item_m2642593961_RuntimeMethod_var);
		NullCheck(L_8);
		Toggle_set_isOn_m2198593619(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_10 = V_0;
		List_1_t3793437678 * L_11 = __this->get_m_Toggles_3();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m1943679014(L_11, /*hidden argument*/List_1_get_Count_m1943679014_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.ToggleGroup::UnregisterToggle(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_UnregisterToggle_m3297871363 (ToggleGroup_t1667690648 * __this, Toggle_t2028432460 * ___toggle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroup_UnregisterToggle_m3297871363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3793437678 * L_0 = __this->get_m_Toggles_3();
		Toggle_t2028432460 * L_1 = ___toggle0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m765978726(L_0, L_1, /*hidden argument*/List_1_Contains_m765978726_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		List_1_t3793437678 * L_3 = __this->get_m_Toggles_3();
		Toggle_t2028432460 * L_4 = ___toggle0;
		NullCheck(L_3);
		List_1_Remove_m1434396289(L_3, L_4, /*hidden argument*/List_1_Remove_m1434396289_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityEngine.UI.ToggleGroup::RegisterToggle(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_RegisterToggle_m3430917418 (ToggleGroup_t1667690648 * __this, Toggle_t2028432460 * ___toggle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroup_RegisterToggle_m3430917418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3793437678 * L_0 = __this->get_m_Toggles_3();
		Toggle_t2028432460 * L_1 = ___toggle0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m765978726(L_0, L_1, /*hidden argument*/List_1_Contains_m765978726_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t3793437678 * L_3 = __this->get_m_Toggles_3();
		Toggle_t2028432460 * L_4 = ___toggle0;
		NullCheck(L_3);
		List_1_Add_m2196678616(L_3, L_4, /*hidden argument*/List_1_Add_m2196678616_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.ToggleGroup::AnyTogglesOn()
extern "C"  bool ToggleGroup_AnyTogglesOn_m2029130407 (ToggleGroup_t1667690648 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroup_AnyTogglesOn_m2029130407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t3793437678 * G_B2_0 = NULL;
	List_1_t3793437678 * G_B1_0 = NULL;
	{
		List_1_t3793437678 * L_0 = __this->get_m_Toggles_3();
		Predicate_1_t4157104043 * L_1 = ((ToggleGroup_t1667690648_StaticFields*)il2cpp_codegen_static_fields_for(ToggleGroup_t1667690648_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001f;
		}
	}
	{
		intptr_t L_2 = (intptr_t)ToggleGroup_U3CAnyTogglesOnU3Em__0_m909475426_RuntimeMethod_var;
		Predicate_1_t4157104043 * L_3 = (Predicate_1_t4157104043 *)il2cpp_codegen_object_new(Predicate_1_t4157104043_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m1446965918(L_3, NULL, L_2, /*hidden argument*/Predicate_1__ctor_m1446965918_RuntimeMethod_var);
		((ToggleGroup_t1667690648_StaticFields*)il2cpp_codegen_static_fields_for(ToggleGroup_t1667690648_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_4(L_3);
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		Predicate_1_t4157104043 * L_4 = ((ToggleGroup_t1667690648_StaticFields*)il2cpp_codegen_static_fields_for(ToggleGroup_t1667690648_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		NullCheck(G_B2_0);
		Toggle_t2028432460 * L_5 = List_1_Find_m2028517492(G_B2_0, L_4, /*hidden argument*/List_1_Find_m2028517492_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m864207549(NULL /*static, unused*/, L_5, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
extern "C"  RuntimeObject* ToggleGroup_ActiveToggles_m1609914701 (ToggleGroup_t1667690648 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroup_ActiveToggles_m1609914701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t3793437678 * G_B2_0 = NULL;
	List_1_t3793437678 * G_B1_0 = NULL;
	{
		List_1_t3793437678 * L_0 = __this->get_m_Toggles_3();
		Func_2_t260217174 * L_1 = ((ToggleGroup_t1667690648_StaticFields*)il2cpp_codegen_static_fields_for(ToggleGroup_t1667690648_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_5();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001f;
		}
	}
	{
		intptr_t L_2 = (intptr_t)ToggleGroup_U3CActiveTogglesU3Em__1_m2987193891_RuntimeMethod_var;
		Func_2_t260217174 * L_3 = (Func_2_t260217174 *)il2cpp_codegen_object_new(Func_2_t260217174_il2cpp_TypeInfo_var);
		Func_2__ctor_m2189824888(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m2189824888_RuntimeMethod_var);
		((ToggleGroup_t1667690648_StaticFields*)il2cpp_codegen_static_fields_for(ToggleGroup_t1667690648_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_5(L_3);
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		Func_2_t260217174 * L_4 = ((ToggleGroup_t1667690648_StaticFields*)il2cpp_codegen_static_fields_for(ToggleGroup_t1667690648_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_5();
		RuntimeObject* L_5 = Enumerable_Where_TisToggle_t2028432460_m2797001356(NULL /*static, unused*/, G_B2_0, L_4, /*hidden argument*/Enumerable_Where_TisToggle_t2028432460_m2797001356_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityEngine.UI.ToggleGroup::SetAllTogglesOff()
extern "C"  void ToggleGroup_SetAllTogglesOff_m4087873876 (ToggleGroup_t1667690648 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroup_SetAllTogglesOff_m4087873876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_m_AllowSwitchOff_2();
		V_0 = L_0;
		__this->set_m_AllowSwitchOff_2((bool)1);
		V_1 = 0;
		goto IL_002c;
	}

IL_0016:
	{
		List_1_t3793437678 * L_1 = __this->get_m_Toggles_3();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Toggle_t2028432460 * L_3 = List_1_get_Item_m2642593961(L_1, L_2, /*hidden argument*/List_1_get_Item_m2642593961_RuntimeMethod_var);
		NullCheck(L_3);
		Toggle_set_isOn_m2198593619(L_3, (bool)0, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_5 = V_1;
		List_1_t3793437678 * L_6 = __this->get_m_Toggles_3();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m1943679014(L_6, /*hidden argument*/List_1_get_Count_m1943679014_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0016;
		}
	}
	{
		bool L_8 = V_0;
		__this->set_m_AllowSwitchOff_2(L_8);
		return;
	}
}
// System.Boolean UnityEngine.UI.ToggleGroup::<AnyTogglesOn>m__0(UnityEngine.UI.Toggle)
extern "C"  bool ToggleGroup_U3CAnyTogglesOnU3Em__0_m909475426 (RuntimeObject * __this /* static, unused */, Toggle_t2028432460 * ___x0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Toggle_t2028432460 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = Toggle_get_isOn_m1726121288(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.UI.ToggleGroup::<ActiveToggles>m__1(UnityEngine.UI.Toggle)
extern "C"  bool ToggleGroup_U3CActiveTogglesU3Em__1_m2987193891 (RuntimeObject * __this /* static, unused */, Toggle_t2028432460 * ___x0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Toggle_t2028432460 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = Toggle_get_isOn_m1726121288(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.VertexHelper::.ctor()
extern "C"  void VertexHelper__ctor_m2610929065 (VertexHelper_t3490760292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper__ctor_m2610929065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t3690322720_il2cpp_TypeInfo_var);
		List_1_t2304019315 * L_0 = ListPool_1_Get_m1557037846(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1557037846_RuntimeMethod_var);
		__this->set_m_Positions_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t853898136_il2cpp_TypeInfo_var);
		List_1_t3762562027 * L_1 = ListPool_1_Get_m1820967329(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1820967329_RuntimeMethod_var);
		__this->set_m_Colors_1(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t2485643468_il2cpp_TypeInfo_var);
		List_1_t1099340063 * L_2 = ListPool_1_Get_m1185189418(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1185189418_RuntimeMethod_var);
		__this->set_m_Uv0S_2(L_2);
		List_1_t1099340063 * L_3 = ListPool_1_Get_m1185189418(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1185189418_RuntimeMethod_var);
		__this->set_m_Uv1S_3(L_3);
		List_1_t1099340063 * L_4 = ListPool_1_Get_m1185189418(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1185189418_RuntimeMethod_var);
		__this->set_m_Uv2S_4(L_4);
		List_1_t1099340063 * L_5 = ListPool_1_Get_m1185189418(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1185189418_RuntimeMethod_var);
		__this->set_m_Uv3S_5(L_5);
		List_1_t2304019315 * L_6 = ListPool_1_Get_m1557037846(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1557037846_RuntimeMethod_var);
		__this->set_m_Normals_6(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t2053790078_il2cpp_TypeInfo_var);
		List_1_t667486673 * L_7 = ListPool_1_Get_m3344342879(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m3344342879_RuntimeMethod_var);
		__this->set_m_Tangents_7(L_7);
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t3580353173_il2cpp_TypeInfo_var);
		List_1_t2194049768 * L_8 = ListPool_1_Get_m3059886837(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m3059886837_RuntimeMethod_var);
		__this->set_m_Indices_8(L_8);
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
extern "C"  void VertexHelper__ctor_m2306075082 (VertexHelper_t3490760292 * __this, Mesh_t3980991349 * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper__ctor_m2306075082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t3690322720_il2cpp_TypeInfo_var);
		List_1_t2304019315 * L_0 = ListPool_1_Get_m1557037846(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1557037846_RuntimeMethod_var);
		__this->set_m_Positions_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t853898136_il2cpp_TypeInfo_var);
		List_1_t3762562027 * L_1 = ListPool_1_Get_m1820967329(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1820967329_RuntimeMethod_var);
		__this->set_m_Colors_1(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t2485643468_il2cpp_TypeInfo_var);
		List_1_t1099340063 * L_2 = ListPool_1_Get_m1185189418(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1185189418_RuntimeMethod_var);
		__this->set_m_Uv0S_2(L_2);
		List_1_t1099340063 * L_3 = ListPool_1_Get_m1185189418(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1185189418_RuntimeMethod_var);
		__this->set_m_Uv1S_3(L_3);
		List_1_t1099340063 * L_4 = ListPool_1_Get_m1185189418(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1185189418_RuntimeMethod_var);
		__this->set_m_Uv2S_4(L_4);
		List_1_t1099340063 * L_5 = ListPool_1_Get_m1185189418(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1185189418_RuntimeMethod_var);
		__this->set_m_Uv3S_5(L_5);
		List_1_t2304019315 * L_6 = ListPool_1_Get_m1557037846(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1557037846_RuntimeMethod_var);
		__this->set_m_Normals_6(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t2053790078_il2cpp_TypeInfo_var);
		List_1_t667486673 * L_7 = ListPool_1_Get_m3344342879(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m3344342879_RuntimeMethod_var);
		__this->set_m_Tangents_7(L_7);
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t3580353173_il2cpp_TypeInfo_var);
		List_1_t2194049768 * L_8 = ListPool_1_Get_m3059886837(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m3059886837_RuntimeMethod_var);
		__this->set_m_Indices_8(L_8);
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		List_1_t2304019315 * L_9 = __this->get_m_Positions_0();
		Mesh_t3980991349 * L_10 = ___m0;
		NullCheck(L_10);
		Vector3U5BU5D_t2749240780* L_11 = Mesh_get_vertices_m3785957846(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_AddRange_m3734003385(L_9, (RuntimeObject*)(RuntimeObject*)L_11, /*hidden argument*/List_1_AddRange_m3734003385_RuntimeMethod_var);
		List_1_t3762562027 * L_12 = __this->get_m_Colors_1();
		Mesh_t3980991349 * L_13 = ___m0;
		NullCheck(L_13);
		Color32U5BU5D_t2793501812* L_14 = Mesh_get_colors32_m866433688(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_AddRange_m219234875(L_12, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/List_1_AddRange_m219234875_RuntimeMethod_var);
		List_1_t1099340063 * L_15 = __this->get_m_Uv0S_2();
		Mesh_t3980991349 * L_16 = ___m0;
		NullCheck(L_16);
		Vector2U5BU5D_t223256560* L_17 = Mesh_get_uv_m1477553283(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_AddRange_m1986007995(L_15, (RuntimeObject*)(RuntimeObject*)L_17, /*hidden argument*/List_1_AddRange_m1986007995_RuntimeMethod_var);
		List_1_t1099340063 * L_18 = __this->get_m_Uv1S_3();
		Mesh_t3980991349 * L_19 = ___m0;
		NullCheck(L_19);
		Vector2U5BU5D_t223256560* L_20 = Mesh_get_uv2_m2174032018(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_AddRange_m1986007995(L_18, (RuntimeObject*)(RuntimeObject*)L_20, /*hidden argument*/List_1_AddRange_m1986007995_RuntimeMethod_var);
		List_1_t1099340063 * L_21 = __this->get_m_Uv2S_4();
		Mesh_t3980991349 * L_22 = ___m0;
		NullCheck(L_22);
		Vector2U5BU5D_t223256560* L_23 = Mesh_get_uv3_m2874069789(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_AddRange_m1986007995(L_21, (RuntimeObject*)(RuntimeObject*)L_23, /*hidden argument*/List_1_AddRange_m1986007995_RuntimeMethod_var);
		List_1_t1099340063 * L_24 = __this->get_m_Uv3S_5();
		Mesh_t3980991349 * L_25 = ___m0;
		NullCheck(L_25);
		Vector2U5BU5D_t223256560* L_26 = Mesh_get_uv4_m2032374564(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		List_1_AddRange_m1986007995(L_24, (RuntimeObject*)(RuntimeObject*)L_26, /*hidden argument*/List_1_AddRange_m1986007995_RuntimeMethod_var);
		List_1_t2304019315 * L_27 = __this->get_m_Normals_6();
		Mesh_t3980991349 * L_28 = ___m0;
		NullCheck(L_28);
		Vector3U5BU5D_t2749240780* L_29 = Mesh_get_normals_m2977171667(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		List_1_AddRange_m3734003385(L_27, (RuntimeObject*)(RuntimeObject*)L_29, /*hidden argument*/List_1_AddRange_m3734003385_RuntimeMethod_var);
		List_1_t667486673 * L_30 = __this->get_m_Tangents_7();
		Mesh_t3980991349 * L_31 = ___m0;
		NullCheck(L_31);
		Vector4U5BU5D_t2571742262* L_32 = Mesh_get_tangents_m948517805(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		List_1_AddRange_m1443945211(L_30, (RuntimeObject*)(RuntimeObject*)L_32, /*hidden argument*/List_1_AddRange_m1443945211_RuntimeMethod_var);
		List_1_t2194049768 * L_33 = __this->get_m_Indices_8();
		Mesh_t3980991349 * L_34 = ___m0;
		NullCheck(L_34);
		Int32U5BU5D_t1884137699* L_35 = Mesh_GetIndices_m3829476674(L_34, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		List_1_AddRange_m3164297150(L_33, (RuntimeObject*)(RuntimeObject*)L_35, /*hidden argument*/List_1_AddRange_m3164297150_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C"  void VertexHelper_Clear_m3233362608 (VertexHelper_t3490760292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_Clear_m3233362608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2304019315 * L_0 = __this->get_m_Positions_0();
		NullCheck(L_0);
		List_1_Clear_m3934547908(L_0, /*hidden argument*/List_1_Clear_m3934547908_RuntimeMethod_var);
		List_1_t3762562027 * L_1 = __this->get_m_Colors_1();
		NullCheck(L_1);
		List_1_Clear_m728292554(L_1, /*hidden argument*/List_1_Clear_m728292554_RuntimeMethod_var);
		List_1_t1099340063 * L_2 = __this->get_m_Uv0S_2();
		NullCheck(L_2);
		List_1_Clear_m3458157773(L_2, /*hidden argument*/List_1_Clear_m3458157773_RuntimeMethod_var);
		List_1_t1099340063 * L_3 = __this->get_m_Uv1S_3();
		NullCheck(L_3);
		List_1_Clear_m3458157773(L_3, /*hidden argument*/List_1_Clear_m3458157773_RuntimeMethod_var);
		List_1_t1099340063 * L_4 = __this->get_m_Uv2S_4();
		NullCheck(L_4);
		List_1_Clear_m3458157773(L_4, /*hidden argument*/List_1_Clear_m3458157773_RuntimeMethod_var);
		List_1_t1099340063 * L_5 = __this->get_m_Uv3S_5();
		NullCheck(L_5);
		List_1_Clear_m3458157773(L_5, /*hidden argument*/List_1_Clear_m3458157773_RuntimeMethod_var);
		List_1_t2304019315 * L_6 = __this->get_m_Normals_6();
		NullCheck(L_6);
		List_1_Clear_m3934547908(L_6, /*hidden argument*/List_1_Clear_m3934547908_RuntimeMethod_var);
		List_1_t667486673 * L_7 = __this->get_m_Tangents_7();
		NullCheck(L_7);
		List_1_Clear_m3151567674(L_7, /*hidden argument*/List_1_Clear_m3151567674_RuntimeMethod_var);
		List_1_t2194049768 * L_8 = __this->get_m_Indices_8();
		NullCheck(L_8);
		List_1_Clear_m2634858558(L_8, /*hidden argument*/List_1_Clear_m2634858558_RuntimeMethod_var);
		return;
	}
}
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C"  int32_t VertexHelper_get_currentVertCount_m2919873245 (VertexHelper_t3490760292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_get_currentVertCount_m2919873245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t2304019315 * L_0 = __this->get_m_Positions_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1137088036(L_0, /*hidden argument*/List_1_get_Count_m1137088036_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.UI.VertexHelper::get_currentIndexCount()
extern "C"  int32_t VertexHelper_get_currentIndexCount_m3382619846 (VertexHelper_t3490760292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_get_currentIndexCount_m3382619846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t2194049768 * L_0 = __this->get_m_Indices_8();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2921952376(L_0, /*hidden argument*/List_1_get_Count_m2921952376_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
extern "C"  void VertexHelper_PopulateUIVertex_m511922530 (VertexHelper_t3490760292 * __this, UIVertex_t3143686990 * ___vertex0, int32_t ___i1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_PopulateUIVertex_m511922530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIVertex_t3143686990 * L_0 = ___vertex0;
		List_1_t2304019315 * L_1 = __this->get_m_Positions_0();
		int32_t L_2 = ___i1;
		NullCheck(L_1);
		Vector3_t539014097  L_3 = List_1_get_Item_m3643680419(L_1, L_2, /*hidden argument*/List_1_get_Item_m3643680419_RuntimeMethod_var);
		L_0->set_position_0(L_3);
		UIVertex_t3143686990 * L_4 = ___vertex0;
		List_1_t3762562027 * L_5 = __this->get_m_Colors_1();
		int32_t L_6 = ___i1;
		NullCheck(L_5);
		Color32_t1997556809  L_7 = List_1_get_Item_m1611827731(L_5, L_6, /*hidden argument*/List_1_get_Item_m1611827731_RuntimeMethod_var);
		L_4->set_color_2(L_7);
		UIVertex_t3143686990 * L_8 = ___vertex0;
		List_1_t1099340063 * L_9 = __this->get_m_Uv0S_2();
		int32_t L_10 = ___i1;
		NullCheck(L_9);
		Vector2_t3629302141  L_11 = List_1_get_Item_m528239902(L_9, L_10, /*hidden argument*/List_1_get_Item_m528239902_RuntimeMethod_var);
		L_8->set_uv0_3(L_11);
		UIVertex_t3143686990 * L_12 = ___vertex0;
		List_1_t1099340063 * L_13 = __this->get_m_Uv1S_3();
		int32_t L_14 = ___i1;
		NullCheck(L_13);
		Vector2_t3629302141  L_15 = List_1_get_Item_m528239902(L_13, L_14, /*hidden argument*/List_1_get_Item_m528239902_RuntimeMethod_var);
		L_12->set_uv1_4(L_15);
		UIVertex_t3143686990 * L_16 = ___vertex0;
		List_1_t1099340063 * L_17 = __this->get_m_Uv2S_4();
		int32_t L_18 = ___i1;
		NullCheck(L_17);
		Vector2_t3629302141  L_19 = List_1_get_Item_m528239902(L_17, L_18, /*hidden argument*/List_1_get_Item_m528239902_RuntimeMethod_var);
		L_16->set_uv2_5(L_19);
		UIVertex_t3143686990 * L_20 = ___vertex0;
		List_1_t1099340063 * L_21 = __this->get_m_Uv3S_5();
		int32_t L_22 = ___i1;
		NullCheck(L_21);
		Vector2_t3629302141  L_23 = List_1_get_Item_m528239902(L_21, L_22, /*hidden argument*/List_1_get_Item_m528239902_RuntimeMethod_var);
		L_20->set_uv3_6(L_23);
		UIVertex_t3143686990 * L_24 = ___vertex0;
		List_1_t2304019315 * L_25 = __this->get_m_Normals_6();
		int32_t L_26 = ___i1;
		NullCheck(L_25);
		Vector3_t539014097  L_27 = List_1_get_Item_m3643680419(L_25, L_26, /*hidden argument*/List_1_get_Item_m3643680419_RuntimeMethod_var);
		L_24->set_normal_1(L_27);
		UIVertex_t3143686990 * L_28 = ___vertex0;
		List_1_t667486673 * L_29 = __this->get_m_Tangents_7();
		int32_t L_30 = ___i1;
		NullCheck(L_29);
		Vector4_t3197448751  L_31 = List_1_get_Item_m2336204678(L_29, L_30, /*hidden argument*/List_1_get_Item_m2336204678_RuntimeMethod_var);
		L_28->set_tangent_7(L_31);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
extern "C"  void VertexHelper_SetUIVertex_m2499934554 (VertexHelper_t3490760292 * __this, UIVertex_t3143686990  ___vertex0, int32_t ___i1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_SetUIVertex_m2499934554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2304019315 * L_0 = __this->get_m_Positions_0();
		int32_t L_1 = ___i1;
		Vector3_t539014097  L_2 = (&___vertex0)->get_position_0();
		NullCheck(L_0);
		List_1_set_Item_m2319232235(L_0, L_1, L_2, /*hidden argument*/List_1_set_Item_m2319232235_RuntimeMethod_var);
		List_1_t3762562027 * L_3 = __this->get_m_Colors_1();
		int32_t L_4 = ___i1;
		Color32_t1997556809  L_5 = (&___vertex0)->get_color_2();
		NullCheck(L_3);
		List_1_set_Item_m1464298370(L_3, L_4, L_5, /*hidden argument*/List_1_set_Item_m1464298370_RuntimeMethod_var);
		List_1_t1099340063 * L_6 = __this->get_m_Uv0S_2();
		int32_t L_7 = ___i1;
		Vector2_t3629302141  L_8 = (&___vertex0)->get_uv0_3();
		NullCheck(L_6);
		List_1_set_Item_m227536386(L_6, L_7, L_8, /*hidden argument*/List_1_set_Item_m227536386_RuntimeMethod_var);
		List_1_t1099340063 * L_9 = __this->get_m_Uv1S_3();
		int32_t L_10 = ___i1;
		Vector2_t3629302141  L_11 = (&___vertex0)->get_uv1_4();
		NullCheck(L_9);
		List_1_set_Item_m227536386(L_9, L_10, L_11, /*hidden argument*/List_1_set_Item_m227536386_RuntimeMethod_var);
		List_1_t1099340063 * L_12 = __this->get_m_Uv2S_4();
		int32_t L_13 = ___i1;
		Vector2_t3629302141  L_14 = (&___vertex0)->get_uv2_5();
		NullCheck(L_12);
		List_1_set_Item_m227536386(L_12, L_13, L_14, /*hidden argument*/List_1_set_Item_m227536386_RuntimeMethod_var);
		List_1_t1099340063 * L_15 = __this->get_m_Uv3S_5();
		int32_t L_16 = ___i1;
		Vector2_t3629302141  L_17 = (&___vertex0)->get_uv3_6();
		NullCheck(L_15);
		List_1_set_Item_m227536386(L_15, L_16, L_17, /*hidden argument*/List_1_set_Item_m227536386_RuntimeMethod_var);
		List_1_t2304019315 * L_18 = __this->get_m_Normals_6();
		int32_t L_19 = ___i1;
		Vector3_t539014097  L_20 = (&___vertex0)->get_normal_1();
		NullCheck(L_18);
		List_1_set_Item_m2319232235(L_18, L_19, L_20, /*hidden argument*/List_1_set_Item_m2319232235_RuntimeMethod_var);
		List_1_t667486673 * L_21 = __this->get_m_Tangents_7();
		int32_t L_22 = ___i1;
		Vector4_t3197448751  L_23 = (&___vertex0)->get_tangent_7();
		NullCheck(L_21);
		List_1_set_Item_m2280661285(L_21, L_22, L_23, /*hidden argument*/List_1_set_Item_m2280661285_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
extern "C"  void VertexHelper_FillMesh_m3323642940 (VertexHelper_t3490760292 * __this, Mesh_t3980991349 * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_FillMesh_m3323642940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Mesh_t3980991349 * L_0 = ___mesh0;
		NullCheck(L_0);
		Mesh_Clear_m1035832199(L_0, /*hidden argument*/NULL);
		List_1_t2304019315 * L_1 = __this->get_m_Positions_0();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m1137088036(L_1, /*hidden argument*/List_1_get_Count_m1137088036_RuntimeMethod_var);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65000))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t3402785744 * L_3 = (ArgumentException_t3402785744 *)il2cpp_codegen_object_new(ArgumentException_t3402785744_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m947310639(L_3, _stringLiteral557823775, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0027:
	{
		Mesh_t3980991349 * L_4 = ___mesh0;
		List_1_t2304019315 * L_5 = __this->get_m_Positions_0();
		NullCheck(L_4);
		Mesh_SetVertices_m1295980496(L_4, L_5, /*hidden argument*/NULL);
		Mesh_t3980991349 * L_6 = ___mesh0;
		List_1_t3762562027 * L_7 = __this->get_m_Colors_1();
		NullCheck(L_6);
		Mesh_SetColors_m2069626942(L_6, L_7, /*hidden argument*/NULL);
		Mesh_t3980991349 * L_8 = ___mesh0;
		List_1_t1099340063 * L_9 = __this->get_m_Uv0S_2();
		NullCheck(L_8);
		Mesh_SetUVs_m416887114(L_8, 0, L_9, /*hidden argument*/NULL);
		Mesh_t3980991349 * L_10 = ___mesh0;
		List_1_t1099340063 * L_11 = __this->get_m_Uv1S_3();
		NullCheck(L_10);
		Mesh_SetUVs_m416887114(L_10, 1, L_11, /*hidden argument*/NULL);
		Mesh_t3980991349 * L_12 = ___mesh0;
		List_1_t1099340063 * L_13 = __this->get_m_Uv2S_4();
		NullCheck(L_12);
		Mesh_SetUVs_m416887114(L_12, 2, L_13, /*hidden argument*/NULL);
		Mesh_t3980991349 * L_14 = ___mesh0;
		List_1_t1099340063 * L_15 = __this->get_m_Uv3S_5();
		NullCheck(L_14);
		Mesh_SetUVs_m416887114(L_14, 3, L_15, /*hidden argument*/NULL);
		Mesh_t3980991349 * L_16 = ___mesh0;
		List_1_t2304019315 * L_17 = __this->get_m_Normals_6();
		NullCheck(L_16);
		Mesh_SetNormals_m2012274003(L_16, L_17, /*hidden argument*/NULL);
		Mesh_t3980991349 * L_18 = ___mesh0;
		List_1_t667486673 * L_19 = __this->get_m_Tangents_7();
		NullCheck(L_18);
		Mesh_SetTangents_m4172143889(L_18, L_19, /*hidden argument*/NULL);
		Mesh_t3980991349 * L_20 = ___mesh0;
		List_1_t2194049768 * L_21 = __this->get_m_Indices_8();
		NullCheck(L_20);
		Mesh_SetTriangles_m2611446446(L_20, L_21, 0, /*hidden argument*/NULL);
		Mesh_t3980991349 * L_22 = ___mesh0;
		NullCheck(L_22);
		Mesh_RecalculateBounds_m2524795740(L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::Dispose()
extern "C"  void VertexHelper_Dispose_m2402033223 (VertexHelper_t3490760292 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_Dispose_m2402033223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2304019315 * L_0 = __this->get_m_Positions_0();
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t3690322720_il2cpp_TypeInfo_var);
		ListPool_1_Release_m2077417339(NULL /*static, unused*/, L_0, /*hidden argument*/ListPool_1_Release_m2077417339_RuntimeMethod_var);
		List_1_t3762562027 * L_1 = __this->get_m_Colors_1();
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t853898136_il2cpp_TypeInfo_var);
		ListPool_1_Release_m309493837(NULL /*static, unused*/, L_1, /*hidden argument*/ListPool_1_Release_m309493837_RuntimeMethod_var);
		List_1_t1099340063 * L_2 = __this->get_m_Uv0S_2();
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t2485643468_il2cpp_TypeInfo_var);
		ListPool_1_Release_m2693915268(NULL /*static, unused*/, L_2, /*hidden argument*/ListPool_1_Release_m2693915268_RuntimeMethod_var);
		List_1_t1099340063 * L_3 = __this->get_m_Uv1S_3();
		ListPool_1_Release_m2693915268(NULL /*static, unused*/, L_3, /*hidden argument*/ListPool_1_Release_m2693915268_RuntimeMethod_var);
		List_1_t1099340063 * L_4 = __this->get_m_Uv2S_4();
		ListPool_1_Release_m2693915268(NULL /*static, unused*/, L_4, /*hidden argument*/ListPool_1_Release_m2693915268_RuntimeMethod_var);
		List_1_t1099340063 * L_5 = __this->get_m_Uv3S_5();
		ListPool_1_Release_m2693915268(NULL /*static, unused*/, L_5, /*hidden argument*/ListPool_1_Release_m2693915268_RuntimeMethod_var);
		List_1_t2304019315 * L_6 = __this->get_m_Normals_6();
		ListPool_1_Release_m2077417339(NULL /*static, unused*/, L_6, /*hidden argument*/ListPool_1_Release_m2077417339_RuntimeMethod_var);
		List_1_t667486673 * L_7 = __this->get_m_Tangents_7();
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t2053790078_il2cpp_TypeInfo_var);
		ListPool_1_Release_m3432441777(NULL /*static, unused*/, L_7, /*hidden argument*/ListPool_1_Release_m3432441777_RuntimeMethod_var);
		List_1_t2194049768 * L_8 = __this->get_m_Indices_8();
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t3580353173_il2cpp_TypeInfo_var);
		ListPool_1_Release_m1395250361(NULL /*static, unused*/, L_8, /*hidden argument*/ListPool_1_Release_m1395250361_RuntimeMethod_var);
		__this->set_m_Positions_0((List_1_t2304019315 *)NULL);
		__this->set_m_Colors_1((List_1_t3762562027 *)NULL);
		__this->set_m_Uv0S_2((List_1_t1099340063 *)NULL);
		__this->set_m_Uv1S_3((List_1_t1099340063 *)NULL);
		__this->set_m_Uv2S_4((List_1_t1099340063 *)NULL);
		__this->set_m_Uv3S_5((List_1_t1099340063 *)NULL);
		__this->set_m_Normals_6((List_1_t2304019315 *)NULL);
		__this->set_m_Tangents_7((List_1_t667486673 *)NULL);
		__this->set_m_Indices_8((List_1_t2194049768 *)NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C"  void VertexHelper_AddVert_m2232991513 (VertexHelper_t3490760292 * __this, Vector3_t539014097  ___position0, Color32_t1997556809  ___color1, Vector2_t3629302141  ___uv02, Vector2_t3629302141  ___uv13, Vector3_t539014097  ___normal4, Vector4_t3197448751  ___tangent5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_AddVert_m2232991513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2304019315 * L_0 = __this->get_m_Positions_0();
		Vector3_t539014097  L_1 = ___position0;
		NullCheck(L_0);
		List_1_Add_m712915333(L_0, L_1, /*hidden argument*/List_1_Add_m712915333_RuntimeMethod_var);
		List_1_t3762562027 * L_2 = __this->get_m_Colors_1();
		Color32_t1997556809  L_3 = ___color1;
		NullCheck(L_2);
		List_1_Add_m1402018060(L_2, L_3, /*hidden argument*/List_1_Add_m1402018060_RuntimeMethod_var);
		List_1_t1099340063 * L_4 = __this->get_m_Uv0S_2();
		Vector2_t3629302141  L_5 = ___uv02;
		NullCheck(L_4);
		List_1_Add_m2558363720(L_4, L_5, /*hidden argument*/List_1_Add_m2558363720_RuntimeMethod_var);
		List_1_t1099340063 * L_6 = __this->get_m_Uv1S_3();
		Vector2_t3629302141  L_7 = ___uv13;
		NullCheck(L_6);
		List_1_Add_m2558363720(L_6, L_7, /*hidden argument*/List_1_Add_m2558363720_RuntimeMethod_var);
		List_1_t1099340063 * L_8 = __this->get_m_Uv2S_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t3629302141_il2cpp_TypeInfo_var);
		Vector2_t3629302141  L_9 = Vector2_get_zero_m3836186923(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m2558363720(L_8, L_9, /*hidden argument*/List_1_Add_m2558363720_RuntimeMethod_var);
		List_1_t1099340063 * L_10 = __this->get_m_Uv3S_5();
		Vector2_t3629302141  L_11 = Vector2_get_zero_m3836186923(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		List_1_Add_m2558363720(L_10, L_11, /*hidden argument*/List_1_Add_m2558363720_RuntimeMethod_var);
		List_1_t2304019315 * L_12 = __this->get_m_Normals_6();
		Vector3_t539014097  L_13 = ___normal4;
		NullCheck(L_12);
		List_1_Add_m712915333(L_12, L_13, /*hidden argument*/List_1_Add_m712915333_RuntimeMethod_var);
		List_1_t667486673 * L_14 = __this->get_m_Tangents_7();
		Vector4_t3197448751  L_15 = ___tangent5;
		NullCheck(L_14);
		List_1_Add_m340864592(L_14, L_15, /*hidden argument*/List_1_Add_m340864592_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2)
extern "C"  void VertexHelper_AddVert_m314293972 (VertexHelper_t3490760292 * __this, Vector3_t539014097  ___position0, Color32_t1997556809  ___color1, Vector2_t3629302141  ___uv02, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_AddVert_m314293972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t539014097  L_0 = ___position0;
		Color32_t1997556809  L_1 = ___color1;
		Vector2_t3629302141  L_2 = ___uv02;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t3629302141_il2cpp_TypeInfo_var);
		Vector2_t3629302141  L_3 = Vector2_get_zero_m3836186923(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VertexHelper_t3490760292_il2cpp_TypeInfo_var);
		Vector3_t539014097  L_4 = ((VertexHelper_t3490760292_StaticFields*)il2cpp_codegen_static_fields_for(VertexHelper_t3490760292_il2cpp_TypeInfo_var))->get_s_DefaultNormal_10();
		Vector4_t3197448751  L_5 = ((VertexHelper_t3490760292_StaticFields*)il2cpp_codegen_static_fields_for(VertexHelper_t3490760292_il2cpp_TypeInfo_var))->get_s_DefaultTangent_9();
		VertexHelper_AddVert_m2232991513(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
extern "C"  void VertexHelper_AddVert_m3483211844 (VertexHelper_t3490760292 * __this, UIVertex_t3143686990  ___v0, const RuntimeMethod* method)
{
	{
		Vector3_t539014097  L_0 = (&___v0)->get_position_0();
		Color32_t1997556809  L_1 = (&___v0)->get_color_2();
		Vector2_t3629302141  L_2 = (&___v0)->get_uv0_3();
		Vector2_t3629302141  L_3 = (&___v0)->get_uv1_4();
		Vector3_t539014097  L_4 = (&___v0)->get_normal_1();
		Vector4_t3197448751  L_5 = (&___v0)->get_tangent_7();
		VertexHelper_AddVert_m2232991513(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C"  void VertexHelper_AddTriangle_m1107695520 (VertexHelper_t3490760292 * __this, int32_t ___idx00, int32_t ___idx11, int32_t ___idx22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_AddTriangle_m1107695520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2194049768 * L_0 = __this->get_m_Indices_8();
		int32_t L_1 = ___idx00;
		NullCheck(L_0);
		List_1_Add_m3664818724(L_0, L_1, /*hidden argument*/List_1_Add_m3664818724_RuntimeMethod_var);
		List_1_t2194049768 * L_2 = __this->get_m_Indices_8();
		int32_t L_3 = ___idx11;
		NullCheck(L_2);
		List_1_Add_m3664818724(L_2, L_3, /*hidden argument*/List_1_Add_m3664818724_RuntimeMethod_var);
		List_1_t2194049768 * L_4 = __this->get_m_Indices_8();
		int32_t L_5 = ___idx22;
		NullCheck(L_4);
		List_1_Add_m3664818724(L_4, L_5, /*hidden argument*/List_1_Add_m3664818724_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C"  void VertexHelper_AddUIVertexQuad_m1482258198 (VertexHelper_t3490760292 * __this, UIVertexU5BU5D_t1221523387* ___verts0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = VertexHelper_get_currentVertCount_m2919873245(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0061;
	}

IL_000f:
	{
		UIVertexU5BU5D_t1221523387* L_1 = ___verts0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Vector3_t539014097  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_position_0();
		UIVertexU5BU5D_t1221523387* L_4 = ___verts0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Color32_t1997556809  L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_color_2();
		UIVertexU5BU5D_t1221523387* L_7 = ___verts0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Vector2_t3629302141  L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_uv0_3();
		UIVertexU5BU5D_t1221523387* L_10 = ___verts0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Vector2_t3629302141  L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_uv1_4();
		UIVertexU5BU5D_t1221523387* L_13 = ___verts0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Vector3_t539014097  L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->get_normal_1();
		UIVertexU5BU5D_t1221523387* L_16 = ___verts0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Vector4_t3197448751  L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_tangent_7();
		VertexHelper_AddVert_m2232991513(__this, L_3, L_6, L_9, L_12, L_15, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)4)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_0;
		int32_t L_23 = V_0;
		VertexHelper_AddTriangle_m1107695520(__this, L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2)), /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = V_0;
		int32_t L_26 = V_0;
		VertexHelper_AddTriangle_m1107695520(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2)), ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)3)), L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void VertexHelper_AddUIVertexStream_m600532192 (VertexHelper_t3490760292 * __this, List_1_t613724912 * ___verts0, List_1_t2194049768 * ___indices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper_AddUIVertexStream_m600532192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t613724912 * L_0 = ___verts0;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		List_1_t613724912 * L_1 = ___verts0;
		List_1_t2304019315 * L_2 = __this->get_m_Positions_0();
		List_1_t3762562027 * L_3 = __this->get_m_Colors_1();
		List_1_t1099340063 * L_4 = __this->get_m_Uv0S_2();
		List_1_t1099340063 * L_5 = __this->get_m_Uv1S_3();
		List_1_t1099340063 * L_6 = __this->get_m_Uv2S_4();
		List_1_t1099340063 * L_7 = __this->get_m_Uv3S_5();
		List_1_t2304019315 * L_8 = __this->get_m_Normals_6();
		List_1_t667486673 * L_9 = __this->get_m_Tangents_7();
		CanvasRenderer_AddUIVertexStream_m666139778(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_003f:
	{
		List_1_t2194049768 * L_10 = ___indices1;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		List_1_t2194049768 * L_11 = __this->get_m_Indices_8();
		List_1_t2194049768 * L_12 = ___indices1;
		NullCheck(L_11);
		List_1_AddRange_m3164297150(L_11, L_12, /*hidden argument*/List_1_AddRange_m3164297150_RuntimeMethod_var);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_AddUIVertexTriangleStream_m3747437957 (VertexHelper_t3490760292 * __this, List_1_t613724912 * ___verts0, const RuntimeMethod* method)
{
	{
		List_1_t613724912 * L_0 = ___verts0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0048;
	}

IL_000c:
	{
		List_1_t613724912 * L_1 = ___verts0;
		List_1_t2304019315 * L_2 = __this->get_m_Positions_0();
		List_1_t3762562027 * L_3 = __this->get_m_Colors_1();
		List_1_t1099340063 * L_4 = __this->get_m_Uv0S_2();
		List_1_t1099340063 * L_5 = __this->get_m_Uv1S_3();
		List_1_t1099340063 * L_6 = __this->get_m_Uv2S_4();
		List_1_t1099340063 * L_7 = __this->get_m_Uv3S_5();
		List_1_t2304019315 * L_8 = __this->get_m_Normals_6();
		List_1_t667486673 * L_9 = __this->get_m_Tangents_7();
		List_1_t2194049768 * L_10 = __this->get_m_Indices_8();
		CanvasRenderer_SplitUIVertexStreams_m3408956257(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_GetUIVertexStream_m3769528909 (VertexHelper_t3490760292 * __this, List_1_t613724912 * ___stream0, const RuntimeMethod* method)
{
	{
		List_1_t613724912 * L_0 = ___stream0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0048;
	}

IL_000c:
	{
		List_1_t613724912 * L_1 = ___stream0;
		List_1_t2304019315 * L_2 = __this->get_m_Positions_0();
		List_1_t3762562027 * L_3 = __this->get_m_Colors_1();
		List_1_t1099340063 * L_4 = __this->get_m_Uv0S_2();
		List_1_t1099340063 * L_5 = __this->get_m_Uv1S_3();
		List_1_t1099340063 * L_6 = __this->get_m_Uv2S_4();
		List_1_t1099340063 * L_7 = __this->get_m_Uv3S_5();
		List_1_t2304019315 * L_8 = __this->get_m_Normals_6();
		List_1_t667486673 * L_9 = __this->get_m_Tangents_7();
		List_1_t2194049768 * L_10 = __this->get_m_Indices_8();
		CanvasRenderer_CreateUIVertexStream_m3195358329(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::.cctor()
extern "C"  void VertexHelper__cctor_m1292849532 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexHelper__cctor_m1292849532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3197448751  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector4__ctor_m3717576313((&L_0), (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((VertexHelper_t3490760292_StaticFields*)il2cpp_codegen_static_fields_for(VertexHelper_t3490760292_il2cpp_TypeInfo_var))->set_s_DefaultTangent_9(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t539014097_il2cpp_TypeInfo_var);
		Vector3_t539014097  L_1 = Vector3_get_back_m100459210(NULL /*static, unused*/, /*hidden argument*/NULL);
		((VertexHelper_t3490760292_StaticFields*)il2cpp_codegen_static_fields_for(VertexHelper_t3490760292_il2cpp_TypeInfo_var))->set_s_DefaultNormal_10(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.VerticalLayoutGroup::.ctor()
extern "C"  void VerticalLayoutGroup__ctor_m681206844 (VerticalLayoutGroup_t1595007963 * __this, const RuntimeMethod* method)
{
	{
		HorizontalOrVerticalLayoutGroup__ctor_m2166191989(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::CalculateLayoutInputHorizontal()
extern "C"  void VerticalLayoutGroup_CalculateLayoutInputHorizontal_m2626517958 (VerticalLayoutGroup_t1595007963 * __this, const RuntimeMethod* method)
{
	{
		LayoutGroup_CalculateLayoutInputHorizontal_m2349246622(__this, /*hidden argument*/NULL);
		HorizontalOrVerticalLayoutGroup_CalcAlongAxis_m2780122631(__this, 0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::CalculateLayoutInputVertical()
extern "C"  void VerticalLayoutGroup_CalculateLayoutInputVertical_m3547556556 (VerticalLayoutGroup_t1595007963 * __this, const RuntimeMethod* method)
{
	{
		HorizontalOrVerticalLayoutGroup_CalcAlongAxis_m2780122631(__this, 1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::SetLayoutHorizontal()
extern "C"  void VerticalLayoutGroup_SetLayoutHorizontal_m3957051590 (VerticalLayoutGroup_t1595007963 * __this, const RuntimeMethod* method)
{
	{
		HorizontalOrVerticalLayoutGroup_SetChildrenAlongAxis_m3078638777(__this, 0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::SetLayoutVertical()
extern "C"  void VerticalLayoutGroup_SetLayoutVertical_m2562920496 (VerticalLayoutGroup_t1595007963 * __this, const RuntimeMethod* method)
{
	{
		HorizontalOrVerticalLayoutGroup_SetChildrenAlongAxis_m3078638777(__this, 1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
