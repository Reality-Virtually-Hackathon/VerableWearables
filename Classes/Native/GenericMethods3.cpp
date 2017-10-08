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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t374686966;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Component
struct Component_t4119265833;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2100590868;
// System.ArgumentException
struct ArgumentException_t3402785744;
// UnityEngine.GameObject
struct GameObject_t2527051794;
// UnityEngine.Object
struct Object_t948050745;
// UnityEngine.ScriptableObject
struct ScriptableObject_t1496462445;
// Vuforia.TrackerManager
struct TrackerManager_t1260673176;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t3261428072;
// Vuforia.ObjectTracker
struct ObjectTracker_t1446540767;
// Vuforia.TextTracker
struct TextTracker_t2690848417;
// Vuforia.RotationalPlayModeDeviceTrackerImpl
struct RotationalPlayModeDeviceTrackerImpl_t2439620320;
// Vuforia.RotationalDeviceTrackerImpl
struct RotationalDeviceTrackerImpl_t1298403232;
// Vuforia.PositionalPlayModeDeviceTrackerImpl
struct PositionalPlayModeDeviceTrackerImpl_t161249787;
// Vuforia.PositionalDeviceTrackerImpl
struct PositionalDeviceTrackerImpl_t3377804943;
// Vuforia.SmartTerrain
struct SmartTerrain_t2953426174;
// System.Object[]
struct ObjectU5BU5D_t3878505910;
// System.Predicate`1<System.Object>
struct Predicate_1_t45154830;
// System.ArgumentNullException
struct ArgumentNullException_t1729354103;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3987353262;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1560684743;
// UnityEngine.Mesh
struct Mesh_t3980991349;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2793501812;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t223256560;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t2749240780;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t2571742262;
// UnityEngine.Object[]
struct ObjectU5BU5D_t2117163972;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t1959436626;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1568936542;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t66464263;
// System.InvalidOperationException
struct InvalidOperationException_t2006174199;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t2993126855;
// System.Int32[]
struct Int32U5BU5D_t1884137699;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4081497845;
// Vuforia.VuforiaManager/TrackableIdPair[]
struct TrackableIdPairU5BU5D_t293366179;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManager/TrackableIdPair>
struct IEnumerable_1_t4095079733;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t3965412554;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t399485513;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3677085441;
// UnityEngine.Transform
struct Transform_t1912080223;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3976455761;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t2205099172;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t1881297683;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t3186221602;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t2284434459;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t205256967;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t2034057085;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t1203551031;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t4167640230;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t3958662489;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t3371227495;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t2683583115;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t2987416273;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t3275475620;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t2177486041;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t4074793019;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t351307619;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t3961796804;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t2428122252;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t1578519651;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t941479349;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t3834678857;
// Vuforia.DeviceTracker
struct DeviceTracker_t1565609596;
// Vuforia.StateManager
struct StateManager_t2114859061;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1482679046;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t3455373596;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t3984153089;
// UnityEngine.Transform[]
struct TransformU5BU5D_t178154566;
// System.Char[]
struct CharU5BU5D_t1237632434;
// System.IntPtr[]
struct IntPtrU5BU5D_t4204197944;
// System.Collections.IDictionary
struct IDictionary_t3825156092;
// UnityEngine.Camera
struct Camera_t3201429123;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1558833321;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1396185641;
// System.Single[]
struct SingleU5BU5D_t1095654037;
// UnityEngine.Sprite
struct Sprite_t3015293829;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t2462524240;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t2325015820;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t510388901;
// Vuforia.TargetFinder
struct TargetFinder_t1898051620;
// Vuforia.WordList
struct WordList_t3794385785;
// System.Byte[]
struct ByteU5BU5D_t1541800421;
// System.Void
struct Void_t3968031514;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Boolean[]
struct BooleanU5BU5D_t1500524663;
// UnityEngine.Events.UnityAction
struct UnityAction_t2239667601;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t4018218907;
// UnityEngine.Collider2D
struct Collider2D_t3009310066;
// UnityEngine.Collider
struct Collider_t896285622;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t1873198396;
// System.Type[]
struct TypeU5BU5D_t775785287;
// System.Reflection.MemberFilter
struct MemberFilter_t3716749858;
// System.IO.Stream
struct Stream_t2037818886;
// System.String[]
struct StringU5BU5D_t148011198;
// UnityEngine.UI.Selectable
struct Selectable_t3497516189;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t2084483218;
// System.IAsyncResult
struct IAsyncResult_t1055566646;
// System.AsyncCallback
struct AsyncCallback_t4194240925;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t967554111;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t1011019008;
// UnityEngine.UI.Graphic
struct Graphic_t4051857987;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1926213249;
// UnityEngine.RectTransform
struct RectTransform_t3743713302;
// UnityEngine.UI.Text
struct Text_t1669440651;
// UnityEngine.UI.Image
struct Image_t1999002027;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t1933408810;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t808895212;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t2730745548;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t897519560;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t2109289114;

extern RuntimeClass* ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral468396955;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t1853234863_m1170150744_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t3635640856_m3959710445_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t2508527628_m762002783_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t4096206987_m221429601_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t3600605482_m1427357118_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t424855279_m2064660004_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t3999731883_m1229724319_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t636299427_m868760375_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t4104252033_m2705446293_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t802353652_m1153399958_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyValuePair_2_t1426870497_m294520438_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisLink_t1380722063_m1876551420_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisSlot_t2808671665_m1067784123_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisSlot_t805531009_m1070619915_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisDateTime_t2990056487_m1264033375_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisDecimal_t866196536_m4078342968_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisDouble_t1605119752_m204322806_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisInt16_t3782280871_m1925620326_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisInt32_t429044550_m3397852278_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisInt64_t2997302630_m346677405_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisIntPtr_t_m976077355_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRuntimeObject_m1148557238_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t1201780503_m1112099862_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t673001010_m1999453746_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisLabelData_t3107547367_m81226492_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisLabelFixup_t3610165990_m3712708821_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisILTokenInfo_t3238837779_m1837069656_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisMonoResource_t2631437455_m3836473109_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisMonoWin32Resource_t1721736841_m2993525226_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRefEmitPermissionSet_t1143243366_m2065246997_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisParameterModifier_t1164491217_m3326085350_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisResourceCacheItem_t1984850726_m3685593871_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisResourceInfo_t3877563693_m2933229997_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTypeTag_t3297045175_m4117703508_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisSByte_t1702684558_m845136473_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisX509ChainStatus_t1152496960_m3690775118_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisSingle_t3230175740_m1302974041_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisMark_t787909737_m1351424234_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTimeSpan_t4098384374_m1964816881_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUInt16_t1084337315_m2209951975_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUInt32_t2976429035_m3700413547_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUInt64_t463920001_m2439260778_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUriScheme_t3736221848_m3108568851_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisOrderBlock_t3803826114_m3460467060_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisStereoscopicEye_t2822263950_m1470389220_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisColor_t3771351350_m1809124365_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisColor32_t1997556809_m3371957856_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisContactPoint_t2013396152_m1831696552_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastResult_t2879055399_m3628753582_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyCode_t1099970917_m1140541577_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyframe_t2561096767_m2166551925_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisMatrix4x4_t54425537_m2503468294_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPlane_t3144685315_m488472757_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPlayableBinding_t3516061699_m2919646010_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastHit_t1885117142_m2017969824_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastHit2D_t1067259948_m3249197216_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisHitInfo_t4034309653_m2518056344_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisGcAchievementData_t731726700_m3863389435_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisGcScoreData_t3204758376_m806189058_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisContentType_t2329426451_m3707948536_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUICharInfo_t827563704_m1044872801_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUILineInfo_t4129899474_m769181869_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUIVertex_t3143686990_m1180698789_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisWorkRequest_t318910794_m705981031_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVector2_t3629302141_m1155245713_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVector3_t539014097_m3640708796_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVector4_t3197448751_m2842109182_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisWebCamDevice_t912479223_m1646682330_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisCameraField_t271511659_m3425697528_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisEyewearCalibrationReading_t3949217182_m392211842_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisEyewearCalibrationReadingData_t3046382575_m1695331527_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisHitTestResult_t3843505021_m1894045173_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPoseAgeEntry_t1970234155_m3887002138_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPoseInfo_t2963303070_m111029812_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPIXEL_FORMAT_t4209117376_m3676200779_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRectangleData_t3025935980_m2659197231_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTargetSearchResult_t1008654619_m4264280969_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisStatus_t3587819915_m1561782963_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTrackableResultData_t797872706_m3492022128_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVirtualButtonData_t3003950808_m1413965531_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVuMarkTargetData_t1911035625_m1629900689_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVuMarkTargetResultData_t2972352786_m913906298_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisWordData_t1526873780_m3282924196_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisWordResultData_t4259303705_m1436942317_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTrackableIdPair_t442626438_m473523979_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisProfileData_t2672016674_m3663182206_MetadataUsageId;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m3366749962_MetadataUsageId;
extern const uint32_t Component_GetComponent_TisRuntimeObject_m974730735_MetadataUsageId;
extern const uint32_t Component_GetComponentInChildren_TisRuntimeObject_m499299308_MetadataUsageId;
extern const uint32_t Component_GetComponentInParent_TisRuntimeObject_m4209580115_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t3402785744_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3081243441;
extern const uint32_t ExecuteEvents_ValidateEventData_TisRuntimeObject_m3139588547_MetadataUsageId;
extern const uint32_t GameObject_AddComponent_TisRuntimeObject_m4062951046_MetadataUsageId;
extern const uint32_t GameObject_GetComponent_TisRuntimeObject_m562267284_MetadataUsageId;
extern const uint32_t GameObject_GetComponentInChildren_TisRuntimeObject_m2631809923_MetadataUsageId;
extern RuntimeClass* Object_t948050745_il2cpp_TypeInfo_var;
extern const uint32_t Object_FindObjectOfType_TisRuntimeObject_m3025884939_MetadataUsageId;
extern String_t* _stringLiteral921515441;
extern const uint32_t Object_Instantiate_TisRuntimeObject_m3779270280_MetadataUsageId;
extern const uint32_t Resources_GetBuiltinResource_TisRuntimeObject_m2948050090_MetadataUsageId;
extern const uint32_t Resources_Load_TisRuntimeObject_m2690302918_MetadataUsageId;
extern const uint32_t ScriptableObject_CreateInstance_TisRuntimeObject_m3784910767_MetadataUsageId;
extern const uint32_t Dropdown_GetOrAddComponent_TisRuntimeObject_m1273119483_MetadataUsageId;
extern const RuntimeType* ObjectTracker_t1446540767_0_0_0_var;
extern const RuntimeType* TextTracker_t2690848417_0_0_0_var;
extern const RuntimeType* DeviceTracker_t1565609596_0_0_0_var;
extern const RuntimeType* RotationalDeviceTracker_t176767220_0_0_0_var;
extern const RuntimeType* PositionalDeviceTracker_t1369874775_0_0_0_var;
extern const RuntimeType* SmartTerrain_t2953426174_0_0_0_var;
extern RuntimeClass* Debug_t3621315395_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3201951652;
extern const uint32_t TrackerManager_GetTracker_TisRuntimeObject_m878445311_MetadataUsageId;
extern RuntimeClass* VuforiaRuntimeUtilities_t2319877877_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaWrapper_t948680923_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeMapping_t3756135786_il2cpp_TypeInfo_var;
extern RuntimeClass* IVuforiaWrapper_t3261428072_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectTracker_t1446540767_il2cpp_TypeInfo_var;
extern RuntimeClass* TextTracker_t2690848417_il2cpp_TypeInfo_var;
extern RuntimeClass* RotationalPlayModeDeviceTrackerImpl_t2439620320_il2cpp_TypeInfo_var;
extern RuntimeClass* RotationalDeviceTrackerImpl_t1298403232_il2cpp_TypeInfo_var;
extern RuntimeClass* PositionalPlayModeDeviceTrackerImpl_t161249787_il2cpp_TypeInfo_var;
extern RuntimeClass* PositionalDeviceTrackerImpl_t3377804943_il2cpp_TypeInfo_var;
extern RuntimeClass* SmartTerrain_t2953426174_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1010426667;
extern String_t* _stringLiteral2556544186;
extern String_t* _stringLiteral2508776215;
extern const uint32_t TrackerManager_InitTracker_TisRuntimeObject_m321849864_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1729354103_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2833466369;
extern String_t* _stringLiteral433125359;
extern const uint32_t Array_FindAll_TisRuntimeObject_m2098172250_MetadataUsageId;
extern const uint32_t GameObject_GetComponents_TisRuntimeObject_m930841264_MetadataUsageId;
extern const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_m3406258089_MetadataUsageId;
extern const uint32_t Object_FindObjectsOfType_TisRuntimeObject_m4130663966_MetadataUsageId;
extern const uint32_t UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2860291959_MetadataUsageId;
extern String_t* _stringLiteral62931015;
extern const uint32_t Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m3494915988_MetadataUsageId;
extern RuntimeClass* IEnumerator_t2885971988_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t1321005363_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t2006174199_il2cpp_TypeInfo_var;
extern const uint32_t Enumerable_First_TisRuntimeObject_m3425039248_MetadataUsageId;
extern const uint32_t Enumerable_First_TisRuntimeObject_m4046347753_MetadataUsageId;
extern const uint32_t Enumerable_FirstOrDefault_TisKeyValuePair_2_t3635640856_m3768966331_MetadataUsageId;
extern const uint32_t Enumerable_FirstOrDefault_TisRuntimeObject_m962057746_MetadataUsageId;
extern const uint32_t Enumerable_SingleOrDefault_TisRuntimeObject_m3239216586_MetadataUsageId;
extern RuntimeClass* ExecuteEvents_t1120104600_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m1205476282_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3965154148_RuntimeMethod_var;
extern const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2540178062_MetadataUsageId;
extern const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m855746144_MetadataUsageId;
struct Object_t948050745_marshaled_com;

struct ObjectU5BU5D_t3878505910;
struct CustomAttributeNamedArgumentU5BU5D_t3987353262;
struct CustomAttributeTypedArgumentU5BU5D_t1560684743;
struct Color32U5BU5D_t2793501812;
struct Vector2U5BU5D_t223256560;
struct Vector3U5BU5D_t2749240780;
struct Vector4U5BU5D_t2571742262;
struct ObjectU5BU5D_t2117163972;
struct Int32U5BU5D_t1884137699;
struct TrackableIdPairU5BU5D_t293366179;


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
#ifndef INTERLOCKED_T4068193335_H
#define INTERLOCKED_T4068193335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t4068193335  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T4068193335_H
#ifndef ATTRIBUTEHELPERENGINE_T3633950791_H
#define ATTRIBUTEHELPERENGINE_T3633950791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t3633950791  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t3633950791_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t2205099172* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t1881297683* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t3186221602* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t3633950791_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t2205099172* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t2205099172** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t2205099172* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t3633950791_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t1881297683* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t1881297683** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t1881297683* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t3633950791_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t3186221602* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t3186221602** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t3186221602* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T3633950791_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef EXECUTEEVENTS_T1120104600_H
#define EXECUTEEVENTS_T1120104600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t1120104600  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t1120104600_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t2284434459 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t205256967 * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t2034057085 * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t1203551031 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t4167640230 * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t3958662489 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t3371227495 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t2683583115 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t2987416273 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t3275475620 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t2177486041 * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_t4074793019 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t351307619 * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t3961796804 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t2428122252 * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t1578519651 * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t941479349 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t3834678857 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t3677085441 * ___s_InternalTransformList_18;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache0
	EventFunction_1_t2284434459 * ___U3CU3Ef__mgU24cache0_19;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache1
	EventFunction_1_t205256967 * ___U3CU3Ef__mgU24cache1_20;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache2
	EventFunction_1_t2034057085 * ___U3CU3Ef__mgU24cache2_21;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache3
	EventFunction_1_t1203551031 * ___U3CU3Ef__mgU24cache3_22;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache4
	EventFunction_1_t4167640230 * ___U3CU3Ef__mgU24cache4_23;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache5
	EventFunction_1_t3958662489 * ___U3CU3Ef__mgU24cache5_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache6
	EventFunction_1_t3371227495 * ___U3CU3Ef__mgU24cache6_25;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache7
	EventFunction_1_t2683583115 * ___U3CU3Ef__mgU24cache7_26;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache8
	EventFunction_1_t2987416273 * ___U3CU3Ef__mgU24cache8_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache9
	EventFunction_1_t3275475620 * ___U3CU3Ef__mgU24cache9_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheA
	EventFunction_1_t2177486041 * ___U3CU3Ef__mgU24cacheA_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheB
	EventFunction_1_t4074793019 * ___U3CU3Ef__mgU24cacheB_30;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheC
	EventFunction_1_t351307619 * ___U3CU3Ef__mgU24cacheC_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheD
	EventFunction_1_t3961796804 * ___U3CU3Ef__mgU24cacheD_32;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheE
	EventFunction_1_t2428122252 * ___U3CU3Ef__mgU24cacheE_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheF
	EventFunction_1_t1578519651 * ___U3CU3Ef__mgU24cacheF_34;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache10
	EventFunction_1_t941479349 * ___U3CU3Ef__mgU24cache10_35;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t2284434459 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t2284434459 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t2284434459 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerEnterHandler_0), value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t205256967 * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t205256967 ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t205256967 * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerExitHandler_1), value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t2034057085 * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t2034057085 ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t2034057085 * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerDownHandler_2), value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_t1203551031 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_t1203551031 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_t1203551031 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerUpHandler_3), value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t4167640230 * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t4167640230 ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t4167640230 * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerClickHandler_4), value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_t3958662489 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_t3958662489 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_t3958662489 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_InitializePotentialDragHandler_5), value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t3371227495 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t3371227495 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t3371227495 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_BeginDragHandler_6), value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t2683583115 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t2683583115 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t2683583115 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_DragHandler_7), value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t2987416273 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t2987416273 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t2987416273 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EndDragHandler_8), value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t3275475620 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t3275475620 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t3275475620 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_DropHandler_9), value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t2177486041 * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t2177486041 ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t2177486041 * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollHandler_10), value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_t4074793019 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_t4074793019 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_t4074793019 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateSelectedHandler_11), value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t351307619 * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t351307619 ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t351307619 * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_SelectHandler_12), value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t3961796804 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t3961796804 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t3961796804 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_DeselectHandler_13), value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_t2428122252 * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_t2428122252 ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_t2428122252 * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_MoveHandler_14), value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t1578519651 * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t1578519651 ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t1578519651 * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubmitHandler_15), value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_t941479349 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_t941479349 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_t941479349 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_CancelHandler_16), value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t3834678857 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t3834678857 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t3834678857 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_HandlerListPool_17), value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t3677085441 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t3677085441 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t3677085441 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalTransformList_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_19() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache0_19)); }
	inline EventFunction_1_t2284434459 * get_U3CU3Ef__mgU24cache0_19() const { return ___U3CU3Ef__mgU24cache0_19; }
	inline EventFunction_1_t2284434459 ** get_address_of_U3CU3Ef__mgU24cache0_19() { return &___U3CU3Ef__mgU24cache0_19; }
	inline void set_U3CU3Ef__mgU24cache0_19(EventFunction_1_t2284434459 * value)
	{
		___U3CU3Ef__mgU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_20() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache1_20)); }
	inline EventFunction_1_t205256967 * get_U3CU3Ef__mgU24cache1_20() const { return ___U3CU3Ef__mgU24cache1_20; }
	inline EventFunction_1_t205256967 ** get_address_of_U3CU3Ef__mgU24cache1_20() { return &___U3CU3Ef__mgU24cache1_20; }
	inline void set_U3CU3Ef__mgU24cache1_20(EventFunction_1_t205256967 * value)
	{
		___U3CU3Ef__mgU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_21() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache2_21)); }
	inline EventFunction_1_t2034057085 * get_U3CU3Ef__mgU24cache2_21() const { return ___U3CU3Ef__mgU24cache2_21; }
	inline EventFunction_1_t2034057085 ** get_address_of_U3CU3Ef__mgU24cache2_21() { return &___U3CU3Ef__mgU24cache2_21; }
	inline void set_U3CU3Ef__mgU24cache2_21(EventFunction_1_t2034057085 * value)
	{
		___U3CU3Ef__mgU24cache2_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_22() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache3_22)); }
	inline EventFunction_1_t1203551031 * get_U3CU3Ef__mgU24cache3_22() const { return ___U3CU3Ef__mgU24cache3_22; }
	inline EventFunction_1_t1203551031 ** get_address_of_U3CU3Ef__mgU24cache3_22() { return &___U3CU3Ef__mgU24cache3_22; }
	inline void set_U3CU3Ef__mgU24cache3_22(EventFunction_1_t1203551031 * value)
	{
		___U3CU3Ef__mgU24cache3_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_23() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache4_23)); }
	inline EventFunction_1_t4167640230 * get_U3CU3Ef__mgU24cache4_23() const { return ___U3CU3Ef__mgU24cache4_23; }
	inline EventFunction_1_t4167640230 ** get_address_of_U3CU3Ef__mgU24cache4_23() { return &___U3CU3Ef__mgU24cache4_23; }
	inline void set_U3CU3Ef__mgU24cache4_23(EventFunction_1_t4167640230 * value)
	{
		___U3CU3Ef__mgU24cache4_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_24() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache5_24)); }
	inline EventFunction_1_t3958662489 * get_U3CU3Ef__mgU24cache5_24() const { return ___U3CU3Ef__mgU24cache5_24; }
	inline EventFunction_1_t3958662489 ** get_address_of_U3CU3Ef__mgU24cache5_24() { return &___U3CU3Ef__mgU24cache5_24; }
	inline void set_U3CU3Ef__mgU24cache5_24(EventFunction_1_t3958662489 * value)
	{
		___U3CU3Ef__mgU24cache5_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_25() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache6_25)); }
	inline EventFunction_1_t3371227495 * get_U3CU3Ef__mgU24cache6_25() const { return ___U3CU3Ef__mgU24cache6_25; }
	inline EventFunction_1_t3371227495 ** get_address_of_U3CU3Ef__mgU24cache6_25() { return &___U3CU3Ef__mgU24cache6_25; }
	inline void set_U3CU3Ef__mgU24cache6_25(EventFunction_1_t3371227495 * value)
	{
		___U3CU3Ef__mgU24cache6_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_26() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache7_26)); }
	inline EventFunction_1_t2683583115 * get_U3CU3Ef__mgU24cache7_26() const { return ___U3CU3Ef__mgU24cache7_26; }
	inline EventFunction_1_t2683583115 ** get_address_of_U3CU3Ef__mgU24cache7_26() { return &___U3CU3Ef__mgU24cache7_26; }
	inline void set_U3CU3Ef__mgU24cache7_26(EventFunction_1_t2683583115 * value)
	{
		___U3CU3Ef__mgU24cache7_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_27() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache8_27)); }
	inline EventFunction_1_t2987416273 * get_U3CU3Ef__mgU24cache8_27() const { return ___U3CU3Ef__mgU24cache8_27; }
	inline EventFunction_1_t2987416273 ** get_address_of_U3CU3Ef__mgU24cache8_27() { return &___U3CU3Ef__mgU24cache8_27; }
	inline void set_U3CU3Ef__mgU24cache8_27(EventFunction_1_t2987416273 * value)
	{
		___U3CU3Ef__mgU24cache8_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_28() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache9_28)); }
	inline EventFunction_1_t3275475620 * get_U3CU3Ef__mgU24cache9_28() const { return ___U3CU3Ef__mgU24cache9_28; }
	inline EventFunction_1_t3275475620 ** get_address_of_U3CU3Ef__mgU24cache9_28() { return &___U3CU3Ef__mgU24cache9_28; }
	inline void set_U3CU3Ef__mgU24cache9_28(EventFunction_1_t3275475620 * value)
	{
		___U3CU3Ef__mgU24cache9_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_29() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cacheA_29)); }
	inline EventFunction_1_t2177486041 * get_U3CU3Ef__mgU24cacheA_29() const { return ___U3CU3Ef__mgU24cacheA_29; }
	inline EventFunction_1_t2177486041 ** get_address_of_U3CU3Ef__mgU24cacheA_29() { return &___U3CU3Ef__mgU24cacheA_29; }
	inline void set_U3CU3Ef__mgU24cacheA_29(EventFunction_1_t2177486041 * value)
	{
		___U3CU3Ef__mgU24cacheA_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_30() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cacheB_30)); }
	inline EventFunction_1_t4074793019 * get_U3CU3Ef__mgU24cacheB_30() const { return ___U3CU3Ef__mgU24cacheB_30; }
	inline EventFunction_1_t4074793019 ** get_address_of_U3CU3Ef__mgU24cacheB_30() { return &___U3CU3Ef__mgU24cacheB_30; }
	inline void set_U3CU3Ef__mgU24cacheB_30(EventFunction_1_t4074793019 * value)
	{
		___U3CU3Ef__mgU24cacheB_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_31() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cacheC_31)); }
	inline EventFunction_1_t351307619 * get_U3CU3Ef__mgU24cacheC_31() const { return ___U3CU3Ef__mgU24cacheC_31; }
	inline EventFunction_1_t351307619 ** get_address_of_U3CU3Ef__mgU24cacheC_31() { return &___U3CU3Ef__mgU24cacheC_31; }
	inline void set_U3CU3Ef__mgU24cacheC_31(EventFunction_1_t351307619 * value)
	{
		___U3CU3Ef__mgU24cacheC_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_32() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cacheD_32)); }
	inline EventFunction_1_t3961796804 * get_U3CU3Ef__mgU24cacheD_32() const { return ___U3CU3Ef__mgU24cacheD_32; }
	inline EventFunction_1_t3961796804 ** get_address_of_U3CU3Ef__mgU24cacheD_32() { return &___U3CU3Ef__mgU24cacheD_32; }
	inline void set_U3CU3Ef__mgU24cacheD_32(EventFunction_1_t3961796804 * value)
	{
		___U3CU3Ef__mgU24cacheD_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_33() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cacheE_33)); }
	inline EventFunction_1_t2428122252 * get_U3CU3Ef__mgU24cacheE_33() const { return ___U3CU3Ef__mgU24cacheE_33; }
	inline EventFunction_1_t2428122252 ** get_address_of_U3CU3Ef__mgU24cacheE_33() { return &___U3CU3Ef__mgU24cacheE_33; }
	inline void set_U3CU3Ef__mgU24cacheE_33(EventFunction_1_t2428122252 * value)
	{
		___U3CU3Ef__mgU24cacheE_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_34() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cacheF_34)); }
	inline EventFunction_1_t1578519651 * get_U3CU3Ef__mgU24cacheF_34() const { return ___U3CU3Ef__mgU24cacheF_34; }
	inline EventFunction_1_t1578519651 ** get_address_of_U3CU3Ef__mgU24cacheF_34() { return &___U3CU3Ef__mgU24cacheF_34; }
	inline void set_U3CU3Ef__mgU24cacheF_34(EventFunction_1_t1578519651 * value)
	{
		___U3CU3Ef__mgU24cacheF_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_35() { return static_cast<int32_t>(offsetof(ExecuteEvents_t1120104600_StaticFields, ___U3CU3Ef__mgU24cache10_35)); }
	inline EventFunction_1_t941479349 * get_U3CU3Ef__mgU24cache10_35() const { return ___U3CU3Ef__mgU24cache10_35; }
	inline EventFunction_1_t941479349 ** get_address_of_U3CU3Ef__mgU24cache10_35() { return &___U3CU3Ef__mgU24cache10_35; }
	inline void set_U3CU3Ef__mgU24cache10_35(EventFunction_1_t941479349 * value)
	{
		___U3CU3Ef__mgU24cache10_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEEVENTS_T1120104600_H
#ifndef TRACKERMANAGER_T1260673176_H
#define TRACKERMANAGER_T1260673176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerManager
struct  TrackerManager_t1260673176  : public RuntimeObject
{
public:
	// Vuforia.ObjectTracker Vuforia.TrackerManager::mObjectTracker
	ObjectTracker_t1446540767 * ___mObjectTracker_1;
	// Vuforia.TextTracker Vuforia.TrackerManager::mTextTracker
	TextTracker_t2690848417 * ___mTextTracker_2;
	// Vuforia.DeviceTracker Vuforia.TrackerManager::mDeviceTracker
	DeviceTracker_t1565609596 * ___mDeviceTracker_3;
	// Vuforia.SmartTerrain Vuforia.TrackerManager::mSmartTerrain
	SmartTerrain_t2953426174 * ___mSmartTerrain_4;
	// Vuforia.StateManager Vuforia.TrackerManager::mStateManager
	StateManager_t2114859061 * ___mStateManager_5;

public:
	inline static int32_t get_offset_of_mObjectTracker_1() { return static_cast<int32_t>(offsetof(TrackerManager_t1260673176, ___mObjectTracker_1)); }
	inline ObjectTracker_t1446540767 * get_mObjectTracker_1() const { return ___mObjectTracker_1; }
	inline ObjectTracker_t1446540767 ** get_address_of_mObjectTracker_1() { return &___mObjectTracker_1; }
	inline void set_mObjectTracker_1(ObjectTracker_t1446540767 * value)
	{
		___mObjectTracker_1 = value;
		Il2CppCodeGenWriteBarrier((&___mObjectTracker_1), value);
	}

	inline static int32_t get_offset_of_mTextTracker_2() { return static_cast<int32_t>(offsetof(TrackerManager_t1260673176, ___mTextTracker_2)); }
	inline TextTracker_t2690848417 * get_mTextTracker_2() const { return ___mTextTracker_2; }
	inline TextTracker_t2690848417 ** get_address_of_mTextTracker_2() { return &___mTextTracker_2; }
	inline void set_mTextTracker_2(TextTracker_t2690848417 * value)
	{
		___mTextTracker_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTextTracker_2), value);
	}

	inline static int32_t get_offset_of_mDeviceTracker_3() { return static_cast<int32_t>(offsetof(TrackerManager_t1260673176, ___mDeviceTracker_3)); }
	inline DeviceTracker_t1565609596 * get_mDeviceTracker_3() const { return ___mDeviceTracker_3; }
	inline DeviceTracker_t1565609596 ** get_address_of_mDeviceTracker_3() { return &___mDeviceTracker_3; }
	inline void set_mDeviceTracker_3(DeviceTracker_t1565609596 * value)
	{
		___mDeviceTracker_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTracker_3), value);
	}

	inline static int32_t get_offset_of_mSmartTerrain_4() { return static_cast<int32_t>(offsetof(TrackerManager_t1260673176, ___mSmartTerrain_4)); }
	inline SmartTerrain_t2953426174 * get_mSmartTerrain_4() const { return ___mSmartTerrain_4; }
	inline SmartTerrain_t2953426174 ** get_address_of_mSmartTerrain_4() { return &___mSmartTerrain_4; }
	inline void set_mSmartTerrain_4(SmartTerrain_t2953426174 * value)
	{
		___mSmartTerrain_4 = value;
		Il2CppCodeGenWriteBarrier((&___mSmartTerrain_4), value);
	}

	inline static int32_t get_offset_of_mStateManager_5() { return static_cast<int32_t>(offsetof(TrackerManager_t1260673176, ___mStateManager_5)); }
	inline StateManager_t2114859061 * get_mStateManager_5() const { return ___mStateManager_5; }
	inline StateManager_t2114859061 ** get_address_of_mStateManager_5() { return &___mStateManager_5; }
	inline void set_mStateManager_5(StateManager_t2114859061 * value)
	{
		___mStateManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___mStateManager_5), value);
	}
};

