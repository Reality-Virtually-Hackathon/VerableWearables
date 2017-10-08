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


// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2423606990;
// Vuforia.GuideViewRenderingBehaviour
struct GuideViewRenderingBehaviour_t297621634;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t2226858730;
// Vuforia.VideoBackgroundDefaultProvider
struct VideoBackgroundDefaultProvider_t1221888382;
// System.Collections.Generic.List`1<Vuforia.AValidatableVideoBackgroundConfigProperty>
struct List_1_t2792991905;
// System.String
struct String_t;
// System.Func`2<Vuforia.DataSet,System.Boolean>
struct Func_2_t2615624192;
// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>
struct Dictionary_2_t3331771552;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t1557942244;
// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo>
struct Dictionary_2_t29873171;
// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status>
struct Dictionary_2_t654390016;
// Vuforia.DataSet
struct DataSet_t560010602;
// System.Void
struct Void_t3968031514;
// Vuforia.IExtendedTracking
struct IExtendedTracking_t1224551482;
// Vuforia.ITargetSize
struct ITargetSize_t898297488;
// System.Char[]
struct CharU5BU5D_t1237632434;
// Vuforia.EyewearCalibrationProfileManager
struct EyewearCalibrationProfileManager_t67902827;
// Vuforia.EyewearUserCalibrator
struct EyewearUserCalibrator_t900913685;
// Vuforia.Image
struct Image_t1244443439;
// UnityEngine.Shader
struct Shader_t4132480776;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2076750695;
// System.Single[]
struct SingleU5BU5D_t1095654037;
// System.Action
struct Action_t893261993;
// Vuforia.VideoBackgroundBehaviour
struct VideoBackgroundBehaviour_t2826939206;
// Vuforia.BackgroundPlaneBehaviour
struct BackgroundPlaneBehaviour_t4133738360;
// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct SerializableViewerParameters_t19392574;
// UnityEngine.Transform
struct Transform_t1912080223;
// UnityEngine.Camera
struct Camera_t3201429123;
// Vuforia.VuforiaARController
struct VuforiaARController_t2746812198;
// Vuforia.VRDeviceController
struct VRDeviceController_t3547063471;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t1492434229;
// Vuforia.IBoundingBox
struct IBoundingBox_t3342805547;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_t1934951272;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>
struct Dictionary_2_t3947342094;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single>
struct Dictionary_2_t2828125001;
// Vuforia.StereoProjMatrixStore
struct StereoProjMatrixStore_t3359157030;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>
struct Dictionary_2_t3227251402;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.ModelTargetBehaviour>
struct Dictionary_2_t3825164990;
// Vuforia.GuideView
struct GuideView_t4109920118;
// Vuforia.ModelTargetBehaviour
struct ModelTargetBehaviour_t2608982574;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t2325015820;
// Vuforia.TargetGuideViewBehaviour
struct TargetGuideViewBehaviour_t977833296;
// System.Collections.IEnumerator
struct IEnumerator_t2885971988;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.GuideView>
struct Dictionary_2_t1031135238;
// Vuforia.Trackable
struct Trackable_t2271411116;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t1065078100;
// UnityEngine.Material
struct Material_t1787675033;
// Vuforia.Anchor
struct Anchor_t968977583;
// Vuforia.PositionalDeviceTracker
struct PositionalDeviceTracker_t1369874775;
// Vuforia.ModelTarget
struct ModelTarget_t569418112;
// UnityEngine.Texture2D
struct Texture2D_t601339354;
// UnityEngine.GameObject
struct GameObject_t2527051794;




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
#ifndef ARCONTROLLER_T4280554221_H
#define ARCONTROLLER_T4280554221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t4280554221  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2423606990 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t4280554221, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2423606990 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2423606990 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2423606990 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T4280554221_H
#ifndef U3CINITGUIDEVIEWSU3ED__12_T743220553_H
#define U3CINITGUIDEVIEWSU3ED__12_T743220553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewRenderingBehaviour/<InitGuideViews>d__12
struct  U3CInitGuideViewsU3Ed__12_t743220553  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.GuideViewRenderingBehaviour/<InitGuideViews>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.GuideViewRenderingBehaviour/<InitGuideViews>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.GuideViewRenderingBehaviour Vuforia.GuideViewRenderingBehaviour/<InitGuideViews>d__12::<>4__this
	GuideViewRenderingBehaviour_t297621634 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitGuideViewsU3Ed__12_t743220553, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitGuideViewsU3Ed__12_t743220553, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitGuideViewsU3Ed__12_t743220553, ___U3CU3E4__this_2)); }
	inline GuideViewRenderingBehaviour_t297621634 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GuideViewRenderingBehaviour_t297621634 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GuideViewRenderingBehaviour_t297621634 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINITGUIDEVIEWSU3ED__12_T743220553_H
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
#ifndef DEVICE_T2383207207_H
#define DEVICE_T2383207207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Device
struct  Device_t2383207207  : public RuntimeObject
{
public:

public:
};

struct Device_t2383207207_StaticFields
{
public:
	// Vuforia.Device Vuforia.Device::mInstance
	Device_t2383207207 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(Device_t2383207207_StaticFields, ___mInstance_0)); }
	inline Device_t2383207207 * get_mInstance_0() const { return ___mInstance_0; }
	inline Device_t2383207207 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(Device_t2383207207 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICE_T2383207207_H
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
#ifndef AVALIDATABLEVIDEOBACKGROUNDCONFIGPROPERTY_T1027986687_H
#define AVALIDATABLEVIDEOBACKGROUNDCONFIGPROPERTY_T1027986687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AValidatableVideoBackgroundConfigProperty
struct  AValidatableVideoBackgroundConfigProperty_t1027986687  : public RuntimeObject
{
public:
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.AValidatableVideoBackgroundConfigProperty::Config
	VideoBackgroundConfiguration_t2226858730 * ___Config_0;
	// Vuforia.VideoBackgroundDefaultProvider Vuforia.AValidatableVideoBackgroundConfigProperty::DefaultProvider
	VideoBackgroundDefaultProvider_t1221888382 * ___DefaultProvider_1;

public:
	inline static int32_t get_offset_of_Config_0() { return static_cast<int32_t>(offsetof(AValidatableVideoBackgroundConfigProperty_t1027986687, ___Config_0)); }
	inline VideoBackgroundConfiguration_t2226858730 * get_Config_0() const { return ___Config_0; }
	inline VideoBackgroundConfiguration_t2226858730 ** get_address_of_Config_0() { return &___Config_0; }
	inline void set_Config_0(VideoBackgroundConfiguration_t2226858730 * value)
	{
		___Config_0 = value;
		Il2CppCodeGenWriteBarrier((&___Config_0), value);
	}

	inline static int32_t get_offset_of_DefaultProvider_1() { return static_cast<int32_t>(offsetof(AValidatableVideoBackgroundConfigProperty_t1027986687, ___DefaultProvider_1)); }
	inline VideoBackgroundDefaultProvider_t1221888382 * get_DefaultProvider_1() const { return ___DefaultProvider_1; }
	inline VideoBackgroundDefaultProvider_t1221888382 ** get_address_of_DefaultProvider_1() { return &___DefaultProvider_1; }
	inline void set_DefaultProvider_1(VideoBackgroundDefaultProvider_t1221888382 * value)
	{
		___DefaultProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultProvider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVALIDATABLEVIDEOBACKGROUNDCONFIGPROPERTY_T1027986687_H
#ifndef NULLHOLOLENSAPIABSTRACTION_T2187269667_H
#define NULLHOLOLENSAPIABSTRACTION_T2187269667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullHoloLensApiAbstraction
struct  NullHoloLensApiAbstraction_t2187269667  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLHOLOLENSAPIABSTRACTION_T2187269667_H
#ifndef VIDEOBACKGROUNDCONFIGVALIDATOR_T2863708653_H
#define VIDEOBACKGROUNDCONFIGVALIDATOR_T2863708653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundConfigValidator
struct  VideoBackgroundConfigValidator_t2863708653  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Vuforia.AValidatableVideoBackgroundConfigProperty> Vuforia.VideoBackgroundConfigValidator::mValidatableProperties
	List_1_t2792991905 * ___mValidatableProperties_0;

public:
	inline static int32_t get_offset_of_mValidatableProperties_0() { return static_cast<int32_t>(offsetof(VideoBackgroundConfigValidator_t2863708653, ___mValidatableProperties_0)); }
	inline List_1_t2792991905 * get_mValidatableProperties_0() const { return ___mValidatableProperties_0; }
	inline List_1_t2792991905 ** get_address_of_mValidatableProperties_0() { return &___mValidatableProperties_0; }
	inline void set_mValidatableProperties_0(List_1_t2792991905 * value)
	{
		___mValidatableProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&___mValidatableProperties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDCONFIGVALIDATOR_T2863708653_H
#ifndef U3CU3EC__DISPLAYCLASS2_0_T2763218341_H
#define U3CU3EC__DISPLAYCLASS2_0_T2763218341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundConfigValidator/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t2763218341  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VideoBackgroundConfigValidator/<>c__DisplayClass2_0::res
	bool ___res_0;

public:
	inline static int32_t get_offset_of_res_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t2763218341, ___res_0)); }
	inline bool get_res_0() const { return ___res_0; }
	inline bool* get_address_of_res_0() { return &___res_0; }
	inline void set_res_0(bool value)
	{
		___res_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS2_0_T2763218341_H
#ifndef ANCHORIMPL_T2872107660_H
#define ANCHORIMPL_T2872107660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AnchorImpl
struct  AnchorImpl_t2872107660  : public RuntimeObject
{
public:
	// System.String Vuforia.AnchorImpl::mName
	String_t* ___mName_0;
	// System.Int32 Vuforia.AnchorImpl::mId
	int32_t ___mId_1;

public:
	inline static int32_t get_offset_of_mName_0() { return static_cast<int32_t>(offsetof(AnchorImpl_t2872107660, ___mName_0)); }
	inline String_t* get_mName_0() const { return ___mName_0; }
	inline String_t** get_address_of_mName_0() { return &___mName_0; }
	inline void set_mName_0(String_t* value)
	{
		___mName_0 = value;
		Il2CppCodeGenWriteBarrier((&___mName_0), value);
	}

	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(AnchorImpl_t2872107660, ___mId_1)); }
	inline int32_t get_mId_1() const { return ___mId_1; }
	inline int32_t* get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(int32_t value)
	{
		___mId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORIMPL_T2872107660_H
#ifndef U3CSHOWGUIDEVIEWAFTERU3ED__22_T3891835532_H
#define U3CSHOWGUIDEVIEWAFTERU3ED__22_T3891835532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22
struct  U3CShowGuideViewAfterU3Ed__22_t3891835532  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22::seconds
	float ___seconds_2;
	// Vuforia.GuideViewRenderingBehaviour Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22::<>4__this
	GuideViewRenderingBehaviour_t297621634 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_t3891835532, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_t3891835532, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_seconds_2() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_t3891835532, ___seconds_2)); }
	inline float get_seconds_2() const { return ___seconds_2; }
	inline float* get_address_of_seconds_2() { return &___seconds_2; }
	inline void set_seconds_2(float value)
	{
		___seconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_t3891835532, ___U3CU3E4__this_3)); }
	inline GuideViewRenderingBehaviour_t297621634 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GuideViewRenderingBehaviour_t297621634 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GuideViewRenderingBehaviour_t297621634 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWGUIDEVIEWAFTERU3ED__22_T3891835532_H
#ifndef U3CU3EC_T245687167_H
#define U3CU3EC_T245687167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewRenderingBehaviour/<>c
struct  U3CU3Ec_t245687167  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t245687167_StaticFields
{
public:
	// Vuforia.GuideViewRenderingBehaviour/<>c Vuforia.GuideViewRenderingBehaviour/<>c::<>9
	U3CU3Ec_t245687167 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.DataSet,System.Boolean> Vuforia.GuideViewRenderingBehaviour/<>c::<>9__20_0
	Func_2_t2615624192 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t245687167_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t245687167 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t245687167 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t245687167 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t245687167_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Func_2_t2615624192 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Func_2_t2615624192 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Func_2_t2615624192 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__20_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T245687167_H
#ifndef U3CU3EC__DISPLAYCLASS13_0_T2855881878_H
#define U3CU3EC__DISPLAYCLASS13_0_T2855881878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewRenderingBehaviour/<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t2855881878  : public RuntimeObject
{
public:
	// System.String Vuforia.GuideViewRenderingBehaviour/<>c__DisplayClass13_0::dbName
	String_t* ___dbName_0;

public:
	inline static int32_t get_offset_of_dbName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t2855881878, ___dbName_0)); }
	inline String_t* get_dbName_0() const { return ___dbName_0; }
	inline String_t** get_address_of_dbName_0() { return &___dbName_0; }
	inline void set_dbName_0(String_t* value)
	{
		___dbName_0 = value;
		Il2CppCodeGenWriteBarrier((&___dbName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS13_0_T2855881878_H
#ifndef U3CU3EC__DISPLAYCLASS6_0_T3579304920_H
#define U3CU3EC__DISPLAYCLASS6_0_T3579304920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideView2DBehaviour/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t3579304920  : public RuntimeObject
{
public:
	// System.String Vuforia.GuideView2DBehaviour/<>c__DisplayClass6_0::modelTargetName
	String_t* ___modelTargetName_0;

public:
	inline static int32_t get_offset_of_modelTargetName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t3579304920, ___modelTargetName_0)); }
	inline String_t* get_modelTargetName_0() const { return ___modelTargetName_0; }
	inline String_t** get_address_of_modelTargetName_0() { return &___modelTargetName_0; }
	inline void set_modelTargetName_0(String_t* value)
	{
		___modelTargetName_0 = value;
		Il2CppCodeGenWriteBarrier((&___modelTargetName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS6_0_T3579304920_H
#ifndef LOG_T3190074202_H
#define LOG_T3190074202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Log
struct  Log_t3190074202  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOG_T3190074202_H
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
#ifndef TRACKERDATA_T399692462_H
#define TRACKERDATA_T399692462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData
struct  TrackerData_t399692462  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKERDATA_T399692462_H
#ifndef HOLOLENSEXTENDEDTRACKINGMANAGER_T1894204616_H
#define HOLOLENSEXTENDEDTRACKINGMANAGER_T1894204616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager
struct  HoloLensExtendedTrackingManager_t1894204616  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager::mNumFramesStablePose
	int32_t ___mNumFramesStablePose_0;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxPoseRelDistance
	float ___mMaxPoseRelDistance_1;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxPoseAngleDiff
	float ___mMaxPoseAngleDiff_2;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxCamPoseAbsDistance
	float ___mMaxCamPoseAbsDistance_3;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxCamPoseAngleDiff
	float ___mMaxCamPoseAngleDiff_4;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager::mMinNumFramesPoseOff
	int32_t ___mMinNumFramesPoseOff_5;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMinPoseUpdateRelDistance
	float ___mMinPoseUpdateRelDistance_6;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMinPoseUpdateAngleDiff
	float ___mMinPoseUpdateAngleDiff_7;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mTrackableSizeInViewThreshold
	float ___mTrackableSizeInViewThreshold_8;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxDistanceFromViewCenterForPoseUpdate
	float ___mMaxDistanceFromViewCenterForPoseUpdate_9;
	// System.Boolean Vuforia.HoloLensExtendedTrackingManager::mSetWorldAnchors
	bool ___mSetWorldAnchors_10;
	// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry> Vuforia.HoloLensExtendedTrackingManager::mTrackingList
	Dictionary_2_t3331771552 * ___mTrackingList_11;
	// System.Collections.Generic.HashSet`1<System.Int32> Vuforia.HoloLensExtendedTrackingManager::mTrackablesExtendedTrackingEnabled
	HashSet_1_t1557942244 * ___mTrackablesExtendedTrackingEnabled_12;
	// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo> Vuforia.HoloLensExtendedTrackingManager::mTrackablesCurrentlyExtendedTracked
	Dictionary_2_t29873171 * ___mTrackablesCurrentlyExtendedTracked_13;
	// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status> Vuforia.HoloLensExtendedTrackingManager::mExtendedTrackablesState
	Dictionary_2_t654390016 * ___mExtendedTrackablesState_14;

public:
	inline static int32_t get_offset_of_mNumFramesStablePose_0() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mNumFramesStablePose_0)); }
	inline int32_t get_mNumFramesStablePose_0() const { return ___mNumFramesStablePose_0; }
	inline int32_t* get_address_of_mNumFramesStablePose_0() { return &___mNumFramesStablePose_0; }
	inline void set_mNumFramesStablePose_0(int32_t value)
	{
		___mNumFramesStablePose_0 = value;
	}

	inline static int32_t get_offset_of_mMaxPoseRelDistance_1() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mMaxPoseRelDistance_1)); }
	inline float get_mMaxPoseRelDistance_1() const { return ___mMaxPoseRelDistance_1; }
	inline float* get_address_of_mMaxPoseRelDistance_1() { return &___mMaxPoseRelDistance_1; }
	inline void set_mMaxPoseRelDistance_1(float value)
	{
		___mMaxPoseRelDistance_1 = value;
	}

	inline static int32_t get_offset_of_mMaxPoseAngleDiff_2() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mMaxPoseAngleDiff_2)); }
	inline float get_mMaxPoseAngleDiff_2() const { return ___mMaxPoseAngleDiff_2; }
	inline float* get_address_of_mMaxPoseAngleDiff_2() { return &___mMaxPoseAngleDiff_2; }
	inline void set_mMaxPoseAngleDiff_2(float value)
	{
		___mMaxPoseAngleDiff_2 = value;
	}

	inline static int32_t get_offset_of_mMaxCamPoseAbsDistance_3() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mMaxCamPoseAbsDistance_3)); }
	inline float get_mMaxCamPoseAbsDistance_3() const { return ___mMaxCamPoseAbsDistance_3; }
	inline float* get_address_of_mMaxCamPoseAbsDistance_3() { return &___mMaxCamPoseAbsDistance_3; }
	inline void set_mMaxCamPoseAbsDistance_3(float value)
	{
		___mMaxCamPoseAbsDistance_3 = value;
	}

	inline static int32_t get_offset_of_mMaxCamPoseAngleDiff_4() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mMaxCamPoseAngleDiff_4)); }
	inline float get_mMaxCamPoseAngleDiff_4() const { return ___mMaxCamPoseAngleDiff_4; }
	inline float* get_address_of_mMaxCamPoseAngleDiff_4() { return &___mMaxCamPoseAngleDiff_4; }
	inline void set_mMaxCamPoseAngleDiff_4(float value)
	{
		___mMaxCamPoseAngleDiff_4 = value;
	}

	inline static int32_t get_offset_of_mMinNumFramesPoseOff_5() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mMinNumFramesPoseOff_5)); }
	inline int32_t get_mMinNumFramesPoseOff_5() const { return ___mMinNumFramesPoseOff_5; }
	inline int32_t* get_address_of_mMinNumFramesPoseOff_5() { return &___mMinNumFramesPoseOff_5; }
	inline void set_mMinNumFramesPoseOff_5(int32_t value)
	{
		___mMinNumFramesPoseOff_5 = value;
	}

	inline static int32_t get_offset_of_mMinPoseUpdateRelDistance_6() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mMinPoseUpdateRelDistance_6)); }
	inline float get_mMinPoseUpdateRelDistance_6() const { return ___mMinPoseUpdateRelDistance_6; }
	inline float* get_address_of_mMinPoseUpdateRelDistance_6() { return &___mMinPoseUpdateRelDistance_6; }
	inline void set_mMinPoseUpdateRelDistance_6(float value)
	{
		___mMinPoseUpdateRelDistance_6 = value;
	}

	inline static int32_t get_offset_of_mMinPoseUpdateAngleDiff_7() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mMinPoseUpdateAngleDiff_7)); }
	inline float get_mMinPoseUpdateAngleDiff_7() const { return ___mMinPoseUpdateAngleDiff_7; }
	inline float* get_address_of_mMinPoseUpdateAngleDiff_7() { return &___mMinPoseUpdateAngleDiff_7; }
	inline void set_mMinPoseUpdateAngleDiff_7(float value)
	{
		___mMinPoseUpdateAngleDiff_7 = value;
	}

	inline static int32_t get_offset_of_mTrackableSizeInViewThreshold_8() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mTrackableSizeInViewThreshold_8)); }
	inline float get_mTrackableSizeInViewThreshold_8() const { return ___mTrackableSizeInViewThreshold_8; }
	inline float* get_address_of_mTrackableSizeInViewThreshold_8() { return &___mTrackableSizeInViewThreshold_8; }
	inline void set_mTrackableSizeInViewThreshold_8(float value)
	{
		___mTrackableSizeInViewThreshold_8 = value;
	}

	inline static int32_t get_offset_of_mMaxDistanceFromViewCenterForPoseUpdate_9() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mMaxDistanceFromViewCenterForPoseUpdate_9)); }
	inline float get_mMaxDistanceFromViewCenterForPoseUpdate_9() const { return ___mMaxDistanceFromViewCenterForPoseUpdate_9; }
	inline float* get_address_of_mMaxDistanceFromViewCenterForPoseUpdate_9() { return &___mMaxDistanceFromViewCenterForPoseUpdate_9; }
	inline void set_mMaxDistanceFromViewCenterForPoseUpdate_9(float value)
	{
		___mMaxDistanceFromViewCenterForPoseUpdate_9 = value;
	}

	inline static int32_t get_offset_of_mSetWorldAnchors_10() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mSetWorldAnchors_10)); }
	inline bool get_mSetWorldAnchors_10() const { return ___mSetWorldAnchors_10; }
	inline bool* get_address_of_mSetWorldAnchors_10() { return &___mSetWorldAnchors_10; }
	inline void set_mSetWorldAnchors_10(bool value)
	{
		___mSetWorldAnchors_10 = value;
	}

	inline static int32_t get_offset_of_mTrackingList_11() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mTrackingList_11)); }
	inline Dictionary_2_t3331771552 * get_mTrackingList_11() const { return ___mTrackingList_11; }
	inline Dictionary_2_t3331771552 ** get_address_of_mTrackingList_11() { return &___mTrackingList_11; }
	inline void set_mTrackingList_11(Dictionary_2_t3331771552 * value)
	{
		___mTrackingList_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackingList_11), value);
	}

	inline static int32_t get_offset_of_mTrackablesExtendedTrackingEnabled_12() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mTrackablesExtendedTrackingEnabled_12)); }
	inline HashSet_1_t1557942244 * get_mTrackablesExtendedTrackingEnabled_12() const { return ___mTrackablesExtendedTrackingEnabled_12; }
	inline HashSet_1_t1557942244 ** get_address_of_mTrackablesExtendedTrackingEnabled_12() { return &___mTrackablesExtendedTrackingEnabled_12; }
	inline void set_mTrackablesExtendedTrackingEnabled_12(HashSet_1_t1557942244 * value)
	{
		___mTrackablesExtendedTrackingEnabled_12 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackablesExtendedTrackingEnabled_12), value);
	}

	inline static int32_t get_offset_of_mTrackablesCurrentlyExtendedTracked_13() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mTrackablesCurrentlyExtendedTracked_13)); }
	inline Dictionary_2_t29873171 * get_mTrackablesCurrentlyExtendedTracked_13() const { return ___mTrackablesCurrentlyExtendedTracked_13; }
	inline Dictionary_2_t29873171 ** get_address_of_mTrackablesCurrentlyExtendedTracked_13() { return &___mTrackablesCurrentlyExtendedTracked_13; }
	inline void set_mTrackablesCurrentlyExtendedTracked_13(Dictionary_2_t29873171 * value)
	{
		___mTrackablesCurrentlyExtendedTracked_13 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackablesCurrentlyExtendedTracked_13), value);
	}

	inline static int32_t get_offset_of_mExtendedTrackablesState_14() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t1894204616, ___mExtendedTrackablesState_14)); }
	inline Dictionary_2_t654390016 * get_mExtendedTrackablesState_14() const { return ___mExtendedTrackablesState_14; }
	inline Dictionary_2_t654390016 ** get_address_of_mExtendedTrackablesState_14() { return &___mExtendedTrackablesState_14; }
	inline void set_mExtendedTrackablesState_14(Dictionary_2_t654390016 * value)
	{
		___mExtendedTrackablesState_14 = value;
		Il2CppCodeGenWriteBarrier((&___mExtendedTrackablesState_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOLENSEXTENDEDTRACKINGMANAGER_T1894204616_H
#ifndef DELEGATEHELPER_T1427182990_H
#define DELEGATEHELPER_T1427182990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DelegateHelper
struct  DelegateHelper_t1427182990  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEHELPER_T1427182990_H
#ifndef DISABLEDEXTENDEDTRACKINGIMPL_T48798804_H
#define DISABLEDEXTENDEDTRACKINGIMPL_T48798804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DisabledExtendedTrackingImpl
struct  DisabledExtendedTrackingImpl_t48798804  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISABLEDEXTENDEDTRACKINGIMPL_T48798804_H
#ifndef MODELTARGETBOUNDINGBOXIMPL_T3757521100_H
#define MODELTARGETBOUNDINGBOXIMPL_T3757521100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetBoundingBoxImpl
struct  ModelTargetBoundingBoxImpl_t3757521100  : public RuntimeObject
{
public:
	// Vuforia.DataSet Vuforia.ModelTargetBoundingBoxImpl::mDataSet
	DataSet_t560010602 * ___mDataSet_0;
	// System.String Vuforia.ModelTargetBoundingBoxImpl::mName
	String_t* ___mName_1;

public:
	inline static int32_t get_offset_of_mDataSet_0() { return static_cast<int32_t>(offsetof(ModelTargetBoundingBoxImpl_t3757521100, ___mDataSet_0)); }
	inline DataSet_t560010602 * get_mDataSet_0() const { return ___mDataSet_0; }
	inline DataSet_t560010602 ** get_address_of_mDataSet_0() { return &___mDataSet_0; }
	inline void set_mDataSet_0(DataSet_t560010602 * value)
	{
		___mDataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_0), value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(ModelTargetBoundingBoxImpl_t3757521100, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELTARGETBOUNDINGBOXIMPL_T3757521100_H
#ifndef IENUMERABLEEXTENSIONMETHODS_T2330898508_H
#define IENUMERABLEEXTENSIONMETHODS_T2330898508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.IEnumerableExtensionMethods
struct  IEnumerableExtensionMethods_t2330898508  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IENUMERABLEEXTENSIONMETHODS_T2330898508_H
#ifndef ANDROIDDATASETS_T4098650380_H
#define ANDROIDDATASETS_T4098650380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AndroidDatasets
struct  AndroidDatasets_t4098650380  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDDATASETS_T4098650380_H
#ifndef ANDROIDUNITYPLAYER_T2615317378_H
#define ANDROIDUNITYPLAYER_T2615317378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AndroidUnityPlayer
struct  AndroidUnityPlayer_t2615317378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDUNITYPLAYER_T2615317378_H
#ifndef VUFORIAEXTENDEDTRACKINGMANAGER_T48552967_H
#define VUFORIAEXTENDEDTRACKINGMANAGER_T48552967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaExtendedTrackingManager
struct  VuforiaExtendedTrackingManager_t48552967  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAEXTENDEDTRACKINGMANAGER_T48552967_H
#ifndef PLATFORMRUNTIMEINITIALIZATION_T672759580_H
#define PLATFORMRUNTIMEINITIALIZATION_T672759580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlatformRuntimeInitialization
struct  PlatformRuntimeInitialization_t672759580  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMRUNTIMEINITIALIZATION_T672759580_H
#ifndef GAMEOBJECTEXTENSIONMETHODS_T1911396097_H
#define GAMEOBJECTEXTENSIONMETHODS_T1911396097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GameObjectExtensionMethods
struct  GameObjectExtensionMethods_t1911396097  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTEXTENSIONMETHODS_T1911396097_H
#ifndef WSAUNITYPLAYER_T902517639_H
#define WSAUNITYPLAYER_T902517639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WSAUnityPlayer
struct  WSAUnityPlayer_t902517639  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WSAUNITYPLAYER_T902517639_H
#ifndef VIDEOBACKGROUNDDEFAULTPROVIDER_T1221888382_H
#define VIDEOBACKGROUNDDEFAULTPROVIDER_T1221888382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundDefaultProvider
struct  VideoBackgroundDefaultProvider_t1221888382  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDDEFAULTPROVIDER_T1221888382_H
#ifndef EYEWEARCALIBRATIONPROFILEMANAGER_T67902827_H
#define EYEWEARCALIBRATIONPROFILEMANAGER_T67902827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearCalibrationProfileManager
struct  EyewearCalibrationProfileManager_t67902827  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARCALIBRATIONPROFILEMANAGER_T67902827_H
#ifndef EYEWEARUSERCALIBRATOR_T900913685_H
#define EYEWEARUSERCALIBRATOR_T900913685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearUserCalibrator
struct  EyewearUserCalibrator_t900913685  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARUSERCALIBRATOR_T900913685_H
#ifndef TRACKABLEIMPL_T310354028_H
#define TRACKABLEIMPL_T310354028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableImpl
struct  TrackableImpl_t310354028  : public RuntimeObject
{
public:
	// System.String Vuforia.TrackableImpl::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Vuforia.TrackableImpl::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableImpl_t310354028, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrackableImpl_t310354028, ___U3CIDU3Ek__BackingField_1)); }
	inline int32_t get_U3CIDU3Ek__BackingField_1() const { return ___U3CIDU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_1() { return &___U3CIDU3Ek__BackingField_1; }
	inline void set_U3CIDU3Ek__BackingField_1(int32_t value)
	{
		___U3CIDU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIMPL_T310354028_H
#ifndef PLAYMODEUNITYPLAYER_T3686526366_H
#define PLAYMODEUNITYPLAYER_T3686526366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlayModeUnityPlayer
struct  PlayModeUnityPlayer_t3686526366  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODEUNITYPLAYER_T3686526366_H
#ifndef U3CU3EC__DISPLAYCLASS6_0_T2976966780_H
#define U3CU3EC__DISPLAYCLASS6_0_T2976966780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideView3DBehaviour/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t2976966780  : public RuntimeObject
{
public:
	// System.String Vuforia.GuideView3DBehaviour/<>c__DisplayClass6_0::modelTargetName
	String_t* ___modelTargetName_0;

public:
	inline static int32_t get_offset_of_modelTargetName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t2976966780, ___modelTargetName_0)); }
	inline String_t* get_modelTargetName_0() const { return ___modelTargetName_0; }
	inline String_t** get_address_of_modelTargetName_0() { return &___modelTargetName_0; }
	inline void set_modelTargetName_0(String_t* value)
	{
		___modelTargetName_0 = value;
		Il2CppCodeGenWriteBarrier((&___modelTargetName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS6_0_T2976966780_H
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
#ifndef ANCHORDATA_T3267741978_H
#define ANCHORDATA_T3267741978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AnchorData
#pragma pack(push, tp, 1)
struct  AnchorData_t3267741978 
{
public:
	// System.Int32 Vuforia.AnchorData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.AnchorData::unused
	int32_t ___unused_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(AnchorData_t3267741978, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_unused_1() { return static_cast<int32_t>(offsetof(AnchorData_t3267741978, ___unused_1)); }
	inline int32_t get_unused_1() const { return ___unused_1; }
	inline int32_t* get_address_of_unused_1() { return &___unused_1; }
	inline void set_unused_1(int32_t value)
	{
		___unused_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORDATA_T3267741978_H
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
#ifndef PLAYMODEEYEWEARUSERCALIBRATORIMPL_T665434750_H
#define PLAYMODEEYEWEARUSERCALIBRATORIMPL_T665434750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlayModeEyewearUserCalibratorImpl
struct  PlayModeEyewearUserCalibratorImpl_t665434750  : public EyewearUserCalibrator_t900913685
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODEEYEWEARUSERCALIBRATORIMPL_T665434750_H
#ifndef OBJECTTARGETIMPL_T3492478552_H
#define OBJECTTARGETIMPL_T3492478552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t3492478552  : public TrackableImpl_t310354028
{
public:
	// Vuforia.IExtendedTracking Vuforia.ObjectTargetImpl::mExtTrackingImpl
	RuntimeObject* ___mExtTrackingImpl_2;
	// Vuforia.ITargetSize Vuforia.ObjectTargetImpl::mTargetSizeImpl
	RuntimeObject* ___mTargetSizeImpl_3;

public:
	inline static int32_t get_offset_of_mExtTrackingImpl_2() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t3492478552, ___mExtTrackingImpl_2)); }
	inline RuntimeObject* get_mExtTrackingImpl_2() const { return ___mExtTrackingImpl_2; }
	inline RuntimeObject** get_address_of_mExtTrackingImpl_2() { return &___mExtTrackingImpl_2; }
	inline void set_mExtTrackingImpl_2(RuntimeObject* value)
	{
		___mExtTrackingImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___mExtTrackingImpl_2), value);
	}

	inline static int32_t get_offset_of_mTargetSizeImpl_3() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t3492478552, ___mTargetSizeImpl_3)); }
	inline RuntimeObject* get_mTargetSizeImpl_3() const { return ___mTargetSizeImpl_3; }
	inline RuntimeObject** get_address_of_mTargetSizeImpl_3() { return &___mTargetSizeImpl_3; }
	inline void set_mTargetSizeImpl_3(RuntimeObject* value)
	{
		___mTargetSizeImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetSizeImpl_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGETIMPL_T3492478552_H
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
#ifndef RECT_T2130476699_H
#define RECT_T2130476699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2130476699 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2130476699, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2130476699, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2130476699, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2130476699, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2130476699_H
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
#ifndef NUMDIVISIONSPROPERTY_T3034003191_H
#define NUMDIVISIONSPROPERTY_T3034003191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NumDivisionsProperty
struct  NumDivisionsProperty_t3034003191  : public AValidatableVideoBackgroundConfigProperty_t1027986687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMDIVISIONSPROPERTY_T3034003191_H
#ifndef VIDEOBACKGROUNDSHADERPROPERTY_T3530405522_H
#define VIDEOBACKGROUNDSHADERPROPERTY_T3530405522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundShaderProperty
struct  VideoBackgroundShaderProperty_t3530405522  : public AValidatableVideoBackgroundConfigProperty_t1027986687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDSHADERPROPERTY_T3530405522_H
#ifndef MATTESHADERPROPERTY_T796346175_H
#define MATTESHADERPROPERTY_T796346175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MatteShaderProperty
struct  MatteShaderProperty_t796346175  : public AValidatableVideoBackgroundConfigProperty_t1027986687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATTESHADERPROPERTY_T796346175_H
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
#ifndef PLAYMODEEYEWEARCALIBRATIONPROFILEMANAGERIMPL_T1523681202_H
#define PLAYMODEEYEWEARCALIBRATIONPROFILEMANAGERIMPL_T1523681202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlayModeEyewearCalibrationProfileManagerImpl
struct  PlayModeEyewearCalibrationProfileManagerImpl_t1523681202  : public EyewearCalibrationProfileManager_t67902827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODEEYEWEARCALIBRATIONPROFILEMANAGERIMPL_T1523681202_H
#ifndef EYEWEARDEVICE_T843669954_H
#define EYEWEARDEVICE_T843669954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice
struct  EyewearDevice_t843669954  : public Device_t2383207207
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARDEVICE_T843669954_H
#ifndef IMAGEHEADERDATA_T364569079_H
#define IMAGEHEADERDATA_T364569079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/ImageHeaderData
#pragma pack(push, tp, 1)
struct  ImageHeaderData_t364569079 
{
public:
	// System.IntPtr Vuforia.TrackerData/ImageHeaderData::data
	intptr_t ___data_0;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::width
	int32_t ___width_1;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::height
	int32_t ___height_2;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::stride
	int32_t ___stride_3;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::bufferWidth
	int32_t ___bufferWidth_4;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::bufferHeight
	int32_t ___bufferHeight_5;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::format
	int32_t ___format_6;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::reallocate
	int32_t ___reallocate_7;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::updated
	int32_t ___updated_8;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ImageHeaderData_t364569079, ___data_0)); }
	inline intptr_t get_data_0() const { return ___data_0; }
	inline intptr_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(ImageHeaderData_t364569079, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(ImageHeaderData_t364569079, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_stride_3() { return static_cast<int32_t>(offsetof(ImageHeaderData_t364569079, ___stride_3)); }
	inline int32_t get_stride_3() const { return ___stride_3; }
	inline int32_t* get_address_of_stride_3() { return &___stride_3; }
	inline void set_stride_3(int32_t value)
	{
		___stride_3 = value;
	}

	inline static int32_t get_offset_of_bufferWidth_4() { return static_cast<int32_t>(offsetof(ImageHeaderData_t364569079, ___bufferWidth_4)); }
	inline int32_t get_bufferWidth_4() const { return ___bufferWidth_4; }
	inline int32_t* get_address_of_bufferWidth_4() { return &___bufferWidth_4; }
	inline void set_bufferWidth_4(int32_t value)
	{
		___bufferWidth_4 = value;
	}

	inline static int32_t get_offset_of_bufferHeight_5() { return static_cast<int32_t>(offsetof(ImageHeaderData_t364569079, ___bufferHeight_5)); }
	inline int32_t get_bufferHeight_5() const { return ___bufferHeight_5; }
	inline int32_t* get_address_of_bufferHeight_5() { return &___bufferHeight_5; }
	inline void set_bufferHeight_5(int32_t value)
	{
		___bufferHeight_5 = value;
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(ImageHeaderData_t364569079, ___format_6)); }
	inline int32_t get_format_6() const { return ___format_6; }
	inline int32_t* get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(int32_t value)
	{
		___format_6 = value;
	}

	inline static int32_t get_offset_of_reallocate_7() { return static_cast<int32_t>(offsetof(ImageHeaderData_t364569079, ___reallocate_7)); }
	inline int32_t get_reallocate_7() const { return ___reallocate_7; }
	inline int32_t* get_address_of_reallocate_7() { return &___reallocate_7; }
	inline void set_reallocate_7(int32_t value)
	{
		___reallocate_7 = value;
	}

	inline static int32_t get_offset_of_updated_8() { return static_cast<int32_t>(offsetof(ImageHeaderData_t364569079, ___updated_8)); }
	inline int32_t get_updated_8() const { return ___updated_8; }
	inline int32_t* get_address_of_updated_8() { return &___updated_8; }
	inline void set_updated_8(int32_t value)
	{
		___updated_8 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEHEADERDATA_T364569079_H
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
#ifndef VIDEOBACKGROUNDREFLECTION_T122494534_H
#define VIDEOBACKGROUNDREFLECTION_T122494534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t122494534 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t122494534, ___value___1)); }
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
#endif // VIDEOBACKGROUNDREFLECTION_T122494534_H
#ifndef CAMERADEVICEMODE_T2544576648_H
#define CAMERADEVICEMODE_T2544576648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2544576648 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2544576648, ___value___1)); }
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
#endif // CAMERADEVICEMODE_T2544576648_H
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
#ifndef WORLDCENTERMODE_T4092541362_H
#define WORLDCENTERMODE_T4092541362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t4092541362 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t4092541362, ___value___1)); }
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
#endif // WORLDCENTERMODE_T4092541362_H
#ifndef SCREENORIENTATION_T420828870_H
#define SCREENORIENTATION_T420828870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t420828870 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t420828870, ___value___1)); }
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
#endif // SCREENORIENTATION_T420828870_H
#ifndef DATASETOBJECTTARGETIMPL_T365456936_H
#define DATASETOBJECTTARGETIMPL_T365456936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetObjectTargetImpl
struct  DataSetObjectTargetImpl_t365456936  : public ObjectTargetImpl_t3492478552
{
public:
	// Vuforia.DataSet Vuforia.DataSetObjectTargetImpl::mDataSet
	DataSet_t560010602 * ___mDataSet_4;

public:
	inline static int32_t get_offset_of_mDataSet_4() { return static_cast<int32_t>(offsetof(DataSetObjectTargetImpl_t365456936, ___mDataSet_4)); }
	inline DataSet_t560010602 * get_mDataSet_4() const { return ___mDataSet_4; }
	inline DataSet_t560010602 ** get_address_of_mDataSet_4() { return &___mDataSet_4; }
	inline void set_mDataSet_4(DataSet_t560010602 * value)
	{
		___mDataSet_4 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETOBJECTTARGETIMPL_T365456936_H
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
#ifndef VIEWERBUTTONTYPE_T3283690944_H
#define VIEWERBUTTONTYPE_T3283690944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerButtonType
struct  ViewerButtonType_t3283690944 
{
public:
	// System.Int32 Vuforia.ViewerButtonType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ViewerButtonType_t3283690944, ___value___1)); }
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
#endif // VIEWERBUTTONTYPE_T3283690944_H
#ifndef VIEWERTRAYALIGNMENT_T2918958100_H
#define VIEWERTRAYALIGNMENT_T2918958100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerTrayAlignment
struct  ViewerTrayAlignment_t2918958100 
{
public:
	// System.Int32 Vuforia.ViewerTrayAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ViewerTrayAlignment_t2918958100, ___value___1)); }
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
#endif // VIEWERTRAYALIGNMENT_T2918958100_H
#ifndef OBB3D_T1659486782_H
#define OBB3D_T1659486782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/Obb3D
#pragma pack(push, tp, 1)
struct  Obb3D_t1659486782 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/Obb3D::center
	Vector3_t539014097  ___center_0;
	// UnityEngine.Vector3 Vuforia.TrackerData/Obb3D::halfExtents
	Vector3_t539014097  ___halfExtents_1;
	// System.Single Vuforia.TrackerData/Obb3D::rotationZ
	float ___rotationZ_2;
	// System.Int32 Vuforia.TrackerData/Obb3D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb3D_t1659486782, ___center_0)); }
	inline Vector3_t539014097  get_center_0() const { return ___center_0; }
	inline Vector3_t539014097 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector3_t539014097  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb3D_t1659486782, ___halfExtents_1)); }
	inline Vector3_t539014097  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector3_t539014097 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector3_t539014097  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotationZ_2() { return static_cast<int32_t>(offsetof(Obb3D_t1659486782, ___rotationZ_2)); }
	inline float get_rotationZ_2() const { return ___rotationZ_2; }
	inline float* get_address_of_rotationZ_2() { return &___rotationZ_2; }
	inline void set_rotationZ_2(float value)
	{
		___rotationZ_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb3D_t1659486782, ___unused_3)); }
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
#endif // OBB3D_T1659486782_H
#ifndef MESHDATA_T1154790071_H
#define MESHDATA_T1154790071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/MeshData
#pragma pack(push, tp, 1)
struct  MeshData_t1154790071 
{
public:
	// System.IntPtr Vuforia.TrackerData/MeshData::positionsArray
	intptr_t ___positionsArray_0;
	// System.IntPtr Vuforia.TrackerData/MeshData::normalsArray
	intptr_t ___normalsArray_1;
	// System.IntPtr Vuforia.TrackerData/MeshData::texCoordsArray
	intptr_t ___texCoordsArray_2;
	// System.IntPtr Vuforia.TrackerData/MeshData::triangleIdxArray
	intptr_t ___triangleIdxArray_3;
	// System.Int32 Vuforia.TrackerData/MeshData::numVertexValues
	int32_t ___numVertexValues_4;
	// System.Int32 Vuforia.TrackerData/MeshData::hasNormals
	int32_t ___hasNormals_5;
	// System.Int32 Vuforia.TrackerData/MeshData::hasTexCoords
	int32_t ___hasTexCoords_6;
	// System.Int32 Vuforia.TrackerData/MeshData::numTriangleIndices
	int32_t ___numTriangleIndices_7;

public:
	inline static int32_t get_offset_of_positionsArray_0() { return static_cast<int32_t>(offsetof(MeshData_t1154790071, ___positionsArray_0)); }
	inline intptr_t get_positionsArray_0() const { return ___positionsArray_0; }
	inline intptr_t* get_address_of_positionsArray_0() { return &___positionsArray_0; }
	inline void set_positionsArray_0(intptr_t value)
	{
		___positionsArray_0 = value;
	}

	inline static int32_t get_offset_of_normalsArray_1() { return static_cast<int32_t>(offsetof(MeshData_t1154790071, ___normalsArray_1)); }
	inline intptr_t get_normalsArray_1() const { return ___normalsArray_1; }
	inline intptr_t* get_address_of_normalsArray_1() { return &___normalsArray_1; }
	inline void set_normalsArray_1(intptr_t value)
	{
		___normalsArray_1 = value;
	}

	inline static int32_t get_offset_of_texCoordsArray_2() { return static_cast<int32_t>(offsetof(MeshData_t1154790071, ___texCoordsArray_2)); }
	inline intptr_t get_texCoordsArray_2() const { return ___texCoordsArray_2; }
	inline intptr_t* get_address_of_texCoordsArray_2() { return &___texCoordsArray_2; }
	inline void set_texCoordsArray_2(intptr_t value)
	{
		___texCoordsArray_2 = value;
	}

	inline static int32_t get_offset_of_triangleIdxArray_3() { return static_cast<int32_t>(offsetof(MeshData_t1154790071, ___triangleIdxArray_3)); }
	inline intptr_t get_triangleIdxArray_3() const { return ___triangleIdxArray_3; }
	inline intptr_t* get_address_of_triangleIdxArray_3() { return &___triangleIdxArray_3; }
	inline void set_triangleIdxArray_3(intptr_t value)
	{
		___triangleIdxArray_3 = value;
	}

	inline static int32_t get_offset_of_numVertexValues_4() { return static_cast<int32_t>(offsetof(MeshData_t1154790071, ___numVertexValues_4)); }
	inline int32_t get_numVertexValues_4() const { return ___numVertexValues_4; }
	inline int32_t* get_address_of_numVertexValues_4() { return &___numVertexValues_4; }
	inline void set_numVertexValues_4(int32_t value)
	{
		___numVertexValues_4 = value;
	}

	inline static int32_t get_offset_of_hasNormals_5() { return static_cast<int32_t>(offsetof(MeshData_t1154790071, ___hasNormals_5)); }
	inline int32_t get_hasNormals_5() const { return ___hasNormals_5; }
	inline int32_t* get_address_of_hasNormals_5() { return &___hasNormals_5; }
	inline void set_hasNormals_5(int32_t value)
	{
		___hasNormals_5 = value;
	}

	inline static int32_t get_offset_of_hasTexCoords_6() { return static_cast<int32_t>(offsetof(MeshData_t1154790071, ___hasTexCoords_6)); }
	inline int32_t get_hasTexCoords_6() const { return ___hasTexCoords_6; }
	inline int32_t* get_address_of_hasTexCoords_6() { return &___hasTexCoords_6; }
	inline void set_hasTexCoords_6(int32_t value)
	{
		___hasTexCoords_6 = value;
	}

	inline static int32_t get_offset_of_numTriangleIndices_7() { return static_cast<int32_t>(offsetof(MeshData_t1154790071, ___numTriangleIndices_7)); }
	inline int32_t get_numTriangleIndices_7() const { return ___numTriangleIndices_7; }
	inline int32_t* get_address_of_numTriangleIndices_7() { return &___numTriangleIndices_7; }
	inline void set_numTriangleIndices_7(int32_t value)
	{
		___numTriangleIndices_7 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHDATA_T1154790071_H
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
#ifndef CAMERACONFIGURATIONUTILITY_T3801853321_H
#define CAMERACONFIGURATIONUTILITY_T3801853321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraConfigurationUtility
struct  CameraConfigurationUtility_t3801853321  : public RuntimeObject
{
public:

public:
};

struct CameraConfigurationUtility_t3801853321_StaticFields
{
public:
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_CENTER
	Vector4_t3197448751  ___MIN_CENTER_0;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_CENTER
	Vector4_t3197448751  ___MAX_CENTER_1;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_BOTTOM
	Vector4_t3197448751  ___MIN_BOTTOM_2;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_TOP
	Vector4_t3197448751  ___MIN_TOP_3;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_LEFT
	Vector4_t3197448751  ___MIN_LEFT_4;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_RIGHT
	Vector4_t3197448751  ___MIN_RIGHT_5;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_BOTTOM
	Vector4_t3197448751  ___MAX_BOTTOM_6;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_TOP
	Vector4_t3197448751  ___MAX_TOP_7;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_LEFT
	Vector4_t3197448751  ___MAX_LEFT_8;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_RIGHT
	Vector4_t3197448751  ___MAX_RIGHT_9;

public:
	inline static int32_t get_offset_of_MIN_CENTER_0() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MIN_CENTER_0)); }
	inline Vector4_t3197448751  get_MIN_CENTER_0() const { return ___MIN_CENTER_0; }
	inline Vector4_t3197448751 * get_address_of_MIN_CENTER_0() { return &___MIN_CENTER_0; }
	inline void set_MIN_CENTER_0(Vector4_t3197448751  value)
	{
		___MIN_CENTER_0 = value;
	}

	inline static int32_t get_offset_of_MAX_CENTER_1() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MAX_CENTER_1)); }
	inline Vector4_t3197448751  get_MAX_CENTER_1() const { return ___MAX_CENTER_1; }
	inline Vector4_t3197448751 * get_address_of_MAX_CENTER_1() { return &___MAX_CENTER_1; }
	inline void set_MAX_CENTER_1(Vector4_t3197448751  value)
	{
		___MAX_CENTER_1 = value;
	}

	inline static int32_t get_offset_of_MIN_BOTTOM_2() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MIN_BOTTOM_2)); }
	inline Vector4_t3197448751  get_MIN_BOTTOM_2() const { return ___MIN_BOTTOM_2; }
	inline Vector4_t3197448751 * get_address_of_MIN_BOTTOM_2() { return &___MIN_BOTTOM_2; }
	inline void set_MIN_BOTTOM_2(Vector4_t3197448751  value)
	{
		___MIN_BOTTOM_2 = value;
	}

	inline static int32_t get_offset_of_MIN_TOP_3() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MIN_TOP_3)); }
	inline Vector4_t3197448751  get_MIN_TOP_3() const { return ___MIN_TOP_3; }
	inline Vector4_t3197448751 * get_address_of_MIN_TOP_3() { return &___MIN_TOP_3; }
	inline void set_MIN_TOP_3(Vector4_t3197448751  value)
	{
		___MIN_TOP_3 = value;
	}

	inline static int32_t get_offset_of_MIN_LEFT_4() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MIN_LEFT_4)); }
	inline Vector4_t3197448751  get_MIN_LEFT_4() const { return ___MIN_LEFT_4; }
	inline Vector4_t3197448751 * get_address_of_MIN_LEFT_4() { return &___MIN_LEFT_4; }
	inline void set_MIN_LEFT_4(Vector4_t3197448751  value)
	{
		___MIN_LEFT_4 = value;
	}

	inline static int32_t get_offset_of_MIN_RIGHT_5() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MIN_RIGHT_5)); }
	inline Vector4_t3197448751  get_MIN_RIGHT_5() const { return ___MIN_RIGHT_5; }
	inline Vector4_t3197448751 * get_address_of_MIN_RIGHT_5() { return &___MIN_RIGHT_5; }
	inline void set_MIN_RIGHT_5(Vector4_t3197448751  value)
	{
		___MIN_RIGHT_5 = value;
	}

	inline static int32_t get_offset_of_MAX_BOTTOM_6() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MAX_BOTTOM_6)); }
	inline Vector4_t3197448751  get_MAX_BOTTOM_6() const { return ___MAX_BOTTOM_6; }
	inline Vector4_t3197448751 * get_address_of_MAX_BOTTOM_6() { return &___MAX_BOTTOM_6; }
	inline void set_MAX_BOTTOM_6(Vector4_t3197448751  value)
	{
		___MAX_BOTTOM_6 = value;
	}

	inline static int32_t get_offset_of_MAX_TOP_7() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MAX_TOP_7)); }
	inline Vector4_t3197448751  get_MAX_TOP_7() const { return ___MAX_TOP_7; }
	inline Vector4_t3197448751 * get_address_of_MAX_TOP_7() { return &___MAX_TOP_7; }
	inline void set_MAX_TOP_7(Vector4_t3197448751  value)
	{
		___MAX_TOP_7 = value;
	}

	inline static int32_t get_offset_of_MAX_LEFT_8() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MAX_LEFT_8)); }
	inline Vector4_t3197448751  get_MAX_LEFT_8() const { return ___MAX_LEFT_8; }
	inline Vector4_t3197448751 * get_address_of_MAX_LEFT_8() { return &___MAX_LEFT_8; }
	inline void set_MAX_LEFT_8(Vector4_t3197448751  value)
	{
		___MAX_LEFT_8 = value;
	}

	inline static int32_t get_offset_of_MAX_RIGHT_9() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_t3801853321_StaticFields, ___MAX_RIGHT_9)); }
	inline Vector4_t3197448751  get_MAX_RIGHT_9() const { return ___MAX_RIGHT_9; }
	inline Vector4_t3197448751 * get_address_of_MAX_RIGHT_9() { return &___MAX_RIGHT_9; }
	inline void set_MAX_RIGHT_9(Vector4_t3197448751  value)
	{
		___MAX_RIGHT_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONFIGURATIONUTILITY_T3801853321_H
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
#ifndef PLAYMODEEYEWEARDEVICE_T2003789254_H
#define PLAYMODEEYEWEARDEVICE_T2003789254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlayModeEyewearDevice
struct  PlayModeEyewearDevice_t2003789254  : public EyewearDevice_t843669954
{
public:
	// Vuforia.EyewearCalibrationProfileManager Vuforia.PlayModeEyewearDevice::mProfileManager
	EyewearCalibrationProfileManager_t67902827 * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.PlayModeEyewearDevice::mCalibrator
	EyewearUserCalibrator_t900913685 * ___mCalibrator_2;
	// System.Boolean Vuforia.PlayModeEyewearDevice::mDummyPredictiveTracking
	bool ___mDummyPredictiveTracking_3;

public:
	inline static int32_t get_offset_of_mProfileManager_1() { return static_cast<int32_t>(offsetof(PlayModeEyewearDevice_t2003789254, ___mProfileManager_1)); }
	inline EyewearCalibrationProfileManager_t67902827 * get_mProfileManager_1() const { return ___mProfileManager_1; }
	inline EyewearCalibrationProfileManager_t67902827 ** get_address_of_mProfileManager_1() { return &___mProfileManager_1; }
	inline void set_mProfileManager_1(EyewearCalibrationProfileManager_t67902827 * value)
	{
		___mProfileManager_1 = value;
		Il2CppCodeGenWriteBarrier((&___mProfileManager_1), value);
	}

	inline static int32_t get_offset_of_mCalibrator_2() { return static_cast<int32_t>(offsetof(PlayModeEyewearDevice_t2003789254, ___mCalibrator_2)); }
	inline EyewearUserCalibrator_t900913685 * get_mCalibrator_2() const { return ___mCalibrator_2; }
	inline EyewearUserCalibrator_t900913685 ** get_address_of_mCalibrator_2() { return &___mCalibrator_2; }
	inline void set_mCalibrator_2(EyewearUserCalibrator_t900913685 * value)
	{
		___mCalibrator_2 = value;
		Il2CppCodeGenWriteBarrier((&___mCalibrator_2), value);
	}

	inline static int32_t get_offset_of_mDummyPredictiveTracking_3() { return static_cast<int32_t>(offsetof(PlayModeEyewearDevice_t2003789254, ___mDummyPredictiveTracking_3)); }
	inline bool get_mDummyPredictiveTracking_3() const { return ___mDummyPredictiveTracking_3; }
	inline bool* get_address_of_mDummyPredictiveTracking_3() { return &___mDummyPredictiveTracking_3; }
	inline void set_mDummyPredictiveTracking_3(bool value)
	{
		___mDummyPredictiveTracking_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODEEYEWEARDEVICE_T2003789254_H
#ifndef SEETHROUGHCONFIGURATION_T1665446849_H
#define SEETHROUGHCONFIGURATION_T1665446849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/SeeThroughConfiguration
struct  SeeThroughConfiguration_t1665446849 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/SeeThroughConfiguration::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeeThroughConfiguration_t1665446849, ___value___1)); }
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
#endif // SEETHROUGHCONFIGURATION_T1665446849_H
#ifndef EYEID_T3105909960_H
#define EYEID_T3105909960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice/EyeID
struct  EyeID_t3105909960 
{
public:
	// System.Int32 Vuforia.EyewearDevice/EyeID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EyeID_t3105909960, ___value___1)); }
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
#endif // EYEID_T3105909960_H
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
#ifndef GUIDEVIEW_T4109920118_H
#define GUIDEVIEW_T4109920118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideView
struct  GuideView_t4109920118  : public RuntimeObject
{
public:
	// Vuforia.Image Vuforia.GuideView::<Image>k__BackingField
	Image_t1244443439 * ___U3CImageU3Ek__BackingField_0;
	// System.IntPtr Vuforia.GuideView::mInstancePtr
	intptr_t ___mInstancePtr_1;
	// UnityEngine.Matrix4x4 Vuforia.GuideView::mPose
	Matrix4x4_t54425537  ___mPose_2;

public:
	inline static int32_t get_offset_of_U3CImageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GuideView_t4109920118, ___U3CImageU3Ek__BackingField_0)); }
	inline Image_t1244443439 * get_U3CImageU3Ek__BackingField_0() const { return ___U3CImageU3Ek__BackingField_0; }
	inline Image_t1244443439 ** get_address_of_U3CImageU3Ek__BackingField_0() { return &___U3CImageU3Ek__BackingField_0; }
	inline void set_U3CImageU3Ek__BackingField_0(Image_t1244443439 * value)
	{
		___U3CImageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CImageU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_mInstancePtr_1() { return static_cast<int32_t>(offsetof(GuideView_t4109920118, ___mInstancePtr_1)); }
	inline intptr_t get_mInstancePtr_1() const { return ___mInstancePtr_1; }
	inline intptr_t* get_address_of_mInstancePtr_1() { return &___mInstancePtr_1; }
	inline void set_mInstancePtr_1(intptr_t value)
	{
		___mInstancePtr_1 = value;
	}

	inline static int32_t get_offset_of_mPose_2() { return static_cast<int32_t>(offsetof(GuideView_t4109920118, ___mPose_2)); }
	inline Matrix4x4_t54425537  get_mPose_2() const { return ___mPose_2; }
	inline Matrix4x4_t54425537 * get_address_of_mPose_2() { return &___mPose_2; }
	inline void set_mPose_2(Matrix4x4_t54425537  value)
	{
		___mPose_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEW_T4109920118_H
#ifndef DEDICATEDEYEWEARDEVICE_T2829071742_H
#define DEDICATEDEYEWEARDEVICE_T2829071742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearDevice
struct  DedicatedEyewearDevice_t2829071742  : public EyewearDevice_t843669954
{
public:
	// Vuforia.EyewearCalibrationProfileManager Vuforia.DedicatedEyewearDevice::mProfileManager
	EyewearCalibrationProfileManager_t67902827 * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.DedicatedEyewearDevice::mCalibrator
	EyewearUserCalibrator_t900913685 * ___mCalibrator_2;

public:
	inline static int32_t get_offset_of_mProfileManager_1() { return static_cast<int32_t>(offsetof(DedicatedEyewearDevice_t2829071742, ___mProfileManager_1)); }
	inline EyewearCalibrationProfileManager_t67902827 * get_mProfileManager_1() const { return ___mProfileManager_1; }
	inline EyewearCalibrationProfileManager_t67902827 ** get_address_of_mProfileManager_1() { return &___mProfileManager_1; }
	inline void set_mProfileManager_1(EyewearCalibrationProfileManager_t67902827 * value)
	{
		___mProfileManager_1 = value;
		Il2CppCodeGenWriteBarrier((&___mProfileManager_1), value);
	}

	inline static int32_t get_offset_of_mCalibrator_2() { return static_cast<int32_t>(offsetof(DedicatedEyewearDevice_t2829071742, ___mCalibrator_2)); }
	inline EyewearUserCalibrator_t900913685 * get_mCalibrator_2() const { return ___mCalibrator_2; }
	inline EyewearUserCalibrator_t900913685 ** get_address_of_mCalibrator_2() { return &___mCalibrator_2; }
	inline void set_mCalibrator_2(EyewearUserCalibrator_t900913685 * value)
	{
		___mCalibrator_2 = value;
		Il2CppCodeGenWriteBarrier((&___mCalibrator_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEDICATEDEYEWEARDEVICE_T2829071742_H
#ifndef MODE_T2991753559_H
#define MODE_T2991753559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StereoProjMatrixStore/Mode
struct  Mode_t2991753559 
{
public:
	// System.Int32 Vuforia.StereoProjMatrixStore/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t2991753559, ___value___1)); }
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
#endif // MODE_T2991753559_H
#ifndef PLANEPOS_T2646182763_H
#define PLANEPOS_T2646182763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlanesHideExcessAreaClipping/PlanePos
struct  PlanePos_t2646182763 
{
public:
	// System.Int32 Vuforia.PlanesHideExcessAreaClipping/PlanePos::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlanePos_t2646182763, ___value___1)); }
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
#endif // PLANEPOS_T2646182763_H
#ifndef PLANESHIDEEXCESSAREACLIPPING_T2216037153_H
#define PLANESHIDEEXCESSAREACLIPPING_T2216037153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlanesHideExcessAreaClipping
struct  PlanesHideExcessAreaClipping_t2216037153  : public RuntimeObject
{
public:
	// UnityEngine.Shader Vuforia.PlanesHideExcessAreaClipping::mMatteShader
	Shader_t4132480776 * ___mMatteShader_1;
	// UnityEngine.GameObject[] Vuforia.PlanesHideExcessAreaClipping::mClippingPlanes
	GameObjectU5BU5D_t2076750695* ___mClippingPlanes_2;
	// System.Boolean Vuforia.PlanesHideExcessAreaClipping::mPlanesActivated
	bool ___mPlanesActivated_3;
	// UnityEngine.Vector2 Vuforia.PlanesHideExcessAreaClipping::mClippingScale
	Vector2_t3629302141  ___mClippingScale_4;

public:
	inline static int32_t get_offset_of_mMatteShader_1() { return static_cast<int32_t>(offsetof(PlanesHideExcessAreaClipping_t2216037153, ___mMatteShader_1)); }
	inline Shader_t4132480776 * get_mMatteShader_1() const { return ___mMatteShader_1; }
	inline Shader_t4132480776 ** get_address_of_mMatteShader_1() { return &___mMatteShader_1; }
	inline void set_mMatteShader_1(Shader_t4132480776 * value)
	{
		___mMatteShader_1 = value;
		Il2CppCodeGenWriteBarrier((&___mMatteShader_1), value);
	}

	inline static int32_t get_offset_of_mClippingPlanes_2() { return static_cast<int32_t>(offsetof(PlanesHideExcessAreaClipping_t2216037153, ___mClippingPlanes_2)); }
	inline GameObjectU5BU5D_t2076750695* get_mClippingPlanes_2() const { return ___mClippingPlanes_2; }
	inline GameObjectU5BU5D_t2076750695** get_address_of_mClippingPlanes_2() { return &___mClippingPlanes_2; }
	inline void set_mClippingPlanes_2(GameObjectU5BU5D_t2076750695* value)
	{
		___mClippingPlanes_2 = value;
		Il2CppCodeGenWriteBarrier((&___mClippingPlanes_2), value);
	}

	inline static int32_t get_offset_of_mPlanesActivated_3() { return static_cast<int32_t>(offsetof(PlanesHideExcessAreaClipping_t2216037153, ___mPlanesActivated_3)); }
	inline bool get_mPlanesActivated_3() const { return ___mPlanesActivated_3; }
	inline bool* get_address_of_mPlanesActivated_3() { return &___mPlanesActivated_3; }
	inline void set_mPlanesActivated_3(bool value)
	{
		___mPlanesActivated_3 = value;
	}

	inline static int32_t get_offset_of_mClippingScale_4() { return static_cast<int32_t>(offsetof(PlanesHideExcessAreaClipping_t2216037153, ___mClippingScale_4)); }
	inline Vector2_t3629302141  get_mClippingScale_4() const { return ___mClippingScale_4; }
	inline Vector2_t3629302141 * get_address_of_mClippingScale_4() { return &___mClippingScale_4; }
	inline void set_mClippingScale_4(Vector2_t3629302141  value)
	{
		___mClippingScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANESHIDEEXCESSAREACLIPPING_T2216037153_H
#ifndef STEREOFRAMEWORK_T2572441663_H
#define STEREOFRAMEWORK_T2572441663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/StereoFramework
struct  StereoFramework_t2572441663 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/StereoFramework::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StereoFramework_t2572441663, ___value___1)); }
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
#endif // STEREOFRAMEWORK_T2572441663_H
#ifndef DATASETEXTENDEDTRACKINGIMPL_T2868923405_H
#define DATASETEXTENDEDTRACKINGIMPL_T2868923405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetExtendedTrackingImpl
struct  DataSetExtendedTrackingImpl_t2868923405  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.DataSetExtendedTrackingImpl::mId
	int32_t ___mId_0;
	// System.IntPtr Vuforia.DataSetExtendedTrackingImpl::mDataSetPtr
	intptr_t ___mDataSetPtr_1;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(DataSetExtendedTrackingImpl_t2868923405, ___mId_0)); }
	inline int32_t get_mId_0() const { return ___mId_0; }
	inline int32_t* get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(int32_t value)
	{
		___mId_0 = value;
	}

	inline static int32_t get_offset_of_mDataSetPtr_1() { return static_cast<int32_t>(offsetof(DataSetExtendedTrackingImpl_t2868923405, ___mDataSetPtr_1)); }
	inline intptr_t get_mDataSetPtr_1() const { return ___mDataSetPtr_1; }
	inline intptr_t* get_address_of_mDataSetPtr_1() { return &___mDataSetPtr_1; }
	inline void set_mDataSetPtr_1(intptr_t value)
	{
		___mDataSetPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETEXTENDEDTRACKINGIMPL_T2868923405_H
#ifndef HITTESTRESULTDATA_T3988651323_H
#define HITTESTRESULTDATA_T3988651323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HitTestResultData
struct  HitTestResultData_t3988651323 
{
public:
	// System.Single[] Vuforia.HitTestResultData::Position
	SingleU5BU5D_t1095654037* ___Position_0;
	// System.Single[] Vuforia.HitTestResultData::Orientation
	SingleU5BU5D_t1095654037* ___Orientation_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(HitTestResultData_t3988651323, ___Position_0)); }
	inline SingleU5BU5D_t1095654037* get_Position_0() const { return ___Position_0; }
	inline SingleU5BU5D_t1095654037** get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(SingleU5BU5D_t1095654037* value)
	{
		___Position_0 = value;
		Il2CppCodeGenWriteBarrier((&___Position_0), value);
	}

	inline static int32_t get_offset_of_Orientation_1() { return static_cast<int32_t>(offsetof(HitTestResultData_t3988651323, ___Orientation_1)); }
	inline SingleU5BU5D_t1095654037* get_Orientation_1() const { return ___Orientation_1; }
	inline SingleU5BU5D_t1095654037** get_address_of_Orientation_1() { return &___Orientation_1; }
	inline void set_Orientation_1(SingleU5BU5D_t1095654037* value)
	{
		___Orientation_1 = value;
		Il2CppCodeGenWriteBarrier((&___Orientation_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.HitTestResultData
#pragma pack(push, tp, 1)
struct HitTestResultData_t3988651323_marshaled_pinvoke
{
	float ___Position_0[3];
	float ___Orientation_1[4];
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.HitTestResultData
#pragma pack(push, tp, 1)
struct HitTestResultData_t3988651323_marshaled_com
{
	float ___Position_0[3];
	float ___Orientation_1[4];
};
#pragma pack(pop, tp)
#endif // HITTESTRESULTDATA_T3988651323_H
#ifndef VUFORIANATIVEEXTENDEDTRACKINGIMPL_T2479501537_H
#define VUFORIANATIVEEXTENDEDTRACKINGIMPL_T2479501537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaNativeExtendedTrackingImpl
struct  VuforiaNativeExtendedTrackingImpl_t2479501537  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.VuforiaNativeExtendedTrackingImpl::mId
	int32_t ___mId_0;
	// System.IntPtr Vuforia.VuforiaNativeExtendedTrackingImpl::mDataSetPtr
	intptr_t ___mDataSetPtr_1;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(VuforiaNativeExtendedTrackingImpl_t2479501537, ___mId_0)); }
	inline int32_t get_mId_0() const { return ___mId_0; }
	inline int32_t* get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(int32_t value)
	{
		___mId_0 = value;
	}

	inline static int32_t get_offset_of_mDataSetPtr_1() { return static_cast<int32_t>(offsetof(VuforiaNativeExtendedTrackingImpl_t2479501537, ___mDataSetPtr_1)); }
	inline intptr_t get_mDataSetPtr_1() const { return ___mDataSetPtr_1; }
	inline intptr_t* get_address_of_mDataSetPtr_1() { return &___mDataSetPtr_1; }
	inline void set_mDataSetPtr_1(intptr_t value)
	{
		___mDataSetPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIANATIVEEXTENDEDTRACKINGIMPL_T2479501537_H
#ifndef EYEWEARTYPE_T16315864_H
#define EYEWEARTYPE_T16315864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/EyewearType
struct  EyewearType_t16315864 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/EyewearType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EyewearType_t16315864, ___value___1)); }
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
#endif // EYEWEARTYPE_T16315864_H
#ifndef TRACKING_MODE_T987991041_H
#define TRACKING_MODE_T987991041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker/TRACKING_MODE
struct  TRACKING_MODE_t987991041 
{
public:
	// System.Int32 Vuforia.DeviceTracker/TRACKING_MODE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TRACKING_MODE_t987991041, ___value___1)); }
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
#endif // TRACKING_MODE_T987991041_H
#ifndef DATASETTARGETSIZE_T3700719347_H
#define DATASETTARGETSIZE_T3700719347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTargetSize
struct  DataSetTargetSize_t3700719347  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DataSetTargetSize::mSize
	Vector3_t539014097  ___mSize_0;
	// System.String Vuforia.DataSetTargetSize::mName
	String_t* ___mName_1;
	// Vuforia.DataSet Vuforia.DataSetTargetSize::mDataSet
	DataSet_t560010602 * ___mDataSet_2;

public:
	inline static int32_t get_offset_of_mSize_0() { return static_cast<int32_t>(offsetof(DataSetTargetSize_t3700719347, ___mSize_0)); }
	inline Vector3_t539014097  get_mSize_0() const { return ___mSize_0; }
	inline Vector3_t539014097 * get_address_of_mSize_0() { return &___mSize_0; }
	inline void set_mSize_0(Vector3_t539014097  value)
	{
		___mSize_0 = value;
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(DataSetTargetSize_t3700719347, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mName_1), value);
	}

	inline static int32_t get_offset_of_mDataSet_2() { return static_cast<int32_t>(offsetof(DataSetTargetSize_t3700719347, ___mDataSet_2)); }
	inline DataSet_t560010602 * get_mDataSet_2() const { return ___mDataSet_2; }
	inline DataSet_t560010602 ** get_address_of_mDataSet_2() { return &___mDataSet_2; }
	inline void set_mDataSet_2(DataSet_t560010602 * value)
	{
		___mDataSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTARGETSIZE_T3700719347_H
#ifndef DISABLEDSETTARGETSIZE_T220308948_H
#define DISABLEDSETTARGETSIZE_T220308948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DisabledSetTargetSize
struct  DisabledSetTargetSize_t220308948  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DisabledSetTargetSize::mSize
	Vector3_t539014097  ___mSize_0;

public:
	inline static int32_t get_offset_of_mSize_0() { return static_cast<int32_t>(offsetof(DisabledSetTargetSize_t220308948, ___mSize_0)); }
	inline Vector3_t539014097  get_mSize_0() const { return ___mSize_0; }
	inline Vector3_t539014097 * get_address_of_mSize_0() { return &___mSize_0; }
	inline void set_mSize_0(Vector3_t539014097  value)
	{
		___mSize_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISABLEDSETTARGETSIZE_T220308948_H
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
#ifndef BASECAMERACONFIGURATION_T575072495_H
#define BASECAMERACONFIGURATION_T575072495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BaseCameraConfiguration
struct  BaseCameraConfiguration_t575072495  : public RuntimeObject
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.BaseCameraConfiguration::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_0;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mLastVideoBackGroundMirroredFromSDK
	int32_t ___mLastVideoBackGroundMirroredFromSDK_1;
	// System.Action Vuforia.BaseCameraConfiguration::mOnVideoBackgroundConfigChanged
	Action_t893261993 * ___mOnVideoBackgroundConfigChanged_2;
	// Vuforia.VideoBackgroundBehaviour Vuforia.BaseCameraConfiguration::mVideoBackgroundBehaviour
	VideoBackgroundBehaviour_t2826939206 * ___mVideoBackgroundBehaviour_3;
	// UnityEngine.Rect Vuforia.BaseCameraConfiguration::mVideoBackgroundViewportRect
	Rect_t2130476699  ___mVideoBackgroundViewportRect_4;
	// System.Boolean Vuforia.BaseCameraConfiguration::mRenderVideoBackground
	bool ___mRenderVideoBackground_5;
	// UnityEngine.ScreenOrientation Vuforia.BaseCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_6;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mInitialReflection
	int32_t ___mInitialReflection_7;
	// Vuforia.BackgroundPlaneBehaviour Vuforia.BaseCameraConfiguration::mBackgroundPlaneBehaviour
	BackgroundPlaneBehaviour_t4133738360 * ___mBackgroundPlaneBehaviour_8;
	// System.Boolean Vuforia.BaseCameraConfiguration::mCameraParameterChanged
	bool ___mCameraParameterChanged_9;

public:
	inline static int32_t get_offset_of_mCameraDeviceMode_0() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mCameraDeviceMode_0)); }
	inline int32_t get_mCameraDeviceMode_0() const { return ___mCameraDeviceMode_0; }
	inline int32_t* get_address_of_mCameraDeviceMode_0() { return &___mCameraDeviceMode_0; }
	inline void set_mCameraDeviceMode_0(int32_t value)
	{
		___mCameraDeviceMode_0 = value;
	}

	inline static int32_t get_offset_of_mLastVideoBackGroundMirroredFromSDK_1() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mLastVideoBackGroundMirroredFromSDK_1)); }
	inline int32_t get_mLastVideoBackGroundMirroredFromSDK_1() const { return ___mLastVideoBackGroundMirroredFromSDK_1; }
	inline int32_t* get_address_of_mLastVideoBackGroundMirroredFromSDK_1() { return &___mLastVideoBackGroundMirroredFromSDK_1; }
	inline void set_mLastVideoBackGroundMirroredFromSDK_1(int32_t value)
	{
		___mLastVideoBackGroundMirroredFromSDK_1 = value;
	}

	inline static int32_t get_offset_of_mOnVideoBackgroundConfigChanged_2() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mOnVideoBackgroundConfigChanged_2)); }
	inline Action_t893261993 * get_mOnVideoBackgroundConfigChanged_2() const { return ___mOnVideoBackgroundConfigChanged_2; }
	inline Action_t893261993 ** get_address_of_mOnVideoBackgroundConfigChanged_2() { return &___mOnVideoBackgroundConfigChanged_2; }
	inline void set_mOnVideoBackgroundConfigChanged_2(Action_t893261993 * value)
	{
		___mOnVideoBackgroundConfigChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVideoBackgroundConfigChanged_2), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundBehaviour_3() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mVideoBackgroundBehaviour_3)); }
	inline VideoBackgroundBehaviour_t2826939206 * get_mVideoBackgroundBehaviour_3() const { return ___mVideoBackgroundBehaviour_3; }
	inline VideoBackgroundBehaviour_t2826939206 ** get_address_of_mVideoBackgroundBehaviour_3() { return &___mVideoBackgroundBehaviour_3; }
	inline void set_mVideoBackgroundBehaviour_3(VideoBackgroundBehaviour_t2826939206 * value)
	{
		___mVideoBackgroundBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundBehaviour_3), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundViewportRect_4() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mVideoBackgroundViewportRect_4)); }
	inline Rect_t2130476699  get_mVideoBackgroundViewportRect_4() const { return ___mVideoBackgroundViewportRect_4; }
	inline Rect_t2130476699 * get_address_of_mVideoBackgroundViewportRect_4() { return &___mVideoBackgroundViewportRect_4; }
	inline void set_mVideoBackgroundViewportRect_4(Rect_t2130476699  value)
	{
		___mVideoBackgroundViewportRect_4 = value;
	}

	inline static int32_t get_offset_of_mRenderVideoBackground_5() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mRenderVideoBackground_5)); }
	inline bool get_mRenderVideoBackground_5() const { return ___mRenderVideoBackground_5; }
	inline bool* get_address_of_mRenderVideoBackground_5() { return &___mRenderVideoBackground_5; }
	inline void set_mRenderVideoBackground_5(bool value)
	{
		___mRenderVideoBackground_5 = value;
	}

	inline static int32_t get_offset_of_mProjectionOrientation_6() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mProjectionOrientation_6)); }
	inline int32_t get_mProjectionOrientation_6() const { return ___mProjectionOrientation_6; }
	inline int32_t* get_address_of_mProjectionOrientation_6() { return &___mProjectionOrientation_6; }
	inline void set_mProjectionOrientation_6(int32_t value)
	{
		___mProjectionOrientation_6 = value;
	}

	inline static int32_t get_offset_of_mInitialReflection_7() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mInitialReflection_7)); }
	inline int32_t get_mInitialReflection_7() const { return ___mInitialReflection_7; }
	inline int32_t* get_address_of_mInitialReflection_7() { return &___mInitialReflection_7; }
	inline void set_mInitialReflection_7(int32_t value)
	{
		___mInitialReflection_7 = value;
	}

	inline static int32_t get_offset_of_mBackgroundPlaneBehaviour_8() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mBackgroundPlaneBehaviour_8)); }
	inline BackgroundPlaneBehaviour_t4133738360 * get_mBackgroundPlaneBehaviour_8() const { return ___mBackgroundPlaneBehaviour_8; }
	inline BackgroundPlaneBehaviour_t4133738360 ** get_address_of_mBackgroundPlaneBehaviour_8() { return &___mBackgroundPlaneBehaviour_8; }
	inline void set_mBackgroundPlaneBehaviour_8(BackgroundPlaneBehaviour_t4133738360 * value)
	{
		___mBackgroundPlaneBehaviour_8 = value;
		Il2CppCodeGenWriteBarrier((&___mBackgroundPlaneBehaviour_8), value);
	}

	inline static int32_t get_offset_of_mCameraParameterChanged_9() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t575072495, ___mCameraParameterChanged_9)); }
	inline bool get_mCameraParameterChanged_9() const { return ___mCameraParameterChanged_9; }
	inline bool* get_address_of_mCameraParameterChanged_9() { return &___mCameraParameterChanged_9; }
	inline void set_mCameraParameterChanged_9(bool value)
	{
		___mCameraParameterChanged_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECAMERACONFIGURATION_T575072495_H
#ifndef SERIALIZABLEVIEWERPARAMETERS_T19392574_H
#define SERIALIZABLEVIEWERPARAMETERS_T19392574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct  SerializableViewerParameters_t19392574  : public RuntimeObject
{
public:
	// System.Single Vuforia.DigitalEyewearARController/SerializableViewerParameters::Version
	float ___Version_0;
	// System.String Vuforia.DigitalEyewearARController/SerializableViewerParameters::Name
	String_t* ___Name_1;
	// System.String Vuforia.DigitalEyewearARController/SerializableViewerParameters::Manufacturer
	String_t* ___Manufacturer_2;
	// Vuforia.ViewerButtonType Vuforia.DigitalEyewearARController/SerializableViewerParameters::ButtonType
	int32_t ___ButtonType_3;
	// System.Single Vuforia.DigitalEyewearARController/SerializableViewerParameters::ScreenToLensDistance
	float ___ScreenToLensDistance_4;
	// System.Single Vuforia.DigitalEyewearARController/SerializableViewerParameters::InterLensDistance
	float ___InterLensDistance_5;
	// Vuforia.ViewerTrayAlignment Vuforia.DigitalEyewearARController/SerializableViewerParameters::TrayAlignment
	int32_t ___TrayAlignment_6;
	// System.Single Vuforia.DigitalEyewearARController/SerializableViewerParameters::LensCenterToTrayDistance
	float ___LensCenterToTrayDistance_7;
	// UnityEngine.Vector2 Vuforia.DigitalEyewearARController/SerializableViewerParameters::DistortionCoefficients
	Vector2_t3629302141  ___DistortionCoefficients_8;
	// UnityEngine.Vector4 Vuforia.DigitalEyewearARController/SerializableViewerParameters::FieldOfView
	Vector4_t3197448751  ___FieldOfView_9;
	// System.Boolean Vuforia.DigitalEyewearARController/SerializableViewerParameters::ContainsMagnet
	bool ___ContainsMagnet_10;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___Version_0)); }
	inline float get_Version_0() const { return ___Version_0; }
	inline float* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(float value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_Manufacturer_2() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___Manufacturer_2)); }
	inline String_t* get_Manufacturer_2() const { return ___Manufacturer_2; }
	inline String_t** get_address_of_Manufacturer_2() { return &___Manufacturer_2; }
	inline void set_Manufacturer_2(String_t* value)
	{
		___Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((&___Manufacturer_2), value);
	}

	inline static int32_t get_offset_of_ButtonType_3() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___ButtonType_3)); }
	inline int32_t get_ButtonType_3() const { return ___ButtonType_3; }
	inline int32_t* get_address_of_ButtonType_3() { return &___ButtonType_3; }
	inline void set_ButtonType_3(int32_t value)
	{
		___ButtonType_3 = value;
	}

	inline static int32_t get_offset_of_ScreenToLensDistance_4() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___ScreenToLensDistance_4)); }
	inline float get_ScreenToLensDistance_4() const { return ___ScreenToLensDistance_4; }
	inline float* get_address_of_ScreenToLensDistance_4() { return &___ScreenToLensDistance_4; }
	inline void set_ScreenToLensDistance_4(float value)
	{
		___ScreenToLensDistance_4 = value;
	}

	inline static int32_t get_offset_of_InterLensDistance_5() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___InterLensDistance_5)); }
	inline float get_InterLensDistance_5() const { return ___InterLensDistance_5; }
	inline float* get_address_of_InterLensDistance_5() { return &___InterLensDistance_5; }
	inline void set_InterLensDistance_5(float value)
	{
		___InterLensDistance_5 = value;
	}

	inline static int32_t get_offset_of_TrayAlignment_6() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___TrayAlignment_6)); }
	inline int32_t get_TrayAlignment_6() const { return ___TrayAlignment_6; }
	inline int32_t* get_address_of_TrayAlignment_6() { return &___TrayAlignment_6; }
	inline void set_TrayAlignment_6(int32_t value)
	{
		___TrayAlignment_6 = value;
	}

	inline static int32_t get_offset_of_LensCenterToTrayDistance_7() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___LensCenterToTrayDistance_7)); }
	inline float get_LensCenterToTrayDistance_7() const { return ___LensCenterToTrayDistance_7; }
	inline float* get_address_of_LensCenterToTrayDistance_7() { return &___LensCenterToTrayDistance_7; }
	inline void set_LensCenterToTrayDistance_7(float value)
	{
		___LensCenterToTrayDistance_7 = value;
	}

	inline static int32_t get_offset_of_DistortionCoefficients_8() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___DistortionCoefficients_8)); }
	inline Vector2_t3629302141  get_DistortionCoefficients_8() const { return ___DistortionCoefficients_8; }
	inline Vector2_t3629302141 * get_address_of_DistortionCoefficients_8() { return &___DistortionCoefficients_8; }
	inline void set_DistortionCoefficients_8(Vector2_t3629302141  value)
	{
		___DistortionCoefficients_8 = value;
	}

	inline static int32_t get_offset_of_FieldOfView_9() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___FieldOfView_9)); }
	inline Vector4_t3197448751  get_FieldOfView_9() const { return ___FieldOfView_9; }
	inline Vector4_t3197448751 * get_address_of_FieldOfView_9() { return &___FieldOfView_9; }
	inline void set_FieldOfView_9(Vector4_t3197448751  value)
	{
		___FieldOfView_9 = value;
	}

	inline static int32_t get_offset_of_ContainsMagnet_10() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t19392574, ___ContainsMagnet_10)); }
	inline bool get_ContainsMagnet_10() const { return ___ContainsMagnet_10; }
	inline bool* get_address_of_ContainsMagnet_10() { return &___ContainsMagnet_10; }
	inline void set_ContainsMagnet_10(bool value)
	{
		___ContainsMagnet_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVIEWERPARAMETERS_T19392574_H
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
#ifndef DIGITALEYEWEARARCONTROLLER_T1080435708_H
#define DIGITALEYEWEARARCONTROLLER_T1080435708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController
struct  DigitalEyewearARController_t1080435708  : public ARController_t4280554221
{
public:
	// System.Single Vuforia.DigitalEyewearARController::mCameraOffset
	float ___mCameraOffset_7;
	// System.Int32 Vuforia.DigitalEyewearARController::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_8;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.DigitalEyewearARController::mEyewearType
	int32_t ___mEyewearType_9;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.DigitalEyewearARController::mStereoFramework
	int32_t ___mStereoFramework_10;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.DigitalEyewearARController::mSeeThroughConfiguration
	int32_t ___mSeeThroughConfiguration_11;
	// System.String Vuforia.DigitalEyewearARController::mViewerName
	String_t* ___mViewerName_12;
	// System.String Vuforia.DigitalEyewearARController::mViewerManufacturer
	String_t* ___mViewerManufacturer_13;
	// System.Boolean Vuforia.DigitalEyewearARController::mUseCustomViewer
	bool ___mUseCustomViewer_14;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.DigitalEyewearARController::mCustomViewer
	SerializableViewerParameters_t19392574 * ___mCustomViewer_15;
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mCentralAnchorPoint
	Transform_t1912080223 * ___mCentralAnchorPoint_16;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mPrimaryCamera
	Camera_t3201429123 * ___mPrimaryCamera_17;
	// Vuforia.VuforiaARController Vuforia.DigitalEyewearARController::mVuforiaBehaviour
	VuforiaARController_t2746812198 * ___mVuforiaBehaviour_18;
	// System.Boolean Vuforia.DigitalEyewearARController::mSetFocusPlaneAutomatically
	bool ___mSetFocusPlaneAutomatically_19;
	// Vuforia.VRDeviceController Vuforia.DigitalEyewearARController::mVRDeviceController
	VRDeviceController_t3547063471 * ___mVRDeviceController_20;

public:
	inline static int32_t get_offset_of_mCameraOffset_7() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mCameraOffset_7)); }
	inline float get_mCameraOffset_7() const { return ___mCameraOffset_7; }
	inline float* get_address_of_mCameraOffset_7() { return &___mCameraOffset_7; }
	inline void set_mCameraOffset_7(float value)
	{
		___mCameraOffset_7 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_8() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mDistortionRenderingLayer_8)); }
	inline int32_t get_mDistortionRenderingLayer_8() const { return ___mDistortionRenderingLayer_8; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_8() { return &___mDistortionRenderingLayer_8; }
	inline void set_mDistortionRenderingLayer_8(int32_t value)
	{
		___mDistortionRenderingLayer_8 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_9() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mEyewearType_9)); }
	inline int32_t get_mEyewearType_9() const { return ___mEyewearType_9; }
	inline int32_t* get_address_of_mEyewearType_9() { return &___mEyewearType_9; }
	inline void set_mEyewearType_9(int32_t value)
	{
		___mEyewearType_9 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_10() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mStereoFramework_10)); }
	inline int32_t get_mStereoFramework_10() const { return ___mStereoFramework_10; }
	inline int32_t* get_address_of_mStereoFramework_10() { return &___mStereoFramework_10; }
	inline void set_mStereoFramework_10(int32_t value)
	{
		___mStereoFramework_10 = value;
	}

	inline static int32_t get_offset_of_mSeeThroughConfiguration_11() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mSeeThroughConfiguration_11)); }
	inline int32_t get_mSeeThroughConfiguration_11() const { return ___mSeeThroughConfiguration_11; }
	inline int32_t* get_address_of_mSeeThroughConfiguration_11() { return &___mSeeThroughConfiguration_11; }
	inline void set_mSeeThroughConfiguration_11(int32_t value)
	{
		___mSeeThroughConfiguration_11 = value;
	}

	inline static int32_t get_offset_of_mViewerName_12() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mViewerName_12)); }
	inline String_t* get_mViewerName_12() const { return ___mViewerName_12; }
	inline String_t** get_address_of_mViewerName_12() { return &___mViewerName_12; }
	inline void set_mViewerName_12(String_t* value)
	{
		___mViewerName_12 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerName_12), value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_13() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mViewerManufacturer_13)); }
	inline String_t* get_mViewerManufacturer_13() const { return ___mViewerManufacturer_13; }
	inline String_t** get_address_of_mViewerManufacturer_13() { return &___mViewerManufacturer_13; }
	inline void set_mViewerManufacturer_13(String_t* value)
	{
		___mViewerManufacturer_13 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerManufacturer_13), value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_14() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mUseCustomViewer_14)); }
	inline bool get_mUseCustomViewer_14() const { return ___mUseCustomViewer_14; }
	inline bool* get_address_of_mUseCustomViewer_14() { return &___mUseCustomViewer_14; }
	inline void set_mUseCustomViewer_14(bool value)
	{
		___mUseCustomViewer_14 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_15() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mCustomViewer_15)); }
	inline SerializableViewerParameters_t19392574 * get_mCustomViewer_15() const { return ___mCustomViewer_15; }
	inline SerializableViewerParameters_t19392574 ** get_address_of_mCustomViewer_15() { return &___mCustomViewer_15; }
	inline void set_mCustomViewer_15(SerializableViewerParameters_t19392574 * value)
	{
		___mCustomViewer_15 = value;
		Il2CppCodeGenWriteBarrier((&___mCustomViewer_15), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_16() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mCentralAnchorPoint_16)); }
	inline Transform_t1912080223 * get_mCentralAnchorPoint_16() const { return ___mCentralAnchorPoint_16; }
	inline Transform_t1912080223 ** get_address_of_mCentralAnchorPoint_16() { return &___mCentralAnchorPoint_16; }
	inline void set_mCentralAnchorPoint_16(Transform_t1912080223 * value)
	{
		___mCentralAnchorPoint_16 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_16), value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_17() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mPrimaryCamera_17)); }
	inline Camera_t3201429123 * get_mPrimaryCamera_17() const { return ___mPrimaryCamera_17; }
	inline Camera_t3201429123 ** get_address_of_mPrimaryCamera_17() { return &___mPrimaryCamera_17; }
	inline void set_mPrimaryCamera_17(Camera_t3201429123 * value)
	{
		___mPrimaryCamera_17 = value;
		Il2CppCodeGenWriteBarrier((&___mPrimaryCamera_17), value);
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_18() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mVuforiaBehaviour_18)); }
	inline VuforiaARController_t2746812198 * get_mVuforiaBehaviour_18() const { return ___mVuforiaBehaviour_18; }
	inline VuforiaARController_t2746812198 ** get_address_of_mVuforiaBehaviour_18() { return &___mVuforiaBehaviour_18; }
	inline void set_mVuforiaBehaviour_18(VuforiaARController_t2746812198 * value)
	{
		___mVuforiaBehaviour_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_18), value);
	}

	inline static int32_t get_offset_of_mSetFocusPlaneAutomatically_19() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mSetFocusPlaneAutomatically_19)); }
	inline bool get_mSetFocusPlaneAutomatically_19() const { return ___mSetFocusPlaneAutomatically_19; }
	inline bool* get_address_of_mSetFocusPlaneAutomatically_19() { return &___mSetFocusPlaneAutomatically_19; }
	inline void set_mSetFocusPlaneAutomatically_19(bool value)
	{
		___mSetFocusPlaneAutomatically_19 = value;
	}

	inline static int32_t get_offset_of_mVRDeviceController_20() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708, ___mVRDeviceController_20)); }
	inline VRDeviceController_t3547063471 * get_mVRDeviceController_20() const { return ___mVRDeviceController_20; }
	inline VRDeviceController_t3547063471 ** get_address_of_mVRDeviceController_20() { return &___mVRDeviceController_20; }
	inline void set_mVRDeviceController_20(VRDeviceController_t3547063471 * value)
	{
		___mVRDeviceController_20 = value;
		Il2CppCodeGenWriteBarrier((&___mVRDeviceController_20), value);
	}
};