struct TrackerManager_t1260673176_StaticFields
{
public:
	// Vuforia.TrackerManager Vuforia.TrackerManager::mInstance
	TrackerManager_t1260673176 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(TrackerManager_t1260673176_StaticFields, ___mInstance_0)); }
	inline TrackerManager_t1260673176 * get_mInstance_0() const { return ___mInstance_0; }
	inline TrackerManager_t1260673176 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(TrackerManager_t1260673176 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKERMANAGER_T1260673176_H
#ifndef CUSTOMATTRIBUTEDATA_T2522271460_H
#define CUSTOMATTRIBUTEDATA_T2522271460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2522271460  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t1482679046 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2522271460, ___ctorInfo_0)); }
	inline ConstructorInfo_t1482679046 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t1482679046 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t1482679046 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2522271460, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2522271460, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T2522271460_H
#ifndef UNITYCOMPONENTEXTENSIONS_T1770104781_H
#define UNITYCOMPONENTEXTENSIONS_T1770104781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UnityComponentExtensions
struct  UnityComponentExtensions_t1770104781  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCOMPONENTEXTENSIONS_T1770104781_H
#ifndef LIST_1_T3976455761_H
#define LIST_1_T3976455761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3976455761  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3878505910* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3976455761, ____items_1)); }
	inline ObjectU5BU5D_t3878505910* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3878505910** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3878505910* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3976455761, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3976455761, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3976455761_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t3878505910* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3976455761_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t3878505910* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t3878505910** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t3878505910* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3976455761_H
#ifndef ENUMERABLE_T1975178664_H
#define ENUMERABLE_T1975178664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t1975178664  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T1975178664_H
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
#ifndef RESOURCES_T3451549066_H
#define RESOURCES_T3451549066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t3451549066  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T3451549066_H
#ifndef LIST_1_T3677085441_H
#define LIST_1_T3677085441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t3677085441  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t178154566* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3677085441, ____items_1)); }
	inline TransformU5BU5D_t178154566* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t178154566** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t178154566* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3677085441, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3677085441, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3677085441_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TransformU5BU5D_t178154566* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3677085441_StaticFields, ___EmptyArray_4)); }
	inline TransformU5BU5D_t178154566* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TransformU5BU5D_t178154566** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TransformU5BU5D_t178154566* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3677085441_H