struct DigitalEyewearARController_t1080435708_StaticFields
{
public:
	// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::mInstance
	DigitalEyewearARController_t1080435708 * ___mInstance_21;
	// System.Object Vuforia.DigitalEyewearARController::mPadlock
	RuntimeObject * ___mPadlock_22;

public:
	inline static int32_t get_offset_of_mInstance_21() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708_StaticFields, ___mInstance_21)); }
	inline DigitalEyewearARController_t1080435708 * get_mInstance_21() const { return ___mInstance_21; }
	inline DigitalEyewearARController_t1080435708 ** get_address_of_mInstance_21() { return &___mInstance_21; }
	inline void set_mInstance_21(DigitalEyewearARController_t1080435708 * value)
	{
		___mInstance_21 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_21), value);
	}

	inline static int32_t get_offset_of_mPadlock_22() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1080435708_StaticFields, ___mPadlock_22)); }
	inline RuntimeObject * get_mPadlock_22() const { return ___mPadlock_22; }
	inline RuntimeObject ** get_address_of_mPadlock_22() { return &___mPadlock_22; }
	inline void set_mPadlock_22(RuntimeObject * value)
	{
		___mPadlock_22 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITALEYEWEARARCONTROLLER_T1080435708_H
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
#ifndef CUSTOMDATASETTARGETSIZE_T3617445386_H
#define CUSTOMDATASETTARGETSIZE_T3617445386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CustomDataSetTargetSize
struct  CustomDataSetTargetSize_t3617445386  : public DataSetTargetSize_t3700719347
{
public:
	// System.Boolean Vuforia.CustomDataSetTargetSize::mInvokeBeforeNativeCall
	bool ___mInvokeBeforeNativeCall_3;
	// System.Action`1<UnityEngine.Vector3> Vuforia.CustomDataSetTargetSize::mSetSizeAction
	Action_1_t1492434229 * ___mSetSizeAction_4;

public:
	inline static int32_t get_offset_of_mInvokeBeforeNativeCall_3() { return static_cast<int32_t>(offsetof(CustomDataSetTargetSize_t3617445386, ___mInvokeBeforeNativeCall_3)); }
	inline bool get_mInvokeBeforeNativeCall_3() const { return ___mInvokeBeforeNativeCall_3; }
	inline bool* get_address_of_mInvokeBeforeNativeCall_3() { return &___mInvokeBeforeNativeCall_3; }
	inline void set_mInvokeBeforeNativeCall_3(bool value)
	{
		___mInvokeBeforeNativeCall_3 = value;
	}

	inline static int32_t get_offset_of_mSetSizeAction_4() { return static_cast<int32_t>(offsetof(CustomDataSetTargetSize_t3617445386, ___mSetSizeAction_4)); }
	inline Action_1_t1492434229 * get_mSetSizeAction_4() const { return ___mSetSizeAction_4; }
	inline Action_1_t1492434229 ** get_address_of_mSetSizeAction_4() { return &___mSetSizeAction_4; }
	inline void set_mSetSizeAction_4(Action_1_t1492434229 * value)
	{
		___mSetSizeAction_4 = value;
		Il2CppCodeGenWriteBarrier((&___mSetSizeAction_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMDATASETTARGETSIZE_T3617445386_H
#ifndef MODELTARGETIMPL_T344489273_H
#define MODELTARGETIMPL_T344489273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetImpl
struct  ModelTargetImpl_t344489273  : public DataSetObjectTargetImpl_t365456936
{
public:
	// Vuforia.IBoundingBox Vuforia.ModelTargetImpl::mBoundingBoxImpl
	RuntimeObject* ___mBoundingBoxImpl_5;

public:
	inline static int32_t get_offset_of_mBoundingBoxImpl_5() { return static_cast<int32_t>(offsetof(ModelTargetImpl_t344489273, ___mBoundingBoxImpl_5)); }
	inline RuntimeObject* get_mBoundingBoxImpl_5() const { return ___mBoundingBoxImpl_5; }
	inline RuntimeObject** get_address_of_mBoundingBoxImpl_5() { return &___mBoundingBoxImpl_5; }
	inline void set_mBoundingBoxImpl_5(RuntimeObject* value)
	{
		___mBoundingBoxImpl_5 = value;
		Il2CppCodeGenWriteBarrier((&___mBoundingBoxImpl_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELTARGETIMPL_T344489273_H
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
#ifndef IOSUNITYPLAYER_T1056363870_H
#define IOSUNITYPLAYER_T1056363870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.IOSUnityPlayer
struct  IOSUnityPlayer_t1056363870  : public RuntimeObject
{
public:
	// UnityEngine.ScreenOrientation Vuforia.IOSUnityPlayer::mScreenOrientation
	int32_t ___mScreenOrientation_0;

public:
	inline static int32_t get_offset_of_mScreenOrientation_0() { return static_cast<int32_t>(offsetof(IOSUnityPlayer_t1056363870, ___mScreenOrientation_0)); }
	inline int32_t get_mScreenOrientation_0() const { return ___mScreenOrientation_0; }
	inline int32_t* get_address_of_mScreenOrientation_0() { return &___mScreenOrientation_0; }
	inline void set_mScreenOrientation_0(int32_t value)
	{
		___mScreenOrientation_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSUNITYPLAYER_T1056363870_H
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
#ifndef DEVICETRACKERARCONTROLLER_T2866364910_H
#define DEVICETRACKERARCONTROLLER_T2866364910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTrackerARController
struct  DeviceTrackerARController_t2866364910  : public ARController_t4280554221
{
public:
	// Vuforia.DeviceTracker/TRACKING_MODE Vuforia.DeviceTrackerARController::mTrackingMode
	int32_t ___mTrackingMode_3;
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoInitTracker
	bool ___mAutoInitTracker_4;
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoStartTracker
	bool ___mAutoStartTracker_5;
	// System.Boolean Vuforia.DeviceTrackerARController::mPosePrediction
	bool ___mPosePrediction_6;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.DeviceTrackerARController::mModelCorrectionMode
	int32_t ___mModelCorrectionMode_7;
	// System.Boolean Vuforia.DeviceTrackerARController::mModelTransformEnabled
	bool ___mModelTransformEnabled_8;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::mModelTransform
	Vector3_t539014097  ___mModelTransform_9;
	// System.Action Vuforia.DeviceTrackerARController::mTrackerStarted
	Action_t893261993 * ___mTrackerStarted_10;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_11;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_12;
	// UnityEngine.KeyCode[] Vuforia.DeviceTrackerARController::mEmulatorKeyCodes
	KeyCodeU5BU5D_t1934951272* ___mEmulatorKeyCodes_13;
	// System.Single Vuforia.DeviceTrackerARController::mEmulatorPositionVelocity
	float ___mEmulatorPositionVelocity_14;

public:
	inline static int32_t get_offset_of_mTrackingMode_3() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mTrackingMode_3)); }
	inline int32_t get_mTrackingMode_3() const { return ___mTrackingMode_3; }
	inline int32_t* get_address_of_mTrackingMode_3() { return &___mTrackingMode_3; }
	inline void set_mTrackingMode_3(int32_t value)
	{
		___mTrackingMode_3 = value;
	}

	inline static int32_t get_offset_of_mAutoInitTracker_4() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mAutoInitTracker_4)); }
	inline bool get_mAutoInitTracker_4() const { return ___mAutoInitTracker_4; }
	inline bool* get_address_of_mAutoInitTracker_4() { return &___mAutoInitTracker_4; }
	inline void set_mAutoInitTracker_4(bool value)
	{
		___mAutoInitTracker_4 = value;
	}

	inline static int32_t get_offset_of_mAutoStartTracker_5() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mAutoStartTracker_5)); }
	inline bool get_mAutoStartTracker_5() const { return ___mAutoStartTracker_5; }
	inline bool* get_address_of_mAutoStartTracker_5() { return &___mAutoStartTracker_5; }
	inline void set_mAutoStartTracker_5(bool value)
	{
		___mAutoStartTracker_5 = value;
	}

	inline static int32_t get_offset_of_mPosePrediction_6() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mPosePrediction_6)); }
	inline bool get_mPosePrediction_6() const { return ___mPosePrediction_6; }
	inline bool* get_address_of_mPosePrediction_6() { return &___mPosePrediction_6; }
	inline void set_mPosePrediction_6(bool value)
	{
		___mPosePrediction_6 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionMode_7() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mModelCorrectionMode_7)); }
	inline int32_t get_mModelCorrectionMode_7() const { return ___mModelCorrectionMode_7; }
	inline int32_t* get_address_of_mModelCorrectionMode_7() { return &___mModelCorrectionMode_7; }
	inline void set_mModelCorrectionMode_7(int32_t value)
	{
		___mModelCorrectionMode_7 = value;
	}

	inline static int32_t get_offset_of_mModelTransformEnabled_8() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mModelTransformEnabled_8)); }
	inline bool get_mModelTransformEnabled_8() const { return ___mModelTransformEnabled_8; }
	inline bool* get_address_of_mModelTransformEnabled_8() { return &___mModelTransformEnabled_8; }
	inline void set_mModelTransformEnabled_8(bool value)
	{
		___mModelTransformEnabled_8 = value;
	}

	inline static int32_t get_offset_of_mModelTransform_9() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mModelTransform_9)); }
	inline Vector3_t539014097  get_mModelTransform_9() const { return ___mModelTransform_9; }
	inline Vector3_t539014097 * get_address_of_mModelTransform_9() { return &___mModelTransform_9; }
	inline void set_mModelTransform_9(Vector3_t539014097  value)
	{
		___mModelTransform_9 = value;
	}

	inline static int32_t get_offset_of_mTrackerStarted_10() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mTrackerStarted_10)); }
	inline Action_t893261993 * get_mTrackerStarted_10() const { return ___mTrackerStarted_10; }
	inline Action_t893261993 ** get_address_of_mTrackerStarted_10() { return &___mTrackerStarted_10; }
	inline void set_mTrackerStarted_10(Action_t893261993 * value)
	{
		___mTrackerStarted_10 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackerStarted_10), value);
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforePause_11() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mTrackerWasActiveBeforePause_11)); }
	inline bool get_mTrackerWasActiveBeforePause_11() const { return ___mTrackerWasActiveBeforePause_11; }
	inline bool* get_address_of_mTrackerWasActiveBeforePause_11() { return &___mTrackerWasActiveBeforePause_11; }
	inline void set_mTrackerWasActiveBeforePause_11(bool value)
	{
		___mTrackerWasActiveBeforePause_11 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforeDisabling_12() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mTrackerWasActiveBeforeDisabling_12)); }
	inline bool get_mTrackerWasActiveBeforeDisabling_12() const { return ___mTrackerWasActiveBeforeDisabling_12; }
	inline bool* get_address_of_mTrackerWasActiveBeforeDisabling_12() { return &___mTrackerWasActiveBeforeDisabling_12; }
	inline void set_mTrackerWasActiveBeforeDisabling_12(bool value)
	{
		___mTrackerWasActiveBeforeDisabling_12 = value;
	}

	inline static int32_t get_offset_of_mEmulatorKeyCodes_13() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mEmulatorKeyCodes_13)); }
	inline KeyCodeU5BU5D_t1934951272* get_mEmulatorKeyCodes_13() const { return ___mEmulatorKeyCodes_13; }
	inline KeyCodeU5BU5D_t1934951272** get_address_of_mEmulatorKeyCodes_13() { return &___mEmulatorKeyCodes_13; }
	inline void set_mEmulatorKeyCodes_13(KeyCodeU5BU5D_t1934951272* value)
	{
		___mEmulatorKeyCodes_13 = value;
		Il2CppCodeGenWriteBarrier((&___mEmulatorKeyCodes_13), value);
	}

	inline static int32_t get_offset_of_mEmulatorPositionVelocity_14() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910, ___mEmulatorPositionVelocity_14)); }
	inline float get_mEmulatorPositionVelocity_14() const { return ___mEmulatorPositionVelocity_14; }
	inline float* get_address_of_mEmulatorPositionVelocity_14() { return &___mEmulatorPositionVelocity_14; }
	inline void set_mEmulatorPositionVelocity_14(float value)
	{
		___mEmulatorPositionVelocity_14 = value;
	}
};