#ifndef LIST_1_T2207631656_H
#define LIST_1_T2207631656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>
struct  List_1_t2207631656  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackableIdPairU5BU5D_t293366179* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2207631656, ____items_1)); }
	inline TrackableIdPairU5BU5D_t293366179* get__items_1() const { return ____items_1; }
	inline TrackableIdPairU5BU5D_t293366179** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackableIdPairU5BU5D_t293366179* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2207631656, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2207631656, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2207631656_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TrackableIdPairU5BU5D_t293366179* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2207631656_StaticFields, ___EmptyArray_4)); }
	inline TrackableIdPairU5BU5D_t293366179* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TrackableIdPairU5BU5D_t293366179** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TrackableIdPairU5BU5D_t293366179* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2207631656_H
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
#ifndef TRACKER_T3657874616_H
#define TRACKER_T3657874616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t3657874616  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t3657874616, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T3657874616_H
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
#ifndef DEVICETRACKER_T1565609596_H
#define DEVICETRACKER_T1565609596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker
struct  DeviceTracker_t1565609596  : public Tracker_t3657874616
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKER_T1565609596_H
#ifndef KEYFRAME_T2561096767_H
#define KEYFRAME_T2561096767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t2561096767 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t2561096767, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t2561096767, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t2561096767, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t2561096767, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T2561096767_H
#ifndef MATRIX4X4_T54425537_H
#define MATRIX4X4_T54425537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t54425537 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t54425537_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t54425537  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t54425537  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t54425537  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t54425537 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t54425537  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t54425537_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t54425537  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t54425537 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t54425537  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T54425537_H
#ifndef HITINFO_T4034309653_H
#define HITINFO_T4034309653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t4034309653 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t2527051794 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t3201429123 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t4034309653, ___target_0)); }
	inline GameObject_t2527051794 * get_target_0() const { return ___target_0; }
	inline GameObject_t2527051794 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t2527051794 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t4034309653, ___camera_1)); }
	inline Camera_t3201429123 * get_camera_1() const { return ___camera_1; }
	inline Camera_t3201429123 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t3201429123 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t4034309653_marshaled_pinvoke
{
	GameObject_t2527051794 * ___target_0;
	Camera_t3201429123 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t4034309653_marshaled_com
{
	GameObject_t2527051794 * ___target_0;
	Camera_t3201429123 * ___camera_1;
};
#endif // HITINFO_T4034309653_H
#ifndef GCACHIEVEMENTDATA_T731726700_H
#define GCACHIEVEMENTDATA_T731726700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t731726700 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t731726700, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t731726700, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t731726700, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t731726700, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t731726700, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t731726700_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t731726700_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
#endif // GCACHIEVEMENTDATA_T731726700_H
#ifndef GCSCOREDATA_T3204758376_H
#define GCSCOREDATA_T3204758376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_t3204758376 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_t3204758376, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Category_0), value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_t3204758376, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_t3204758376, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_t3204758376, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_t3204758376, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_4), value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_t3204758376, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerID_5), value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_t3204758376, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t3204758376_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t3204758376_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
#endif // GCSCOREDATA_T3204758376_H
#ifndef UILINEINFO_T4129899474_H
#define UILINEINFO_T4129899474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t4129899474 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t4129899474, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t4129899474, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t4129899474, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t4129899474, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T4129899474_H
#ifndef WORKREQUEST_T318910794_H
#define WORKREQUEST_T318910794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t318910794 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t1558833321 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t1396185641 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t318910794, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t1558833321 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t1558833321 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t1558833321 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t318910794, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t318910794, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t1396185641 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t1396185641 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t1396185641 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t318910794_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t1396185641 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t318910794_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t1396185641 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T318910794_H
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
#ifndef WEBCAMDEVICE_T912479223_H
#define WEBCAMDEVICE_T912479223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_t912479223 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t912479223, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t912479223, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t912479223_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Flags_1;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t912479223_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Flags_1;
};
#endif // WEBCAMDEVICE_T912479223_H
#ifndef EYEWEARCALIBRATIONREADINGDATA_T3046382575_H
#define EYEWEARCALIBRATIONREADINGDATA_T3046382575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
struct  EyewearCalibrationReadingData_t3046382575 
{
public:
	// System.Single[] Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::pose
	SingleU5BU5D_t1095654037* ___pose_0;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::scale
	float ___scale_1;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::centerX
	float ___centerX_2;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::centerY
	float ___centerY_3;
	// System.Int32 Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t3046382575, ___pose_0)); }
	inline SingleU5BU5D_t1095654037* get_pose_0() const { return ___pose_0; }
	inline SingleU5BU5D_t1095654037** get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(SingleU5BU5D_t1095654037* value)
	{
		___pose_0 = value;
		Il2CppCodeGenWriteBarrier((&___pose_0), value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t3046382575, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_centerX_2() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t3046382575, ___centerX_2)); }
	inline float get_centerX_2() const { return ___centerX_2; }
	inline float* get_address_of_centerX_2() { return &___centerX_2; }
	inline void set_centerX_2(float value)
	{
		___centerX_2 = value;
	}

	inline static int32_t get_offset_of_centerY_3() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t3046382575, ___centerY_3)); }
	inline float get_centerY_3() const { return ___centerY_3; }
	inline float* get_address_of_centerY_3() { return &___centerY_3; }
	inline void set_centerY_3(float value)
	{
		___centerY_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t3046382575, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
#pragma pack(push, tp, 1)
struct EyewearCalibrationReadingData_t3046382575_marshaled_pinvoke
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
#pragma pack(push, tp, 1)
struct EyewearCalibrationReadingData_t3046382575_marshaled_com
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#pragma pack(pop, tp)
#endif // EYEWEARCALIBRATIONREADINGDATA_T3046382575_H
#ifndef RECTANGLEDATA_T3025935980_H
#define RECTANGLEDATA_T3025935980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RectangleData
#pragma pack(push, tp, 1)
struct  RectangleData_t3025935980 
{
public:
	// System.Single Vuforia.RectangleData::leftTopX
	float ___leftTopX_0;
	// System.Single Vuforia.RectangleData::leftTopY
	float ___leftTopY_1;
	// System.Single Vuforia.RectangleData::rightBottomX
	float ___rightBottomX_2;
	// System.Single Vuforia.RectangleData::rightBottomY
	float ___rightBottomY_3;

public:
	inline static int32_t get_offset_of_leftTopX_0() { return static_cast<int32_t>(offsetof(RectangleData_t3025935980, ___leftTopX_0)); }
	inline float get_leftTopX_0() const { return ___leftTopX_0; }
	inline float* get_address_of_leftTopX_0() { return &___leftTopX_0; }
	inline void set_leftTopX_0(float value)
	{
		___leftTopX_0 = value;
	}

	inline static int32_t get_offset_of_leftTopY_1() { return static_cast<int32_t>(offsetof(RectangleData_t3025935980, ___leftTopY_1)); }
	inline float get_leftTopY_1() const { return ___leftTopY_1; }
	inline float* get_address_of_leftTopY_1() { return &___leftTopY_1; }
	inline void set_leftTopY_1(float value)
	{
		___leftTopY_1 = value;
	}

	inline static int32_t get_offset_of_rightBottomX_2() { return static_cast<int32_t>(offsetof(RectangleData_t3025935980, ___rightBottomX_2)); }
	inline float get_rightBottomX_2() const { return ___rightBottomX_2; }
	inline float* get_address_of_rightBottomX_2() { return &___rightBottomX_2; }
	inline void set_rightBottomX_2(float value)
	{
		___rightBottomX_2 = value;
	}

	inline static int32_t get_offset_of_rightBottomY_3() { return static_cast<int32_t>(offsetof(RectangleData_t3025935980, ___rightBottomY_3)); }
	inline float get_rightBottomY_3() const { return ___rightBottomY_3; }
	inline float* get_address_of_rightBottomY_3() { return &___rightBottomY_3; }
	inline void set_rightBottomY_3(float value)
	{
		___rightBottomY_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTANGLEDATA_T3025935980_H
#ifndef TRACKABLEIDPAIR_T442626438_H
#define TRACKABLEIDPAIR_T442626438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/TrackableIdPair
struct  TrackableIdPair_t442626438 
{
public:
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t442626438, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t442626438, ___ResultId_1)); }
	inline int32_t get_ResultId_1() const { return ___ResultId_1; }
	inline int32_t* get_address_of_ResultId_1() { return &___ResultId_1; }
	inline void set_ResultId_1(int32_t value)
	{
		___ResultId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIDPAIR_T442626438_H
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
#ifndef QUATERNION_T4271470407_H
#define QUATERNION_T4271470407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t4271470407 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t4271470407, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t4271470407, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t4271470407, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t4271470407, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t4271470407_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t4271470407  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t4271470407_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t4271470407  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t4271470407 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t4271470407  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T4271470407_H
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
#ifndef VEC2I_T2546583444_H
#define VEC2I_T2546583444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t2546583444 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t2546583444, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t2546583444, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T2546583444_H
#ifndef OBJECTTRACKER_T1446540767_H
#define OBJECTTRACKER_T1446540767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTracker
struct  ObjectTracker_t1446540767  : public Tracker_t3657874616
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t2325015820 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t2325015820 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t510388901 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTracker::mTargetFinder
	TargetFinder_t1898051620 * ___mTargetFinder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_t1446540767, ___mActiveDataSets_1)); }
	inline List_1_t2325015820 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t2325015820 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t2325015820 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveDataSets_1), value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_t1446540767, ___mDataSets_2)); }
	inline List_1_t2325015820 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t2325015820 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t2325015820 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSets_2), value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_3() { return static_cast<int32_t>(offsetof(ObjectTracker_t1446540767, ___mImageTargetBuilder_3)); }
	inline ImageTargetBuilder_t510388901 * get_mImageTargetBuilder_3() const { return ___mImageTargetBuilder_3; }
	inline ImageTargetBuilder_t510388901 ** get_address_of_mImageTargetBuilder_3() { return &___mImageTargetBuilder_3; }
	inline void set_mImageTargetBuilder_3(ImageTargetBuilder_t510388901 * value)
	{
		___mImageTargetBuilder_3 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTargetBuilder_3), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_t1446540767, ___mTargetFinder_4)); }
	inline TargetFinder_t1898051620 * get_mTargetFinder_4() const { return ___mTargetFinder_4; }
	inline TargetFinder_t1898051620 ** get_address_of_mTargetFinder_4() { return &___mTargetFinder_4; }
	inline void set_mTargetFinder_4(TargetFinder_t1898051620 * value)
	{
		___mTargetFinder_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKER_T1446540767_H
#ifndef TEXTTRACKER_T2690848417_H
#define TEXTTRACKER_T2690848417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TextTracker
struct  TextTracker_t2690848417  : public Tracker_t3657874616
{
public:
	// Vuforia.WordList Vuforia.TextTracker::mWordList
	WordList_t3794385785 * ___mWordList_1;

public:
	inline static int32_t get_offset_of_mWordList_1() { return static_cast<int32_t>(offsetof(TextTracker_t2690848417, ___mWordList_1)); }
	inline WordList_t3794385785 * get_mWordList_1() const { return ___mWordList_1; }
	inline WordList_t3794385785 ** get_address_of_mWordList_1() { return &___mWordList_1; }
	inline void set_mWordList_1(WordList_t3794385785 * value)
	{
		___mWordList_1 = value;
		Il2CppCodeGenWriteBarrier((&___mWordList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTTRACKER_T2690848417_H
#ifndef SMARTTERRAIN_T2953426174_H
#define SMARTTERRAIN_T2953426174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrain
struct  SmartTerrain_t2953426174  : public Tracker_t3657874616
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMARTTERRAIN_T2953426174_H
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
#ifndef VIRTUALBUTTONDATA_T3003950808_H
#define VIRTUALBUTTONDATA_T3003950808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_t3003950808 
{
public:
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_t3003950808, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_t3003950808, ___isPressed_1)); }
	inline int32_t get_isPressed_1() const { return ___isPressed_1; }
	inline int32_t* get_address_of_isPressed_1() { return &___isPressed_1; }
	inline void set_isPressed_1(int32_t value)
	{
		___isPressed_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONDATA_T3003950808_H
#ifndef DOUBLE_T1605119752_H
#define DOUBLE_T1605119752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t1605119752 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t1605119752, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T1605119752_H
#ifndef MONOWIN32RESOURCE_T1721736841_H
#define MONOWIN32RESOURCE_T1721736841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoWin32Resource
struct  MonoWin32Resource_t1721736841 
{
public:
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_type
	int32_t ___res_type_0;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_id
	int32_t ___res_id_1;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::lang_id
	int32_t ___lang_id_2;
	// System.Byte[] System.Reflection.Emit.MonoWin32Resource::data
	ByteU5BU5D_t1541800421* ___data_3;

public:
	inline static int32_t get_offset_of_res_type_0() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1721736841, ___res_type_0)); }
	inline int32_t get_res_type_0() const { return ___res_type_0; }
	inline int32_t* get_address_of_res_type_0() { return &___res_type_0; }
	inline void set_res_type_0(int32_t value)
	{
		___res_type_0 = value;
	}

	inline static int32_t get_offset_of_res_id_1() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1721736841, ___res_id_1)); }
	inline int32_t get_res_id_1() const { return ___res_id_1; }
	inline int32_t* get_address_of_res_id_1() { return &___res_id_1; }
	inline void set_res_id_1(int32_t value)
	{
		___res_id_1 = value;
	}

	inline static int32_t get_offset_of_lang_id_2() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1721736841, ___lang_id_2)); }
	inline int32_t get_lang_id_2() const { return ___lang_id_2; }
	inline int32_t* get_address_of_lang_id_2() { return &___lang_id_2; }
	inline void set_lang_id_2(int32_t value)
	{
		___lang_id_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1721736841, ___data_3)); }
	inline ByteU5BU5D_t1541800421* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_t1541800421** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_t1541800421* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1721736841_marshaled_pinvoke
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1721736841_marshaled_com
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
#endif // MONOWIN32RESOURCE_T1721736841_H
#ifndef LINK_T1380722063_H
#define LINK_T1380722063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Link
struct  Link_t1380722063 
{
public:
	// System.Int32 System.Collections.Generic.Link::HashCode
	int32_t ___HashCode_0;
	// System.Int32 System.Collections.Generic.Link::Next
	int32_t ___Next_1;

public:
	inline static int32_t get_offset_of_HashCode_0() { return static_cast<int32_t>(offsetof(Link_t1380722063, ___HashCode_0)); }
	inline int32_t get_HashCode_0() const { return ___HashCode_0; }
	inline int32_t* get_address_of_HashCode_0() { return &___HashCode_0; }
	inline void set_HashCode_0(int32_t value)
	{
		___HashCode_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Link_t1380722063, ___Next_1)); }
	inline int32_t get_Next_1() const { return ___Next_1; }
	inline int32_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(int32_t value)
	{
		___Next_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T1380722063_H
#ifndef SLOT_T2808671665_H
#define SLOT_T2808671665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/Slot
struct  Slot_t2808671665 
{
public:
	// System.Object System.Collections.Hashtable/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t2808671665, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t2808671665, ___value_1)); }
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
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/Slot
struct Slot_t2808671665_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.Hashtable/Slot
struct Slot_t2808671665_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T2808671665_H
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
#ifndef ILTOKENINFO_T3238837779_H
#define ILTOKENINFO_T3238837779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILTokenInfo
struct  ILTokenInfo_t3238837779 
{
public:
	// System.Reflection.MemberInfo System.Reflection.Emit.ILTokenInfo::member
	MemberInfo_t * ___member_0;
	// System.Int32 System.Reflection.Emit.ILTokenInfo::code_pos
	int32_t ___code_pos_1;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(ILTokenInfo_t3238837779, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_code_pos_1() { return static_cast<int32_t>(offsetof(ILTokenInfo_t3238837779, ___code_pos_1)); }
	inline int32_t get_code_pos_1() const { return ___code_pos_1; }
	inline int32_t* get_address_of_code_pos_1() { return &___code_pos_1; }
	inline void set_code_pos_1(int32_t value)
	{
		___code_pos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t3238837779_marshaled_pinvoke
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t3238837779_marshaled_com
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
#endif // ILTOKENINFO_T3238837779_H
#ifndef KEYVALUEPAIR_2_T2508527628_H
#define KEYVALUEPAIR_2_T2508527628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
struct  KeyValuePair_2_t2508527628 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint16_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2508527628, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2508527628, ___value_1)); }
	inline uint16_t get_value_1() const { return ___value_1; }
	inline uint16_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint16_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2508527628_H
#ifndef PARAMETERMODIFIER_T1164491217_H
#define PARAMETERMODIFIER_T1164491217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1164491217 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t1500524663* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1164491217, ____byref_0)); }
	inline BooleanU5BU5D_t1500524663* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t1500524663** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t1500524663* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1164491217_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1164491217_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1164491217_H
#ifndef RESOURCECACHEITEM_T1984850726_H
#define RESOURCECACHEITEM_T1984850726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t1984850726 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t1984850726, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t1984850726, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t1984850726_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t1984850726_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T1984850726_H
#ifndef RESOURCEINFO_T3877563693_H
#define RESOURCEINFO_T3877563693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t3877563693 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t3877563693, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t3877563693, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t3877563693, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t3877563693_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t3877563693_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T3877563693_H
#ifndef LABELFIXUP_T3610165990_H
#define LABELFIXUP_T3610165990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelFixup
struct  LabelFixup_t3610165990 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::offset
	int32_t ___offset_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::pos
	int32_t ___pos_1;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::label_idx
	int32_t ___label_idx_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(LabelFixup_t3610165990, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(LabelFixup_t3610165990, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_label_idx_2() { return static_cast<int32_t>(offsetof(LabelFixup_t3610165990, ___label_idx_2)); }
	inline int32_t get_label_idx_2() const { return ___label_idx_2; }
	inline int32_t* get_address_of_label_idx_2() { return &___label_idx_2; }
	inline void set_label_idx_2(int32_t value)
	{
		___label_idx_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELFIXUP_T3610165990_H
#ifndef SBYTE_T1702684558_H
#define SBYTE_T1702684558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1702684558 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1702684558, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1702684558_H
#ifndef KEYVALUEPAIR_2_T3635640856_H
#define KEYVALUEPAIR_2_T3635640856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t3635640856 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3635640856, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3635640856, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3635640856_H
#ifndef SLOT_T805531009_H
#define SLOT_T805531009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/Slot
struct  Slot_t805531009 
{
public:
	// System.Object System.Collections.SortedList/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.SortedList/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t805531009, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t805531009, ___value_1)); }
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
// Native definition for P/Invoke marshalling of System.Collections.SortedList/Slot
struct Slot_t805531009_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.SortedList/Slot
struct Slot_t805531009_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T805531009_H
#ifndef DECIMAL_T866196536_H
#define DECIMAL_T866196536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t866196536 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t866196536, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t866196536, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t866196536, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t866196536, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t866196536_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t866196536  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t866196536  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t866196536  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t866196536  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t866196536  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t866196536_StaticFields, ___MinValue_0)); }
	inline Decimal_t866196536  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t866196536 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t866196536  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t866196536_StaticFields, ___MaxValue_1)); }
	inline Decimal_t866196536  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t866196536 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t866196536  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t866196536_StaticFields, ___MinusOne_2)); }
	inline Decimal_t866196536  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t866196536 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t866196536  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t866196536_StaticFields, ___One_3)); }
	inline Decimal_t866196536  get_One_3() const { return ___One_3; }
	inline Decimal_t866196536 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t866196536  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t866196536_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t866196536  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t866196536 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t866196536  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T866196536_H
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
#ifndef MARK_T787909737_H
#define MARK_T787909737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Mark
struct  Mark_t787909737 
{
public:
	// System.Int32 System.Text.RegularExpressions.Mark::Start
	int32_t ___Start_0;
	// System.Int32 System.Text.RegularExpressions.Mark::End
	int32_t ___End_1;
	// System.Int32 System.Text.RegularExpressions.Mark::Previous
	int32_t ___Previous_2;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(Mark_t787909737, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(Mark_t787909737, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Previous_2() { return static_cast<int32_t>(offsetof(Mark_t787909737, ___Previous_2)); }
	inline int32_t get_Previous_2() const { return ___Previous_2; }
	inline int32_t* get_address_of_Previous_2() { return &___Previous_2; }
	inline void set_Previous_2(int32_t value)
	{
		___Previous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARK_T787909737_H
#ifndef URISCHEME_T3736221848_H
#define URISCHEME_T3736221848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriScheme
struct  UriScheme_t3736221848 
{
public:
	// System.String System.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t3736221848, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t3736221848, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t3736221848, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_t3736221848_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_t3736221848_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T3736221848_H
#ifndef UINT64_T463920001_H
#define UINT64_T463920001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t463920001 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t463920001, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T463920001_H
#ifndef INT64_T2997302630_H
#define INT64_T2997302630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t2997302630 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t2997302630, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T2997302630_H
#ifndef INT16_T3782280871_H
#define INT16_T3782280871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t3782280871 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t3782280871, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T3782280871_H
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
#ifndef UINT32_T2976429035_H
#define UINT32_T2976429035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2976429035 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2976429035, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2976429035_H
#ifndef KEYVALUEPAIR_2_T1853234863_H
#define KEYVALUEPAIR_2_T1853234863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t1853234863 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1853234863, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1853234863, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1853234863_H
#ifndef ORDERBLOCK_T3803826114_H
#define ORDERBLOCK_T3803826114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t3803826114 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t2239667601 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t3803826114, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t3803826114, ___callback_1)); }
	inline UnityAction_t2239667601 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t2239667601 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t2239667601 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t3803826114_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t3803826114_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
#endif // ORDERBLOCK_T3803826114_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T673001010_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T673001010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t673001010 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t673001010, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t673001010, ___value_1)); }
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
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t673001010_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t673001010_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T673001010_H
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
#ifndef LABELDATA_T3107547367_H
#define LABELDATA_T3107547367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelData
struct  LabelData_t3107547367 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::addr
	int32_t ___addr_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::maxStack
	int32_t ___maxStack_1;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(LabelData_t3107547367, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_maxStack_1() { return static_cast<int32_t>(offsetof(LabelData_t3107547367, ___maxStack_1)); }
	inline int32_t get_maxStack_1() const { return ___maxStack_1; }
	inline int32_t* get_address_of_maxStack_1() { return &___maxStack_1; }
	inline void set_maxStack_1(int32_t value)
	{
		___maxStack_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELDATA_T3107547367_H
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
#ifndef UINT16_T1084337315_H
#define UINT16_T1084337315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t1084337315 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t1084337315, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T1084337315_H
#ifndef INTERNALSHADERCHANNEL_T2042365409_H
#define INTERNALSHADERCHANNEL_T2042365409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t2042365409 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t2042365409, ___value___1)); }
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
#endif // INTERNALSHADERCHANNEL_T2042365409_H
#ifndef INTERNALVERTEXCHANNELTYPE_T1256253924_H
#define INTERNALVERTEXCHANNELTYPE_T1256253924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t1256253924 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t1256253924, ___value___1)); }
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
#endif // INTERNALVERTEXCHANNELTYPE_T1256253924_H
#ifndef INVALIDOPERATIONEXCEPTION_T2006174199_H
#define INVALIDOPERATIONEXCEPTION_T2006174199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t2006174199  : public SystemException_t2436044558
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T2006174199_H
#ifndef FALLBACK_T288519283_H
#define FALLBACK_T288519283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t288519283 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t288519283, ___value___1)); }
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
#endif // FALLBACK_T288519283_H
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
#ifndef INSTANCEIDDATA_T2511831028_H
#define INSTANCEIDDATA_T2511831028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/InstanceIdData
#pragma pack(push, tp, 1)
struct  InstanceIdData_t2511831028 
{
public:
	// System.UInt64 Vuforia.TrackerData/InstanceIdData::numericValue
	uint64_t ___numericValue_0;
	// System.IntPtr Vuforia.TrackerData/InstanceIdData::buffer
	intptr_t ___buffer_1;
	// System.IntPtr Vuforia.TrackerData/InstanceIdData::reserved
	intptr_t ___reserved_2;
	// System.UInt32 Vuforia.TrackerData/InstanceIdData::dataLength
	uint32_t ___dataLength_3;
	// System.Int32 Vuforia.TrackerData/InstanceIdData::dataType
	int32_t ___dataType_4;

public:
	inline static int32_t get_offset_of_numericValue_0() { return static_cast<int32_t>(offsetof(InstanceIdData_t2511831028, ___numericValue_0)); }
	inline uint64_t get_numericValue_0() const { return ___numericValue_0; }
	inline uint64_t* get_address_of_numericValue_0() { return &___numericValue_0; }
	inline void set_numericValue_0(uint64_t value)
	{
		___numericValue_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(InstanceIdData_t2511831028, ___buffer_1)); }
	inline intptr_t get_buffer_1() const { return ___buffer_1; }
	inline intptr_t* get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(intptr_t value)
	{
		___buffer_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(InstanceIdData_t2511831028, ___reserved_2)); }
	inline intptr_t get_reserved_2() const { return ___reserved_2; }
	inline intptr_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(intptr_t value)
	{
		___reserved_2 = value;
	}

	inline static int32_t get_offset_of_dataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdData_t2511831028, ___dataLength_3)); }
	inline uint32_t get_dataLength_3() const { return ___dataLength_3; }
	inline uint32_t* get_address_of_dataLength_3() { return &___dataLength_3; }
	inline void set_dataLength_3(uint32_t value)
	{
		___dataLength_3 = value;
	}

	inline static int32_t get_offset_of_dataType_4() { return static_cast<int32_t>(offsetof(InstanceIdData_t2511831028, ___dataType_4)); }
	inline int32_t get_dataType_4() const { return ___dataType_4; }
	inline int32_t* get_address_of_dataType_4() { return &___dataType_4; }
	inline void set_dataType_4(int32_t value)
	{
		___dataType_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEIDDATA_T2511831028_H
#ifndef SECURITYACTION_T3844204435_H
#define SECURITYACTION_T3844204435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t3844204435 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t3844204435, ___value___1)); }
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
#endif // SECURITYACTION_T3844204435_H
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
#ifndef POSITIONALDEVICETRACKER_T1369874775_H
#define POSITIONALDEVICETRACKER_T1369874775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTracker
struct  PositionalDeviceTracker_t1369874775  : public DeviceTracker_t1565609596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALDEVICETRACKER_T1369874775_H
#ifndef MODEL_CORRECTION_MODE_T232462683_H
#define MODEL_CORRECTION_MODE_T232462683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE
struct  MODEL_CORRECTION_MODE_t232462683 
{
public:
	// System.Int32 Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MODEL_CORRECTION_MODE_t232462683, ___value___1)); }
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
#endif // MODEL_CORRECTION_MODE_T232462683_H
#ifndef RESOURCEATTRIBUTES_T1745969035_H
#define RESOURCEATTRIBUTES_T1745969035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t1745969035 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t1745969035, ___value___1)); }
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
#endif // RESOURCEATTRIBUTES_T1745969035_H
#ifndef ROTATIONALDEVICETRACKER_T176767220_H
#define ROTATIONALDEVICETRACKER_T176767220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTracker
struct  RotationalDeviceTracker_t176767220  : public DeviceTracker_t1565609596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONALDEVICETRACKER_T176767220_H
#ifndef OBB2D_T1488815471_H
#define OBB2D_T1488815471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/Obb2D
#pragma pack(push, tp, 1)
struct  Obb2D_t1488815471 
{
public:
	// UnityEngine.Vector2 Vuforia.TrackerData/Obb2D::center
	Vector2_t3629302141  ___center_0;
	// UnityEngine.Vector2 Vuforia.TrackerData/Obb2D::halfExtents
	Vector2_t3629302141  ___halfExtents_1;
	// System.Single Vuforia.TrackerData/Obb2D::rotation
	float ___rotation_2;
	// System.Int32 Vuforia.TrackerData/Obb2D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb2D_t1488815471, ___center_0)); }
	inline Vector2_t3629302141  get_center_0() const { return ___center_0; }
	inline Vector2_t3629302141 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector2_t3629302141  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb2D_t1488815471, ___halfExtents_1)); }
	inline Vector2_t3629302141  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector2_t3629302141 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector2_t3629302141  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(Obb2D_t1488815471, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb2D_t1488815471, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBB2D_T1488815471_H
#ifndef POSEDATA_T3220163595_H
#define POSEDATA_T3220163595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t3220163595 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/PoseData::position
	Vector3_t539014097  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData/PoseData::orientation
	Quaternion_t4271470407  ___orientation_1;
	// System.Int32 Vuforia.TrackerData/PoseData::csInteger
	int32_t ___csInteger_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t3220163595, ___position_0)); }
	inline Vector3_t539014097  get_position_0() const { return ___position_0; }
	inline Vector3_t539014097 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t539014097  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t3220163595, ___orientation_1)); }
	inline Quaternion_t4271470407  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t4271470407 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t4271470407  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_csInteger_2() { return static_cast<int32_t>(offsetof(PoseData_t3220163595, ___csInteger_2)); }
	inline int32_t get_csInteger_2() const { return ___csInteger_2; }
	inline int32_t* get_address_of_csInteger_2() { return &___csInteger_2; }
	inline void set_csInteger_2(int32_t value)
	{
		___csInteger_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATA_T3220163595_H
#ifndef ALIGNMENTTYPE_T742047908_H
#define ALIGNMENTTYPE_T742047908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice/EyewearCalibrationReading/AlignmentType
struct  AlignmentType_t742047908 
{
public:
	// System.Int32 Vuforia.EyewearDevice/EyewearCalibrationReading/AlignmentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlignmentType_t742047908, ___value___1)); }
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
#endif // ALIGNMENTTYPE_T742047908_H
#ifndef DATATYPE_T3748200798_H
#define DATATYPE_T3748200798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraField/DataType
struct  DataType_t3748200798 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraField/DataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataType_t3748200798, ___value___1)); }
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
#endif // DATATYPE_T3748200798_H
#ifndef DATASTREAMTYPE_T2102827329_H
#define DATASTREAMTYPE_T2102827329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t2102827329 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t2102827329, ___value___1)); }
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
#endif // DATASTREAMTYPE_T2102827329_H
#ifndef X509CHAINSTATUSFLAGS_T1994982324_H
#define X509CHAINSTATUSFLAGS_T1994982324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1994982324 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1994982324, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T1994982324_H
#ifndef BINDINGFLAGS_T1288729768_H
#define BINDINGFLAGS_T1288729768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t1288729768 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1288729768, ___value___1)); }
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
#endif // BINDINGFLAGS_T1288729768_H
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
#ifndef STEREOSCOPICEYE_T2822263950_H
#define STEREOSCOPICEYE_T2822263950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/StereoscopicEye
struct  StereoscopicEye_t2822263950 
{
public:
	// System.Int32 UnityEngine.Camera/StereoscopicEye::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StereoscopicEye_t2822263950, ___value___1)); }
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
#endif // STEREOSCOPICEYE_T2822263950_H
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
#ifndef TARGETSEARCHRESULT_T1008654619_H
#define TARGETSEARCHRESULT_T1008654619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetSearchResult
struct  TargetSearchResult_t1008654619 
{
public:
	// System.String Vuforia.TargetFinder/TargetSearchResult::TargetName
	String_t* ___TargetName_0;
	// System.String Vuforia.TargetFinder/TargetSearchResult::UniqueTargetId
	String_t* ___UniqueTargetId_1;
	// System.Single Vuforia.TargetFinder/TargetSearchResult::TargetSize
	float ___TargetSize_2;
	// System.String Vuforia.TargetFinder/TargetSearchResult::MetaData
	String_t* ___MetaData_3;
	// System.Byte Vuforia.TargetFinder/TargetSearchResult::TrackingRating
	uint8_t ___TrackingRating_4;
	// System.IntPtr Vuforia.TargetFinder/TargetSearchResult::TargetSearchResultPtr
	intptr_t ___TargetSearchResultPtr_5;

public:
	inline static int32_t get_offset_of_TargetName_0() { return static_cast<int32_t>(offsetof(TargetSearchResult_t1008654619, ___TargetName_0)); }
	inline String_t* get_TargetName_0() const { return ___TargetName_0; }
	inline String_t** get_address_of_TargetName_0() { return &___TargetName_0; }
	inline void set_TargetName_0(String_t* value)
	{
		___TargetName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TargetName_0), value);
	}

	inline static int32_t get_offset_of_UniqueTargetId_1() { return static_cast<int32_t>(offsetof(TargetSearchResult_t1008654619, ___UniqueTargetId_1)); }
	inline String_t* get_UniqueTargetId_1() const { return ___UniqueTargetId_1; }
	inline String_t** get_address_of_UniqueTargetId_1() { return &___UniqueTargetId_1; }
	inline void set_UniqueTargetId_1(String_t* value)
	{
		___UniqueTargetId_1 = value;
		Il2CppCodeGenWriteBarrier((&___UniqueTargetId_1), value);
	}

	inline static int32_t get_offset_of_TargetSize_2() { return static_cast<int32_t>(offsetof(TargetSearchResult_t1008654619, ___TargetSize_2)); }
	inline float get_TargetSize_2() const { return ___TargetSize_2; }
	inline float* get_address_of_TargetSize_2() { return &___TargetSize_2; }
	inline void set_TargetSize_2(float value)
	{
		___TargetSize_2 = value;
	}

	inline static int32_t get_offset_of_MetaData_3() { return static_cast<int32_t>(offsetof(TargetSearchResult_t1008654619, ___MetaData_3)); }
	inline String_t* get_MetaData_3() const { return ___MetaData_3; }
	inline String_t** get_address_of_MetaData_3() { return &___MetaData_3; }
	inline void set_MetaData_3(String_t* value)
	{
		___MetaData_3 = value;
		Il2CppCodeGenWriteBarrier((&___MetaData_3), value);
	}

	inline static int32_t get_offset_of_TrackingRating_4() { return static_cast<int32_t>(offsetof(TargetSearchResult_t1008654619, ___TrackingRating_4)); }
	inline uint8_t get_TrackingRating_4() const { return ___TrackingRating_4; }
	inline uint8_t* get_address_of_TrackingRating_4() { return &___TrackingRating_4; }
	inline void set_TrackingRating_4(uint8_t value)
	{
		___TrackingRating_4 = value;
	}

	inline static int32_t get_offset_of_TargetSearchResultPtr_5() { return static_cast<int32_t>(offsetof(TargetSearchResult_t1008654619, ___TargetSearchResultPtr_5)); }
	inline intptr_t get_TargetSearchResultPtr_5() const { return ___TargetSearchResultPtr_5; }
	inline intptr_t* get_address_of_TargetSearchResultPtr_5() { return &___TargetSearchResultPtr_5; }
	inline void set_TargetSearchResultPtr_5(intptr_t value)
	{
		___TargetSearchResultPtr_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t1008654619_marshaled_pinvoke
{
	char* ___TargetName_0;
	char* ___UniqueTargetId_1;
	float ___TargetSize_2;
	char* ___MetaData_3;
	uint8_t ___TrackingRating_4;
	intptr_t ___TargetSearchResultPtr_5;
};
// Native definition for COM marshalling of Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t1008654619_marshaled_com
{
	Il2CppChar* ___TargetName_0;
	Il2CppChar* ___UniqueTargetId_1;
	float ___TargetSize_2;
	Il2CppChar* ___MetaData_3;
	uint8_t ___TrackingRating_4;
	intptr_t ___TargetSearchResultPtr_5;
};
#endif // TARGETSEARCHRESULT_T1008654619_H
#ifndef PIXEL_FORMAT_T4209117376_H
#define PIXEL_FORMAT_T4209117376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t4209117376 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t4209117376, ___value___1)); }
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
#endif // PIXEL_FORMAT_T4209117376_H
#ifndef POSEINFO_T2963303070_H
#define POSEINFO_T2963303070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseInfo
struct  PoseInfo_t2963303070 
{
public:
	// UnityEngine.Vector3 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Position
	Vector3_t539014097  ___Position_0;
	// UnityEngine.Quaternion Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Rotation
	Quaternion_t4271470407  ___Rotation_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::NumFramesPoseWasOff
	int32_t ___NumFramesPoseWasOff_2;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(PoseInfo_t2963303070, ___Position_0)); }
	inline Vector3_t539014097  get_Position_0() const { return ___Position_0; }
	inline Vector3_t539014097 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t539014097  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(PoseInfo_t2963303070, ___Rotation_1)); }
	inline Quaternion_t4271470407  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t4271470407 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t4271470407  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_NumFramesPoseWasOff_2() { return static_cast<int32_t>(offsetof(PoseInfo_t2963303070, ___NumFramesPoseWasOff_2)); }
	inline int32_t get_NumFramesPoseWasOff_2() const { return ___NumFramesPoseWasOff_2; }
	inline int32_t* get_address_of_NumFramesPoseWasOff_2() { return &___NumFramesPoseWasOff_2; }
	inline void set_NumFramesPoseWasOff_2(int32_t value)
	{
		___NumFramesPoseWasOff_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEINFO_T2963303070_H
#ifndef HITTESTRESULT_T3843505021_H
#define HITTESTRESULT_T3843505021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HitTestResult
struct  HitTestResult_t3843505021 
{
public:
	// UnityEngine.Vector3 Vuforia.HitTestResult::mPosition
	Vector3_t539014097  ___mPosition_0;
	// UnityEngine.Quaternion Vuforia.HitTestResult::mOrientation
	Quaternion_t4271470407  ___mOrientation_1;

public:
	inline static int32_t get_offset_of_mPosition_0() { return static_cast<int32_t>(offsetof(HitTestResult_t3843505021, ___mPosition_0)); }
	inline Vector3_t539014097  get_mPosition_0() const { return ___mPosition_0; }
	inline Vector3_t539014097 * get_address_of_mPosition_0() { return &___mPosition_0; }
	inline void set_mPosition_0(Vector3_t539014097  value)
	{
		___mPosition_0 = value;
	}

	inline static int32_t get_offset_of_mOrientation_1() { return static_cast<int32_t>(offsetof(HitTestResult_t3843505021, ___mOrientation_1)); }
	inline Quaternion_t4271470407  get_mOrientation_1() const { return ___mOrientation_1; }
	inline Quaternion_t4271470407 * get_address_of_mOrientation_1() { return &___mOrientation_1; }
	inline void set_mOrientation_1(Quaternion_t4271470407  value)
	{
		___mOrientation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITTESTRESULT_T3843505021_H
#ifndef TYPETAG_T3297045175_H
#define TYPETAG_T3297045175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t3297045175 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t3297045175, ___value___1)); }
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
#endif // TYPETAG_T3297045175_H
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
#ifndef STATUS_T3587819915_H
#define STATUS_T3587819915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t3587819915 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t3587819915, ___value___1)); }
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
#endif // STATUS_T3587819915_H
#ifndef UICHARINFO_T827563704_H
#define UICHARINFO_T827563704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t827563704 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t3629302141  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t827563704, ___cursorPos_0)); }
	inline Vector2_t3629302141  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t3629302141 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t3629302141  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t827563704, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T827563704_H
#ifndef RAYCASTHIT2D_T1067259948_H
#define RAYCASTHIT2D_T1067259948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t1067259948 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t3629302141  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t3629302141  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t3629302141  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t3009310066 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1067259948, ___m_Centroid_0)); }
	inline Vector2_t3629302141  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t3629302141 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t3629302141  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1067259948, ___m_Point_1)); }
	inline Vector2_t3629302141  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t3629302141 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t3629302141  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1067259948, ___m_Normal_2)); }
	inline Vector2_t3629302141  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t3629302141 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t3629302141  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1067259948, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1067259948, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1067259948, ___m_Collider_5)); }
	inline Collider2D_t3009310066 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t3009310066 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t3009310066 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t1067259948_marshaled_pinvoke
{
	Vector2_t3629302141  ___m_Centroid_0;
	Vector2_t3629302141  ___m_Point_1;
	Vector2_t3629302141  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t3009310066 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t1067259948_marshaled_com
{
	Vector2_t3629302141  ___m_Centroid_0;
	Vector2_t3629302141  ___m_Point_1;
	Vector2_t3629302141  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t3009310066 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T1067259948_H
#ifndef RAYCASTHIT_T1885117142_H
#define RAYCASTHIT_T1885117142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1885117142 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t539014097  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t539014097  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t3629302141  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t896285622 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1885117142, ___m_Point_0)); }
	inline Vector3_t539014097  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t539014097 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t539014097  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1885117142, ___m_Normal_1)); }
	inline Vector3_t539014097  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t539014097 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t539014097  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1885117142, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1885117142, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1885117142, ___m_UV_4)); }
	inline Vector2_t3629302141  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t3629302141 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t3629302141  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1885117142, ___m_Collider_5)); }
	inline Collider_t896285622 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t896285622 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t896285622 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1885117142_marshaled_pinvoke
{
	Vector3_t539014097  ___m_Point_0;
	Vector3_t539014097  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t3629302141  ___m_UV_4;
	Collider_t896285622 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1885117142_marshaled_com
{
	Vector3_t539014097  ___m_Point_0;
	Vector3_t539014097  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t3629302141  ___m_UV_4;
	Collider_t896285622 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1885117142_H
#ifndef PLANE_T3144685315_H
#define PLANE_T3144685315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t3144685315 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t539014097  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t3144685315, ___m_Normal_0)); }
	inline Vector3_t539014097  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t539014097 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t539014097  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t3144685315, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T3144685315_H
#ifndef KEYCODE_T1099970917_H
#define KEYCODE_T1099970917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t1099970917 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t1099970917, ___value___1)); }
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
#endif // KEYCODE_T1099970917_H
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
#ifndef CONTACTPOINT_T2013396152_H
#define CONTACTPOINT_T2013396152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t2013396152 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t539014097  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t539014097  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t2013396152, ___m_Point_0)); }
	inline Vector3_t539014097  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t539014097 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t539014097  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t2013396152, ___m_Normal_1)); }
	inline Vector3_t539014097  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t539014097 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t539014097  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t2013396152, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t2013396152, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t2013396152, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T2013396152_H
#ifndef CONTENTTYPE_T2329426451_H
#define CONTENTTYPE_T2329426451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t2329426451 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t2329426451, ___value___1)); }
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
#endif // CONTENTTYPE_T2329426451_H
#ifndef WORDDATA_T1526873780_H
#define WORDDATA_T1526873780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/WordData
#pragma pack(push, tp, 1)
struct  WordData_t1526873780 
{
public:
	// System.IntPtr Vuforia.TrackerData/WordData::stringValue
	intptr_t ___stringValue_0;
	// System.Int32 Vuforia.TrackerData/WordData::id
	int32_t ___id_1;
	// UnityEngine.Vector2 Vuforia.TrackerData/WordData::size
	Vector2_t3629302141  ___size_2;
	// System.Int32 Vuforia.TrackerData/WordData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_stringValue_0() { return static_cast<int32_t>(offsetof(WordData_t1526873780, ___stringValue_0)); }
	inline intptr_t get_stringValue_0() const { return ___stringValue_0; }
	inline intptr_t* get_address_of_stringValue_0() { return &___stringValue_0; }
	inline void set_stringValue_0(intptr_t value)
	{
		___stringValue_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WordData_t1526873780, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(WordData_t1526873780, ___size_2)); }
	inline Vector2_t3629302141  get_size_2() const { return ___size_2; }
	inline Vector2_t3629302141 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_t3629302141  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(WordData_t1526873780, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDDATA_T1526873780_H
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
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T1201780503_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T1201780503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t1201780503 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t673001010  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t1201780503, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t673001010  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t673001010 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t673001010  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t1201780503, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t1201780503_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t673001010_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t1201780503_marshaled_com
{
	CustomAttributeTypedArgument_t673001010_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T1201780503_H
#ifndef CASTHELPER_1_T4134268794_H
#define CASTHELPER_1_T4134268794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t4134268794 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t4134268794, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t4134268794, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTHELPER_1_T4134268794_H
#ifndef PROFILEDATA_T2672016674_H
#define PROFILEDATA_T2672016674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t2672016674 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t2546583444  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t2546583444  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t2672016674, ___RequestedTextureSize_0)); }
	inline Vec2I_t2546583444  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t2546583444 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t2546583444  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t2672016674, ___ResampledTextureSize_1)); }
	inline Vec2I_t2546583444  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t2546583444 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t2546583444  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t2672016674, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILEDATA_T2672016674_H
#ifndef RUNTIMETYPEHANDLE_T1636756630_H
#define RUNTIMETYPEHANDLE_T1636756630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t1636756630 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1636756630, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T1636756630_H
#ifndef WORDRESULTDATA_T4259303705_H
#define WORDRESULTDATA_T4259303705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/WordResultData
#pragma pack(push, tp, 1)
struct  WordResultData_t4259303705 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/WordResultData::pose
	PoseData_t3220163595  ___pose_0;
	// System.Double Vuforia.TrackerData/WordResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/WordResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/WordResultData::id
	int32_t ___id_3;
	// Vuforia.TrackerData/Obb2D Vuforia.TrackerData/WordResultData::orientedBoundingBox
	Obb2D_t1488815471  ___orientedBoundingBox_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(WordResultData_t4259303705, ___pose_0)); }
	inline PoseData_t3220163595  get_pose_0() const { return ___pose_0; }
	inline PoseData_t3220163595 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t3220163595  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(WordResultData_t4259303705, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(WordResultData_t4259303705, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(WordResultData_t4259303705, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_orientedBoundingBox_4() { return static_cast<int32_t>(offsetof(WordResultData_t4259303705, ___orientedBoundingBox_4)); }
	inline Obb2D_t1488815471  get_orientedBoundingBox_4() const { return ___orientedBoundingBox_4; }
	inline Obb2D_t1488815471 * get_address_of_orientedBoundingBox_4() { return &___orientedBoundingBox_4; }
	inline void set_orientedBoundingBox_4(Obb2D_t1488815471  value)
	{
		___orientedBoundingBox_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDRESULTDATA_T4259303705_H
#ifndef REFEMITPERMISSIONSET_T1143243366_H
#define REFEMITPERMISSIONSET_T1143243366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.RefEmitPermissionSet
struct  RefEmitPermissionSet_t1143243366 
{
public:
	// System.Security.Permissions.SecurityAction System.Reflection.Emit.RefEmitPermissionSet::action
	int32_t ___action_0;
	// System.String System.Reflection.Emit.RefEmitPermissionSet::pset
	String_t* ___pset_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t1143243366, ___action_0)); }
	inline int32_t get_action_0() const { return ___action_0; }
	inline int32_t* get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(int32_t value)
	{
		___action_0 = value;
	}

	inline static int32_t get_offset_of_pset_1() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t1143243366, ___pset_1)); }
	inline String_t* get_pset_1() const { return ___pset_1; }
	inline String_t** get_address_of_pset_1() { return &___pset_1; }
	inline void set_pset_1(String_t* value)
	{
		___pset_1 = value;
		Il2CppCodeGenWriteBarrier((&___pset_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t1143243366_marshaled_pinvoke
{
	int32_t ___action_0;
	char* ___pset_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t1143243366_marshaled_com
{
	int32_t ___action_0;
	Il2CppChar* ___pset_1;
};
#endif // REFEMITPERMISSIONSET_T1143243366_H
#ifndef EYEWEARCALIBRATIONREADING_T3949217182_H
#define EYEWEARCALIBRATIONREADING_T3949217182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice/EyewearCalibrationReading
struct  EyewearCalibrationReading_t3949217182 
{
public:
	// System.Single[] Vuforia.EyewearDevice/EyewearCalibrationReading::pose
	SingleU5BU5D_t1095654037* ___pose_0;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::scale
	float ___scale_1;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerX
	float ___centerX_2;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerY
	float ___centerY_3;
	// Vuforia.EyewearDevice/EyewearCalibrationReading/AlignmentType Vuforia.EyewearDevice/EyewearCalibrationReading::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3949217182, ___pose_0)); }
	inline SingleU5BU5D_t1095654037* get_pose_0() const { return ___pose_0; }
	inline SingleU5BU5D_t1095654037** get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(SingleU5BU5D_t1095654037* value)
	{
		___pose_0 = value;
		Il2CppCodeGenWriteBarrier((&___pose_0), value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3949217182, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_centerX_2() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3949217182, ___centerX_2)); }
	inline float get_centerX_2() const { return ___centerX_2; }
	inline float* get_address_of_centerX_2() { return &___centerX_2; }
	inline void set_centerX_2(float value)
	{
		___centerX_2 = value;
	}

	inline static int32_t get_offset_of_centerY_3() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3949217182, ___centerY_3)); }
	inline float get_centerY_3() const { return ___centerY_3; }
	inline float* get_address_of_centerY_3() { return &___centerY_3; }
	inline void set_centerY_3(float value)
	{
		___centerY_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3949217182, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.EyewearDevice/EyewearCalibrationReading
struct EyewearCalibrationReading_t3949217182_marshaled_pinvoke
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
// Native definition for COM marshalling of Vuforia.EyewearDevice/EyewearCalibrationReading
struct EyewearCalibrationReading_t3949217182_marshaled_com
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#endif // EYEWEARCALIBRATIONREADING_T3949217182_H
#ifndef CAMERAFIELD_T271511659_H
#define CAMERAFIELD_T271511659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraField
struct  CameraField_t271511659 
{
public:
	// Vuforia.CameraDevice/CameraField/DataType Vuforia.CameraDevice/CameraField::Type
	int32_t ___Type_0;
	// System.String Vuforia.CameraDevice/CameraField::Key
	String_t* ___Key_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(CameraField_t271511659, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Key_1() { return static_cast<int32_t>(offsetof(CameraField_t271511659, ___Key_1)); }
	inline String_t* get_Key_1() const { return ___Key_1; }
	inline String_t** get_address_of_Key_1() { return &___Key_1; }
	inline void set_Key_1(String_t* value)
	{
		___Key_1 = value;
		Il2CppCodeGenWriteBarrier((&___Key_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_t271511659_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Key_1;
};
// Native definition for COM marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_t271511659_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Key_1;
};
#endif // CAMERAFIELD_T271511659_H
#ifndef ROTATIONALDEVICETRACKERIMPL_T1298403232_H
#define ROTATIONALDEVICETRACKERIMPL_T1298403232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTrackerImpl
struct  RotationalDeviceTrackerImpl_t1298403232  : public RotationalDeviceTracker_t176767220
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONALDEVICETRACKERIMPL_T1298403232_H
#ifndef ROTATIONALPLAYMODEDEVICETRACKERIMPL_T2439620320_H
#define ROTATIONALPLAYMODEDEVICETRACKERIMPL_T2439620320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalPlayModeDeviceTrackerImpl
struct  RotationalPlayModeDeviceTrackerImpl_t2439620320  : public RotationalDeviceTracker_t176767220
{
public:
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::mVectorZero
	Vector3_t539014097  ___mVectorZero_1;
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::mModelCorrectionTransform
	Vector3_t539014097  ___mModelCorrectionTransform_2;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.RotationalPlayModeDeviceTrackerImpl::mModelCorrection
	int32_t ___mModelCorrection_3;
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::<Rotation>k__BackingField
	Vector3_t539014097  ___U3CRotationU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_mVectorZero_1() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t2439620320, ___mVectorZero_1)); }
	inline Vector3_t539014097  get_mVectorZero_1() const { return ___mVectorZero_1; }
	inline Vector3_t539014097 * get_address_of_mVectorZero_1() { return &___mVectorZero_1; }
	inline void set_mVectorZero_1(Vector3_t539014097  value)
	{
		___mVectorZero_1 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionTransform_2() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t2439620320, ___mModelCorrectionTransform_2)); }
	inline Vector3_t539014097  get_mModelCorrectionTransform_2() const { return ___mModelCorrectionTransform_2; }
	inline Vector3_t539014097 * get_address_of_mModelCorrectionTransform_2() { return &___mModelCorrectionTransform_2; }
	inline void set_mModelCorrectionTransform_2(Vector3_t539014097  value)
	{
		___mModelCorrectionTransform_2 = value;
	}

	inline static int32_t get_offset_of_mModelCorrection_3() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t2439620320, ___mModelCorrection_3)); }
	inline int32_t get_mModelCorrection_3() const { return ___mModelCorrection_3; }
	inline int32_t* get_address_of_mModelCorrection_3() { return &___mModelCorrection_3; }
	inline void set_mModelCorrection_3(int32_t value)
	{
		___mModelCorrection_3 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t2439620320, ___U3CRotationU3Ek__BackingField_4)); }
	inline Vector3_t539014097  get_U3CRotationU3Ek__BackingField_4() const { return ___U3CRotationU3Ek__BackingField_4; }
	inline Vector3_t539014097 * get_address_of_U3CRotationU3Ek__BackingField_4() { return &___U3CRotationU3Ek__BackingField_4; }
	inline void set_U3CRotationU3Ek__BackingField_4(Vector3_t539014097  value)
	{
		___U3CRotationU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONALPLAYMODEDEVICETRACKERIMPL_T2439620320_H
#ifndef X509CHAINSTATUS_T1152496960_H
#define X509CHAINSTATUS_T1152496960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_t1152496960 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_t1152496960, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_t1152496960, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t1152496960_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t1152496960_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
#endif // X509CHAINSTATUS_T1152496960_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t1636756630  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1636756630  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1636756630 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1636756630  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t775785287* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3716749858 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3716749858 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3716749858 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t775785287* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t775785287** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t775785287* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t3716749858 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t3716749858 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t3716749858 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t3716749858 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t3716749858 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t3716749858 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t3716749858 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t3716749858 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t3716749858 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MONORESOURCE_T2631437455_H
#define MONORESOURCE_T2631437455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoResource
struct  MonoResource_t2631437455 
{
public:
	// System.Byte[] System.Reflection.Emit.MonoResource::data
	ByteU5BU5D_t1541800421* ___data_0;
	// System.String System.Reflection.Emit.MonoResource::name
	String_t* ___name_1;
	// System.String System.Reflection.Emit.MonoResource::filename
	String_t* ___filename_2;
	// System.Reflection.ResourceAttributes System.Reflection.Emit.MonoResource::attrs
	int32_t ___attrs_3;
	// System.Int32 System.Reflection.Emit.MonoResource::offset
	int32_t ___offset_4;
	// System.IO.Stream System.Reflection.Emit.MonoResource::stream
	Stream_t2037818886 * ___stream_5;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MonoResource_t2631437455, ___data_0)); }
	inline ByteU5BU5D_t1541800421* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t1541800421** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t1541800421* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoResource_t2631437455, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(MonoResource_t2631437455, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((&___filename_2), value);
	}

	inline static int32_t get_offset_of_attrs_3() { return static_cast<int32_t>(offsetof(MonoResource_t2631437455, ___attrs_3)); }
	inline int32_t get_attrs_3() const { return ___attrs_3; }
	inline int32_t* get_address_of_attrs_3() { return &___attrs_3; }
	inline void set_attrs_3(int32_t value)
	{
		___attrs_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(MonoResource_t2631437455, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(MonoResource_t2631437455, ___stream_5)); }
	inline Stream_t2037818886 * get_stream_5() const { return ___stream_5; }
	inline Stream_t2037818886 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t2037818886 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t2631437455_marshaled_pinvoke
{
	uint8_t* ___data_0;
	char* ___name_1;
	char* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t2037818886 * ___stream_5;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t2631437455_marshaled_com
{
	uint8_t* ___data_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t2037818886 * ___stream_5;
};
#endif // MONORESOURCE_T2631437455_H
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
#ifndef PLAYABLEBINDING_T3516061699_H
#define PLAYABLEBINDING_T3516061699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t3516061699 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t948050745 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3516061699__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t3516061699, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t3516061699, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t3516061699, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t948050745 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t948050745 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t948050745 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t3516061699, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t3516061699_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t2084483218* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t3516061699_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t2084483218* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t2084483218** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t2084483218* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t3516061699_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t3516061699_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t948050745_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3516061699__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t3516061699_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t948050745_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3516061699__padding[1];
	};
};
#endif // PLAYABLEBINDING_T3516061699_H
#ifndef SCRIPTABLEOBJECT_T1496462445_H
#define SCRIPTABLEOBJECT_T1496462445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1496462445  : public Object_t948050745
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1496462445_marshaled_pinvoke : public Object_t948050745_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1496462445_marshaled_com : public Object_t948050745_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1496462445_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T374686966_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T374686966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t374686966  : public ArgumentException_t3402785744
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t374686966, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T374686966_H
#ifndef KEYVALUEPAIR_2_T4096206987_H
#define KEYVALUEPAIR_2_T4096206987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct  KeyValuePair_2_t4096206987 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ProfileData_t2672016674  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4096206987, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4096206987, ___value_1)); }
	inline ProfileData_t2672016674  get_value_1() const { return ___value_1; }
	inline ProfileData_t2672016674 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ProfileData_t2672016674  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4096206987_H
#ifndef POSITIONALPLAYMODEDEVICETRACKERIMPL_T161249787_H
#define POSITIONALPLAYMODEDEVICETRACKERIMPL_T161249787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalPlayModeDeviceTrackerImpl
struct  PositionalPlayModeDeviceTrackerImpl_t161249787  : public PositionalDeviceTracker_t1369874775
{
public:
	// UnityEngine.Vector3 Vuforia.PositionalPlayModeDeviceTrackerImpl::<Position>k__BackingField
	Vector3_t539014097  ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Vector3 Vuforia.PositionalPlayModeDeviceTrackerImpl::<Rotation>k__BackingField
	Vector3_t539014097  ___U3CRotationU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PositionalPlayModeDeviceTrackerImpl_t161249787, ___U3CPositionU3Ek__BackingField_1)); }
	inline Vector3_t539014097  get_U3CPositionU3Ek__BackingField_1() const { return ___U3CPositionU3Ek__BackingField_1; }
	inline Vector3_t539014097 * get_address_of_U3CPositionU3Ek__BackingField_1() { return &___U3CPositionU3Ek__BackingField_1; }
	inline void set_U3CPositionU3Ek__BackingField_1(Vector3_t539014097  value)
	{
		___U3CPositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PositionalPlayModeDeviceTrackerImpl_t161249787, ___U3CRotationU3Ek__BackingField_2)); }
	inline Vector3_t539014097  get_U3CRotationU3Ek__BackingField_2() const { return ___U3CRotationU3Ek__BackingField_2; }
	inline Vector3_t539014097 * get_address_of_U3CRotationU3Ek__BackingField_2() { return &___U3CRotationU3Ek__BackingField_2; }
	inline void set_U3CRotationU3Ek__BackingField_2(Vector3_t539014097  value)
	{
		___U3CRotationU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALPLAYMODEDEVICETRACKERIMPL_T161249787_H
#ifndef POSITIONALDEVICETRACKERIMPL_T3377804943_H
#define POSITIONALDEVICETRACKERIMPL_T3377804943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTrackerImpl
struct  PositionalDeviceTrackerImpl_t3377804943  : public PositionalDeviceTracker_t1369874775
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALDEVICETRACKERIMPL_T3377804943_H
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
#ifndef ARGUMENTNULLEXCEPTION_T1729354103_H
#define ARGUMENTNULLEXCEPTION_T1729354103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1729354103  : public ArgumentException_t3402785744
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1729354103_H
#ifndef KEYVALUEPAIR_2_T3600605482_H
#define KEYVALUEPAIR_2_T3600605482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>
struct  KeyValuePair_2_t3600605482 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3600605482, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3600605482, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3600605482_H
#ifndef TRACKABLERESULTDATA_T797872706_H
#define TRACKABLERESULTDATA_T797872706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_t797872706 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/TrackableResultData::pose
	PoseData_t3220163595  ___pose_0;
	// System.Double Vuforia.TrackerData/TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::id
	int32_t ___id_3;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_t797872706, ___pose_0)); }
	inline PoseData_t3220163595  get_pose_0() const { return ___pose_0; }
	inline PoseData_t3220163595 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t3220163595  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_t797872706, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_t797872706, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TrackableResultData_t797872706, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLERESULTDATA_T797872706_H