struct DeviceTrackerARController_t2866364910_StaticFields
{
public:
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HEAD_PIVOT
	Vector3_t539014097  ___DEFAULT_HEAD_PIVOT_1;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HANDHELD_PIVOT
	Vector3_t539014097  ___DEFAULT_HANDHELD_PIVOT_2;
	// Vuforia.DeviceTrackerARController Vuforia.DeviceTrackerARController::mInstance
	DeviceTrackerARController_t2866364910 * ___mInstance_15;
	// System.Object Vuforia.DeviceTrackerARController::mPadlock
	RuntimeObject * ___mPadlock_16;

public:
	inline static int32_t get_offset_of_DEFAULT_HEAD_PIVOT_1() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910_StaticFields, ___DEFAULT_HEAD_PIVOT_1)); }
	inline Vector3_t539014097  get_DEFAULT_HEAD_PIVOT_1() const { return ___DEFAULT_HEAD_PIVOT_1; }
	inline Vector3_t539014097 * get_address_of_DEFAULT_HEAD_PIVOT_1() { return &___DEFAULT_HEAD_PIVOT_1; }
	inline void set_DEFAULT_HEAD_PIVOT_1(Vector3_t539014097  value)
	{
		___DEFAULT_HEAD_PIVOT_1 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_HANDHELD_PIVOT_2() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910_StaticFields, ___DEFAULT_HANDHELD_PIVOT_2)); }
	inline Vector3_t539014097  get_DEFAULT_HANDHELD_PIVOT_2() const { return ___DEFAULT_HANDHELD_PIVOT_2; }
	inline Vector3_t539014097 * get_address_of_DEFAULT_HANDHELD_PIVOT_2() { return &___DEFAULT_HANDHELD_PIVOT_2; }
	inline void set_DEFAULT_HANDHELD_PIVOT_2(Vector3_t539014097  value)
	{
		___DEFAULT_HANDHELD_PIVOT_2 = value;
	}

	inline static int32_t get_offset_of_mInstance_15() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910_StaticFields, ___mInstance_15)); }
	inline DeviceTrackerARController_t2866364910 * get_mInstance_15() const { return ___mInstance_15; }
	inline DeviceTrackerARController_t2866364910 ** get_address_of_mInstance_15() { return &___mInstance_15; }
	inline void set_mInstance_15(DeviceTrackerARController_t2866364910 * value)
	{
		___mInstance_15 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_15), value);
	}

	inline static int32_t get_offset_of_mPadlock_16() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t2866364910_StaticFields, ___mPadlock_16)); }
	inline RuntimeObject * get_mPadlock_16() const { return ___mPadlock_16; }
	inline RuntimeObject ** get_address_of_mPadlock_16() { return &___mPadlock_16; }
	inline void set_mPadlock_16(RuntimeObject * value)
	{
		___mPadlock_16 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKERARCONTROLLER_T2866364910_H
#ifndef STEREOPROJMATRIXSTORE_T3359157030_H
#define STEREOPROJMATRIXSTORE_T3359157030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StereoProjMatrixStore
struct  StereoProjMatrixStore_t3359157030  : public RuntimeObject
{
public:
	// UnityEngine.Camera Vuforia.StereoProjMatrixStore::mCamera
	Camera_t3201429123 * ___mCamera_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4> Vuforia.StereoProjMatrixStore::mProjectionMatrices
	Dictionary_2_t3947342094 * ___mProjectionMatrices_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mAppliedVerticalFoVs
	Dictionary_2_t2828125001 * ___mAppliedVerticalFoVs_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mCurrentVerticalFoVs
	Dictionary_2_t2828125001 * ___mCurrentVerticalFoVs_3;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mSharedCullingProjectionMatrix
	Matrix4x4_t54425537  ___mSharedCullingProjectionMatrix_4;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mSharedCullingViewMatrix
	Matrix4x4_t54425537  ___mSharedCullingViewMatrix_5;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mLeftEyeOffsetMatrix
	Matrix4x4_t54425537  ___mLeftEyeOffsetMatrix_6;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mRightEyeOffsetMatrix
	Matrix4x4_t54425537  ___mRightEyeOffsetMatrix_7;
	// Vuforia.StereoProjMatrixStore/Mode Vuforia.StereoProjMatrixStore::mMode
	int32_t ___mMode_8;

public:
	inline static int32_t get_offset_of_mCamera_0() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t3359157030, ___mCamera_0)); }
	inline Camera_t3201429123 * get_mCamera_0() const { return ___mCamera_0; }
	inline Camera_t3201429123 ** get_address_of_mCamera_0() { return &___mCamera_0; }
	inline void set_mCamera_0(Camera_t3201429123 * value)
	{
		___mCamera_0 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_0), value);
	}

	inline static int32_t get_offset_of_mProjectionMatrices_1() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t3359157030, ___mProjectionMatrices_1)); }
	inline Dictionary_2_t3947342094 * get_mProjectionMatrices_1() const { return ___mProjectionMatrices_1; }
	inline Dictionary_2_t3947342094 ** get_address_of_mProjectionMatrices_1() { return &___mProjectionMatrices_1; }
	inline void set_mProjectionMatrices_1(Dictionary_2_t3947342094 * value)
	{
		___mProjectionMatrices_1 = value;
		Il2CppCodeGenWriteBarrier((&___mProjectionMatrices_1), value);
	}

	inline static int32_t get_offset_of_mAppliedVerticalFoVs_2() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t3359157030, ___mAppliedVerticalFoVs_2)); }
	inline Dictionary_2_t2828125001 * get_mAppliedVerticalFoVs_2() const { return ___mAppliedVerticalFoVs_2; }
	inline Dictionary_2_t2828125001 ** get_address_of_mAppliedVerticalFoVs_2() { return &___mAppliedVerticalFoVs_2; }
	inline void set_mAppliedVerticalFoVs_2(Dictionary_2_t2828125001 * value)
	{
		___mAppliedVerticalFoVs_2 = value;
		Il2CppCodeGenWriteBarrier((&___mAppliedVerticalFoVs_2), value);
	}

	inline static int32_t get_offset_of_mCurrentVerticalFoVs_3() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t3359157030, ___mCurrentVerticalFoVs_3)); }
	inline Dictionary_2_t2828125001 * get_mCurrentVerticalFoVs_3() const { return ___mCurrentVerticalFoVs_3; }
	inline Dictionary_2_t2828125001 ** get_address_of_mCurrentVerticalFoVs_3() { return &___mCurrentVerticalFoVs_3; }
	inline void set_mCurrentVerticalFoVs_3(Dictionary_2_t2828125001 * value)
	{
		___mCurrentVerticalFoVs_3 = value;
		Il2CppCodeGenWriteBarrier((&___mCurrentVerticalFoVs_3), value);
	}

	inline static int32_t get_offset_of_mSharedCullingProjectionMatrix_4() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t3359157030, ___mSharedCullingProjectionMatrix_4)); }
	inline Matrix4x4_t54425537  get_mSharedCullingProjectionMatrix_4() const { return ___mSharedCullingProjectionMatrix_4; }
	inline Matrix4x4_t54425537 * get_address_of_mSharedCullingProjectionMatrix_4() { return &___mSharedCullingProjectionMatrix_4; }
	inline void set_mSharedCullingProjectionMatrix_4(Matrix4x4_t54425537  value)
	{
		___mSharedCullingProjectionMatrix_4 = value;
	}

	inline static int32_t get_offset_of_mSharedCullingViewMatrix_5() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t3359157030, ___mSharedCullingViewMatrix_5)); }
	inline Matrix4x4_t54425537  get_mSharedCullingViewMatrix_5() const { return ___mSharedCullingViewMatrix_5; }
	inline Matrix4x4_t54425537 * get_address_of_mSharedCullingViewMatrix_5() { return &___mSharedCullingViewMatrix_5; }
	inline void set_mSharedCullingViewMatrix_5(Matrix4x4_t54425537  value)
	{
		___mSharedCullingViewMatrix_5 = value;
	}

	inline static int32_t get_offset_of_mLeftEyeOffsetMatrix_6() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t3359157030, ___mLeftEyeOffsetMatrix_6)); }
	inline Matrix4x4_t54425537  get_mLeftEyeOffsetMatrix_6() const { return ___mLeftEyeOffsetMatrix_6; }
	inline Matrix4x4_t54425537 * get_address_of_mLeftEyeOffsetMatrix_6() { return &___mLeftEyeOffsetMatrix_6; }
	inline void set_mLeftEyeOffsetMatrix_6(Matrix4x4_t54425537  value)
	{
		___mLeftEyeOffsetMatrix_6 = value;
	}

	inline static int32_t get_offset_of_mRightEyeOffsetMatrix_7() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t3359157030, ___mRightEyeOffsetMatrix_7)); }
	inline Matrix4x4_t54425537  get_mRightEyeOffsetMatrix_7() const { return ___mRightEyeOffsetMatrix_7; }
	inline Matrix4x4_t54425537 * get_address_of_mRightEyeOffsetMatrix_7() { return &___mRightEyeOffsetMatrix_7; }
	inline void set_mRightEyeOffsetMatrix_7(Matrix4x4_t54425537  value)
	{
		___mRightEyeOffsetMatrix_7 = value;
	}

	inline static int32_t get_offset_of_mMode_8() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t3359157030, ___mMode_8)); }
	inline int32_t get_mMode_8() const { return ___mMode_8; }
	inline int32_t* get_address_of_mMode_8() { return &___mMode_8; }
	inline void set_mMode_8(int32_t value)
	{
		___mMode_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOPROJMATRIXSTORE_T3359157030_H
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
#ifndef VRDEVICECAMERACONFIGURATION_T3430823695_H
#define VRDEVICECAMERACONFIGURATION_T3430823695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VRDeviceCameraConfiguration
struct  VRDeviceCameraConfiguration_t3430823695  : public BaseCameraConfiguration_t575072495
{
public:
	// UnityEngine.Camera Vuforia.VRDeviceCameraConfiguration::mCamera
	Camera_t3201429123 * ___mCamera_11;
	// Vuforia.StereoProjMatrixStore Vuforia.VRDeviceCameraConfiguration::mMatrixStore
	StereoProjMatrixStore_t3359157030 * ___mMatrixStore_12;
	// UnityEngine.Matrix4x4 Vuforia.VRDeviceCameraConfiguration::mLeftMatrixUsedForVBPlacement
	Matrix4x4_t54425537  ___mLeftMatrixUsedForVBPlacement_13;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_14;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_15;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mMaxDepthForVideoBackground
	float ___mMaxDepthForVideoBackground_16;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mMinDepthForVideoBackground
	float ___mMinDepthForVideoBackground_17;
	// System.Int32 Vuforia.VRDeviceCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_18;
	// System.Int32 Vuforia.VRDeviceCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_19;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mStereoDepth
	float ___mStereoDepth_20;
	// System.Boolean Vuforia.VRDeviceCameraConfiguration::mResetMatrix
	bool ___mResetMatrix_21;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2> Vuforia.VRDeviceCameraConfiguration::mVuforiaFrustumSkew
	Dictionary_2_t3227251402 * ___mVuforiaFrustumSkew_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2> Vuforia.VRDeviceCameraConfiguration::mCenterToEyeAxis
	Dictionary_2_t3227251402 * ___mCenterToEyeAxis_23;
	// Vuforia.VRDeviceController Vuforia.VRDeviceCameraConfiguration::mVrDeviceController
	VRDeviceController_t3547063471 * ___mVrDeviceController_24;

public:
	inline static int32_t get_offset_of_mCamera_11() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mCamera_11)); }
	inline Camera_t3201429123 * get_mCamera_11() const { return ___mCamera_11; }
	inline Camera_t3201429123 ** get_address_of_mCamera_11() { return &___mCamera_11; }
	inline void set_mCamera_11(Camera_t3201429123 * value)
	{
		___mCamera_11 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_11), value);
	}

	inline static int32_t get_offset_of_mMatrixStore_12() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mMatrixStore_12)); }
	inline StereoProjMatrixStore_t3359157030 * get_mMatrixStore_12() const { return ___mMatrixStore_12; }
	inline StereoProjMatrixStore_t3359157030 ** get_address_of_mMatrixStore_12() { return &___mMatrixStore_12; }
	inline void set_mMatrixStore_12(StereoProjMatrixStore_t3359157030 * value)
	{
		___mMatrixStore_12 = value;
		Il2CppCodeGenWriteBarrier((&___mMatrixStore_12), value);
	}

	inline static int32_t get_offset_of_mLeftMatrixUsedForVBPlacement_13() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mLeftMatrixUsedForVBPlacement_13)); }
	inline Matrix4x4_t54425537  get_mLeftMatrixUsedForVBPlacement_13() const { return ___mLeftMatrixUsedForVBPlacement_13; }
	inline Matrix4x4_t54425537 * get_address_of_mLeftMatrixUsedForVBPlacement_13() { return &___mLeftMatrixUsedForVBPlacement_13; }
	inline void set_mLeftMatrixUsedForVBPlacement_13(Matrix4x4_t54425537  value)
	{
		___mLeftMatrixUsedForVBPlacement_13 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_14() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mLastAppliedNearClipPlane_14)); }
	inline float get_mLastAppliedNearClipPlane_14() const { return ___mLastAppliedNearClipPlane_14; }
	inline float* get_address_of_mLastAppliedNearClipPlane_14() { return &___mLastAppliedNearClipPlane_14; }
	inline void set_mLastAppliedNearClipPlane_14(float value)
	{
		___mLastAppliedNearClipPlane_14 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_15() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mLastAppliedFarClipPlane_15)); }
	inline float get_mLastAppliedFarClipPlane_15() const { return ___mLastAppliedFarClipPlane_15; }
	inline float* get_address_of_mLastAppliedFarClipPlane_15() { return &___mLastAppliedFarClipPlane_15; }
	inline void set_mLastAppliedFarClipPlane_15(float value)
	{
		___mLastAppliedFarClipPlane_15 = value;
	}

	inline static int32_t get_offset_of_mMaxDepthForVideoBackground_16() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mMaxDepthForVideoBackground_16)); }
	inline float get_mMaxDepthForVideoBackground_16() const { return ___mMaxDepthForVideoBackground_16; }
	inline float* get_address_of_mMaxDepthForVideoBackground_16() { return &___mMaxDepthForVideoBackground_16; }
	inline void set_mMaxDepthForVideoBackground_16(float value)
	{
		___mMaxDepthForVideoBackground_16 = value;
	}

	inline static int32_t get_offset_of_mMinDepthForVideoBackground_17() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mMinDepthForVideoBackground_17)); }
	inline float get_mMinDepthForVideoBackground_17() const { return ___mMinDepthForVideoBackground_17; }
	inline float* get_address_of_mMinDepthForVideoBackground_17() { return &___mMinDepthForVideoBackground_17; }
	inline void set_mMinDepthForVideoBackground_17(float value)
	{
		___mMinDepthForVideoBackground_17 = value;
	}

	inline static int32_t get_offset_of_mScreenWidth_18() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mScreenWidth_18)); }
	inline int32_t get_mScreenWidth_18() const { return ___mScreenWidth_18; }
	inline int32_t* get_address_of_mScreenWidth_18() { return &___mScreenWidth_18; }
	inline void set_mScreenWidth_18(int32_t value)
	{
		___mScreenWidth_18 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_19() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mScreenHeight_19)); }
	inline int32_t get_mScreenHeight_19() const { return ___mScreenHeight_19; }
	inline int32_t* get_address_of_mScreenHeight_19() { return &___mScreenHeight_19; }
	inline void set_mScreenHeight_19(int32_t value)
	{
		___mScreenHeight_19 = value;
	}

	inline static int32_t get_offset_of_mStereoDepth_20() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mStereoDepth_20)); }
	inline float get_mStereoDepth_20() const { return ___mStereoDepth_20; }
	inline float* get_address_of_mStereoDepth_20() { return &___mStereoDepth_20; }
	inline void set_mStereoDepth_20(float value)
	{
		___mStereoDepth_20 = value;
	}

	inline static int32_t get_offset_of_mResetMatrix_21() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mResetMatrix_21)); }
	inline bool get_mResetMatrix_21() const { return ___mResetMatrix_21; }
	inline bool* get_address_of_mResetMatrix_21() { return &___mResetMatrix_21; }
	inline void set_mResetMatrix_21(bool value)
	{
		___mResetMatrix_21 = value;
	}

	inline static int32_t get_offset_of_mVuforiaFrustumSkew_22() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mVuforiaFrustumSkew_22)); }
	inline Dictionary_2_t3227251402 * get_mVuforiaFrustumSkew_22() const { return ___mVuforiaFrustumSkew_22; }
	inline Dictionary_2_t3227251402 ** get_address_of_mVuforiaFrustumSkew_22() { return &___mVuforiaFrustumSkew_22; }
	inline void set_mVuforiaFrustumSkew_22(Dictionary_2_t3227251402 * value)
	{
		___mVuforiaFrustumSkew_22 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaFrustumSkew_22), value);
	}

	inline static int32_t get_offset_of_mCenterToEyeAxis_23() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mCenterToEyeAxis_23)); }
	inline Dictionary_2_t3227251402 * get_mCenterToEyeAxis_23() const { return ___mCenterToEyeAxis_23; }
	inline Dictionary_2_t3227251402 ** get_address_of_mCenterToEyeAxis_23() { return &___mCenterToEyeAxis_23; }
	inline void set_mCenterToEyeAxis_23(Dictionary_2_t3227251402 * value)
	{
		___mCenterToEyeAxis_23 = value;
		Il2CppCodeGenWriteBarrier((&___mCenterToEyeAxis_23), value);
	}

	inline static int32_t get_offset_of_mVrDeviceController_24() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3430823695, ___mVrDeviceController_24)); }
	inline VRDeviceController_t3547063471 * get_mVrDeviceController_24() const { return ___mVrDeviceController_24; }
	inline VRDeviceController_t3547063471 ** get_address_of_mVrDeviceController_24() { return &___mVrDeviceController_24; }
	inline void set_mVrDeviceController_24(VRDeviceController_t3547063471 * value)
	{
		___mVrDeviceController_24 = value;
		Il2CppCodeGenWriteBarrier((&___mVrDeviceController_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRDEVICECAMERACONFIGURATION_T3430823695_H
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
#ifndef VUFORIAVRDEVICECAMERACONFIGURATION_T1799712367_H
#define VUFORIAVRDEVICECAMERACONFIGURATION_T1799712367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaVRDeviceCameraConfiguration
struct  VuforiaVRDeviceCameraConfiguration_t1799712367  : public VRDeviceCameraConfiguration_t3430823695
{
public:
	// System.Single Vuforia.VuforiaVRDeviceCameraConfiguration::mStereoOffset
	float ___mStereoOffset_26;
	// System.Boolean Vuforia.VuforiaVRDeviceCameraConfiguration::mDelayedVideoBackgroundEnabledChanged
	bool ___mDelayedVideoBackgroundEnabledChanged_27;

public:
	inline static int32_t get_offset_of_mStereoOffset_26() { return static_cast<int32_t>(offsetof(VuforiaVRDeviceCameraConfiguration_t1799712367, ___mStereoOffset_26)); }
	inline float get_mStereoOffset_26() const { return ___mStereoOffset_26; }
	inline float* get_address_of_mStereoOffset_26() { return &___mStereoOffset_26; }
	inline void set_mStereoOffset_26(float value)
	{
		___mStereoOffset_26 = value;
	}

	inline static int32_t get_offset_of_mDelayedVideoBackgroundEnabledChanged_27() { return static_cast<int32_t>(offsetof(VuforiaVRDeviceCameraConfiguration_t1799712367, ___mDelayedVideoBackgroundEnabledChanged_27)); }
	inline bool get_mDelayedVideoBackgroundEnabledChanged_27() const { return ___mDelayedVideoBackgroundEnabledChanged_27; }
	inline bool* get_address_of_mDelayedVideoBackgroundEnabledChanged_27() { return &___mDelayedVideoBackgroundEnabledChanged_27; }
	inline void set_mDelayedVideoBackgroundEnabledChanged_27(bool value)
	{
		___mDelayedVideoBackgroundEnabledChanged_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAVRDEVICECAMERACONFIGURATION_T1799712367_H
#ifndef EXTERNALVRDEVICECAMERACONFIGURATION_T1384583269_H
#define EXTERNALVRDEVICECAMERACONFIGURATION_T1384583269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ExternalVRDeviceCameraConfiguration
struct  ExternalVRDeviceCameraConfiguration_t1384583269  : public VRDeviceCameraConfiguration_t3430823695
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.ExternalVRDeviceCameraConfiguration::mLastWorldCenterMode
	int32_t ___mLastWorldCenterMode_26;

public:
	inline static int32_t get_offset_of_mLastWorldCenterMode_26() { return static_cast<int32_t>(offsetof(ExternalVRDeviceCameraConfiguration_t1384583269, ___mLastWorldCenterMode_26)); }
	inline int32_t get_mLastWorldCenterMode_26() const { return ___mLastWorldCenterMode_26; }
	inline int32_t* get_address_of_mLastWorldCenterMode_26() { return &___mLastWorldCenterMode_26; }
	inline void set_mLastWorldCenterMode_26(int32_t value)
	{
		___mLastWorldCenterMode_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALVRDEVICECAMERACONFIGURATION_T1384583269_H
#ifndef GUIDEVIEWCAMERABEHAVIOUR_T1843523253_H
#define GUIDEVIEWCAMERABEHAVIOUR_T1843523253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewCameraBehaviour
struct  GuideViewCameraBehaviour_t1843523253  : public MonoBehaviour_t3521571575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEWCAMERABEHAVIOUR_T1843523253_H
#ifndef GUIDEVIEW2DBEHAVIOUR_T3441820214_H
#define GUIDEVIEW2DBEHAVIOUR_T3441820214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideView2DBehaviour
struct  GuideView2DBehaviour_t3441820214  : public MonoBehaviour_t3521571575
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.ModelTargetBehaviour> Vuforia.GuideView2DBehaviour::mModelTargetCache
	Dictionary_2_t3825164990 * ___mModelTargetCache_2;

public:
	inline static int32_t get_offset_of_mModelTargetCache_2() { return static_cast<int32_t>(offsetof(GuideView2DBehaviour_t3441820214, ___mModelTargetCache_2)); }
	inline Dictionary_2_t3825164990 * get_mModelTargetCache_2() const { return ___mModelTargetCache_2; }
	inline Dictionary_2_t3825164990 ** get_address_of_mModelTargetCache_2() { return &___mModelTargetCache_2; }
	inline void set_mModelTargetCache_2(Dictionary_2_t3825164990 * value)
	{
		___mModelTargetCache_2 = value;
		Il2CppCodeGenWriteBarrier((&___mModelTargetCache_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEW2DBEHAVIOUR_T3441820214_H
#ifndef GUIDEVIEW3DBEHAVIOUR_T2607610014_H
#define GUIDEVIEW3DBEHAVIOUR_T2607610014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideView3DBehaviour
struct  GuideView3DBehaviour_t2607610014  : public MonoBehaviour_t3521571575
{
public:
	// Vuforia.GuideView Vuforia.GuideView3DBehaviour::mCurrentGuideView
	GuideView_t4109920118 * ___mCurrentGuideView_2;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.ModelTargetBehaviour> Vuforia.GuideView3DBehaviour::mModelTargetCache
	Dictionary_2_t3825164990 * ___mModelTargetCache_3;
	// System.Boolean Vuforia.GuideView3DBehaviour::mDirty
	bool ___mDirty_4;

public:
	inline static int32_t get_offset_of_mCurrentGuideView_2() { return static_cast<int32_t>(offsetof(GuideView3DBehaviour_t2607610014, ___mCurrentGuideView_2)); }
	inline GuideView_t4109920118 * get_mCurrentGuideView_2() const { return ___mCurrentGuideView_2; }
	inline GuideView_t4109920118 ** get_address_of_mCurrentGuideView_2() { return &___mCurrentGuideView_2; }
	inline void set_mCurrentGuideView_2(GuideView_t4109920118 * value)
	{
		___mCurrentGuideView_2 = value;
		Il2CppCodeGenWriteBarrier((&___mCurrentGuideView_2), value);
	}

	inline static int32_t get_offset_of_mModelTargetCache_3() { return static_cast<int32_t>(offsetof(GuideView3DBehaviour_t2607610014, ___mModelTargetCache_3)); }
	inline Dictionary_2_t3825164990 * get_mModelTargetCache_3() const { return ___mModelTargetCache_3; }
	inline Dictionary_2_t3825164990 ** get_address_of_mModelTargetCache_3() { return &___mModelTargetCache_3; }
	inline void set_mModelTargetCache_3(Dictionary_2_t3825164990 * value)
	{
		___mModelTargetCache_3 = value;
		Il2CppCodeGenWriteBarrier((&___mModelTargetCache_3), value);
	}

	inline static int32_t get_offset_of_mDirty_4() { return static_cast<int32_t>(offsetof(GuideView3DBehaviour_t2607610014, ___mDirty_4)); }
	inline bool get_mDirty_4() const { return ___mDirty_4; }
	inline bool* get_address_of_mDirty_4() { return &___mDirty_4; }
	inline void set_mDirty_4(bool value)
	{
		___mDirty_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEW3DBEHAVIOUR_T2607610014_H
#ifndef GUIDEVIEWRENDERINGBEHAVIOUR_T297621634_H
#define GUIDEVIEWRENDERINGBEHAVIOUR_T297621634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewRenderingBehaviour
struct  GuideViewRenderingBehaviour_t297621634  : public MonoBehaviour_t3521571575
{
public:
	// System.Single Vuforia.GuideViewRenderingBehaviour::guideReappearanceDelay
	float ___guideReappearanceDelay_2;
	// System.Boolean Vuforia.GuideViewRenderingBehaviour::use3DGuideView
	bool ___use3DGuideView_3;
	// System.Boolean Vuforia.GuideViewRenderingBehaviour::mGuideViewsInitialized
	bool ___mGuideViewsInitialized_4;
	// Vuforia.ModelTargetBehaviour Vuforia.GuideViewRenderingBehaviour::mLastTrackedTarget
	ModelTargetBehaviour_t2608982574 * ___mLastTrackedTarget_5;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.GuideViewRenderingBehaviour::mLastActiveDatasets
	List_1_t2325015820 * ___mLastActiveDatasets_6;
	// Vuforia.TargetGuideViewBehaviour Vuforia.GuideViewRenderingBehaviour::mActiveGuideView
	TargetGuideViewBehaviour_t977833296 * ___mActiveGuideView_7;
	// System.Collections.IEnumerator Vuforia.GuideViewRenderingBehaviour::mShowGuideViewCoroutine
	RuntimeObject* ___mShowGuideViewCoroutine_8;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.GuideView> Vuforia.GuideViewRenderingBehaviour::mModelTargetGuideViews
	Dictionary_2_t1031135238 * ___mModelTargetGuideViews_9;

public:
	inline static int32_t get_offset_of_guideReappearanceDelay_2() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t297621634, ___guideReappearanceDelay_2)); }
	inline float get_guideReappearanceDelay_2() const { return ___guideReappearanceDelay_2; }
	inline float* get_address_of_guideReappearanceDelay_2() { return &___guideReappearanceDelay_2; }
	inline void set_guideReappearanceDelay_2(float value)
	{
		___guideReappearanceDelay_2 = value;
	}

	inline static int32_t get_offset_of_use3DGuideView_3() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t297621634, ___use3DGuideView_3)); }
	inline bool get_use3DGuideView_3() const { return ___use3DGuideView_3; }
	inline bool* get_address_of_use3DGuideView_3() { return &___use3DGuideView_3; }
	inline void set_use3DGuideView_3(bool value)
	{
		___use3DGuideView_3 = value;
	}

	inline static int32_t get_offset_of_mGuideViewsInitialized_4() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t297621634, ___mGuideViewsInitialized_4)); }
	inline bool get_mGuideViewsInitialized_4() const { return ___mGuideViewsInitialized_4; }
	inline bool* get_address_of_mGuideViewsInitialized_4() { return &___mGuideViewsInitialized_4; }
	inline void set_mGuideViewsInitialized_4(bool value)
	{
		___mGuideViewsInitialized_4 = value;
	}

	inline static int32_t get_offset_of_mLastTrackedTarget_5() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t297621634, ___mLastTrackedTarget_5)); }
	inline ModelTargetBehaviour_t2608982574 * get_mLastTrackedTarget_5() const { return ___mLastTrackedTarget_5; }
	inline ModelTargetBehaviour_t2608982574 ** get_address_of_mLastTrackedTarget_5() { return &___mLastTrackedTarget_5; }
	inline void set_mLastTrackedTarget_5(ModelTargetBehaviour_t2608982574 * value)
	{
		___mLastTrackedTarget_5 = value;
		Il2CppCodeGenWriteBarrier((&___mLastTrackedTarget_5), value);
	}

	inline static int32_t get_offset_of_mLastActiveDatasets_6() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t297621634, ___mLastActiveDatasets_6)); }
	inline List_1_t2325015820 * get_mLastActiveDatasets_6() const { return ___mLastActiveDatasets_6; }
	inline List_1_t2325015820 ** get_address_of_mLastActiveDatasets_6() { return &___mLastActiveDatasets_6; }
	inline void set_mLastActiveDatasets_6(List_1_t2325015820 * value)
	{
		___mLastActiveDatasets_6 = value;
		Il2CppCodeGenWriteBarrier((&___mLastActiveDatasets_6), value);
	}

	inline static int32_t get_offset_of_mActiveGuideView_7() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t297621634, ___mActiveGuideView_7)); }
	inline TargetGuideViewBehaviour_t977833296 * get_mActiveGuideView_7() const { return ___mActiveGuideView_7; }
	inline TargetGuideViewBehaviour_t977833296 ** get_address_of_mActiveGuideView_7() { return &___mActiveGuideView_7; }
	inline void set_mActiveGuideView_7(TargetGuideViewBehaviour_t977833296 * value)
	{
		___mActiveGuideView_7 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveGuideView_7), value);
	}

	inline static int32_t get_offset_of_mShowGuideViewCoroutine_8() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t297621634, ___mShowGuideViewCoroutine_8)); }
	inline RuntimeObject* get_mShowGuideViewCoroutine_8() const { return ___mShowGuideViewCoroutine_8; }
	inline RuntimeObject** get_address_of_mShowGuideViewCoroutine_8() { return &___mShowGuideViewCoroutine_8; }
	inline void set_mShowGuideViewCoroutine_8(RuntimeObject* value)
	{
		___mShowGuideViewCoroutine_8 = value;
		Il2CppCodeGenWriteBarrier((&___mShowGuideViewCoroutine_8), value);
	}

	inline static int32_t get_offset_of_mModelTargetGuideViews_9() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t297621634, ___mModelTargetGuideViews_9)); }
	inline Dictionary_2_t1031135238 * get_mModelTargetGuideViews_9() const { return ___mModelTargetGuideViews_9; }
	inline Dictionary_2_t1031135238 ** get_address_of_mModelTargetGuideViews_9() { return &___mModelTargetGuideViews_9; }
	inline void set_mModelTargetGuideViews_9(Dictionary_2_t1031135238 * value)
	{
		___mModelTargetGuideViews_9 = value;
		Il2CppCodeGenWriteBarrier((&___mModelTargetGuideViews_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEWRENDERINGBEHAVIOUR_T297621634_H
#ifndef TARGETGUIDEVIEWBEHAVIOUR_T977833296_H
#define TARGETGUIDEVIEWBEHAVIOUR_T977833296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetGuideViewBehaviour
struct  TargetGuideViewBehaviour_t977833296  : public MonoBehaviour_t3521571575
{
public:
	// System.String Vuforia.TargetGuideViewBehaviour::databaseName
	String_t* ___databaseName_2;
	// System.Boolean Vuforia.TargetGuideViewBehaviour::mUse3DGuideView
	bool ___mUse3DGuideView_3;

public:
	inline static int32_t get_offset_of_databaseName_2() { return static_cast<int32_t>(offsetof(TargetGuideViewBehaviour_t977833296, ___databaseName_2)); }
	inline String_t* get_databaseName_2() const { return ___databaseName_2; }
	inline String_t** get_address_of_databaseName_2() { return &___databaseName_2; }
	inline void set_databaseName_2(String_t* value)
	{
		___databaseName_2 = value;
		Il2CppCodeGenWriteBarrier((&___databaseName_2), value);
	}

	inline static int32_t get_offset_of_mUse3DGuideView_3() { return static_cast<int32_t>(offsetof(TargetGuideViewBehaviour_t977833296, ___mUse3DGuideView_3)); }
	inline bool get_mUse3DGuideView_3() const { return ___mUse3DGuideView_3; }
	inline bool* get_address_of_mUse3DGuideView_3() { return &___mUse3DGuideView_3; }
	inline void set_mUse3DGuideView_3(bool value)
	{
		___mUse3DGuideView_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETGUIDEVIEWBEHAVIOUR_T977833296_H
#ifndef TRACKABLEBEHAVIOUR_T392499558_H
#define TRACKABLEBEHAVIOUR_T392499558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t392499558  : public MonoBehaviour_t3521571575
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t539014097  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t1065078100 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t392499558, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t392499558, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_3), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t392499558, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t392499558, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t392499558, ___mPreviousScale_6)); }
	inline Vector3_t539014097  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t539014097 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t539014097  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t392499558, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t392499558, ___mTrackable_8)); }
	inline RuntimeObject* get_mTrackable_8() const { return ___mTrackable_8; }
	inline RuntimeObject** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(RuntimeObject* value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_8), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t392499558, ___mTrackableEventHandlers_9)); }
	inline List_1_t1065078100 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t1065078100 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t1065078100 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T392499558_H