#ifndef GAMEOBJECT_T2527051794_H
#define GAMEOBJECT_T2527051794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t2527051794  : public Object_t948050745
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T2527051794_H
#ifndef KEYVALUEPAIR_2_T424855279_H
#define KEYVALUEPAIR_2_T424855279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>
struct  KeyValuePair_2_t424855279 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Matrix4x4_t54425537  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t424855279, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t424855279, ___value_1)); }
	inline Matrix4x4_t54425537  get_value_1() const { return ___value_1; }
	inline Matrix4x4_t54425537 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Matrix4x4_t54425537  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T424855279_H
#ifndef KEYVALUEPAIR_2_T3999731883_H
#define KEYVALUEPAIR_2_T3999731883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>
struct  KeyValuePair_2_t3999731883 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector2_t3629302141  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3999731883, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3999731883, ___value_1)); }
	inline Vector2_t3629302141  get_value_1() const { return ___value_1; }
	inline Vector2_t3629302141 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_t3629302141  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3999731883_H
#ifndef KEYVALUEPAIR_2_T1426870497_H
#define KEYVALUEPAIR_2_T1426870497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status>
struct  KeyValuePair_2_t1426870497 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t442626438  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1426870497, ___key_0)); }
	inline TrackableIdPair_t442626438  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t442626438 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t442626438  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1426870497, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1426870497_H
#ifndef KEYVALUEPAIR_2_T802353652_H
#define KEYVALUEPAIR_2_T802353652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo>
struct  KeyValuePair_2_t802353652 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t442626438  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PoseInfo_t2963303070  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t802353652, ___key_0)); }
	inline TrackableIdPair_t442626438  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t442626438 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t442626438  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t802353652, ___value_1)); }
	inline PoseInfo_t2963303070  get_value_1() const { return ___value_1; }
	inline PoseInfo_t2963303070 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PoseInfo_t2963303070  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T802353652_H
#ifndef KEYVALUEPAIR_2_T636299427_H
#define KEYVALUEPAIR_2_T636299427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct  KeyValuePair_2_t636299427 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t636299427, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t636299427, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T636299427_H
#ifndef POSEAGEENTRY_T1970234155_H
#define POSEAGEENTRY_T1970234155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry
struct  PoseAgeEntry_t1970234155 
{
public:
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Pose
	PoseInfo_t2963303070  ___Pose_0;
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::CameraPose
	PoseInfo_t2963303070  ___CameraPose_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Age
	int32_t ___Age_2;

public:
	inline static int32_t get_offset_of_Pose_0() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t1970234155, ___Pose_0)); }
	inline PoseInfo_t2963303070  get_Pose_0() const { return ___Pose_0; }
	inline PoseInfo_t2963303070 * get_address_of_Pose_0() { return &___Pose_0; }
	inline void set_Pose_0(PoseInfo_t2963303070  value)
	{
		___Pose_0 = value;
	}

	inline static int32_t get_offset_of_CameraPose_1() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t1970234155, ___CameraPose_1)); }
	inline PoseInfo_t2963303070  get_CameraPose_1() const { return ___CameraPose_1; }
	inline PoseInfo_t2963303070 * get_address_of_CameraPose_1() { return &___CameraPose_1; }
	inline void set_CameraPose_1(PoseInfo_t2963303070  value)
	{
		___CameraPose_1 = value;
	}

	inline static int32_t get_offset_of_Age_2() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t1970234155, ___Age_2)); }
	inline int32_t get_Age_2() const { return ___Age_2; }
	inline int32_t* get_address_of_Age_2() { return &___Age_2; }
	inline void set_Age_2(int32_t value)
	{
		___Age_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEAGEENTRY_T1970234155_H
#ifndef VUMARKTARGETDATA_T1911035625_H
#define VUMARKTARGETDATA_T1911035625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VuMarkTargetData
#pragma pack(push, tp, 1)
struct  VuMarkTargetData_t1911035625 
{
public:
	// Vuforia.TrackerData/InstanceIdData Vuforia.TrackerData/VuMarkTargetData::instanceId
	InstanceIdData_t2511831028  ___instanceId_0;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::id
	int32_t ___id_1;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::templateId
	int32_t ___templateId_2;
	// UnityEngine.Vector3 Vuforia.TrackerData/VuMarkTargetData::size
	Vector3_t539014097  ___size_3;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::unused
	int32_t ___unused_4;

public:
	inline static int32_t get_offset_of_instanceId_0() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t1911035625, ___instanceId_0)); }
	inline InstanceIdData_t2511831028  get_instanceId_0() const { return ___instanceId_0; }
	inline InstanceIdData_t2511831028 * get_address_of_instanceId_0() { return &___instanceId_0; }
	inline void set_instanceId_0(InstanceIdData_t2511831028  value)
	{
		___instanceId_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t1911035625, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_templateId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t1911035625, ___templateId_2)); }
	inline int32_t get_templateId_2() const { return ___templateId_2; }
	inline int32_t* get_address_of_templateId_2() { return &___templateId_2; }
	inline void set_templateId_2(int32_t value)
	{
		___templateId_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t1911035625, ___size_3)); }
	inline Vector3_t539014097  get_size_3() const { return ___size_3; }
	inline Vector3_t539014097 * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(Vector3_t539014097  value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_unused_4() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t1911035625, ___unused_4)); }
	inline int32_t get_unused_4() const { return ___unused_4; }
	inline int32_t* get_address_of_unused_4() { return &___unused_4; }
	inline void set_unused_4(int32_t value)
	{
		___unused_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETDATA_T1911035625_H
#ifndef VUMARKTARGETRESULTDATA_T2972352786_H
#define VUMARKTARGETRESULTDATA_T2972352786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_t2972352786 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/VuMarkTargetResultData::pose
	PoseData_t3220163595  ___pose_0;
	// System.Double Vuforia.TrackerData/VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2972352786, ___pose_0)); }
	inline PoseData_t3220163595  get_pose_0() const { return ___pose_0; }
	inline PoseData_t3220163595 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t3220163595  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2972352786, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2972352786, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2972352786, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2972352786, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2972352786, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETRESULTDATA_T2972352786_H
#ifndef CONVERTER_2_T1959436626_H
#define CONVERTER_2_T1959436626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Converter`2<System.Object,System.Object>
struct  Converter_2_t1959436626  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTER_2_T1959436626_H
#ifndef KEYVALUEPAIR_2_T4104252033_H
#define KEYVALUEPAIR_2_T4104252033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>
struct  KeyValuePair_2_t4104252033 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t442626438  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PoseAgeEntry_t1970234155  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4104252033, ___key_0)); }
	inline TrackableIdPair_t442626438  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t442626438 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t442626438  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4104252033, ___value_1)); }
	inline PoseAgeEntry_t1970234155  get_value_1() const { return ___value_1; }
	inline PoseAgeEntry_t1970234155 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PoseAgeEntry_t1970234155  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4104252033_H
#ifndef FUNC_2_T66464263_H
#define FUNC_2_T66464263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t66464263  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T66464263_H
#ifndef EVENTFUNCTION_1_T3965412554_H
#define EVENTFUNCTION_1_T3965412554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct  EventFunction_1_t3965412554  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T3965412554_H
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
#ifndef PREDICATE_1_T45154830_H
#define PREDICATE_1_T45154830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t45154830  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T45154830_H
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
#ifndef DROPDOWN_T2489847596_H
#define DROPDOWN_T2489847596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown
struct  Dropdown_t2489847596  : public Selectable_t3497516189
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t3743713302 * ___m_Template_16;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t1669440651 * ___m_CaptionText_17;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t1999002027 * ___m_CaptionImage_18;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t1669440651 * ___m_ItemText_19;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t1999002027 * ___m_ItemImage_20;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_21;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t1933408810 * ___m_Options_22;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t808895212 * ___m_OnValueChanged_23;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t2527051794 * ___m_Dropdown_24;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t2527051794 * ___m_Blocker_25;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t2730745548 * ___m_Items_26;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t897519560 * ___m_AlphaTweenRunner_27;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_28;

public:
	inline static int32_t get_offset_of_m_Template_16() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_Template_16)); }
	inline RectTransform_t3743713302 * get_m_Template_16() const { return ___m_Template_16; }
	inline RectTransform_t3743713302 ** get_address_of_m_Template_16() { return &___m_Template_16; }
	inline void set_m_Template_16(RectTransform_t3743713302 * value)
	{
		___m_Template_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Template_16), value);
	}

	inline static int32_t get_offset_of_m_CaptionText_17() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_CaptionText_17)); }
	inline Text_t1669440651 * get_m_CaptionText_17() const { return ___m_CaptionText_17; }
	inline Text_t1669440651 ** get_address_of_m_CaptionText_17() { return &___m_CaptionText_17; }
	inline void set_m_CaptionText_17(Text_t1669440651 * value)
	{
		___m_CaptionText_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionText_17), value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_18() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_CaptionImage_18)); }
	inline Image_t1999002027 * get_m_CaptionImage_18() const { return ___m_CaptionImage_18; }
	inline Image_t1999002027 ** get_address_of_m_CaptionImage_18() { return &___m_CaptionImage_18; }
	inline void set_m_CaptionImage_18(Image_t1999002027 * value)
	{
		___m_CaptionImage_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionImage_18), value);
	}

	inline static int32_t get_offset_of_m_ItemText_19() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_ItemText_19)); }
	inline Text_t1669440651 * get_m_ItemText_19() const { return ___m_ItemText_19; }
	inline Text_t1669440651 ** get_address_of_m_ItemText_19() { return &___m_ItemText_19; }
	inline void set_m_ItemText_19(Text_t1669440651 * value)
	{
		___m_ItemText_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemText_19), value);
	}

	inline static int32_t get_offset_of_m_ItemImage_20() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_ItemImage_20)); }
	inline Image_t1999002027 * get_m_ItemImage_20() const { return ___m_ItemImage_20; }
	inline Image_t1999002027 ** get_address_of_m_ItemImage_20() { return &___m_ItemImage_20; }
	inline void set_m_ItemImage_20(Image_t1999002027 * value)
	{
		___m_ItemImage_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemImage_20), value);
	}

	inline static int32_t get_offset_of_m_Value_21() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_Value_21)); }
	inline int32_t get_m_Value_21() const { return ___m_Value_21; }
	inline int32_t* get_address_of_m_Value_21() { return &___m_Value_21; }
	inline void set_m_Value_21(int32_t value)
	{
		___m_Value_21 = value;
	}

	inline static int32_t get_offset_of_m_Options_22() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_Options_22)); }
	inline OptionDataList_t1933408810 * get_m_Options_22() const { return ___m_Options_22; }
	inline OptionDataList_t1933408810 ** get_address_of_m_Options_22() { return &___m_Options_22; }
	inline void set_m_Options_22(OptionDataList_t1933408810 * value)
	{
		___m_Options_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_Options_22), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_OnValueChanged_23)); }
	inline DropdownEvent_t808895212 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline DropdownEvent_t808895212 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(DropdownEvent_t808895212 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_Dropdown_24() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_Dropdown_24)); }
	inline GameObject_t2527051794 * get_m_Dropdown_24() const { return ___m_Dropdown_24; }
	inline GameObject_t2527051794 ** get_address_of_m_Dropdown_24() { return &___m_Dropdown_24; }
	inline void set_m_Dropdown_24(GameObject_t2527051794 * value)
	{
		___m_Dropdown_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dropdown_24), value);
	}

	inline static int32_t get_offset_of_m_Blocker_25() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_Blocker_25)); }
	inline GameObject_t2527051794 * get_m_Blocker_25() const { return ___m_Blocker_25; }
	inline GameObject_t2527051794 ** get_address_of_m_Blocker_25() { return &___m_Blocker_25; }
	inline void set_m_Blocker_25(GameObject_t2527051794 * value)
	{
		___m_Blocker_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_Blocker_25), value);
	}

	inline static int32_t get_offset_of_m_Items_26() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_Items_26)); }
	inline List_1_t2730745548 * get_m_Items_26() const { return ___m_Items_26; }
	inline List_1_t2730745548 ** get_address_of_m_Items_26() { return &___m_Items_26; }
	inline void set_m_Items_26(List_1_t2730745548 * value)
	{
		___m_Items_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Items_26), value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_27() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___m_AlphaTweenRunner_27)); }
	inline TweenRunner_1_t897519560 * get_m_AlphaTweenRunner_27() const { return ___m_AlphaTweenRunner_27; }
	inline TweenRunner_1_t897519560 ** get_address_of_m_AlphaTweenRunner_27() { return &___m_AlphaTweenRunner_27; }
	inline void set_m_AlphaTweenRunner_27(TweenRunner_1_t897519560 * value)
	{
		___m_AlphaTweenRunner_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlphaTweenRunner_27), value);
	}

	inline static int32_t get_offset_of_validTemplate_28() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596, ___validTemplate_28)); }
	inline bool get_validTemplate_28() const { return ___validTemplate_28; }
	inline bool* get_address_of_validTemplate_28() { return &___validTemplate_28; }
	inline void set_validTemplate_28(bool value)
	{
		___validTemplate_28 = value;
	}
};

struct Dropdown_t2489847596_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t2109289114 * ___s_NoOptionData_29;

public:
	inline static int32_t get_offset_of_s_NoOptionData_29() { return static_cast<int32_t>(offsetof(Dropdown_t2489847596_StaticFields, ___s_NoOptionData_29)); }
	inline OptionData_t2109289114 * get_s_NoOptionData_29() const { return ___s_NoOptionData_29; }
	inline OptionData_t2109289114 ** get_address_of_s_NoOptionData_29() { return &___s_NoOptionData_29; }
	inline void set_s_NoOptionData_29(OptionData_t2109289114 * value)
	{
		___s_NoOptionData_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_NoOptionData_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPDOWN_T2489847596_H
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
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3987353262  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t1201780503  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t1201780503  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t1201780503 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t1201780503  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t1201780503  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t1201780503 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t1201780503  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1560684743  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t673001010  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t673001010  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t673001010 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t673001010  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeTypedArgument_t673001010  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t673001010 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t673001010  value)
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
// UnityEngine.Object[]
struct ObjectU5BU5D_t2117163972  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_t948050745 * m_Items[1];

public:
	inline Object_t948050745 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_t948050745 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_t948050745 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_t948050745 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_t948050745 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_t948050745 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// Vuforia.VuforiaManager/TrackableIdPair[]
struct TrackableIdPairU5BU5D_t293366179  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackableIdPair_t442626438  m_Items[1];

public:
	inline TrackableIdPair_t442626438  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableIdPair_t442626438 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableIdPair_t442626438  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackableIdPair_t442626438  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableIdPair_t442626438 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableIdPair_t442626438  value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m3892810357_gshared (List_1_t3976455761 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m4145137978_gshared (List_1_t3976455761 * __this, const RuntimeMethod* method);

// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m262127130 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3555353117 (ArgumentOutOfRangeException_t374686966 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1182249043 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t1636756630  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C"  void IntPtr__ctor_m3084759330 (intptr_t* __this, void* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void Component_GetComponentFastPath_m3042294384 (Component_t4119265833 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t4119265833 * Component_GetComponentInChildren_m1621259372 (Component_t4119265833 * __this, Type_t * ___t0, bool ___includeInactive1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C"  Component_t4119265833 * Component_GetComponentInParent_m3935004874 (Component_t4119265833 * __this, Type_t * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m2494190660 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m3999857780 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m947310639 (ArgumentException_t3402785744 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C"  Component_t4119265833 * GameObject_AddComponent_m247271770 (GameObject_t2527051794 * __this, Type_t * ___componentType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void GameObject_GetComponentFastPath_m472238912 (GameObject_t2527051794 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t4119265833 * GameObject_GetComponentInChildren_m1774229267 (GameObject_t2527051794 * __this, Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C"  Object_t948050745 * Object_FindObjectOfType_m3392178620 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C"  void Object_CheckNullArgument_m763707694 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C"  Object_t948050745 * Object_Internal_CloneSingle_m1771926037 (RuntimeObject * __this /* static, unused */, Object_t948050745 * ___data0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
extern "C"  Object_t948050745 * Resources_GetBuiltinResource_m759496169 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___path1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t948050745 * Resources_Load_m503586881 (RuntimeObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C"  ScriptableObject_t1496462445 * ScriptableObject_CreateInstance_m3085131 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m2719092554 (RuntimeObject * __this /* static, unused */, Object_t948050745 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m4066981595 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C"  bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m4138539183 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C"  bool VuforiaRuntimeUtilities_IsPlayMode_m2748365108 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
extern "C"  RuntimeObject* VuforiaWrapper_get_Instance_m3586248507 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Vuforia.TypeMapping::GetTypeID(System.Type)
extern "C"  uint16_t TypeMapping_GetTypeID_m1691908004 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTracker::.ctor()
extern "C"  void ObjectTracker__ctor_m1118821862 (ObjectTracker_t1446540767 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTracker::.ctor()
extern "C"  void TextTracker__ctor_m100491096 (TextTracker_t2690848417 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::.ctor()
extern "C"  void RotationalPlayModeDeviceTrackerImpl__ctor_m3158388311 (RotationalPlayModeDeviceTrackerImpl_t2439620320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::.ctor()
extern "C"  void RotationalDeviceTrackerImpl__ctor_m3454290145 (RotationalDeviceTrackerImpl_t1298403232 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PositionalPlayModeDeviceTrackerImpl::.ctor()
extern "C"  void PositionalPlayModeDeviceTrackerImpl__ctor_m999051538 (PositionalPlayModeDeviceTrackerImpl_t161249787 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PositionalDeviceTrackerImpl::.ctor()
extern "C"  void PositionalDeviceTrackerImpl__ctor_m305178048 (PositionalDeviceTrackerImpl_t3377804943 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrain::.ctor()
extern "C"  void SmartTerrain__ctor_m139376515 (SmartTerrain_t2953426174 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1045280655 (ArgumentNullException_t1729354103 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t2527051794 * Component_get_gameObject_m725065130 (Component_t4119265833 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C"  RuntimeArray * GameObject_GetComponentsInternal_m3988218409 (GameObject_t2527051794 * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C"  bool Mesh_get_canAccess_m306612308 (Mesh_t3980991349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  bool Mesh_HasChannel_m3839665192 (Mesh_t3980991349 * __this, int32_t ___ch0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_m2052586564 (Mesh_t3980991349 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  void Mesh_PrintErrorCantAccessChannel_m3244440480 (Mesh_t3980991349 * __this, int32_t ___ch0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  int32_t Mesh_DefaultDimensionForChannel_m4130965270 (RuntimeObject * __this /* static, unused */, int32_t ___channel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t2117163972* Object_FindObjectsOfType_m3892211808 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m864207549 (RuntimeObject * __this /* static, unused */, Object_t948050745 * p0, Object_t948050745 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m3631536021 (InvalidOperationException_t2006174199 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Check::Source(System.Object)
extern "C"  void Check_Source_m4079819519 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern "C"  void Check_SourceAndPredicate_m592377753 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___predicate1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
extern "C"  void ExecuteEvents_GetEventChain_m2336736155 (RuntimeObject * __this /* static, unused */, GameObject_t2527051794 * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m1205476282(__this, p0, method) ((  Transform_t1912080223 * (*) (List_1_t3677085441 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3892810357_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m3965154148(__this, method) ((  int32_t (*) (List_1_t3677085441 *, const RuntimeMethod*))List_1_get_Count_m4145137978_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3469215971 (RuntimeObject * __this /* static, unused */, Object_t948050745 * p0, Object_t948050745 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t1912080223 * GameObject_get_transform_m520721408 (GameObject_t2527051794 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t1912080223 * Transform_get_parent_m533093669 (Transform_t1912080223 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
extern "C"  KeyValuePair_2_t1853234863  Array_InternalArray__get_Item_TisKeyValuePair_2_t1853234863_m1170150744_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t1853234863_m1170150744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t1853234863  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t1853234863 *)(&V_0));
		KeyValuePair_2_t1853234863  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C"  KeyValuePair_2_t3635640856  Array_InternalArray__get_Item_TisKeyValuePair_2_t3635640856_m3959710445_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t3635640856_m3959710445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3635640856  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t3635640856 *)(&V_0));
		KeyValuePair_2_t3635640856  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>(System.Int32)
extern "C"  KeyValuePair_2_t2508527628  Array_InternalArray__get_Item_TisKeyValuePair_2_t2508527628_m762002783_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t2508527628_m762002783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2508527628  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t2508527628 *)(&V_0));
		KeyValuePair_2_t2508527628  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>(System.Int32)
extern "C"  KeyValuePair_2_t4096206987  Array_InternalArray__get_Item_TisKeyValuePair_2_t4096206987_m221429601_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t4096206987_m221429601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t4096206987  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t4096206987 *)(&V_0));
		KeyValuePair_2_t4096206987  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>>(System.Int32)
extern "C"  KeyValuePair_2_t3600605482  Array_InternalArray__get_Item_TisKeyValuePair_2_t3600605482_m1427357118_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t3600605482_m1427357118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3600605482  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t3600605482 *)(&V_0));
		KeyValuePair_2_t3600605482  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>>(System.Int32)
extern "C"  KeyValuePair_2_t424855279  Array_InternalArray__get_Item_TisKeyValuePair_2_t424855279_m2064660004_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t424855279_m2064660004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t424855279  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t424855279 *)(&V_0));
		KeyValuePair_2_t424855279  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>>(System.Int32)
extern "C"  KeyValuePair_2_t3999731883  Array_InternalArray__get_Item_TisKeyValuePair_2_t3999731883_m1229724319_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t3999731883_m1229724319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3999731883  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t3999731883 *)(&V_0));
		KeyValuePair_2_t3999731883  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>(System.Int32)
extern "C"  KeyValuePair_2_t636299427  Array_InternalArray__get_Item_TisKeyValuePair_2_t636299427_m868760375_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t636299427_m868760375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t636299427  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t636299427 *)(&V_0));
		KeyValuePair_2_t636299427  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>>(System.Int32)
extern "C"  KeyValuePair_2_t4104252033  Array_InternalArray__get_Item_TisKeyValuePair_2_t4104252033_m2705446293_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t4104252033_m2705446293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t4104252033  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t4104252033 *)(&V_0));
		KeyValuePair_2_t4104252033  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo>>(System.Int32)
extern "C"  KeyValuePair_2_t802353652  Array_InternalArray__get_Item_TisKeyValuePair_2_t802353652_m1153399958_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t802353652_m1153399958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t802353652  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t802353652 *)(&V_0));
		KeyValuePair_2_t802353652  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status>>(System.Int32)
extern "C"  KeyValuePair_2_t1426870497  Array_InternalArray__get_Item_TisKeyValuePair_2_t1426870497_m294520438_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyValuePair_2_t1426870497_m294520438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t1426870497  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (KeyValuePair_2_t1426870497 *)(&V_0));
		KeyValuePair_2_t1426870497  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Generic.Link>(System.Int32)
extern "C"  Link_t1380722063  Array_InternalArray__get_Item_TisLink_t1380722063_m1876551420_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLink_t1380722063_m1876551420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Link_t1380722063  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Link_t1380722063 *)(&V_0));
		Link_t1380722063  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C"  Slot_t2808671665  Array_InternalArray__get_Item_TisSlot_t2808671665_m1067784123_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSlot_t2808671665_m1067784123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Slot_t2808671665  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Slot_t2808671665 *)(&V_0));
		Slot_t2808671665  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern "C"  Slot_t805531009  Array_InternalArray__get_Item_TisSlot_t805531009_m1070619915_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSlot_t805531009_m1070619915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Slot_t805531009  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Slot_t805531009 *)(&V_0));
		Slot_t805531009  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern "C"  DateTime_t2990056487  Array_InternalArray__get_Item_TisDateTime_t2990056487_m1264033375_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDateTime_t2990056487_m1264033375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t2990056487  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (DateTime_t2990056487 *)(&V_0));
		DateTime_t2990056487  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C"  Decimal_t866196536  Array_InternalArray__get_Item_TisDecimal_t866196536_m4078342968_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDecimal_t866196536_m4078342968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_t866196536  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Decimal_t866196536 *)(&V_0));
		Decimal_t866196536  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Double>(System.Int32)
extern "C"  double Array_InternalArray__get_Item_TisDouble_t1605119752_m204322806_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisDouble_t1605119752_m204322806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (double*)(&V_0));
		double L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C"  int16_t Array_InternalArray__get_Item_TisInt16_t3782280871_m1925620326_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt16_t3782280871_m1925620326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int16_t*)(&V_0));
		int16_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisInt32_t429044550_m3397852278_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt32_t429044550_m3397852278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C"  int64_t Array_InternalArray__get_Item_TisInt64_t2997302630_m346677405_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt64_t2997302630_m346677405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int64_t*)(&V_0));
		int64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
extern "C"  intptr_t Array_InternalArray__get_Item_TisIntPtr_t_m976077355_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisIntPtr_t_m976077355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (intptr_t*)(&V_0));
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C"  RuntimeObject * Array_InternalArray__get_Item_TisRuntimeObject_m1148557238_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRuntimeObject_m1148557238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RuntimeObject **)(&V_0));
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.CustomAttributeNamedArgument>(System.Int32)
extern "C"  CustomAttributeNamedArgument_t1201780503  Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t1201780503_m1112099862_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t1201780503_m1112099862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeNamedArgument_t1201780503  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CustomAttributeNamedArgument_t1201780503 *)(&V_0));
		CustomAttributeNamedArgument_t1201780503  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.CustomAttributeTypedArgument>(System.Int32)
extern "C"  CustomAttributeTypedArgument_t673001010  Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t673001010_m1999453746_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t673001010_m1999453746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeTypedArgument_t673001010  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CustomAttributeTypedArgument_t673001010 *)(&V_0));
		CustomAttributeTypedArgument_t673001010  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelData>(System.Int32)
extern "C"  LabelData_t3107547367  Array_InternalArray__get_Item_TisLabelData_t3107547367_m81226492_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLabelData_t3107547367_m81226492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelData_t3107547367  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LabelData_t3107547367 *)(&V_0));
		LabelData_t3107547367  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32)
extern "C"  LabelFixup_t3610165990  Array_InternalArray__get_Item_TisLabelFixup_t3610165990_m3712708821_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLabelFixup_t3610165990_m3712708821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LabelFixup_t3610165990  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LabelFixup_t3610165990 *)(&V_0));
		LabelFixup_t3610165990  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.ILTokenInfo>(System.Int32)
extern "C"  ILTokenInfo_t3238837779  Array_InternalArray__get_Item_TisILTokenInfo_t3238837779_m1837069656_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisILTokenInfo_t3238837779_m1837069656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ILTokenInfo_t3238837779  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ILTokenInfo_t3238837779 *)(&V_0));
		ILTokenInfo_t3238837779  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.MonoResource>(System.Int32)
extern "C"  MonoResource_t2631437455  Array_InternalArray__get_Item_TisMonoResource_t2631437455_m3836473109_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMonoResource_t2631437455_m3836473109_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoResource_t2631437455  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (MonoResource_t2631437455 *)(&V_0));
		MonoResource_t2631437455  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.MonoWin32Resource>(System.Int32)
extern "C"  MonoWin32Resource_t1721736841  Array_InternalArray__get_Item_TisMonoWin32Resource_t1721736841_m2993525226_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMonoWin32Resource_t1721736841_m2993525226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoWin32Resource_t1721736841  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (MonoWin32Resource_t1721736841 *)(&V_0));
		MonoWin32Resource_t1721736841  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.Emit.RefEmitPermissionSet>(System.Int32)
extern "C"  RefEmitPermissionSet_t1143243366  Array_InternalArray__get_Item_TisRefEmitPermissionSet_t1143243366_m2065246997_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRefEmitPermissionSet_t1143243366_m2065246997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RefEmitPermissionSet_t1143243366  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RefEmitPermissionSet_t1143243366 *)(&V_0));
		RefEmitPermissionSet_t1143243366  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
extern "C"  ParameterModifier_t1164491217  Array_InternalArray__get_Item_TisParameterModifier_t1164491217_m3326085350_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisParameterModifier_t1164491217_m3326085350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParameterModifier_t1164491217  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ParameterModifier_t1164491217 *)(&V_0));
		ParameterModifier_t1164491217  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Resources.ResourceReader/ResourceCacheItem>(System.Int32)
extern "C"  ResourceCacheItem_t1984850726  Array_InternalArray__get_Item_TisResourceCacheItem_t1984850726_m3685593871_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisResourceCacheItem_t1984850726_m3685593871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceCacheItem_t1984850726  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ResourceCacheItem_t1984850726 *)(&V_0));
		ResourceCacheItem_t1984850726  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Resources.ResourceReader/ResourceInfo>(System.Int32)
extern "C"  ResourceInfo_t3877563693  Array_InternalArray__get_Item_TisResourceInfo_t3877563693_m2933229997_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisResourceInfo_t3877563693_m2933229997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceInfo_t3877563693  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ResourceInfo_t3877563693 *)(&V_0));
		ResourceInfo_t3877563693  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
extern "C"  uint8_t Array_InternalArray__get_Item_TisTypeTag_t3297045175_m4117703508_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTypeTag_t3297045175_m4117703508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint8_t*)(&V_0));
		uint8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C"  int8_t Array_InternalArray__get_Item_TisSByte_t1702684558_m845136473_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSByte_t1702684558_m845136473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int8_t*)(&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern "C"  X509ChainStatus_t1152496960  Array_InternalArray__get_Item_TisX509ChainStatus_t1152496960_m3690775118_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisX509ChainStatus_t1152496960_m3690775118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509ChainStatus_t1152496960  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (X509ChainStatus_t1152496960 *)(&V_0));
		X509ChainStatus_t1152496960  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C"  float Array_InternalArray__get_Item_TisSingle_t3230175740_m1302974041_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSingle_t3230175740_m1302974041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (float*)(&V_0));
		float L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
extern "C"  Mark_t787909737  Array_InternalArray__get_Item_TisMark_t787909737_m1351424234_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMark_t787909737_m1351424234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mark_t787909737  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Mark_t787909737 *)(&V_0));
		Mark_t787909737  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C"  TimeSpan_t4098384374  Array_InternalArray__get_Item_TisTimeSpan_t4098384374_m1964816881_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTimeSpan_t4098384374_m1964816881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4098384374  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TimeSpan_t4098384374 *)(&V_0));
		TimeSpan_t4098384374  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
extern "C"  uint16_t Array_InternalArray__get_Item_TisUInt16_t1084337315_m2209951975_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt16_t1084337315_m2209951975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint16_t*)(&V_0));
		uint16_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C"  uint32_t Array_InternalArray__get_Item_TisUInt32_t2976429035_m3700413547_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt32_t2976429035_m3700413547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint32_t*)(&V_0));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C"  uint64_t Array_InternalArray__get_Item_TisUInt64_t463920001_m2439260778_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt64_t463920001_m2439260778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint64_t*)(&V_0));
		uint64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
extern "C"  UriScheme_t3736221848  Array_InternalArray__get_Item_TisUriScheme_t3736221848_m3108568851_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUriScheme_t3736221848_m3108568851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UriScheme_t3736221848  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UriScheme_t3736221848 *)(&V_0));
		UriScheme_t3736221848  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Int32)
extern "C"  OrderBlock_t3803826114  Array_InternalArray__get_Item_TisOrderBlock_t3803826114_m3460467060_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisOrderBlock_t3803826114_m3460467060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrderBlock_t3803826114  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (OrderBlock_t3803826114 *)(&V_0));
		OrderBlock_t3803826114  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Camera/StereoscopicEye>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisStereoscopicEye_t2822263950_m1470389220_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisStereoscopicEye_t2822263950_m1470389220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Color>(System.Int32)
extern "C"  Color_t3771351350  Array_InternalArray__get_Item_TisColor_t3771351350_m1809124365_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisColor_t3771351350_m1809124365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t3771351350  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Color_t3771351350 *)(&V_0));
		Color_t3771351350  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
extern "C"  Color32_t1997556809  Array_InternalArray__get_Item_TisColor32_t1997556809_m3371957856_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisColor32_t1997556809_m3371957856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t1997556809  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Color32_t1997556809 *)(&V_0));
		Color32_t1997556809  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.ContactPoint>(System.Int32)
extern "C"  ContactPoint_t2013396152  Array_InternalArray__get_Item_TisContactPoint_t2013396152_m1831696552_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisContactPoint_t2013396152_m1831696552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContactPoint_t2013396152  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ContactPoint_t2013396152 *)(&V_0));
		ContactPoint_t2013396152  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern "C"  RaycastResult_t2879055399  Array_InternalArray__get_Item_TisRaycastResult_t2879055399_m3628753582_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastResult_t2879055399_m3628753582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastResult_t2879055399  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastResult_t2879055399 *)(&V_0));
		RaycastResult_t2879055399  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.KeyCode>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisKeyCode_t1099970917_m1140541577_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyCode_t1099970917_m1140541577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C"  Keyframe_t2561096767  Array_InternalArray__get_Item_TisKeyframe_t2561096767_m2166551925_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyframe_t2561096767_m2166551925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Keyframe_t2561096767  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Keyframe_t2561096767 *)(&V_0));
		Keyframe_t2561096767  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Matrix4x4>(System.Int32)
extern "C"  Matrix4x4_t54425537  Array_InternalArray__get_Item_TisMatrix4x4_t54425537_m2503468294_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMatrix4x4_t54425537_m2503468294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t54425537  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Matrix4x4_t54425537 *)(&V_0));
		Matrix4x4_t54425537  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Plane>(System.Int32)
extern "C"  Plane_t3144685315  Array_InternalArray__get_Item_TisPlane_t3144685315_m488472757_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlane_t3144685315_m488472757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Plane_t3144685315  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Plane_t3144685315 *)(&V_0));
		Plane_t3144685315  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Playables.PlayableBinding>(System.Int32)
extern "C"  PlayableBinding_t3516061699  Array_InternalArray__get_Item_TisPlayableBinding_t3516061699_m2919646010_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlayableBinding_t3516061699_m2919646010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_t3516061699  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PlayableBinding_t3516061699 *)(&V_0));
		PlayableBinding_t3516061699  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C"  RaycastHit_t1885117142  Array_InternalArray__get_Item_TisRaycastHit_t1885117142_m2017969824_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastHit_t1885117142_m2017969824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t1885117142  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastHit_t1885117142 *)(&V_0));
		RaycastHit_t1885117142  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
extern "C"  RaycastHit2D_t1067259948  Array_InternalArray__get_Item_TisRaycastHit2D_t1067259948_m3249197216_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastHit2D_t1067259948_m3249197216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t1067259948  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastHit2D_t1067259948 *)(&V_0));
		RaycastHit2D_t1067259948  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C"  HitInfo_t4034309653  Array_InternalArray__get_Item_TisHitInfo_t4034309653_m2518056344_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisHitInfo_t4034309653_m2518056344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitInfo_t4034309653  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (HitInfo_t4034309653 *)(&V_0));
		HitInfo_t4034309653  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
extern "C"  GcAchievementData_t731726700  Array_InternalArray__get_Item_TisGcAchievementData_t731726700_m3863389435_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisGcAchievementData_t731726700_m3863389435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GcAchievementData_t731726700  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (GcAchievementData_t731726700 *)(&V_0));
		GcAchievementData_t731726700  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
extern "C"  GcScoreData_t3204758376  Array_InternalArray__get_Item_TisGcScoreData_t3204758376_m806189058_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisGcScoreData_t3204758376_m806189058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GcScoreData_t3204758376  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (GcScoreData_t3204758376 *)(&V_0));
		GcScoreData_t3204758376  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisContentType_t2329426451_m3707948536_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisContentType_t2329426451_m3707948536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
extern "C"  UICharInfo_t827563704  Array_InternalArray__get_Item_TisUICharInfo_t827563704_m1044872801_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUICharInfo_t827563704_m1044872801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UICharInfo_t827563704  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UICharInfo_t827563704 *)(&V_0));
		UICharInfo_t827563704  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
extern "C"  UILineInfo_t4129899474  Array_InternalArray__get_Item_TisUILineInfo_t4129899474_m769181869_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUILineInfo_t4129899474_m769181869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UILineInfo_t4129899474  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UILineInfo_t4129899474 *)(&V_0));
		UILineInfo_t4129899474  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UIVertex>(System.Int32)
extern "C"  UIVertex_t3143686990  Array_InternalArray__get_Item_TisUIVertex_t3143686990_m1180698789_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUIVertex_t3143686990_m1180698789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UIVertex_t3143686990  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UIVertex_t3143686990 *)(&V_0));
		UIVertex_t3143686990  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Int32)
extern "C"  WorkRequest_t318910794  Array_InternalArray__get_Item_TisWorkRequest_t318910794_m705981031_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWorkRequest_t318910794_m705981031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorkRequest_t318910794  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WorkRequest_t318910794 *)(&V_0));
		WorkRequest_t318910794  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
extern "C"  Vector2_t3629302141  Array_InternalArray__get_Item_TisVector2_t3629302141_m1155245713_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVector2_t3629302141_m1155245713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t3629302141  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector2_t3629302141 *)(&V_0));
		Vector2_t3629302141  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C"  Vector3_t539014097  Array_InternalArray__get_Item_TisVector3_t539014097_m3640708796_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVector3_t539014097_m3640708796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t539014097  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector3_t539014097 *)(&V_0));
		Vector3_t539014097  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Vector4>(System.Int32)
extern "C"  Vector4_t3197448751  Array_InternalArray__get_Item_TisVector4_t3197448751_m2842109182_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVector4_t3197448751_m2842109182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t3197448751  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector4_t3197448751 *)(&V_0));
		Vector4_t3197448751  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.WebCamDevice>(System.Int32)
extern "C"  WebCamDevice_t912479223  Array_InternalArray__get_Item_TisWebCamDevice_t912479223_m1646682330_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWebCamDevice_t912479223_m1646682330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDevice_t912479223  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WebCamDevice_t912479223 *)(&V_0));
		WebCamDevice_t912479223  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.CameraDevice/CameraField>(System.Int32)
extern "C"  CameraField_t271511659  Array_InternalArray__get_Item_TisCameraField_t271511659_m3425697528_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCameraField_t271511659_m3425697528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraField_t271511659  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CameraField_t271511659 *)(&V_0));
		CameraField_t271511659  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.EyewearDevice/EyewearCalibrationReading>(System.Int32)
extern "C"  EyewearCalibrationReading_t3949217182  Array_InternalArray__get_Item_TisEyewearCalibrationReading_t3949217182_m392211842_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisEyewearCalibrationReading_t3949217182_m392211842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EyewearCalibrationReading_t3949217182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (EyewearCalibrationReading_t3949217182 *)(&V_0));
		EyewearCalibrationReading_t3949217182  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData>(System.Int32)
extern "C"  EyewearCalibrationReadingData_t3046382575  Array_InternalArray__get_Item_TisEyewearCalibrationReadingData_t3046382575_m1695331527_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisEyewearCalibrationReadingData_t3046382575_m1695331527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EyewearCalibrationReadingData_t3046382575  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (EyewearCalibrationReadingData_t3046382575 *)(&V_0));
		EyewearCalibrationReadingData_t3046382575  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.HitTestResult>(System.Int32)
extern "C"  HitTestResult_t3843505021  Array_InternalArray__get_Item_TisHitTestResult_t3843505021_m1894045173_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisHitTestResult_t3843505021_m1894045173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitTestResult_t3843505021  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (HitTestResult_t3843505021 *)(&V_0));
		HitTestResult_t3843505021  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>(System.Int32)
extern "C"  PoseAgeEntry_t1970234155  Array_InternalArray__get_Item_TisPoseAgeEntry_t1970234155_m3887002138_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPoseAgeEntry_t1970234155_m3887002138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseAgeEntry_t1970234155  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PoseAgeEntry_t1970234155 *)(&V_0));
		PoseAgeEntry_t1970234155  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.HoloLensExtendedTrackingManager/PoseInfo>(System.Int32)
extern "C"  PoseInfo_t2963303070  Array_InternalArray__get_Item_TisPoseInfo_t2963303070_m111029812_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPoseInfo_t2963303070_m111029812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseInfo_t2963303070  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PoseInfo_t2963303070 *)(&V_0));
		PoseInfo_t2963303070  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.Image/PIXEL_FORMAT>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisPIXEL_FORMAT_t4209117376_m3676200779_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPIXEL_FORMAT_t4209117376_m3676200779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.RectangleData>(System.Int32)
extern "C"  RectangleData_t3025935980  Array_InternalArray__get_Item_TisRectangleData_t3025935980_m2659197231_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRectangleData_t3025935980_m2659197231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectangleData_t3025935980  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RectangleData_t3025935980 *)(&V_0));
		RectangleData_t3025935980  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TargetFinder/TargetSearchResult>(System.Int32)
extern "C"  TargetSearchResult_t1008654619  Array_InternalArray__get_Item_TisTargetSearchResult_t1008654619_m4264280969_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTargetSearchResult_t1008654619_m4264280969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetSearchResult_t1008654619  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TargetSearchResult_t1008654619 *)(&V_0));
		TargetSearchResult_t1008654619  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackableBehaviour/Status>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisStatus_t3587819915_m1561782963_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisStatus_t3587819915_m1561782963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/TrackableResultData>(System.Int32)
extern "C"  TrackableResultData_t797872706  Array_InternalArray__get_Item_TisTrackableResultData_t797872706_m3492022128_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTrackableResultData_t797872706_m3492022128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableResultData_t797872706  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TrackableResultData_t797872706 *)(&V_0));
		TrackableResultData_t797872706  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/VirtualButtonData>(System.Int32)
extern "C"  VirtualButtonData_t3003950808  Array_InternalArray__get_Item_TisVirtualButtonData_t3003950808_m1413965531_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVirtualButtonData_t3003950808_m1413965531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualButtonData_t3003950808  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (VirtualButtonData_t3003950808 *)(&V_0));
		VirtualButtonData_t3003950808  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/VuMarkTargetData>(System.Int32)
extern "C"  VuMarkTargetData_t1911035625  Array_InternalArray__get_Item_TisVuMarkTargetData_t1911035625_m1629900689_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVuMarkTargetData_t1911035625_m1629900689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuMarkTargetData_t1911035625  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (VuMarkTargetData_t1911035625 *)(&V_0));
		VuMarkTargetData_t1911035625  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/VuMarkTargetResultData>(System.Int32)
extern "C"  VuMarkTargetResultData_t2972352786  Array_InternalArray__get_Item_TisVuMarkTargetResultData_t2972352786_m913906298_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVuMarkTargetResultData_t2972352786_m913906298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuMarkTargetResultData_t2972352786  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (VuMarkTargetResultData_t2972352786 *)(&V_0));
		VuMarkTargetResultData_t2972352786  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/WordData>(System.Int32)
extern "C"  WordData_t1526873780  Array_InternalArray__get_Item_TisWordData_t1526873780_m3282924196_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWordData_t1526873780_m3282924196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WordData_t1526873780  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WordData_t1526873780 *)(&V_0));
		WordData_t1526873780  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/WordResultData>(System.Int32)
extern "C"  WordResultData_t4259303705  Array_InternalArray__get_Item_TisWordResultData_t4259303705_m1436942317_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWordResultData_t4259303705_m1436942317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WordResultData_t4259303705  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WordResultData_t4259303705 *)(&V_0));
		WordResultData_t4259303705  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.VuforiaManager/TrackableIdPair>(System.Int32)
extern "C"  TrackableIdPair_t442626438  Array_InternalArray__get_Item_TisTrackableIdPair_t442626438_m473523979_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTrackableIdPair_t442626438_m473523979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableIdPair_t442626438  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TrackableIdPair_t442626438 *)(&V_0));
		TrackableIdPair_t442626438  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.WebCamProfile/ProfileData>(System.Int32)