#ifndef GLERRORHANDLER_T3250135801_H
#define GLERRORHANDLER_T3250135801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GLErrorHandler
struct  GLErrorHandler_t3250135801  : public MonoBehaviour_t3521571575
{
public:

public:
};

struct GLErrorHandler_t3250135801_StaticFields
{
public:
	// System.String Vuforia.GLErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean Vuforia.GLErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(GLErrorHandler_t3250135801_StaticFields, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(GLErrorHandler_t3250135801_StaticFields, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLERRORHANDLER_T3250135801_H
#ifndef MASKOUTBEHAVIOUR_T1499703654_H
#define MASKOUTBEHAVIOUR_T1499703654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MaskOutBehaviour
struct  MaskOutBehaviour_t1499703654  : public MonoBehaviour_t3521571575
{
public:
	// UnityEngine.Material Vuforia.MaskOutBehaviour::maskMaterial
	Material_t1787675033 * ___maskMaterial_2;

public:
	inline static int32_t get_offset_of_maskMaterial_2() { return static_cast<int32_t>(offsetof(MaskOutBehaviour_t1499703654, ___maskMaterial_2)); }
	inline Material_t1787675033 * get_maskMaterial_2() const { return ___maskMaterial_2; }
	inline Material_t1787675033 ** get_address_of_maskMaterial_2() { return &___maskMaterial_2; }
	inline void set_maskMaterial_2(Material_t1787675033 * value)
	{
		___maskMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___maskMaterial_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKOUTBEHAVIOUR_T1499703654_H
#ifndef TURNOFFBEHAVIOUR_T629459631_H
#define TURNOFFBEHAVIOUR_T629459631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TurnOffBehaviour
struct  TurnOffBehaviour_t629459631  : public MonoBehaviour_t3521571575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNOFFBEHAVIOUR_T629459631_H
#ifndef TURNOFFWORDBEHAVIOUR_T596756633_H
#define TURNOFFWORDBEHAVIOUR_T596756633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TurnOffWordBehaviour
struct  TurnOffWordBehaviour_t596756633  : public MonoBehaviour_t3521571575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNOFFWORDBEHAVIOUR_T596756633_H
#ifndef DATASETTRACKABLEBEHAVIOUR_T4223860623_H
#define DATASETTRACKABLEBEHAVIOUR_T4223860623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t4223860623  : public TrackableBehaviour_t392499558
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_10;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mExtendedTracking
	bool ___mExtendedTracking_11;

public:
	inline static int32_t get_offset_of_mDataSetPath_10() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t4223860623, ___mDataSetPath_10)); }
	inline String_t* get_mDataSetPath_10() const { return ___mDataSetPath_10; }
	inline String_t** get_address_of_mDataSetPath_10() { return &___mDataSetPath_10; }
	inline void set_mDataSetPath_10(String_t* value)
	{
		___mDataSetPath_10 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetPath_10), value);
	}

	inline static int32_t get_offset_of_mExtendedTracking_11() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t4223860623, ___mExtendedTracking_11)); }
	inline bool get_mExtendedTracking_11() const { return ___mExtendedTracking_11; }
	inline bool* get_address_of_mExtendedTracking_11() { return &___mExtendedTracking_11; }
	inline void set_mExtendedTracking_11(bool value)
	{
		___mExtendedTracking_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTRACKABLEBEHAVIOUR_T4223860623_H
#ifndef ANCHORBEHAVIOUR_T2030557571_H
#define ANCHORBEHAVIOUR_T2030557571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AnchorBehaviour
struct  AnchorBehaviour_t2030557571  : public TrackableBehaviour_t392499558
{
public:
	// Vuforia.Anchor Vuforia.AnchorBehaviour::mAnchor
	RuntimeObject* ___mAnchor_10;
	// Vuforia.PositionalDeviceTracker Vuforia.AnchorBehaviour::mDeviceTracker
	PositionalDeviceTracker_t1369874775 * ___mDeviceTracker_11;

public:
	inline static int32_t get_offset_of_mAnchor_10() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t2030557571, ___mAnchor_10)); }
	inline RuntimeObject* get_mAnchor_10() const { return ___mAnchor_10; }
	inline RuntimeObject** get_address_of_mAnchor_10() { return &___mAnchor_10; }
	inline void set_mAnchor_10(RuntimeObject* value)
	{
		___mAnchor_10 = value;
		Il2CppCodeGenWriteBarrier((&___mAnchor_10), value);
	}

	inline static int32_t get_offset_of_mDeviceTracker_11() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t2030557571, ___mDeviceTracker_11)); }
	inline PositionalDeviceTracker_t1369874775 * get_mDeviceTracker_11() const { return ___mDeviceTracker_11; }
	inline PositionalDeviceTracker_t1369874775 ** get_address_of_mDeviceTracker_11() { return &___mDeviceTracker_11; }
	inline void set_mDeviceTracker_11(PositionalDeviceTracker_t1369874775 * value)
	{
		___mDeviceTracker_11 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTracker_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORBEHAVIOUR_T2030557571_H
#ifndef MODELTARGETBEHAVIOUR_T2608982574_H
#define MODELTARGETBEHAVIOUR_T2608982574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetBehaviour
struct  ModelTargetBehaviour_t2608982574  : public DataSetTrackableBehaviour_t4223860623
{
public:
	// Vuforia.ModelTarget Vuforia.ModelTargetBehaviour::mModelTarget
	RuntimeObject* ___mModelTarget_12;
	// System.Single Vuforia.ModelTargetBehaviour::mBaseSize
	float ___mBaseSize_13;
	// System.Single Vuforia.ModelTargetBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_14;
	// System.Single Vuforia.ModelTargetBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_15;
	// System.Boolean Vuforia.ModelTargetBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_16;
	// System.Boolean Vuforia.ModelTargetBehaviour::mUse3DGuideView
	bool ___mUse3DGuideView_17;
	// System.Boolean Vuforia.ModelTargetBehaviour::mOverrideSnappingPose
	bool ___mOverrideSnappingPose_18;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mBBoxMin
	Vector3_t539014097  ___mBBoxMin_19;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mBBoxMax
	Vector3_t539014097  ___mBBoxMax_20;
	// UnityEngine.Texture2D Vuforia.ModelTargetBehaviour::mPreviewImage
	Texture2D_t601339354 * ___mPreviewImage_21;
	// System.Single Vuforia.ModelTargetBehaviour::mLength
	float ___mLength_22;
	// System.Single Vuforia.ModelTargetBehaviour::mWidth
	float ___mWidth_23;
	// System.Single Vuforia.ModelTargetBehaviour::mHeight
	float ___mHeight_24;
	// UnityEngine.GameObject Vuforia.ModelTargetBehaviour::m3DGuideViewModel
	GameObject_t2527051794 * ___m3DGuideViewModel_25;
	// UnityEngine.Texture2D Vuforia.ModelTargetBehaviour::m2DGuideViewImage
	Texture2D_t601339354 * ___m2DGuideViewImage_26;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mLastTransformScale
	Vector3_t539014097  ___mLastTransformScale_27;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mLastSize
	Vector3_t539014097  ___mLastSize_28;

public:
	inline static int32_t get_offset_of_mModelTarget_12() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mModelTarget_12)); }
	inline RuntimeObject* get_mModelTarget_12() const { return ___mModelTarget_12; }
	inline RuntimeObject** get_address_of_mModelTarget_12() { return &___mModelTarget_12; }
	inline void set_mModelTarget_12(RuntimeObject* value)
	{
		___mModelTarget_12 = value;
		Il2CppCodeGenWriteBarrier((&___mModelTarget_12), value);
	}

	inline static int32_t get_offset_of_mBaseSize_13() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mBaseSize_13)); }
	inline float get_mBaseSize_13() const { return ___mBaseSize_13; }
	inline float* get_address_of_mBaseSize_13() { return &___mBaseSize_13; }
	inline void set_mBaseSize_13(float value)
	{
		___mBaseSize_13 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXY_14() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mAspectRatioXY_14)); }
	inline float get_mAspectRatioXY_14() const { return ___mAspectRatioXY_14; }
	inline float* get_address_of_mAspectRatioXY_14() { return &___mAspectRatioXY_14; }
	inline void set_mAspectRatioXY_14(float value)
	{
		___mAspectRatioXY_14 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXZ_15() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mAspectRatioXZ_15)); }
	inline float get_mAspectRatioXZ_15() const { return ___mAspectRatioXZ_15; }
	inline float* get_address_of_mAspectRatioXZ_15() { return &___mAspectRatioXZ_15; }
	inline void set_mAspectRatioXZ_15(float value)
	{
		___mAspectRatioXZ_15 = value;
	}

	inline static int32_t get_offset_of_mShowBoundingBox_16() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mShowBoundingBox_16)); }
	inline bool get_mShowBoundingBox_16() const { return ___mShowBoundingBox_16; }
	inline bool* get_address_of_mShowBoundingBox_16() { return &___mShowBoundingBox_16; }
	inline void set_mShowBoundingBox_16(bool value)
	{
		___mShowBoundingBox_16 = value;
	}

	inline static int32_t get_offset_of_mUse3DGuideView_17() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mUse3DGuideView_17)); }
	inline bool get_mUse3DGuideView_17() const { return ___mUse3DGuideView_17; }
	inline bool* get_address_of_mUse3DGuideView_17() { return &___mUse3DGuideView_17; }
	inline void set_mUse3DGuideView_17(bool value)
	{
		___mUse3DGuideView_17 = value;
	}

	inline static int32_t get_offset_of_mOverrideSnappingPose_18() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mOverrideSnappingPose_18)); }
	inline bool get_mOverrideSnappingPose_18() const { return ___mOverrideSnappingPose_18; }
	inline bool* get_address_of_mOverrideSnappingPose_18() { return &___mOverrideSnappingPose_18; }
	inline void set_mOverrideSnappingPose_18(bool value)
	{
		___mOverrideSnappingPose_18 = value;
	}

	inline static int32_t get_offset_of_mBBoxMin_19() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mBBoxMin_19)); }
	inline Vector3_t539014097  get_mBBoxMin_19() const { return ___mBBoxMin_19; }
	inline Vector3_t539014097 * get_address_of_mBBoxMin_19() { return &___mBBoxMin_19; }
	inline void set_mBBoxMin_19(Vector3_t539014097  value)
	{
		___mBBoxMin_19 = value;
	}

	inline static int32_t get_offset_of_mBBoxMax_20() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mBBoxMax_20)); }
	inline Vector3_t539014097  get_mBBoxMax_20() const { return ___mBBoxMax_20; }
	inline Vector3_t539014097 * get_address_of_mBBoxMax_20() { return &___mBBoxMax_20; }
	inline void set_mBBoxMax_20(Vector3_t539014097  value)
	{
		___mBBoxMax_20 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_21() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mPreviewImage_21)); }
	inline Texture2D_t601339354 * get_mPreviewImage_21() const { return ___mPreviewImage_21; }
	inline Texture2D_t601339354 ** get_address_of_mPreviewImage_21() { return &___mPreviewImage_21; }
	inline void set_mPreviewImage_21(Texture2D_t601339354 * value)
	{
		___mPreviewImage_21 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_21), value);
	}

	inline static int32_t get_offset_of_mLength_22() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mLength_22)); }
	inline float get_mLength_22() const { return ___mLength_22; }
	inline float* get_address_of_mLength_22() { return &___mLength_22; }
	inline void set_mLength_22(float value)
	{
		___mLength_22 = value;
	}

	inline static int32_t get_offset_of_mWidth_23() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mWidth_23)); }
	inline float get_mWidth_23() const { return ___mWidth_23; }
	inline float* get_address_of_mWidth_23() { return &___mWidth_23; }
	inline void set_mWidth_23(float value)
	{
		___mWidth_23 = value;
	}

	inline static int32_t get_offset_of_mHeight_24() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mHeight_24)); }
	inline float get_mHeight_24() const { return ___mHeight_24; }
	inline float* get_address_of_mHeight_24() { return &___mHeight_24; }
	inline void set_mHeight_24(float value)
	{
		___mHeight_24 = value;
	}

	inline static int32_t get_offset_of_m3DGuideViewModel_25() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___m3DGuideViewModel_25)); }
	inline GameObject_t2527051794 * get_m3DGuideViewModel_25() const { return ___m3DGuideViewModel_25; }
	inline GameObject_t2527051794 ** get_address_of_m3DGuideViewModel_25() { return &___m3DGuideViewModel_25; }
	inline void set_m3DGuideViewModel_25(GameObject_t2527051794 * value)
	{
		___m3DGuideViewModel_25 = value;
		Il2CppCodeGenWriteBarrier((&___m3DGuideViewModel_25), value);
	}

	inline static int32_t get_offset_of_m2DGuideViewImage_26() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___m2DGuideViewImage_26)); }
	inline Texture2D_t601339354 * get_m2DGuideViewImage_26() const { return ___m2DGuideViewImage_26; }
	inline Texture2D_t601339354 ** get_address_of_m2DGuideViewImage_26() { return &___m2DGuideViewImage_26; }
	inline void set_m2DGuideViewImage_26(Texture2D_t601339354 * value)
	{
		___m2DGuideViewImage_26 = value;
		Il2CppCodeGenWriteBarrier((&___m2DGuideViewImage_26), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_27() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mLastTransformScale_27)); }
	inline Vector3_t539014097  get_mLastTransformScale_27() const { return ___mLastTransformScale_27; }
	inline Vector3_t539014097 * get_address_of_mLastTransformScale_27() { return &___mLastTransformScale_27; }
	inline void set_mLastTransformScale_27(Vector3_t539014097  value)
	{
		___mLastTransformScale_27 = value;
	}

	inline static int32_t get_offset_of_mLastSize_28() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t2608982574, ___mLastSize_28)); }
	inline Vector3_t539014097  get_mLastSize_28() const { return ___mLastSize_28; }
	inline Vector3_t539014097 * get_address_of_mLastSize_28() { return &___mLastSize_28; }
	inline void set_mLastSize_28(Vector3_t539014097  value)
	{
		___mLastSize_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELTARGETBEHAVIOUR_T2608982574_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (AnchorBehaviour_t2030557571), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1900[2] = 
{
	AnchorBehaviour_t2030557571::get_offset_of_mAnchor_10(),
	AnchorBehaviour_t2030557571::get_offset_of_mDeviceTracker_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (GuideViewCameraBehaviour_t1843523253), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (DataSetExtendedTrackingImpl_t2868923405), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1902[2] = 
{
	DataSetExtendedTrackingImpl_t2868923405::get_offset_of_mId_0(),
	DataSetExtendedTrackingImpl_t2868923405::get_offset_of_mDataSetPtr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (DisabledExtendedTrackingImpl_t48798804), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (ModelTargetBoundingBoxImpl_t3757521100), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[2] = 
{
	ModelTargetBoundingBoxImpl_t3757521100::get_offset_of_mDataSet_0(),
	ModelTargetBoundingBoxImpl_t3757521100::get_offset_of_mName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (VuforiaNativeExtendedTrackingImpl_t2479501537), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[2] = 
{
	VuforiaNativeExtendedTrackingImpl_t2479501537::get_offset_of_mId_0(),
	VuforiaNativeExtendedTrackingImpl_t2479501537::get_offset_of_mDataSetPtr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (AndroidDatasets_t4098650380), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (AndroidUnityPlayer_t2615317378), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (IOSUnityPlayer_t1056363870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[1] = 
{
	IOSUnityPlayer_t1056363870::get_offset_of_mScreenOrientation_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (PlatformRuntimeInitialization_t672759580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (PlayModeUnityPlayer_t3686526366), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (WSAUnityPlayer_t902517639), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (VideoBackgroundDefaultProvider_t1221888382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (PlanesHideExcessAreaClipping_t2216037153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[5] = 
{
	0,
	PlanesHideExcessAreaClipping_t2216037153::get_offset_of_mMatteShader_1(),
	PlanesHideExcessAreaClipping_t2216037153::get_offset_of_mClippingPlanes_2(),
	PlanesHideExcessAreaClipping_t2216037153::get_offset_of_mPlanesActivated_3(),
	PlanesHideExcessAreaClipping_t2216037153::get_offset_of_mClippingScale_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (PlanePos_t2646182763)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1914[5] = 
{
	PlanePos_t2646182763::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (VuforiaVRDeviceCameraConfiguration_t1799712367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1915[3] = 
{
	0,
	VuforiaVRDeviceCameraConfiguration_t1799712367::get_offset_of_mStereoOffset_26(),
	VuforiaVRDeviceCameraConfiguration_t1799712367::get_offset_of_mDelayedVideoBackgroundEnabledChanged_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (StereoProjMatrixStore_t3359157030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1917[9] = 
{
	StereoProjMatrixStore_t3359157030::get_offset_of_mCamera_0(),
	StereoProjMatrixStore_t3359157030::get_offset_of_mProjectionMatrices_1(),
	StereoProjMatrixStore_t3359157030::get_offset_of_mAppliedVerticalFoVs_2(),
	StereoProjMatrixStore_t3359157030::get_offset_of_mCurrentVerticalFoVs_3(),
	StereoProjMatrixStore_t3359157030::get_offset_of_mSharedCullingProjectionMatrix_4(),
	StereoProjMatrixStore_t3359157030::get_offset_of_mSharedCullingViewMatrix_5(),
	StereoProjMatrixStore_t3359157030::get_offset_of_mLeftEyeOffsetMatrix_6(),
	StereoProjMatrixStore_t3359157030::get_offset_of_mRightEyeOffsetMatrix_7(),
	StereoProjMatrixStore_t3359157030::get_offset_of_mMode_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (Mode_t2991753559)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1918[3] = 
{
	Mode_t2991753559::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (ExternalVRDeviceCameraConfiguration_t1384583269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1919[2] = 
{
	0,
	ExternalVRDeviceCameraConfiguration_t1384583269::get_offset_of_mLastWorldCenterMode_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (VRDeviceCameraConfiguration_t3430823695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1920[15] = 
{
	0,
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mCamera_11(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mMatrixStore_12(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mLeftMatrixUsedForVBPlacement_13(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mLastAppliedNearClipPlane_14(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mLastAppliedFarClipPlane_15(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mMaxDepthForVideoBackground_16(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mMinDepthForVideoBackground_17(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mScreenWidth_18(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mScreenHeight_19(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mStereoDepth_20(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mResetMatrix_21(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mVuforiaFrustumSkew_22(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mCenterToEyeAxis_23(),
	VRDeviceCameraConfiguration_t3430823695::get_offset_of_mVrDeviceController_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (DigitalEyewearARController_t1080435708), -1, sizeof(DigitalEyewearARController_t1080435708_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1921[22] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	DigitalEyewearARController_t1080435708::get_offset_of_mCameraOffset_7(),
	DigitalEyewearARController_t1080435708::get_offset_of_mDistortionRenderingLayer_8(),
	DigitalEyewearARController_t1080435708::get_offset_of_mEyewearType_9(),
	DigitalEyewearARController_t1080435708::get_offset_of_mStereoFramework_10(),
	DigitalEyewearARController_t1080435708::get_offset_of_mSeeThroughConfiguration_11(),
	DigitalEyewearARController_t1080435708::get_offset_of_mViewerName_12(),
	DigitalEyewearARController_t1080435708::get_offset_of_mViewerManufacturer_13(),
	DigitalEyewearARController_t1080435708::get_offset_of_mUseCustomViewer_14(),
	DigitalEyewearARController_t1080435708::get_offset_of_mCustomViewer_15(),
	DigitalEyewearARController_t1080435708::get_offset_of_mCentralAnchorPoint_16(),
	DigitalEyewearARController_t1080435708::get_offset_of_mPrimaryCamera_17(),
	DigitalEyewearARController_t1080435708::get_offset_of_mVuforiaBehaviour_18(),
	DigitalEyewearARController_t1080435708::get_offset_of_mSetFocusPlaneAutomatically_19(),
	DigitalEyewearARController_t1080435708::get_offset_of_mVRDeviceController_20(),
	DigitalEyewearARController_t1080435708_StaticFields::get_offset_of_mInstance_21(),
	DigitalEyewearARController_t1080435708_StaticFields::get_offset_of_mPadlock_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (EyewearType_t16315864)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1922[4] = 
{
	EyewearType_t16315864::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (StereoFramework_t2572441663)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1923[4] = 
{
	StereoFramework_t2572441663::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (SeeThroughConfiguration_t1665446849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1924[3] = 
{
	SeeThroughConfiguration_t1665446849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (SerializableViewerParameters_t19392574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1925[11] = 
{
	SerializableViewerParameters_t19392574::get_offset_of_Version_0(),
	SerializableViewerParameters_t19392574::get_offset_of_Name_1(),
	SerializableViewerParameters_t19392574::get_offset_of_Manufacturer_2(),
	SerializableViewerParameters_t19392574::get_offset_of_ButtonType_3(),
	SerializableViewerParameters_t19392574::get_offset_of_ScreenToLensDistance_4(),
	SerializableViewerParameters_t19392574::get_offset_of_InterLensDistance_5(),
	SerializableViewerParameters_t19392574::get_offset_of_TrayAlignment_6(),
	SerializableViewerParameters_t19392574::get_offset_of_LensCenterToTrayDistance_7(),
	SerializableViewerParameters_t19392574::get_offset_of_DistortionCoefficients_8(),
	SerializableViewerParameters_t19392574::get_offset_of_FieldOfView_9(),
	SerializableViewerParameters_t19392574::get_offset_of_ContainsMagnet_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (UnityComponentExtensions_t1770104781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (AValidatableVideoBackgroundConfigProperty_t1027986687), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1927[2] = 
{
	AValidatableVideoBackgroundConfigProperty_t1027986687::get_offset_of_Config_0(),
	AValidatableVideoBackgroundConfigProperty_t1027986687::get_offset_of_DefaultProvider_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (MatteShaderProperty_t796346175), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (NumDivisionsProperty_t3034003191), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1929[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { sizeof (VideoBackgroundConfigValidator_t2863708653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1930[1] = 
{
	VideoBackgroundConfigValidator_t2863708653::get_offset_of_mValidatableProperties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { sizeof (U3CU3Ec__DisplayClass2_0_t2763218341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1931[1] = 
{
	U3CU3Ec__DisplayClass2_0_t2763218341::get_offset_of_res_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (VideoBackgroundShaderProperty_t3530405522), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (EyewearDevice_t843669954), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (EyeID_t3105909960)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1934[4] = 
{
	EyeID_t3105909960::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (EyewearCalibrationReading_t3949217182)+ sizeof (RuntimeObject), sizeof(EyewearCalibrationReading_t3949217182_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1935[5] = 
{
	EyewearCalibrationReading_t3949217182::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReading_t3949217182::get_offset_of_scale_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReading_t3949217182::get_offset_of_centerX_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReading_t3949217182::get_offset_of_centerY_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReading_t3949217182::get_offset_of_type_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (AlignmentType_t742047908)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1936[4] = 
{
	AlignmentType_t742047908::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (GuideView_t4109920118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1937[3] = 
{
	GuideView_t4109920118::get_offset_of_U3CImageU3Ek__BackingField_0(),
	GuideView_t4109920118::get_offset_of_mInstancePtr_1(),
	GuideView_t4109920118::get_offset_of_mPose_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (GuideView2DBehaviour_t3441820214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1938[1] = 
{
	GuideView2DBehaviour_t3441820214::get_offset_of_mModelTargetCache_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (U3CU3Ec__DisplayClass6_0_t3579304920), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1939[1] = 
{
	U3CU3Ec__DisplayClass6_0_t3579304920::get_offset_of_modelTargetName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (GuideView3DBehaviour_t2607610014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1940[3] = 
{
	GuideView3DBehaviour_t2607610014::get_offset_of_mCurrentGuideView_2(),
	GuideView3DBehaviour_t2607610014::get_offset_of_mModelTargetCache_3(),
	GuideView3DBehaviour_t2607610014::get_offset_of_mDirty_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (U3CU3Ec__DisplayClass6_0_t2976966780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1941[1] = 
{
	U3CU3Ec__DisplayClass6_0_t2976966780::get_offset_of_modelTargetName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (GuideViewRenderingBehaviour_t297621634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1942[8] = 
{
	GuideViewRenderingBehaviour_t297621634::get_offset_of_guideReappearanceDelay_2(),
	GuideViewRenderingBehaviour_t297621634::get_offset_of_use3DGuideView_3(),
	GuideViewRenderingBehaviour_t297621634::get_offset_of_mGuideViewsInitialized_4(),
	GuideViewRenderingBehaviour_t297621634::get_offset_of_mLastTrackedTarget_5(),
	GuideViewRenderingBehaviour_t297621634::get_offset_of_mLastActiveDatasets_6(),
	GuideViewRenderingBehaviour_t297621634::get_offset_of_mActiveGuideView_7(),
	GuideViewRenderingBehaviour_t297621634::get_offset_of_mShowGuideViewCoroutine_8(),
	GuideViewRenderingBehaviour_t297621634::get_offset_of_mModelTargetGuideViews_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (U3CInitGuideViewsU3Ed__12_t743220553), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1943[3] = 
{
	U3CInitGuideViewsU3Ed__12_t743220553::get_offset_of_U3CU3E1__state_0(),
	U3CInitGuideViewsU3Ed__12_t743220553::get_offset_of_U3CU3E2__current_1(),
	U3CInitGuideViewsU3Ed__12_t743220553::get_offset_of_U3CU3E4__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (U3CU3Ec__DisplayClass13_0_t2855881878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1944[1] = 
{
	U3CU3Ec__DisplayClass13_0_t2855881878::get_offset_of_dbName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (U3CU3Ec_t245687167), -1, sizeof(U3CU3Ec_t245687167_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1945[2] = 
{
	U3CU3Ec_t245687167_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t245687167_StaticFields::get_offset_of_U3CU3E9__20_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (U3CShowGuideViewAfterU3Ed__22_t3891835532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1946[4] = 
{
	U3CShowGuideViewAfterU3Ed__22_t3891835532::get_offset_of_U3CU3E1__state_0(),
	U3CShowGuideViewAfterU3Ed__22_t3891835532::get_offset_of_U3CU3E2__current_1(),
	U3CShowGuideViewAfterU3Ed__22_t3891835532::get_offset_of_seconds_2(),
	U3CShowGuideViewAfterU3Ed__22_t3891835532::get_offset_of_U3CU3E4__this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (ModelTargetImpl_t344489273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1948[1] = 
{
	ModelTargetImpl_t344489273::get_offset_of_mBoundingBoxImpl_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1950 = { sizeof (ModelTargetBehaviour_t2608982574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1950[17] = 
{
	ModelTargetBehaviour_t2608982574::get_offset_of_mModelTarget_12(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mBaseSize_13(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mAspectRatioXY_14(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mAspectRatioXZ_15(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mShowBoundingBox_16(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mUse3DGuideView_17(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mOverrideSnappingPose_18(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mBBoxMin_19(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mBBoxMax_20(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mPreviewImage_21(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mLength_22(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mWidth_23(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mHeight_24(),
	ModelTargetBehaviour_t2608982574::get_offset_of_m3DGuideViewModel_25(),
	ModelTargetBehaviour_t2608982574::get_offset_of_m2DGuideViewImage_26(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mLastTransformScale_27(),
	ModelTargetBehaviour_t2608982574::get_offset_of_mLastSize_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1951 = { sizeof (TargetGuideViewBehaviour_t977833296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1951[2] = 
{
	TargetGuideViewBehaviour_t977833296::get_offset_of_databaseName_2(),
	TargetGuideViewBehaviour_t977833296::get_offset_of_mUse3DGuideView_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1952 = { sizeof (GLErrorHandler_t3250135801), -1, sizeof(GLErrorHandler_t3250135801_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1952[3] = 
{
	GLErrorHandler_t3250135801_StaticFields::get_offset_of_mErrorText_2(),
	GLErrorHandler_t3250135801_StaticFields::get_offset_of_mErrorOccurred_3(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1953 = { sizeof (MaskOutBehaviour_t1499703654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1953[1] = 
{
	MaskOutBehaviour_t1499703654::get_offset_of_maskMaterial_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1954 = { sizeof (AnchorData_t3267741978)+ sizeof (RuntimeObject), sizeof(AnchorData_t3267741978 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1954[2] = 
{
	AnchorData_t3267741978::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnchorData_t3267741978::get_offset_of_unused_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1955 = { sizeof (AnchorImpl_t2872107660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1955[2] = 
{
	AnchorImpl_t2872107660::get_offset_of_mName_0(),
	AnchorImpl_t2872107660::get_offset_of_mId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1956 = { sizeof (HitTestResultData_t3988651323)+ sizeof (RuntimeObject), sizeof(HitTestResultData_t3988651323_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1956[2] = 
{
	HitTestResultData_t3988651323::get_offset_of_Position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitTestResultData_t3988651323::get_offset_of_Orientation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1957 = { sizeof (SmartTerrain_t2953426174), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1958 = { sizeof (HitTestResult_t3843505021)+ sizeof (RuntimeObject), sizeof(HitTestResult_t3843505021 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1958[2] = 
{
	HitTestResult_t3843505021::get_offset_of_mPosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitTestResult_t3843505021::get_offset_of_mOrientation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1959 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1960 = { sizeof (NullHoloLensApiAbstraction_t2187269667), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1961 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1962 = { sizeof (DeviceTracker_t1565609596), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1963 = { sizeof (TRACKING_MODE_t987991041)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1963[3] = 
{
	TRACKING_MODE_t987991041::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1964 = { sizeof (DeviceTrackerARController_t2866364910), -1, sizeof(DeviceTrackerARController_t2866364910_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1964[16] = 
{
	DeviceTrackerARController_t2866364910_StaticFields::get_offset_of_DEFAULT_HEAD_PIVOT_1(),
	DeviceTrackerARController_t2866364910_StaticFields::get_offset_of_DEFAULT_HANDHELD_PIVOT_2(),
	DeviceTrackerARController_t2866364910::get_offset_of_mTrackingMode_3(),
	DeviceTrackerARController_t2866364910::get_offset_of_mAutoInitTracker_4(),
	DeviceTrackerARController_t2866364910::get_offset_of_mAutoStartTracker_5(),
	DeviceTrackerARController_t2866364910::get_offset_of_mPosePrediction_6(),
	DeviceTrackerARController_t2866364910::get_offset_of_mModelCorrectionMode_7(),
	DeviceTrackerARController_t2866364910::get_offset_of_mModelTransformEnabled_8(),
	DeviceTrackerARController_t2866364910::get_offset_of_mModelTransform_9(),
	DeviceTrackerARController_t2866364910::get_offset_of_mTrackerStarted_10(),
	DeviceTrackerARController_t2866364910::get_offset_of_mTrackerWasActiveBeforePause_11(),
	DeviceTrackerARController_t2866364910::get_offset_of_mTrackerWasActiveBeforeDisabling_12(),
	DeviceTrackerARController_t2866364910::get_offset_of_mEmulatorKeyCodes_13(),
	DeviceTrackerARController_t2866364910::get_offset_of_mEmulatorPositionVelocity_14(),
	DeviceTrackerARController_t2866364910_StaticFields::get_offset_of_mInstance_15(),
	DeviceTrackerARController_t2866364910_StaticFields::get_offset_of_mPadlock_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1965 = { sizeof (ObjectTargetImpl_t3492478552), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1965[2] = 
{
	ObjectTargetImpl_t3492478552::get_offset_of_mExtTrackingImpl_2(),
	ObjectTargetImpl_t3492478552::get_offset_of_mTargetSizeImpl_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1966 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1967 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1968 = { sizeof (DataSetTargetSize_t3700719347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1968[3] = 
{
	DataSetTargetSize_t3700719347::get_offset_of_mSize_0(),
	DataSetTargetSize_t3700719347::get_offset_of_mName_1(),
	DataSetTargetSize_t3700719347::get_offset_of_mDataSet_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1969 = { sizeof (CustomDataSetTargetSize_t3617445386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1969[2] = 
{
	CustomDataSetTargetSize_t3617445386::get_offset_of_mInvokeBeforeNativeCall_3(),
	CustomDataSetTargetSize_t3617445386::get_offset_of_mSetSizeAction_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1970 = { sizeof (DisabledSetTargetSize_t220308948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1970[1] = 
{
	DisabledSetTargetSize_t220308948::get_offset_of_mSize_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1971 = { sizeof (TurnOffBehaviour_t629459631), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1972 = { sizeof (TurnOffWordBehaviour_t596756633), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1973 = { sizeof (GameObjectExtensionMethods_t1911396097), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1974 = { sizeof (IEnumerableExtensionMethods_t2330898508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1975 = { sizeof (DelegateHelper_t1427182990), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1976 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1977 = { sizeof (PlayModeEyewearUserCalibratorImpl_t665434750), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1978 = { sizeof (PlayModeEyewearCalibrationProfileManagerImpl_t1523681202), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1979 = { sizeof (PlayModeEyewearDevice_t2003789254), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1979[3] = 
{
	PlayModeEyewearDevice_t2003789254::get_offset_of_mProfileManager_1(),
	PlayModeEyewearDevice_t2003789254::get_offset_of_mCalibrator_2(),
	PlayModeEyewearDevice_t2003789254::get_offset_of_mDummyPredictiveTracking_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1980 = { sizeof (DedicatedEyewearDevice_t2829071742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1980[2] = 
{
	DedicatedEyewearDevice_t2829071742::get_offset_of_mProfileManager_1(),
	DedicatedEyewearDevice_t2829071742::get_offset_of_mCalibrator_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1981 = { sizeof (CameraConfigurationUtility_t3801853321), -1, sizeof(CameraConfigurationUtility_t3801853321_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1981[12] = 
{
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MIN_CENTER_0(),
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MAX_CENTER_1(),
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MIN_BOTTOM_2(),
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MIN_TOP_3(),
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MIN_LEFT_4(),
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MIN_RIGHT_5(),
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MAX_BOTTOM_6(),
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MAX_TOP_7(),
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MAX_LEFT_8(),
	CameraConfigurationUtility_t3801853321_StaticFields::get_offset_of_MAX_RIGHT_9(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1982 = { sizeof (BaseCameraConfiguration_t575072495), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1982[10] = 
{
	BaseCameraConfiguration_t575072495::get_offset_of_mCameraDeviceMode_0(),
	BaseCameraConfiguration_t575072495::get_offset_of_mLastVideoBackGroundMirroredFromSDK_1(),
	BaseCameraConfiguration_t575072495::get_offset_of_mOnVideoBackgroundConfigChanged_2(),
	BaseCameraConfiguration_t575072495::get_offset_of_mVideoBackgroundBehaviour_3(),
	BaseCameraConfiguration_t575072495::get_offset_of_mVideoBackgroundViewportRect_4(),
	BaseCameraConfiguration_t575072495::get_offset_of_mRenderVideoBackground_5(),
	BaseCameraConfiguration_t575072495::get_offset_of_mProjectionOrientation_6(),
	BaseCameraConfiguration_t575072495::get_offset_of_mInitialReflection_7(),
	BaseCameraConfiguration_t575072495::get_offset_of_mBackgroundPlaneBehaviour_8(),
	BaseCameraConfiguration_t575072495::get_offset_of_mCameraParameterChanged_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1983 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1984 = { sizeof (HoloLensExtendedTrackingManager_t1894204616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1984[15] = 
{
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mNumFramesStablePose_0(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mMaxPoseRelDistance_1(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mMaxPoseAngleDiff_2(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mMaxCamPoseAbsDistance_3(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mMaxCamPoseAngleDiff_4(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mMinNumFramesPoseOff_5(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mMinPoseUpdateRelDistance_6(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mMinPoseUpdateAngleDiff_7(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mTrackableSizeInViewThreshold_8(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mMaxDistanceFromViewCenterForPoseUpdate_9(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mSetWorldAnchors_10(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mTrackingList_11(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mTrackablesExtendedTrackingEnabled_12(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mTrackablesCurrentlyExtendedTracked_13(),
	HoloLensExtendedTrackingManager_t1894204616::get_offset_of_mExtendedTrackablesState_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1985 = { sizeof (PoseInfo_t2963303070)+ sizeof (RuntimeObject), sizeof(PoseInfo_t2963303070 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1985[3] = 
{
	PoseInfo_t2963303070::get_offset_of_Position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseInfo_t2963303070::get_offset_of_Rotation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseInfo_t2963303070::get_offset_of_NumFramesPoseWasOff_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1986 = { sizeof (PoseAgeEntry_t1970234155)+ sizeof (RuntimeObject), sizeof(PoseAgeEntry_t1970234155 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1986[3] = 
{
	PoseAgeEntry_t1970234155::get_offset_of_Pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseAgeEntry_t1970234155::get_offset_of_CameraPose_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseAgeEntry_t1970234155::get_offset_of_Age_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1987 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1988 = { sizeof (VuforiaExtendedTrackingManager_t48552967), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1989 = { sizeof (Log_t3190074202), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1990 = { sizeof (TrackerData_t399692462), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1991 = { sizeof (PoseData_t3220163595)+ sizeof (RuntimeObject), sizeof(PoseData_t3220163595 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1991[3] = 
{
	PoseData_t3220163595::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseData_t3220163595::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseData_t3220163595::get_offset_of_csInteger_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1992 = { sizeof (TrackableResultData_t797872706)+ sizeof (RuntimeObject), sizeof(TrackableResultData_t797872706 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1992[4] = 
{
	TrackableResultData_t797872706::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableResultData_t797872706::get_offset_of_timeStamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableResultData_t797872706::get_offset_of_statusInteger_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableResultData_t797872706::get_offset_of_id_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1993 = { sizeof (VirtualButtonData_t3003950808)+ sizeof (RuntimeObject), sizeof(VirtualButtonData_t3003950808 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1993[2] = 
{
	VirtualButtonData_t3003950808::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VirtualButtonData_t3003950808::get_offset_of_isPressed_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1994 = { sizeof (Obb2D_t1488815471)+ sizeof (RuntimeObject), sizeof(Obb2D_t1488815471 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1994[4] = 
{
	Obb2D_t1488815471::get_offset_of_center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb2D_t1488815471::get_offset_of_halfExtents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb2D_t1488815471::get_offset_of_rotation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb2D_t1488815471::get_offset_of_unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1995 = { sizeof (Obb3D_t1659486782)+ sizeof (RuntimeObject), sizeof(Obb3D_t1659486782 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1995[4] = 
{
	Obb3D_t1659486782::get_offset_of_center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb3D_t1659486782::get_offset_of_halfExtents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb3D_t1659486782::get_offset_of_rotationZ_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb3D_t1659486782::get_offset_of_unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1996 = { sizeof (WordResultData_t4259303705)+ sizeof (RuntimeObject), sizeof(WordResultData_t4259303705 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1996[5] = 
{
	WordResultData_t4259303705::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WordResultData_t4259303705::get_offset_of_timeStamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WordResultData_t4259303705::get_offset_of_statusInteger_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WordResultData_t4259303705::get_offset_of_id_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WordResultData_t4259303705::get_offset_of_orientedBoundingBox_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1997 = { sizeof (WordData_t1526873780)+ sizeof (RuntimeObject), sizeof(WordData_t1526873780 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1997[4] = 
{
	WordData_t1526873780::get_offset_of_stringValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WordData_t1526873780::get_offset_of_id_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WordData_t1526873780::get_offset_of_size_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WordData_t1526873780::get_offset_of_unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1998 = { sizeof (ImageHeaderData_t364569079)+ sizeof (RuntimeObject), sizeof(ImageHeaderData_t364569079 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1998[9] = 
{
	ImageHeaderData_t364569079::get_offset_of_data_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t364569079::get_offset_of_width_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t364569079::get_offset_of_height_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t364569079::get_offset_of_stride_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t364569079::get_offset_of_bufferWidth_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t364569079::get_offset_of_bufferHeight_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t364569079::get_offset_of_format_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t364569079::get_offset_of_reallocate_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t364569079::get_offset_of_updated_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1999 = { sizeof (MeshData_t1154790071)+ sizeof (RuntimeObject), sizeof(MeshData_t1154790071 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1999[8] = 
{
	MeshData_t1154790071::get_offset_of_positionsArray_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t1154790071::get_offset_of_normalsArray_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t1154790071::get_offset_of_texCoordsArray_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t1154790071::get_offset_of_triangleIdxArray_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t1154790071::get_offset_of_numVertexValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t1154790071::get_offset_of_hasNormals_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t1154790071::get_offset_of_hasTexCoords_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t1154790071::get_offset_of_numTriangleIndices_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