extern "C"  ProfileData_t2672016674  Array_InternalArray__get_Item_TisProfileData_t2672016674_m3663182206_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisProfileData_t2672016674_m3663182206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfileData_t2672016674  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m262127130((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t374686966 * L_2 = (ArgumentOutOfRangeException_t374686966 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t374686966_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3555353117(L_2, (String_t*)_stringLiteral468396955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ProfileData_t2672016674 *)(&V_0));
		ProfileData_t2672016674  L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
extern "C"  RuntimeObject * AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m3366749962_gshared (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m3366749962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ObjectU5BU5D_t3878505910* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		Type_t * L_2 = ___klass0;
		Type_t * L_3 = V_0;
		NullCheck((MemberInfo_t *)L_2);
		ObjectU5BU5D_t3878505910* L_4 = VirtFuncInvoker2< ObjectU5BU5D_t3878505910*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, (MemberInfo_t *)L_2, (Type_t *)L_3, (bool)1);
		V_1 = (ObjectU5BU5D_t3878505910*)L_4;
		ObjectU5BU5D_t3878505910* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t3878505910* L_6 = V_1;
		NullCheck(L_6);
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t3878505910* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		RuntimeObject * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_0031:
	{
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_003d:
	{
		RuntimeObject * L_10 = V_2;
		return L_10;
	}
}
// T UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m974730735_gshared (Component_t4119265833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponent_TisRuntimeObject_m974730735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t4134268794  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t4134268794 ));
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3084759330((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((Component_t4119265833 *)__this);
		Component_GetComponentFastPath_m3042294384((Component_t4119265833 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m746202867_gshared (Component_t4119265833 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (bool)0;
		bool L_0 = V_0;
		NullCheck((Component_t4119265833 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (Component_t4119265833 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t4119265833 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_1;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject * L_2 = V_1;
		return L_2;
	}
}
// T UnityEngine.Component::GetComponentInChildren<System.Object>(System.Boolean)
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m499299308_gshared (Component_t4119265833 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponentInChildren_TisRuntimeObject_m499299308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((Component_t4119265833 *)__this);
		Component_t4119265833 * L_3 = Component_GetComponentInChildren_m1621259372((Component_t4119265833 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001d;
	}

IL_001d:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m4209580115_gshared (Component_t4119265833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponentInParent_TisRuntimeObject_m4209580115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		NullCheck((Component_t4119265833 *)__this);
		Component_t4119265833 * L_2 = Component_GetComponentInParent_m3935004874((Component_t4119265833 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
extern "C"  RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m3139588547_gshared (RuntimeObject * __this /* static, unused */, BaseEventData_t2100590868 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ValidateEventData_TisRuntimeObject_m3139588547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		BaseEventData_t2100590868 * L_0 = ___data0;
		if (((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003b;
		}
	}
	{
		BaseEventData_t2100590868 * L_1 = ___data0;
		NullCheck((RuntimeObject *)L_1);
		Type_t * L_2 = Object_GetType_m2494190660((RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m3999857780(NULL /*static, unused*/, (String_t*)_stringLiteral3081243441, (RuntimeObject *)L_2, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t3402785744 * L_6 = (ArgumentException_t3402785744 *)il2cpp_codegen_object_new(ArgumentException_t3402785744_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m947310639(L_6, (String_t*)L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_003b:
	{
		BaseEventData_t2100590868 * L_7 = ___data0;
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0051;
	}

IL_0051:
	{
		RuntimeObject * L_8 = V_0;
		return L_8;
	}
}
// T UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m4062951046_gshared (GameObject_t2527051794 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_AddComponent_TisRuntimeObject_m4062951046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_t2527051794 *)__this);
		Component_t4119265833 * L_2 = GameObject_AddComponent_m247271770((GameObject_t2527051794 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m562267284_gshared (GameObject_t2527051794 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponent_TisRuntimeObject_m562267284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t4134268794  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t4134268794 ));
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3084759330((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t2527051794 *)__this);
		GameObject_GetComponentFastPath_m472238912((GameObject_t2527051794 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m3829608536_gshared (GameObject_t2527051794 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (bool)0;
		bool L_0 = V_0;
		NullCheck((GameObject_t2527051794 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (GameObject_t2527051794 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t2527051794 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_1;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject * L_2 = V_1;
		return L_2;
	}
}
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>(System.Boolean)
extern "C"  RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m2631809923_gshared (GameObject_t2527051794 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentInChildren_TisRuntimeObject_m2631809923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_t2527051794 *)__this);
		Component_t4119265833 * L_3 = GameObject_GetComponentInChildren_m1774229267((GameObject_t2527051794 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001d;
	}

IL_001d:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m3025884939_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectOfType_TisRuntimeObject_m3025884939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		Object_t948050745 * L_2 = Object_FindObjectOfType_m3392178620(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m3779270280_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___original0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Instantiate_TisRuntimeObject_m3779270280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m763707694(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)_stringLiteral921515441, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___original0;
		Object_t948050745 * L_2 = Object_Internal_CloneSingle_m1771926037(NULL /*static, unused*/, (Object_t948050745 *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m2948050090_gshared (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Resources_GetBuiltinResource_TisRuntimeObject_m2948050090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		Object_t948050745 * L_3 = Resources_GetBuiltinResource_m759496169(NULL /*static, unused*/, (Type_t *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Resources::Load<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_Load_TisRuntimeObject_m2690302918_gshared (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Resources_Load_TisRuntimeObject_m2690302918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		RuntimeTypeHandle_t1636756630  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_1, /*hidden argument*/NULL);
		Object_t948050745 * L_3 = Resources_Load_m503586881(NULL /*static, unused*/, (String_t*)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C"  RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m3784910767_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject_CreateInstance_TisRuntimeObject_m3784910767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t1496462445 * L_2 = ScriptableObject_CreateInstance_m3085131(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.UI.Dropdown::GetOrAddComponent<System.Object>(UnityEngine.GameObject)
extern "C"  RuntimeObject * Dropdown_GetOrAddComponent_TisRuntimeObject_m1273119483_gshared (RuntimeObject * __this /* static, unused */, GameObject_t2527051794 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dropdown_GetOrAddComponent_TisRuntimeObject_m1273119483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		GameObject_t2527051794 * L_0 = ___go0;
		NullCheck((GameObject_t2527051794 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (GameObject_t2527051794 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t2527051794 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m2719092554(NULL /*static, unused*/, (Object_t948050745 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t2527051794 * L_4 = ___go0;
		NullCheck((GameObject_t2527051794 *)L_4);
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (GameObject_t2527051794 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((GameObject_t2527051794 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_5;
	}

IL_001f:
	{
		RuntimeObject * L_6 = V_0;
		V_1 = (RuntimeObject *)L_6;
		goto IL_0026;
	}

IL_0026:
	{
		RuntimeObject * L_7 = V_1;
		return L_7;
	}
}
// T Vuforia.TrackerManager::GetTracker<System.Object>()
extern "C"  RuntimeObject * TrackerManager_GetTracker_TisRuntimeObject_m878445311_gshared (TrackerManager_t1260673176 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackerManager_GetTracker_TisRuntimeObject_m878445311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_2 = { reinterpret_cast<intptr_t> (ObjectTracker_t1446540767_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_2, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		ObjectTracker_t1446540767 * L_4 = (ObjectTracker_t1446540767 *)__this->get_mObjectTracker_1();
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_0027:
	{
		RuntimeTypeHandle_t1636756630  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_5, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_7 = { reinterpret_cast<intptr_t> (TextTracker_t2690848417_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_7, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))))
		{
			goto IL_004e;
		}
	}
	{
		TextTracker_t2690848417 * L_9 = (TextTracker_t2690848417 *)__this->get_mTextTracker_2();
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_004e:
	{
		RuntimeTypeHandle_t1636756630  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_10, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_12 = { reinterpret_cast<intptr_t> (DeviceTracker_t1565609596_0_0_0_var) };
		Type_t * L_13 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_12, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_11) == ((RuntimeObject*)(Type_t *)L_13))))
		{
			goto IL_0075;
		}
	}
	{
		DeviceTracker_t1565609596 * L_14 = (DeviceTracker_t1565609596 *)__this->get_mDeviceTracker_3();
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_0075:
	{
		RuntimeTypeHandle_t1636756630  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_15, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_17 = { reinterpret_cast<intptr_t> (RotationalDeviceTracker_t176767220_0_0_0_var) };
		Type_t * L_18 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_17, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_16) == ((RuntimeObject*)(Type_t *)L_18))))
		{
			goto IL_009c;
		}
	}
	{
		DeviceTracker_t1565609596 * L_19 = (DeviceTracker_t1565609596 *)__this->get_mDeviceTracker_3();
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_009c:
	{
		RuntimeTypeHandle_t1636756630  L_20 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_20, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_22 = { reinterpret_cast<intptr_t> (PositionalDeviceTracker_t1369874775_0_0_0_var) };
		Type_t * L_23 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_22, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_21) == ((RuntimeObject*)(Type_t *)L_23))))
		{
			goto IL_00c3;
		}
	}
	{
		DeviceTracker_t1565609596 * L_24 = (DeviceTracker_t1565609596 *)__this->get_mDeviceTracker_3();
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_00c3:
	{
		RuntimeTypeHandle_t1636756630  L_25 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_25, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_27 = { reinterpret_cast<intptr_t> (SmartTerrain_t2953426174_0_0_0_var) };
		Type_t * L_28 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_27, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_26) == ((RuntimeObject*)(Type_t *)L_28))))
		{
			goto IL_00ea;
		}
	}
	{
		SmartTerrain_t2953426174 * L_29 = (SmartTerrain_t2953426174 *)__this->get_mSmartTerrain_4();
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_00ea:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_LogError_m4066981595(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral3201951652, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_30 = V_0;
		return L_30;
	}
}
// T Vuforia.TrackerManager::InitTracker<System.Object>()
extern "C"  RuntimeObject * TrackerManager_InitTracker_TisRuntimeObject_m321849864_gshared (TrackerManager_t1260673176 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackerManager_InitTracker_TisRuntimeObject_m321849864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	SmartTerrain_t2953426174 * G_B35_0 = NULL;
	SmartTerrain_t2953426174 * G_B34_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t2319877877_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m4138539183(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_1;
		return L_1;
	}

IL_0011:
	{
		V_0 = (bool)1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t2319877877_il2cpp_TypeInfo_var);
		bool L_2 = VuforiaRuntimeUtilities_IsPlayMode_m2748365108(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeTypeHandle_t1636756630  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_5 = { reinterpret_cast<intptr_t> (DeviceTracker_t1565609596_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_5, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_6)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeTypeHandle_t1636756630  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_7, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_9 = { reinterpret_cast<intptr_t> (RotationalDeviceTracker_t176767220_0_0_0_var) };
		Type_t * L_10 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_9, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(Type_t *)L_10)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeTypeHandle_t1636756630  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_13 = { reinterpret_cast<intptr_t> (PositionalDeviceTracker_t1369874775_0_0_0_var) };
		Type_t * L_14 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_13, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))))
		{
			goto IL_005e;
		}
	}

IL_005c:
	{
		V_0 = (bool)0;
	}

IL_005e:
	{
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_0090;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t948680923_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = VuforiaWrapper_get_Instance_m3586248507(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeMapping_t3756135786_il2cpp_TypeInfo_var);
		uint16_t L_19 = TypeMapping_GetTypeID_m1691908004(NULL /*static, unused*/, (Type_t *)L_18, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_16);
		int32_t L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(198 /* System.Int32 Vuforia.IVuforiaWrapper::TrackerManagerInitTracker(System.Int32) */, IVuforiaWrapper_t3261428072_il2cpp_TypeInfo_var, (RuntimeObject*)L_16, (int32_t)L_19);
		if (L_20)
		{
			goto IL_0090;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_LogError_m4066981595(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral1010426667, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_21 = V_1;
		return L_21;
	}

IL_0090:
	{
		RuntimeTypeHandle_t1636756630  L_22 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_22, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_24 = { reinterpret_cast<intptr_t> (ObjectTracker_t1446540767_0_0_0_var) };
		Type_t * L_25 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_24, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_23) == ((RuntimeObject*)(Type_t *)L_25))))
		{
			goto IL_00ca;
		}
	}
	{
		ObjectTracker_t1446540767 * L_26 = (ObjectTracker_t1446540767 *)__this->get_mObjectTracker_1();
		if (L_26)
		{
			goto IL_00b9;
		}
	}
	{
		ObjectTracker_t1446540767 * L_27 = (ObjectTracker_t1446540767 *)il2cpp_codegen_object_new(ObjectTracker_t1446540767_il2cpp_TypeInfo_var);
		ObjectTracker__ctor_m1118821862(L_27, /*hidden argument*/NULL);
		__this->set_mObjectTracker_1(L_27);
	}

IL_00b9:
	{
		ObjectTracker_t1446540767 * L_28 = (ObjectTracker_t1446540767 *)__this->get_mObjectTracker_1();
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_28, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_00ca:
	{
		RuntimeTypeHandle_t1636756630  L_29 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_29, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_31 = { reinterpret_cast<intptr_t> (TextTracker_t2690848417_0_0_0_var) };
		Type_t * L_32 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_31, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))))
		{
			goto IL_0104;
		}
	}
	{
		TextTracker_t2690848417 * L_33 = (TextTracker_t2690848417 *)__this->get_mTextTracker_2();
		if (L_33)
		{
			goto IL_00f3;
		}
	}
	{
		TextTracker_t2690848417 * L_34 = (TextTracker_t2690848417 *)il2cpp_codegen_object_new(TextTracker_t2690848417_il2cpp_TypeInfo_var);
		TextTracker__ctor_m100491096(L_34, /*hidden argument*/NULL);
		__this->set_mTextTracker_2(L_34);
	}

IL_00f3:
	{
		TextTracker_t2690848417 * L_35 = (TextTracker_t2690848417 *)__this->get_mTextTracker_2();
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_0104:
	{
		RuntimeTypeHandle_t1636756630  L_36 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_36, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_38 = { reinterpret_cast<intptr_t> (DeviceTracker_t1565609596_0_0_0_var) };
		Type_t * L_39 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_38, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_37) == ((RuntimeObject*)(Type_t *)L_39)))
		{
			goto IL_0149;
		}
	}
	{
		RuntimeTypeHandle_t1636756630  L_40 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_40, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_42 = { reinterpret_cast<intptr_t> (RotationalDeviceTracker_t176767220_0_0_0_var) };
		Type_t * L_43 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_42, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_41) == ((RuntimeObject*)(Type_t *)L_43)))
		{
			goto IL_0149;
		}
	}
	{
		RuntimeTypeHandle_t1636756630  L_44 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_44, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_46 = { reinterpret_cast<intptr_t> (PositionalDeviceTracker_t1369874775_0_0_0_var) };
		Type_t * L_47 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_46, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_45) == ((RuntimeObject*)(Type_t *)L_47))))
		{
			goto IL_01e7;
		}
	}

IL_0149:
	{
		DeviceTracker_t1565609596 * L_48 = (DeviceTracker_t1565609596 *)__this->get_mDeviceTracker_3();
		if (L_48)
		{
			goto IL_01d6;
		}
	}
	{
		RuntimeTypeHandle_t1636756630  L_49 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_49, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_51 = { reinterpret_cast<intptr_t> (RotationalDeviceTracker_t176767220_0_0_0_var) };
		Type_t * L_52 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_51, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_50) == ((RuntimeObject*)(Type_t *)L_52))))
		{
			goto IL_018b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t2319877877_il2cpp_TypeInfo_var);
		bool L_53 = VuforiaRuntimeUtilities_IsPlayMode_m2748365108(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_017e;
		}
	}
	{
		RotationalPlayModeDeviceTrackerImpl_t2439620320 * L_54 = (RotationalPlayModeDeviceTrackerImpl_t2439620320 *)il2cpp_codegen_object_new(RotationalPlayModeDeviceTrackerImpl_t2439620320_il2cpp_TypeInfo_var);
		RotationalPlayModeDeviceTrackerImpl__ctor_m3158388311(L_54, /*hidden argument*/NULL);
		__this->set_mDeviceTracker_3(L_54);
		goto IL_01d6;
	}

IL_017e:
	{
		RotationalDeviceTrackerImpl_t1298403232 * L_55 = (RotationalDeviceTrackerImpl_t1298403232 *)il2cpp_codegen_object_new(RotationalDeviceTrackerImpl_t1298403232_il2cpp_TypeInfo_var);
		RotationalDeviceTrackerImpl__ctor_m3454290145(L_55, /*hidden argument*/NULL);
		__this->set_mDeviceTracker_3(L_55);
		goto IL_01d6;
	}

IL_018b:
	{
		RuntimeTypeHandle_t1636756630  L_56 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_57 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_56, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_58 = { reinterpret_cast<intptr_t> (PositionalDeviceTracker_t1369874775_0_0_0_var) };
		Type_t * L_59 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_58, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_57) == ((RuntimeObject*)(Type_t *)L_59))))
		{
			goto IL_01c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t2319877877_il2cpp_TypeInfo_var);
		bool L_60 = VuforiaRuntimeUtilities_IsPlayMode_m2748365108(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_01b5;
		}
	}
	{
		PositionalPlayModeDeviceTrackerImpl_t161249787 * L_61 = (PositionalPlayModeDeviceTrackerImpl_t161249787 *)il2cpp_codegen_object_new(PositionalPlayModeDeviceTrackerImpl_t161249787_il2cpp_TypeInfo_var);
		PositionalPlayModeDeviceTrackerImpl__ctor_m999051538(L_61, /*hidden argument*/NULL);
		__this->set_mDeviceTracker_3(L_61);
		goto IL_01d6;
	}

IL_01b5:
	{
		PositionalDeviceTrackerImpl_t3377804943 * L_62 = (PositionalDeviceTrackerImpl_t3377804943 *)il2cpp_codegen_object_new(PositionalDeviceTrackerImpl_t3377804943_il2cpp_TypeInfo_var);
		PositionalDeviceTrackerImpl__ctor_m305178048(L_62, /*hidden argument*/NULL);
		__this->set_mDeviceTracker_3(L_62);
		goto IL_01d6;
	}

IL_01c2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_LogError_m4066981595(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral2556544186, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_63 = V_1;
		return L_63;
	}

IL_01d6:
	{
		DeviceTracker_t1565609596 * L_64 = (DeviceTracker_t1565609596 *)__this->get_mDeviceTracker_3();
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_64, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_01e7:
	{
		RuntimeTypeHandle_t1636756630  L_65 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_65, /*hidden argument*/NULL);
		RuntimeTypeHandle_t1636756630  L_67 = { reinterpret_cast<intptr_t> (SmartTerrain_t2953426174_0_0_0_var) };
		Type_t * L_68 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_67, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_66) == ((RuntimeObject*)(Type_t *)L_68))))
		{
			goto IL_0217;
		}
	}
	{
		SmartTerrain_t2953426174 * L_69 = (SmartTerrain_t2953426174 *)__this->get_mSmartTerrain_4();
		SmartTerrain_t2953426174 * L_70 = (SmartTerrain_t2953426174 *)L_69;
		G_B34_0 = L_70;
		if (L_70)
		{
			G_B35_0 = L_70;
			goto IL_020c;
		}
	}
	{
		SmartTerrain_t2953426174 * L_71 = (SmartTerrain_t2953426174 *)il2cpp_codegen_object_new(SmartTerrain_t2953426174_il2cpp_TypeInfo_var);
		SmartTerrain__ctor_m139376515(L_71, /*hidden argument*/NULL);
		G_B35_0 = L_71;
	}

IL_020c:
	{
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)G_B35_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_0217:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_LogError_m4066981595(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral2508776215, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_72 = V_1;
		return L_72;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C"  ObjectU5BU5D_t3878505910* Array_FindAll_TisRuntimeObject_m2098172250_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t3878505910* ___array0, Predicate_1_t45154830 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_m2098172250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3878505910* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	ObjectU5BU5D_t3878505910* V_3 = NULL;
	int32_t V_4 = 0;
	{
		ObjectU5BU5D_t3878505910* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1729354103 * L_1 = (ArgumentNullException_t1729354103 *)il2cpp_codegen_object_new(ArgumentNullException_t1729354103_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1045280655(L_1, (String_t*)_stringLiteral2833466369, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Predicate_1_t45154830 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1729354103 * L_3 = (ArgumentNullException_t1729354103 *)il2cpp_codegen_object_new(ArgumentNullException_t1729354103_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1045280655(L_3, (String_t*)_stringLiteral433125359, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0022:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t3878505910* L_4 = ___array0;
		NullCheck(L_4);
		V_1 = (ObjectU5BU5D_t3878505910*)((ObjectU5BU5D_t3878505910*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
		ObjectU5BU5D_t3878505910* L_5 = ___array0;
		V_3 = (ObjectU5BU5D_t3878505910*)L_5;
		V_4 = (int32_t)0;
		goto IL_005e;
	}

IL_0037:
	{
		ObjectU5BU5D_t3878505910* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = (RuntimeObject *)L_9;
		Predicate_1_t45154830 * L_10 = ___match1;
		RuntimeObject * L_11 = V_2;
		NullCheck((Predicate_1_t45154830 *)L_10);
		bool L_12 = ((  bool (*) (Predicate_1_t45154830 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t45154830 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t3878505910* L_13 = V_1;
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)L_14;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		RuntimeObject * L_16 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject *)L_16);
	}

IL_0058:
	{
		int32_t L_17 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_18 = V_4;
		ObjectU5BU5D_t3878505910* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_20 = V_0;
		((  void (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t3878505910**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (ObjectU5BU5D_t3878505910**)(&V_1), (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t3878505910* L_21 = V_1;
		return L_21;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
extern "C"  ObjectU5BU5D_t3878505910* CustomAttributeData_UnboxValues_TisRuntimeObject_m3643846628_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t3878505910* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3878505910* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = (ObjectU5BU5D_t3878505910*)((ObjectU5BU5D_t3878505910*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		ObjectU5BU5D_t3878505910* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t3878505910* L_3 = ___values0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t3878505910* L_9 = ___values0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		ObjectU5BU5D_t3878505910* L_10 = V_0;
		return L_10;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
extern "C"  CustomAttributeNamedArgumentU5BU5D_t3987353262* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t1201780503_m3728243106_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t3878505910* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_t3987353262* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3878505910* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = (CustomAttributeNamedArgumentU5BU5D_t3987353262*)((CustomAttributeNamedArgumentU5BU5D_t3987353262*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		CustomAttributeNamedArgumentU5BU5D_t3987353262* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t3878505910* L_3 = ___values0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (CustomAttributeNamedArgument_t1201780503 )((*(CustomAttributeNamedArgument_t1201780503 *)((CustomAttributeNamedArgument_t1201780503 *)UnBox(L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t3878505910* L_9 = ___values0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_t3987353262* L_10 = V_0;
		return L_10;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
extern "C"  CustomAttributeTypedArgumentU5BU5D_t1560684743* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t673001010_m487319025_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t3878505910* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t1560684743* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3878505910* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t1560684743*)((CustomAttributeTypedArgumentU5BU5D_t1560684743*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		CustomAttributeTypedArgumentU5BU5D_t1560684743* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t3878505910* L_3 = ___values0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (CustomAttributeTypedArgument_t673001010 )((*(CustomAttributeTypedArgument_t673001010 *)((CustomAttributeTypedArgument_t673001010 *)UnBox(L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t3878505910* L_9 = ___values0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t1560684743* L_10 = V_0;
		return L_10;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
extern "C"  ObjectU5BU5D_t3878505910* Component_GetComponents_TisRuntimeObject_m3279044116_gshared (Component_t4119265833 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	{
		NullCheck((Component_t4119265833 *)__this);
		GameObject_t2527051794 * L_0 = Component_get_gameObject_m725065130((Component_t4119265833 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_t2527051794 *)L_0);
		ObjectU5BU5D_t3878505910* L_1 = ((  ObjectU5BU5D_t3878505910* (*) (GameObject_t2527051794 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t2527051794 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3878505910*)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t3878505910* L_2 = V_0;
		return L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t3878505910* Component_GetComponentsInChildren_TisRuntimeObject_m309003320_gshared (Component_t4119265833 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	{
		NullCheck((Component_t4119265833 *)__this);
		GameObject_t2527051794 * L_0 = Component_get_gameObject_m725065130((Component_t4119265833 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_t2527051794 *)L_0);
		ObjectU5BU5D_t3878505910* L_2 = ((  ObjectU5BU5D_t3878505910* (*) (GameObject_t2527051794 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t2527051794 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3878505910*)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		ObjectU5BU5D_t3878505910* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C"  ObjectU5BU5D_t3878505910* GameObject_GetComponents_TisRuntimeObject_m930841264_gshared (GameObject_t2527051794 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m930841264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_t2527051794 *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_m3988218409((GameObject_t2527051794 *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3878505910*)((ObjectU5BU5D_t3878505910*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t3878505910* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t3878505910* GameObject_GetComponentsInChildren_TisRuntimeObject_m3762419635_gshared (GameObject_t2527051794 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	{
		NullCheck((GameObject_t2527051794 *)__this);
		ObjectU5BU5D_t3878505910* L_0 = ((  ObjectU5BU5D_t3878505910* (*) (GameObject_t2527051794 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t2527051794 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3878505910*)L_0;
		goto IL_000e;
	}

IL_000e:
	{
		ObjectU5BU5D_t3878505910* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t3878505910* GameObject_GetComponentsInChildren_TisRuntimeObject_m3406258089_gshared (GameObject_t2527051794 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_m3406258089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_t2527051794 *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_m3988218409((GameObject_t2527051794 *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3878505910*)((ObjectU5BU5D_t3878505910*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t3878505910* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  ObjectU5BU5D_t3878505910* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m2428633971_gshared (Mesh_t3980991349 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	{
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_0 = Mesh_get_canAccess_m306612308((Mesh_t3980991349 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_2 = Mesh_HasChannel_m3839665192((Mesh_t3980991349 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3980991349 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m2052586564((Mesh_t3980991349 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3878505910*)((ObjectU5BU5D_t3878505910*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		Mesh_PrintErrorCantAccessChannel_m3244440480((Mesh_t3980991349 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (ObjectU5BU5D_t3878505910*)((ObjectU5BU5D_t3878505910*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		ObjectU5BU5D_t3878505910* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  ObjectU5BU5D_t3878505910* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m3243332868_gshared (Mesh_t3980991349 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m4130965270(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3980991349 *)__this);
		ObjectU5BU5D_t3878505910* L_3 = ((  ObjectU5BU5D_t3878505910* (*) (Mesh_t3980991349 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3980991349 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3878505910*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ObjectU5BU5D_t3878505910* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Color32U5BU5D_t2793501812* Mesh_GetAllocArrayFromChannel_TisColor32_t1997556809_m828226560_gshared (Mesh_t3980991349 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Color32U5BU5D_t2793501812* V_0 = NULL;
	{
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_0 = Mesh_get_canAccess_m306612308((Mesh_t3980991349 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_2 = Mesh_HasChannel_m3839665192((Mesh_t3980991349 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3980991349 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m2052586564((Mesh_t3980991349 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Color32U5BU5D_t2793501812*)((Color32U5BU5D_t2793501812*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		Mesh_PrintErrorCantAccessChannel_m3244440480((Mesh_t3980991349 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Color32U5BU5D_t2793501812*)((Color32U5BU5D_t2793501812*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Color32U5BU5D_t2793501812* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Vector2U5BU5D_t223256560* Mesh_GetAllocArrayFromChannel_TisVector2_t3629302141_m2419132868_gshared (Mesh_t3980991349 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector2U5BU5D_t223256560* V_0 = NULL;
	{
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_0 = Mesh_get_canAccess_m306612308((Mesh_t3980991349 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_2 = Mesh_HasChannel_m3839665192((Mesh_t3980991349 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3980991349 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m2052586564((Mesh_t3980991349 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector2U5BU5D_t223256560*)((Vector2U5BU5D_t223256560*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		Mesh_PrintErrorCantAccessChannel_m3244440480((Mesh_t3980991349 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Vector2U5BU5D_t223256560*)((Vector2U5BU5D_t223256560*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Vector2U5BU5D_t223256560* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  Vector2U5BU5D_t223256560* Mesh_GetAllocArrayFromChannel_TisVector2_t3629302141_m3625605271_gshared (Mesh_t3980991349 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_t223256560* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m4130965270(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3980991349 *)__this);
		Vector2U5BU5D_t223256560* L_3 = ((  Vector2U5BU5D_t223256560* (*) (Mesh_t3980991349 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3980991349 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_t223256560*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2U5BU5D_t223256560* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Vector3U5BU5D_t2749240780* Mesh_GetAllocArrayFromChannel_TisVector3_t539014097_m3884068031_gshared (Mesh_t3980991349 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector3U5BU5D_t2749240780* V_0 = NULL;
	{
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_0 = Mesh_get_canAccess_m306612308((Mesh_t3980991349 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_2 = Mesh_HasChannel_m3839665192((Mesh_t3980991349 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3980991349 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m2052586564((Mesh_t3980991349 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector3U5BU5D_t2749240780*)((Vector3U5BU5D_t2749240780*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		Mesh_PrintErrorCantAccessChannel_m3244440480((Mesh_t3980991349 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Vector3U5BU5D_t2749240780*)((Vector3U5BU5D_t2749240780*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Vector3U5BU5D_t2749240780* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  Vector3U5BU5D_t2749240780* Mesh_GetAllocArrayFromChannel_TisVector3_t539014097_m4046964271_gshared (Mesh_t3980991349 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_t2749240780* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m4130965270(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3980991349 *)__this);
		Vector3U5BU5D_t2749240780* L_3 = ((  Vector3U5BU5D_t2749240780* (*) (Mesh_t3980991349 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3980991349 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_t2749240780*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3U5BU5D_t2749240780* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Vector4U5BU5D_t2571742262* Mesh_GetAllocArrayFromChannel_TisVector4_t3197448751_m2915026392_gshared (Mesh_t3980991349 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector4U5BU5D_t2571742262* V_0 = NULL;
	{
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_0 = Mesh_get_canAccess_m306612308((Mesh_t3980991349 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		bool L_2 = Mesh_HasChannel_m3839665192((Mesh_t3980991349 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3980991349 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m2052586564((Mesh_t3980991349 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector4U5BU5D_t2571742262*)((Vector4U5BU5D_t2571742262*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3980991349 *)__this);
		Mesh_PrintErrorCantAccessChannel_m3244440480((Mesh_t3980991349 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Vector4U5BU5D_t2571742262*)((Vector4U5BU5D_t2571742262*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Vector4U5BU5D_t2571742262* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  Vector4U5BU5D_t2571742262* Mesh_GetAllocArrayFromChannel_TisVector4_t3197448751_m1451888370_gshared (Mesh_t3980991349 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t2571742262* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m4130965270(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3980991349 *)__this);
		Vector4U5BU5D_t2571742262* L_3 = ((  Vector4U5BU5D_t2571742262* (*) (Mesh_t3980991349 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3980991349 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t2571742262*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector4U5BU5D_t2571742262* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C"  ObjectU5BU5D_t3878505910* Object_FindObjectsOfType_TisRuntimeObject_m4130663966_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectsOfType_TisRuntimeObject_m4130663966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	{
		RuntimeTypeHandle_t1636756630  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1182249043(NULL /*static, unused*/, (RuntimeTypeHandle_t1636756630 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t2117163972* L_2 = Object_FindObjectsOfType_m3892211808(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3878505910* L_3 = ((  ObjectU5BU5D_t3878505910* (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t2117163972*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (ObjectU5BU5D_t2117163972*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3878505910*)L_3;
		goto IL_001b;
	}

IL_001b:
	{
		ObjectU5BU5D_t3878505910* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
extern "C"  ObjectU5BU5D_t3878505910* Resources_ConvertObjects_TisRuntimeObject_m1662236305_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2117163972* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	ObjectU5BU5D_t3878505910* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t2117163972* L_0 = ___rawObjects0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (ObjectU5BU5D_t3878505910*)NULL;
		goto IL_0041;
	}

IL_000e:
	{
		ObjectU5BU5D_t2117163972* L_1 = ___rawObjects0;
		NullCheck(L_1);
		V_1 = (ObjectU5BU5D_t3878505910*)((ObjectU5BU5D_t3878505910*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))));
		V_2 = (int32_t)0;
		goto IL_0031;
	}

IL_001e:
	{
		ObjectU5BU5D_t3878505910* L_2 = V_1;
		int32_t L_3 = V_2;
		ObjectU5BU5D_t2117163972* L_4 = ___rawObjects0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Object_t948050745 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_2;
		ObjectU5BU5D_t3878505910* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t3878505910* L_11 = V_1;
		V_0 = (ObjectU5BU5D_t3878505910*)L_11;
		goto IL_0041;
	}

IL_0041:
	{
		ObjectU5BU5D_t3878505910* L_12 = V_0;
		return L_12;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component,System.Boolean)
extern "C"  ObjectU5BU5D_t3878505910* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2860291959_gshared (RuntimeObject * __this /* static, unused */, Component_t4119265833 * ___obj0, bool ___includeInactive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2860291959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3976455761 * V_0 = NULL;
	ObjectU5BU5D_t3878505910* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t3976455761 * L_0 = (List_1_t3976455761 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t3976455761 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t3976455761 *)L_0;
		Component_t4119265833 * L_1 = ___obj0;
		bool L_2 = ___includeInactive1;
		NullCheck((Component_t4119265833 *)L_1);
		ObjectU5BU5D_t3878505910* L_3 = ((  ObjectU5BU5D_t3878505910* (*) (Component_t4119265833 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Component_t4119265833 *)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_1 = (ObjectU5BU5D_t3878505910*)L_3;
		V_2 = (int32_t)0;
		goto IL_003d;
	}

IL_0012:
	{
		ObjectU5BU5D_t3878505910* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_3;
		NullCheck((Component_t4119265833 *)L_8);
		GameObject_t2527051794 * L_9 = Component_get_gameObject_m725065130((Component_t4119265833 *)L_8, /*hidden argument*/NULL);
		Component_t4119265833 * L_10 = ___obj0;
		NullCheck((Component_t4119265833 *)L_10);
		GameObject_t2527051794 * L_11 = Component_get_gameObject_m725065130((Component_t4119265833 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m864207549(NULL /*static, unused*/, (Object_t948050745 *)L_9, (Object_t948050745 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t3976455761 * L_13 = V_0;
		RuntimeObject * L_14 = V_3;
		NullCheck((List_1_t3976455761 *)L_13);
		((  void (*) (List_1_t3976455761 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t3976455761 *)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_0039:
	{
		int32_t L_15 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		ObjectU5BU5D_t3878505910* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		List_1_t3976455761 * L_18 = V_0;
		NullCheck((List_1_t3976455761 *)L_18);
		ObjectU5BU5D_t3878505910* L_19 = ((  ObjectU5BU5D_t3878505910* (*) (List_1_t3976455761 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t3976455761 *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_19;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
extern "C"  ObjectU5BU5D_t3878505910* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m701760068_gshared (RuntimeObject * __this /* static, unused */, Component_t4119265833 * ___obj0, const RuntimeMethod* method)
{
	{
		Component_t4119265833 * L_0 = ___obj0;
		ObjectU5BU5D_t3878505910* L_1 = ((  ObjectU5BU5D_t3878505910* (*) (RuntimeObject * /* static, unused */, Component_t4119265833 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Component_t4119265833 *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern "C"  ObjectU5BU5D_t3878505910* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m3494915988_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t3878505910* ___array0, Converter_2_t1959436626 * ___converter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m3494915988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3878505910* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3878505910* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1729354103 * L_1 = (ArgumentNullException_t1729354103 *)il2cpp_codegen_object_new(ArgumentNullException_t1729354103_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1045280655(L_1, (String_t*)_stringLiteral2833466369, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Converter_2_t1959436626 * L_2 = ___converter1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1729354103 * L_3 = (ArgumentNullException_t1729354103 *)il2cpp_codegen_object_new(ArgumentNullException_t1729354103_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1045280655(L_3, (String_t*)_stringLiteral62931015, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0022:
	{
		ObjectU5BU5D_t3878505910* L_4 = ___array0;
		NullCheck(L_4);
		V_0 = (ObjectU5BU5D_t3878505910*)((ObjectU5BU5D_t3878505910*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_004a;
	}

IL_0032:
	{
		ObjectU5BU5D_t3878505910* L_5 = V_0;
		int32_t L_6 = V_1;
		Converter_2_t1959436626 * L_7 = ___converter1;
		ObjectU5BU5D_t3878505910* L_8 = ___array0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck((Converter_2_t1959436626 *)L_7);
		RuntimeObject * L_12 = ((  RuntimeObject * (*) (Converter_2_t1959436626 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Converter_2_t1959436626 *)L_7, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject *)L_12);
		int32_t L_13 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_14 = V_1;
		ObjectU5BU5D_t3878505910* L_15 = ___array0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		ObjectU5BU5D_t3878505910* L_16 = V_0;
		return L_16;
	}
}
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Linq.Enumerable/Fallback)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m3425039248_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t66464263 * ___predicate1, int32_t ___fallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisRuntimeObject_m3425039248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_1 = (RuntimeObject*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_000c:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_0 = (RuntimeObject *)L_3;
			Func_2_t66464263 * L_4 = ___predicate1;
			RuntimeObject * L_5 = V_0;
			NullCheck((Func_2_t66464263 *)L_4);
			bool L_6 = ((  bool (*) (Func_2_t66464263 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t66464263 *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_6)
			{
				goto IL_0026;
			}
		}

IL_001f:
		{
			RuntimeObject * L_7 = V_0;
			V_2 = (RuntimeObject *)L_7;
			IL2CPP_LEAVE(0x58, FINALLY_0036);
		}

IL_0026:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t2885971988_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000c;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			if (L_10)
			{
				goto IL_003a;
			}
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(54)
		}

IL_003a:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1321005363_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		int32_t L_12 = ___fallback2;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		InvalidOperationException_t2006174199 * L_13 = (InvalidOperationException_t2006174199 *)il2cpp_codegen_object_new(InvalidOperationException_t2006174199_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3631536021(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13);
	}

IL_004e:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_14 = V_3;
		return L_14;
	}

IL_0058:
	{
		RuntimeObject * L_15 = V_2;
		return L_15;
	}
}
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m4046347753_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisRuntimeObject_m4046347753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4079819519(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (int32_t)0);
		return L_6;
	}

IL_0026:
	{
		InvalidOperationException_t2006174199 * L_7 = (InvalidOperationException_t2006174199 *)il2cpp_codegen_object_new(InvalidOperationException_t2006174199_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3631536021(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_002c:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t2885971988_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_003e:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x62, FINALLY_004f);
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1321005363_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		InvalidOperationException_t2006174199 * L_16 = (InvalidOperationException_t2006174199 *)il2cpp_codegen_object_new(InvalidOperationException_t2006174199_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3631536021(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}

IL_0062:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  KeyValuePair_2_t3635640856  Enumerable_FirstOrDefault_TisKeyValuePair_2_t3635640856_m3768966331_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_FirstOrDefault_TisKeyValuePair_2_t3635640856_m3768966331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3635640856  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t3635640856  V_2;
	memset(&V_2, 0, sizeof(V_2));
	KeyValuePair_2_t3635640856  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4079819519(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_1 = (RuntimeObject*)L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0012:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck((RuntimeObject*)L_3);
			KeyValuePair_2_t3635640856  L_4 = InterfaceFuncInvoker0< KeyValuePair_2_t3635640856  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_0 = (KeyValuePair_2_t3635640856 )L_4;
			KeyValuePair_2_t3635640856  L_5 = V_0;
			V_2 = (KeyValuePair_2_t3635640856 )L_5;
			IL2CPP_LEAVE(0x45, FINALLY_0030);
		}

IL_0020:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck((RuntimeObject*)L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t2885971988_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			if (L_7)
			{
				goto IL_0012;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			if (L_8)
			{
				goto IL_0034;
			}
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(48)
		}

IL_0034:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck((RuntimeObject*)L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1321005363_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(KeyValuePair_2_t3635640856 ));
		KeyValuePair_2_t3635640856  L_10 = V_3;
		return L_10;
	}

IL_0045:
	{
		KeyValuePair_2_t3635640856  L_11 = V_2;
		return L_11;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C"  RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m4026576671_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t66464263 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t66464263 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m592377753(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t66464263 * L_3 = ___predicate1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t66464263 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t66464263 *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m962057746_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_FirstOrDefault_TisRuntimeObject_m962057746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4079819519(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_1 = (RuntimeObject*)L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0012:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_0 = (RuntimeObject *)L_4;
			RuntimeObject * L_5 = V_0;
			V_2 = (RuntimeObject *)L_5;
			IL2CPP_LEAVE(0x45, FINALLY_0030);
		}

IL_0020:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck((RuntimeObject*)L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t2885971988_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			if (L_7)
			{
				goto IL_0012;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			if (L_8)
			{
				goto IL_0034;
			}
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(48)
		}

IL_0034:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck((RuntimeObject*)L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1321005363_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_3;
		return L_10;
	}

IL_0045:
	{
		RuntimeObject * L_11 = V_2;
		return L_11;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m3239216586_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SingleOrDefault_TisRuntimeObject_m3239216586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4079819519(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_4;
		V_1 = (RuntimeObject *)L_1;
		RuntimeObject* L_2 = ___source0;
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_3 = (RuntimeObject*)L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_001f:
		{
			RuntimeObject* L_4 = V_3;
			NullCheck((RuntimeObject*)L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_4);
			V_2 = (RuntimeObject *)L_5;
			bool L_6 = V_0;
			if (!L_6)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			InvalidOperationException_t2006174199 * L_7 = (InvalidOperationException_t2006174199 *)il2cpp_codegen_object_new(InvalidOperationException_t2006174199_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m3631536021(L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
		}

IL_0032:
		{
			V_0 = (bool)1;
			RuntimeObject * L_8 = V_2;
			V_1 = (RuntimeObject *)L_8;
		}

IL_0036:
		{
			RuntimeObject* L_9 = V_3;
			NullCheck((RuntimeObject*)L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t2885971988_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			if (L_10)
			{
				goto IL_001f;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_3;
			if (L_11)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(70)
		}

IL_004a:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck((RuntimeObject*)L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1321005363_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		RuntimeObject * L_13 = V_1;
		return L_13;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  Int32U5BU5D_t1884137699* Enumerable_ToArray_TisInt32_t429044550_m2690850299_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	Int32U5BU5D_t1884137699* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4079819519(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (Int32U5BU5D_t1884137699*)((Int32U5BU5D_t1884137699*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		Int32U5BU5D_t1884137699* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< Int32U5BU5D_t1884137699*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (Int32U5BU5D_t1884137699*)L_6, (int32_t)0);
		Int32U5BU5D_t1884137699* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t2194049768 * L_9 = (List_1_t2194049768 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t2194049768 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t2194049768 *)L_9);
		Int32U5BU5D_t1884137699* L_10 = ((  Int32U5BU5D_t1884137699* (*) (List_1_t2194049768 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t2194049768 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  ObjectU5BU5D_t3878505910* Enumerable_ToArray_TisRuntimeObject_m1994843128_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	ObjectU5BU5D_t3878505910* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4079819519(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (ObjectU5BU5D_t3878505910*)((ObjectU5BU5D_t3878505910*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		ObjectU5BU5D_t3878505910* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< ObjectU5BU5D_t3878505910*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (ObjectU5BU5D_t3878505910*)L_6, (int32_t)0);
		ObjectU5BU5D_t3878505910* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t3976455761 * L_9 = (List_1_t3976455761 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t3976455761 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t3976455761 *)L_9);
		ObjectU5BU5D_t3878505910* L_10 = ((  ObjectU5BU5D_t3878505910* (*) (List_1_t3976455761 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t3976455761 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<Vuforia.VuforiaManager/TrackableIdPair>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  TrackableIdPairU5BU5D_t293366179* Enumerable_ToArray_TisTrackableIdPair_t442626438_m439196103_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	TrackableIdPairU5BU5D_t293366179* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4079819519(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Vuforia.VuforiaManager/TrackableIdPair>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (TrackableIdPairU5BU5D_t293366179*)((TrackableIdPairU5BU5D_t293366179*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		TrackableIdPairU5BU5D_t293366179* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< TrackableIdPairU5BU5D_t293366179*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<Vuforia.VuforiaManager/TrackableIdPair>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (TrackableIdPairU5BU5D_t293366179*)L_6, (int32_t)0);
		TrackableIdPairU5BU5D_t293366179* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t2207631656 * L_9 = (List_1_t2207631656 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t2207631656 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t2207631656 *)L_9);
		TrackableIdPairU5BU5D_t293366179* L_10 = ((  TrackableIdPairU5BU5D_t293366179* (*) (List_1_t2207631656 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t2207631656 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
extern "C"  GameObject_t2527051794 * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2540178062_gshared (RuntimeObject * __this /* static, unused */, GameObject_t2527051794 * ___root0, BaseEventData_t2100590868 * ___eventData1, EventFunction_1_t3965412554 * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2540178062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_t1912080223 * V_1 = NULL;
	GameObject_t2527051794 * V_2 = NULL;
	{
		GameObject_t2527051794 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t1120104600_il2cpp_TypeInfo_var);
		List_1_t3677085441 * L_1 = ((ExecuteEvents_t1120104600_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t1120104600_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m2336736155(NULL /*static, unused*/, (GameObject_t2527051794 *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)0;
		goto IL_0043;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t1120104600_il2cpp_TypeInfo_var);
		List_1_t3677085441 * L_2 = ((ExecuteEvents_t1120104600_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t1120104600_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t3677085441 *)L_2);
		Transform_t1912080223 * L_4 = List_1_get_Item_m1205476282((List_1_t3677085441 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m1205476282_RuntimeMethod_var);
		V_1 = (Transform_t1912080223 *)L_4;
		Transform_t1912080223 * L_5 = V_1;
		NullCheck((Component_t4119265833 *)L_5);
		GameObject_t2527051794 * L_6 = Component_get_gameObject_m725065130((Component_t4119265833 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t2100590868 * L_7 = ___eventData1;
		EventFunction_1_t3965412554 * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t2527051794 *, BaseEventData_t2100590868 *, EventFunction_1_t3965412554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t2527051794 *)L_6, (BaseEventData_t2100590868 *)L_7, (EventFunction_1_t3965412554 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Transform_t1912080223 * L_10 = V_1;
		NullCheck((Component_t4119265833 *)L_10);
		GameObject_t2527051794 * L_11 = Component_get_gameObject_m725065130((Component_t4119265833 *)L_10, /*hidden argument*/NULL);
		V_2 = (GameObject_t2527051794 *)L_11;
		goto IL_005a;
	}

IL_003e:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t1120104600_il2cpp_TypeInfo_var);
		List_1_t3677085441 * L_14 = ((ExecuteEvents_t1120104600_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t1120104600_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t3677085441 *)L_14);
		int32_t L_15 = List_1_get_Count_m3965154148((List_1_t3677085441 *)L_14, /*hidden argument*/List_1_get_Count_m3965154148_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (GameObject_t2527051794 *)NULL;
		goto IL_005a;
	}

IL_005a:
	{
		GameObject_t2527051794 * L_16 = V_2;
		return L_16;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C"  GameObject_t2527051794 * ExecuteEvents_GetEventHandler_TisRuntimeObject_m855746144_gshared (RuntimeObject * __this /* static, unused */, GameObject_t2527051794 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m855746144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t2527051794 * V_0 = NULL;
	Transform_t1912080223 * V_1 = NULL;
	{
		GameObject_t2527051794 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3469215971(NULL /*static, unused*/, (Object_t948050745 *)L_0, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (GameObject_t2527051794 *)NULL;
		goto IL_0058;
	}

IL_0014:
	{
		GameObject_t2527051794 * L_2 = ___root0;
		NullCheck((GameObject_t2527051794 *)L_2);
		Transform_t1912080223 * L_3 = GameObject_get_transform_m520721408((GameObject_t2527051794 *)L_2, /*hidden argument*/NULL);
		V_1 = (Transform_t1912080223 *)L_3;
		goto IL_0045;
	}

IL_0020:
	{
		Transform_t1912080223 * L_4 = V_1;
		NullCheck((Component_t4119265833 *)L_4);
		GameObject_t2527051794 * L_5 = Component_get_gameObject_m725065130((Component_t4119265833 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t1120104600_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t2527051794 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t2527051794 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		Transform_t1912080223 * L_7 = V_1;
		NullCheck((Component_t4119265833 *)L_7);
		GameObject_t2527051794 * L_8 = Component_get_gameObject_m725065130((Component_t4119265833 *)L_7, /*hidden argument*/NULL);
		V_0 = (GameObject_t2527051794 *)L_8;
		goto IL_0058;
	}

IL_003d:
	{
		Transform_t1912080223 * L_9 = V_1;
		NullCheck((Transform_t1912080223 *)L_9);
		Transform_t1912080223 * L_10 = Transform_get_parent_m533093669((Transform_t1912080223 *)L_9, /*hidden argument*/NULL);
		V_1 = (Transform_t1912080223 *)L_10;
	}

IL_0045:
	{
		Transform_t1912080223 * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t948050745_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m864207549(NULL /*static, unused*/, (Object_t948050745 *)L_11, (Object_t948050745 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = (GameObject_t2527051794 *)NULL;
		goto IL_0058;
	}

IL_0058:
	{
		GameObject_t2527051794 * L_13 = V_0;
		return L_13;
	}
}
