﻿#include "il2cpp-config.h"

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

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_t3069447718;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t601339354;
// System.String[]
struct StringU5BU5D_t148011198;
// System.Action`1<System.Boolean>
struct Action_1_t2194597286;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t214289417;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t1445344399;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t491924267;
// System.Action`1<System.Object>
struct Action_1_t3164870675;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t3578886302;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t3179150494;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t2916729094;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t783875789;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t1869465636;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t4076573085;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t2705473828;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_t679270745;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t334544374;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t2074805605;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t509047912;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t3676091538;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t3954320387;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t1253178395;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t3409191417;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t839788964;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t299758263;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t4278523650;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t3762680006;
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0
struct U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t493877766;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t558175163;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t2550452145;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t2323180381;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3976455761;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t3658893960;
// System.Object[]
struct ObjectU5BU5D_t3878505910;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t3845273338;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t1427979700;
// System.Char[]
struct CharU5BU5D_t1237632434;
// System.Void
struct Void_t3968031514;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t4018218907;
// System.Int32[]
struct Int32U5BU5D_t1884137699;
// System.IAsyncResult
struct IAsyncResult_t1055566646;
// System.AsyncCallback
struct AsyncCallback_t4194240925;

extern RuntimeClass* GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var;
extern const uint32_t GameCenterPlatform_ResetAllAchievements_m709346934_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2608539986_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ShowLeaderboardUI_m3003992662_MetadataUsageId;
extern RuntimeClass* AchievementDescriptionU5BU5D_t1427979700_il2cpp_TypeInfo_var;
extern const uint32_t GameCenterPlatform_ClearAchievementDescriptions_m1422315050_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetAchievementDescription_m3537799850_MetadataUsageId;
extern RuntimeClass* Debug_t3621315395_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3969619136;
extern const uint32_t GameCenterPlatform_SetAchievementDescriptionImage_m3268750428_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m2415595642_RuntimeMethod_var;
extern String_t* _stringLiteral3286749098;
extern const uint32_t GameCenterPlatform_TriggerAchievementDescriptionCallback_m179843090_MetadataUsageId;
extern const RuntimeMethod* Action_2_Invoke_m4105483451_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_AuthenticateCallbackWrapper_m2158750177_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ClearFriends_m1585190820_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetFriends_m312217810_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetFriendImage_m391854885_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m1665903769_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_TriggerFriendsCallbackWrapper_m3996103761_MetadataUsageId;
extern RuntimeClass* AchievementU5BU5D_t1510630649_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m584514625_RuntimeMethod_var;
extern String_t* _stringLiteral643263737;
extern const uint32_t GameCenterPlatform_AchievementCallbackWrapper_m1089436760_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ProgressCallbackWrapper_m2172268200_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ScoreCallbackWrapper_m1292460225_MetadataUsageId;
extern RuntimeClass* ScoreU5BU5D_t1654613837_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m3244804856_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_ScoreLoaderCallbackWrapper_m198310030_MetadataUsageId;
extern const uint32_t GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m3283980680_MetadataUsageId;
extern RuntimeClass* U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t3179150494_il2cpp_TypeInfo_var;
extern RuntimeClass* ISocialPlatform_t1878494741_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m3709205484_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m410699131_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m3808260266_MetadataUsageId;
extern const uint32_t GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m247672382_MetadataUsageId;
extern RuntimeClass* LocalUser_t4076573085_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2436469487;
extern const uint32_t GameCenterPlatform_get_localUser_m3791417702_MetadataUsageId;
extern const uint32_t GameCenterPlatform_PopulateLocalUser_m1152273578_MetadataUsageId;
extern const uint32_t GameCenterPlatform_LoadAchievementDescriptions_m3743483042_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ReportProgress_m526233875_MetadataUsageId;
extern const uint32_t GameCenterPlatform_LoadAchievements_m1252109789_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ReportScore_m508852342_MetadataUsageId;
extern const uint32_t GameCenterPlatform_LoadScores_m2850237741_MetadataUsageId;
extern RuntimeClass* Leaderboard_t2550452145_il2cpp_TypeInfo_var;
extern RuntimeClass* GcLeaderboard_t558175163_il2cpp_TypeInfo_var;
extern RuntimeClass* ILeaderboard_t493877766_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m3918193856_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_LoadScores_m2285859017_MetadataUsageId;
extern const uint32_t GameCenterPlatform_LeaderboardCallbackWrapper_m1628002216_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m648429457_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3395527110_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1669917842_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2961317852_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_GetLoading_m3707591069_MetadataUsageId;
extern RuntimeClass* ILocalUser_t3762680006_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1676738798;
extern const uint32_t GameCenterPlatform_VerifyAuthentication_m4274466937_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ShowAchievementsUI_m792371047_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ShowLeaderboardUI_m3630267930_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ClearUsers_m3414163867_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetUser_m2859250675_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetUserImage_m1966720439_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m2364610610_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_TriggerUsersCallbackWrapper_m1985083776_MetadataUsageId;
extern RuntimeClass* UserProfileU5BU5D_t783875789_il2cpp_TypeInfo_var;
extern const uint32_t GameCenterPlatform_LoadUsers_m2714512510_MetadataUsageId;
extern RuntimeClass* Texture2D_t601339354_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2721255499;
extern String_t* _stringLiteral2903419543;
extern const uint32_t GameCenterPlatform_SafeSetUserImage_m2044418657_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SafeClearArray_m1070659531_MetadataUsageId;
extern const uint32_t GameCenterPlatform_CreateLeaderboard_m1254609911_MetadataUsageId;
extern RuntimeClass* Achievement_t509047912_il2cpp_TypeInfo_var;
extern const uint32_t GameCenterPlatform_CreateAchievement_m1431391544_MetadataUsageId;
extern const uint32_t GameCenterPlatform_TriggerResetAchievementCallback_m3982148884_MetadataUsageId;
extern RuntimeClass* List_1_t2323180381_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2870300834_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform__cctor_m527395500_MetadataUsageId;
extern const uint32_t U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m3709205484_MetadataUsageId;
extern const uint32_t GcAchievementData_ToAchievement_m364887381_MetadataUsageId;
extern RuntimeClass* AchievementDescription_t214289417_il2cpp_TypeInfo_var;
extern const uint32_t GcAchievementDescriptionData_ToAchievementDescription_m2727538795_MetadataUsageId;
extern const uint32_t GcLeaderboard_SetScores_m2806394880_MetadataUsageId;
extern RuntimeClass* Score_t839788964_il2cpp_TypeInfo_var;
extern const uint32_t GcScoreData_ToScore_m2167954864_MetadataUsageId;
extern RuntimeClass* UserProfile_t1869465636_il2cpp_TypeInfo_var;
extern const uint32_t GcUserProfileData_ToUserProfile_m1897416945_MetadataUsageId;
extern String_t* _stringLiteral2646355121;
extern const uint32_t GcUserProfileData_AddToArray_m647586710_MetadataUsageId;
extern RuntimeClass* DateTime_t2990056487_il2cpp_TypeInfo_var;
extern const uint32_t Achievement__ctor_m2191329013_MetadataUsageId;
extern String_t* _stringLiteral454807528;
extern const uint32_t Achievement__ctor_m1215914369_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t3878505910_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t1605119752_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t1241177154_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2106716464;
extern const uint32_t Achievement_ToString_m2535933452_MetadataUsageId;
extern RuntimeClass* Int32_t429044550_il2cpp_TypeInfo_var;
extern const uint32_t AchievementDescription_ToString_m3344561324_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t148011198_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3358311208;
extern const uint32_t Leaderboard__ctor_m3385400425_MetadataUsageId;
extern RuntimeClass* UInt32_t2976429035_il2cpp_TypeInfo_var;
extern RuntimeClass* UserScope_t1582197478_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeScope_t585631293_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3685380792;
extern String_t* _stringLiteral4261950714;
extern String_t* _stringLiteral3623808776;
extern String_t* _stringLiteral964669832;
extern String_t* _stringLiteral2513360023;
extern String_t* _stringLiteral789049815;
extern String_t* _stringLiteral1973488311;
extern String_t* _stringLiteral390998453;
extern String_t* _stringLiteral2883195848;
extern String_t* _stringLiteral4041458718;
extern const uint32_t Leaderboard_ToString_m954631092_MetadataUsageId;
extern const uint32_t LocalUser__ctor_m3573885150_MetadataUsageId;
extern String_t* _stringLiteral26043577;
extern const uint32_t Score__ctor_m1839590982_MetadataUsageId;
extern RuntimeClass* Int64_t2997302630_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3375474526;
extern String_t* _stringLiteral2221508954;
extern String_t* _stringLiteral1530585596;
extern String_t* _stringLiteral1879369753;
extern String_t* _stringLiteral130993916;
extern const uint32_t Score_ToString_m2103626204_MetadataUsageId;
extern String_t* _stringLiteral633375957;
extern const uint32_t UserProfile__ctor_m377376795_MetadataUsageId;
extern RuntimeClass* UserState_t3962258049_il2cpp_TypeInfo_var;
extern const uint32_t UserProfile_ToString_m4104302451_MetadataUsageId;

struct StringU5BU5D_t148011198;
struct AchievementDescriptionU5BU5D_t1427979700;
struct IAchievementDescriptionU5BU5D_t491924267;
struct UserProfileU5BU5D_t783875789;
struct IUserProfileU5BU5D_t2705473828;
struct GcAchievementDataU5BU5D_t2074805605;
struct AchievementU5BU5D_t1510630649;
struct IAchievementU5BU5D_t3676091538;
struct GcScoreDataU5BU5D_t3409191417;
struct ScoreU5BU5D_t1654613837;
struct IScoreU5BU5D_t299758263;
struct ObjectU5BU5D_t3878505910;


#ifndef U3CMODULEU3E_T1107393324_H
#define U3CMODULEU3E_T1107393324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1107393324 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1107393324_H
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
#ifndef U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T2269101260_H
#define U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T2269101260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0
struct  U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::callback
	Action_1_t2194597286 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260, ___callback_0)); }
	inline Action_1_t2194597286 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t2194597286 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t2194597286 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T2269101260_H
#ifndef ACHIEVEMENTDESCRIPTION_T214289417_H
#define ACHIEVEMENTDESCRIPTION_T214289417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct  AchievementDescription_t214289417  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_t601339354 * ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Title_0() { return static_cast<int32_t>(offsetof(AchievementDescription_t214289417, ___m_Title_0)); }
	inline String_t* get_m_Title_0() const { return ___m_Title_0; }
	inline String_t** get_address_of_m_Title_0() { return &___m_Title_0; }
	inline void set_m_Title_0(String_t* value)
	{
		___m_Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(AchievementDescription_t214289417, ___m_Image_1)); }
	inline Texture2D_t601339354 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture2D_t601339354 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture2D_t601339354 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_2() { return static_cast<int32_t>(offsetof(AchievementDescription_t214289417, ___m_AchievedDescription_2)); }
	inline String_t* get_m_AchievedDescription_2() const { return ___m_AchievedDescription_2; }
	inline String_t** get_address_of_m_AchievedDescription_2() { return &___m_AchievedDescription_2; }
	inline void set_m_AchievedDescription_2(String_t* value)
	{
		___m_AchievedDescription_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_2), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_3() { return static_cast<int32_t>(offsetof(AchievementDescription_t214289417, ___m_UnachievedDescription_3)); }
	inline String_t* get_m_UnachievedDescription_3() const { return ___m_UnachievedDescription_3; }
	inline String_t** get_address_of_m_UnachievedDescription_3() { return &___m_UnachievedDescription_3; }
	inline void set_m_UnachievedDescription_3(String_t* value)
	{
		___m_UnachievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_Hidden_4() { return static_cast<int32_t>(offsetof(AchievementDescription_t214289417, ___m_Hidden_4)); }
	inline bool get_m_Hidden_4() const { return ___m_Hidden_4; }
	inline bool* get_address_of_m_Hidden_4() { return &___m_Hidden_4; }
	inline void set_m_Hidden_4(bool value)
	{
		___m_Hidden_4 = value;
	}

	inline static int32_t get_offset_of_m_Points_5() { return static_cast<int32_t>(offsetof(AchievementDescription_t214289417, ___m_Points_5)); }
	inline int32_t get_m_Points_5() const { return ___m_Points_5; }
	inline int32_t* get_address_of_m_Points_5() { return &___m_Points_5; }
	inline void set_m_Points_5(int32_t value)
	{
		___m_Points_5 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AchievementDescription_t214289417, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENTDESCRIPTION_T214289417_H
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
#ifndef LIST_1_T2323180381_H
#define LIST_1_T2323180381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct  List_1_t2323180381  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GcLeaderboardU5BU5D_t3845273338* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2323180381, ____items_1)); }
	inline GcLeaderboardU5BU5D_t3845273338* get__items_1() const { return ____items_1; }
	inline GcLeaderboardU5BU5D_t3845273338** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GcLeaderboardU5BU5D_t3845273338* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2323180381, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2323180381, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2323180381_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GcLeaderboardU5BU5D_t3845273338* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2323180381_StaticFields, ___EmptyArray_4)); }
	inline GcLeaderboardU5BU5D_t3845273338* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GcLeaderboardU5BU5D_t3845273338** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GcLeaderboardU5BU5D_t3845273338* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2323180381_H
#ifndef GAMECENTERPLATFORM_T3069447718_H
#define GAMECENTERPLATFORM_T3069447718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t3069447718  : public RuntimeObject
{
public:

public:
};

struct GameCenterPlatform_t3069447718_StaticFields
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_2_t3179150494 * ___s_AuthenticateCallback_0;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t1427979700* ___s_adCache_1;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t783875789* ___s_friends_2;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t783875789* ___s_users_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t2194597286 * ___s_ResetAchievements_4;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t4076573085 * ___m_LocalUser_5;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t2323180381 * ___m_GcBoards_6;

public:
	inline static int32_t get_offset_of_s_AuthenticateCallback_0() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t3069447718_StaticFields, ___s_AuthenticateCallback_0)); }
	inline Action_2_t3179150494 * get_s_AuthenticateCallback_0() const { return ___s_AuthenticateCallback_0; }
	inline Action_2_t3179150494 ** get_address_of_s_AuthenticateCallback_0() { return &___s_AuthenticateCallback_0; }
	inline void set_s_AuthenticateCallback_0(Action_2_t3179150494 * value)
	{
		___s_AuthenticateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_AuthenticateCallback_0), value);
	}

	inline static int32_t get_offset_of_s_adCache_1() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t3069447718_StaticFields, ___s_adCache_1)); }
	inline AchievementDescriptionU5BU5D_t1427979700* get_s_adCache_1() const { return ___s_adCache_1; }
	inline AchievementDescriptionU5BU5D_t1427979700** get_address_of_s_adCache_1() { return &___s_adCache_1; }
	inline void set_s_adCache_1(AchievementDescriptionU5BU5D_t1427979700* value)
	{
		___s_adCache_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_adCache_1), value);
	}

	inline static int32_t get_offset_of_s_friends_2() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t3069447718_StaticFields, ___s_friends_2)); }
	inline UserProfileU5BU5D_t783875789* get_s_friends_2() const { return ___s_friends_2; }
	inline UserProfileU5BU5D_t783875789** get_address_of_s_friends_2() { return &___s_friends_2; }
	inline void set_s_friends_2(UserProfileU5BU5D_t783875789* value)
	{
		___s_friends_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_friends_2), value);
	}

	inline static int32_t get_offset_of_s_users_3() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t3069447718_StaticFields, ___s_users_3)); }
	inline UserProfileU5BU5D_t783875789* get_s_users_3() const { return ___s_users_3; }
	inline UserProfileU5BU5D_t783875789** get_address_of_s_users_3() { return &___s_users_3; }
	inline void set_s_users_3(UserProfileU5BU5D_t783875789* value)
	{
		___s_users_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_users_3), value);
	}

	inline static int32_t get_offset_of_s_ResetAchievements_4() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t3069447718_StaticFields, ___s_ResetAchievements_4)); }
	inline Action_1_t2194597286 * get_s_ResetAchievements_4() const { return ___s_ResetAchievements_4; }
	inline Action_1_t2194597286 ** get_address_of_s_ResetAchievements_4() { return &___s_ResetAchievements_4; }
	inline void set_s_ResetAchievements_4(Action_1_t2194597286 * value)
	{
		___s_ResetAchievements_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_ResetAchievements_4), value);
	}

	inline static int32_t get_offset_of_m_LocalUser_5() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t3069447718_StaticFields, ___m_LocalUser_5)); }
	inline LocalUser_t4076573085 * get_m_LocalUser_5() const { return ___m_LocalUser_5; }
	inline LocalUser_t4076573085 ** get_address_of_m_LocalUser_5() { return &___m_LocalUser_5; }
	inline void set_m_LocalUser_5(LocalUser_t4076573085 * value)
	{
		___m_LocalUser_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUser_5), value);
	}

	inline static int32_t get_offset_of_m_GcBoards_6() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t3069447718_StaticFields, ___m_GcBoards_6)); }
	inline List_1_t2323180381 * get_m_GcBoards_6() const { return ___m_GcBoards_6; }
	inline List_1_t2323180381 ** get_address_of_m_GcBoards_6() { return &___m_GcBoards_6; }
	inline void set_m_GcBoards_6(List_1_t2323180381 * value)
	{
		___m_GcBoards_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_GcBoards_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECENTERPLATFORM_T3069447718_H
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
#ifndef RANGE_T495627371_H
#define RANGE_T495627371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Range
struct  Range_t495627371 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t495627371, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t495627371, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T495627371_H
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
#ifndef ENUMERATOR_T3745629043_H
#define ENUMERATOR_T3745629043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct  Enumerator_t3745629043 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2323180381 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GcLeaderboard_t558175163 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3745629043, ___l_0)); }
	inline List_1_t2323180381 * get_l_0() const { return ___l_0; }
	inline List_1_t2323180381 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2323180381 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3745629043, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3745629043, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3745629043, ___current_3)); }
	inline GcLeaderboard_t558175163 * get_current_3() const { return ___current_3; }
	inline GcLeaderboard_t558175163 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GcLeaderboard_t558175163 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3745629043_H
#ifndef ENUMERATOR_T1103937127_H
#define ENUMERATOR_T1103937127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t1103937127 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3976455761 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1103937127, ___l_0)); }
	inline List_1_t3976455761 * get_l_0() const { return ___l_0; }
	inline List_1_t3976455761 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3976455761 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1103937127, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1103937127, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1103937127, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1103937127_H
#ifndef GCUSERPROFILEDATA_T3774347881_H
#define GCUSERPROFILEDATA_T3774347881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct  GcUserProfileData_t3774347881 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userName
	String_t* ___userName_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userID
	String_t* ___userID_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::isFriend
	int32_t ___isFriend_2;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::image
	Texture2D_t601339354 * ___image_3;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(GcUserProfileData_t3774347881, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier((&___userName_0), value);
	}

	inline static int32_t get_offset_of_userID_1() { return static_cast<int32_t>(offsetof(GcUserProfileData_t3774347881, ___userID_1)); }
	inline String_t* get_userID_1() const { return ___userID_1; }
	inline String_t** get_address_of_userID_1() { return &___userID_1; }
	inline void set_userID_1(String_t* value)
	{
		___userID_1 = value;
		Il2CppCodeGenWriteBarrier((&___userID_1), value);
	}

	inline static int32_t get_offset_of_isFriend_2() { return static_cast<int32_t>(offsetof(GcUserProfileData_t3774347881, ___isFriend_2)); }
	inline int32_t get_isFriend_2() const { return ___isFriend_2; }
	inline int32_t* get_address_of_isFriend_2() { return &___isFriend_2; }
	inline void set_isFriend_2(int32_t value)
	{
		___isFriend_2 = value;
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(GcUserProfileData_t3774347881, ___image_3)); }
	inline Texture2D_t601339354 * get_image_3() const { return ___image_3; }
	inline Texture2D_t601339354 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Texture2D_t601339354 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier((&___image_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t3774347881_marshaled_pinvoke
{
	char* ___userName_0;
	char* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t601339354 * ___image_3;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t3774347881_marshaled_com
{
	Il2CppChar* ___userName_0;
	Il2CppChar* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t601339354 * ___image_3;
};
#endif // GCUSERPROFILEDATA_T3774347881_H
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
#ifndef GCACHIEVEMENTDESCRIPTIONDATA_T159318338_H
#define GCACHIEVEMENTDESCRIPTIONDATA_T159318338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct  GcAchievementDescriptionData_t159318338 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Title
	String_t* ___m_Title_1;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Image
	Texture2D_t601339354 * ___m_Image_2;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_AchievedDescription
	String_t* ___m_AchievedDescription_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_4;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Hidden
	int32_t ___m_Hidden_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Points
	int32_t ___m_Points_6;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t159318338, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_Title_1() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t159318338, ___m_Title_1)); }
	inline String_t* get_m_Title_1() const { return ___m_Title_1; }
	inline String_t** get_address_of_m_Title_1() { return &___m_Title_1; }
	inline void set_m_Title_1(String_t* value)
	{
		___m_Title_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_1), value);
	}

	inline static int32_t get_offset_of_m_Image_2() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t159318338, ___m_Image_2)); }
	inline Texture2D_t601339354 * get_m_Image_2() const { return ___m_Image_2; }
	inline Texture2D_t601339354 ** get_address_of_m_Image_2() { return &___m_Image_2; }
	inline void set_m_Image_2(Texture2D_t601339354 * value)
	{
		___m_Image_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_2), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_3() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t159318338, ___m_AchievedDescription_3)); }
	inline String_t* get_m_AchievedDescription_3() const { return ___m_AchievedDescription_3; }
	inline String_t** get_address_of_m_AchievedDescription_3() { return &___m_AchievedDescription_3; }
	inline void set_m_AchievedDescription_3(String_t* value)
	{
		___m_AchievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_4() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t159318338, ___m_UnachievedDescription_4)); }
	inline String_t* get_m_UnachievedDescription_4() const { return ___m_UnachievedDescription_4; }
	inline String_t** get_address_of_m_UnachievedDescription_4() { return &___m_UnachievedDescription_4; }
	inline void set_m_UnachievedDescription_4(String_t* value)
	{
		___m_UnachievedDescription_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_4), value);
	}

	inline static int32_t get_offset_of_m_Hidden_5() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t159318338, ___m_Hidden_5)); }
	inline int32_t get_m_Hidden_5() const { return ___m_Hidden_5; }
	inline int32_t* get_address_of_m_Hidden_5() { return &___m_Hidden_5; }
	inline void set_m_Hidden_5(int32_t value)
	{
		___m_Hidden_5 = value;
	}

	inline static int32_t get_offset_of_m_Points_6() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t159318338, ___m_Points_6)); }
	inline int32_t get_m_Points_6() const { return ___m_Points_6; }
	inline int32_t* get_address_of_m_Points_6() { return &___m_Points_6; }
	inline void set_m_Points_6(int32_t value)
	{
		___m_Points_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t159318338_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	char* ___m_Title_1;
	Texture2D_t601339354 * ___m_Image_2;
	char* ___m_AchievedDescription_3;
	char* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t159318338_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	Il2CppChar* ___m_Title_1;
	Texture2D_t601339354 * ___m_Image_2;
	Il2CppChar* ___m_AchievedDescription_3;
	Il2CppChar* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
#endif // GCACHIEVEMENTDESCRIPTIONDATA_T159318338_H
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
#ifndef USERSCOPE_T1582197478_H
#define USERSCOPE_T1582197478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t1582197478 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserScope_t1582197478, ___value___1)); }
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
#endif // USERSCOPE_T1582197478_H
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
#ifndef USERSTATE_T3962258049_H
#define USERSTATE_T3962258049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserState
struct  UserState_t3962258049 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserState_t3962258049, ___value___1)); }
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
#endif // USERSTATE_T3962258049_H
#ifndef GCLEADERBOARD_T558175163_H
#define GCLEADERBOARD_T558175163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct  GcLeaderboard_t558175163  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_InternalLeaderboard
	intptr_t ___m_InternalLeaderboard_0;
	// UnityEngine.SocialPlatforms.Impl.Leaderboard UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_GenericLeaderboard
	Leaderboard_t2550452145 * ___m_GenericLeaderboard_1;

public:
	inline static int32_t get_offset_of_m_InternalLeaderboard_0() { return static_cast<int32_t>(offsetof(GcLeaderboard_t558175163, ___m_InternalLeaderboard_0)); }
	inline intptr_t get_m_InternalLeaderboard_0() const { return ___m_InternalLeaderboard_0; }
	inline intptr_t* get_address_of_m_InternalLeaderboard_0() { return &___m_InternalLeaderboard_0; }
	inline void set_m_InternalLeaderboard_0(intptr_t value)
	{
		___m_InternalLeaderboard_0 = value;
	}

	inline static int32_t get_offset_of_m_GenericLeaderboard_1() { return static_cast<int32_t>(offsetof(GcLeaderboard_t558175163, ___m_GenericLeaderboard_1)); }
	inline Leaderboard_t2550452145 * get_m_GenericLeaderboard_1() const { return ___m_GenericLeaderboard_1; }
	inline Leaderboard_t2550452145 ** get_address_of_m_GenericLeaderboard_1() { return &___m_GenericLeaderboard_1; }
	inline void set_m_GenericLeaderboard_1(Leaderboard_t2550452145 * value)
	{
		___m_GenericLeaderboard_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GenericLeaderboard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t558175163_marshaled_pinvoke
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t2550452145 * ___m_GenericLeaderboard_1;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t558175163_marshaled_com
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t2550452145 * ___m_GenericLeaderboard_1;
};
#endif // GCLEADERBOARD_T558175163_H
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
#ifndef TIMESCOPE_T585631293_H
#define TIMESCOPE_T585631293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t585631293 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TimeScope_t585631293, ___value___1)); }
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
#endif // TIMESCOPE_T585631293_H
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
#ifndef USERPROFILE_T1869465636_H
#define USERPROFILE_T1869465636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct  UserProfile_t1869465636  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_2;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_t601339354 * ___m_Image_4;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_t1869465636, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserName_0), value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_t1869465636, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ID_1), value);
	}

	inline static int32_t get_offset_of_m_IsFriend_2() { return static_cast<int32_t>(offsetof(UserProfile_t1869465636, ___m_IsFriend_2)); }
	inline bool get_m_IsFriend_2() const { return ___m_IsFriend_2; }
	inline bool* get_address_of_m_IsFriend_2() { return &___m_IsFriend_2; }
	inline void set_m_IsFriend_2(bool value)
	{
		___m_IsFriend_2 = value;
	}

	inline static int32_t get_offset_of_m_State_3() { return static_cast<int32_t>(offsetof(UserProfile_t1869465636, ___m_State_3)); }
	inline int32_t get_m_State_3() const { return ___m_State_3; }
	inline int32_t* get_address_of_m_State_3() { return &___m_State_3; }
	inline void set_m_State_3(int32_t value)
	{
		___m_State_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(UserProfile_t1869465636, ___m_Image_4)); }
	inline Texture2D_t601339354 * get_m_Image_4() const { return ___m_Image_4; }
	inline Texture2D_t601339354 ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Texture2D_t601339354 * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERPROFILE_T1869465636_H
#ifndef LEADERBOARD_T2550452145_H
#define LEADERBOARD_T2550452145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct  Leaderboard_t2550452145  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t299758263* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t148011198* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t495627371  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Loading_0() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___m_Loading_0)); }
	inline bool get_m_Loading_0() const { return ___m_Loading_0; }
	inline bool* get_address_of_m_Loading_0() { return &___m_Loading_0; }
	inline void set_m_Loading_0(bool value)
	{
		___m_Loading_0 = value;
	}

	inline static int32_t get_offset_of_m_LocalUserScore_1() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___m_LocalUserScore_1)); }
	inline RuntimeObject* get_m_LocalUserScore_1() const { return ___m_LocalUserScore_1; }
	inline RuntimeObject** get_address_of_m_LocalUserScore_1() { return &___m_LocalUserScore_1; }
	inline void set_m_LocalUserScore_1(RuntimeObject* value)
	{
		___m_LocalUserScore_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUserScore_1), value);
	}

	inline static int32_t get_offset_of_m_MaxRange_2() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___m_MaxRange_2)); }
	inline uint32_t get_m_MaxRange_2() const { return ___m_MaxRange_2; }
	inline uint32_t* get_address_of_m_MaxRange_2() { return &___m_MaxRange_2; }
	inline void set_m_MaxRange_2(uint32_t value)
	{
		___m_MaxRange_2 = value;
	}

	inline static int32_t get_offset_of_m_Scores_3() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___m_Scores_3)); }
	inline IScoreU5BU5D_t299758263* get_m_Scores_3() const { return ___m_Scores_3; }
	inline IScoreU5BU5D_t299758263** get_address_of_m_Scores_3() { return &___m_Scores_3; }
	inline void set_m_Scores_3(IScoreU5BU5D_t299758263* value)
	{
		___m_Scores_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scores_3), value);
	}

	inline static int32_t get_offset_of_m_Title_4() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___m_Title_4)); }
	inline String_t* get_m_Title_4() const { return ___m_Title_4; }
	inline String_t** get_address_of_m_Title_4() { return &___m_Title_4; }
	inline void set_m_Title_4(String_t* value)
	{
		___m_Title_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_4), value);
	}

	inline static int32_t get_offset_of_m_UserIDs_5() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___m_UserIDs_5)); }
	inline StringU5BU5D_t148011198* get_m_UserIDs_5() const { return ___m_UserIDs_5; }
	inline StringU5BU5D_t148011198** get_address_of_m_UserIDs_5() { return &___m_UserIDs_5; }
	inline void set_m_UserIDs_5(StringU5BU5D_t148011198* value)
	{
		___m_UserIDs_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserIDs_5), value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CuserScopeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___U3CuserScopeU3Ek__BackingField_7)); }
	inline int32_t get_U3CuserScopeU3Ek__BackingField_7() const { return ___U3CuserScopeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CuserScopeU3Ek__BackingField_7() { return &___U3CuserScopeU3Ek__BackingField_7; }
	inline void set_U3CuserScopeU3Ek__BackingField_7(int32_t value)
	{
		___U3CuserScopeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrangeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___U3CrangeU3Ek__BackingField_8)); }
	inline Range_t495627371  get_U3CrangeU3Ek__BackingField_8() const { return ___U3CrangeU3Ek__BackingField_8; }
	inline Range_t495627371 * get_address_of_U3CrangeU3Ek__BackingField_8() { return &___U3CrangeU3Ek__BackingField_8; }
	inline void set_U3CrangeU3Ek__BackingField_8(Range_t495627371  value)
	{
		___U3CrangeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CtimeScopeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Leaderboard_t2550452145, ___U3CtimeScopeU3Ek__BackingField_9)); }
	inline int32_t get_U3CtimeScopeU3Ek__BackingField_9() const { return ___U3CtimeScopeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtimeScopeU3Ek__BackingField_9() { return &___U3CtimeScopeU3Ek__BackingField_9; }
	inline void set_U3CtimeScopeU3Ek__BackingField_9(int32_t value)
	{
		___U3CtimeScopeU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARD_T2550452145_H
#ifndef TEXTURE_T1949372386_H
#define TEXTURE_T1949372386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t1949372386  : public Object_t948050745
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T1949372386_H
#ifndef SCORE_T839788964_H
#define SCORE_T839788964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Score
struct  Score_t839788964  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t2990056487  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Date_0() { return static_cast<int32_t>(offsetof(Score_t839788964, ___m_Date_0)); }
	inline DateTime_t2990056487  get_m_Date_0() const { return ___m_Date_0; }
	inline DateTime_t2990056487 * get_address_of_m_Date_0() { return &___m_Date_0; }
	inline void set_m_Date_0(DateTime_t2990056487  value)
	{
		___m_Date_0 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_1() { return static_cast<int32_t>(offsetof(Score_t839788964, ___m_FormattedValue_1)); }
	inline String_t* get_m_FormattedValue_1() const { return ___m_FormattedValue_1; }
	inline String_t** get_address_of_m_FormattedValue_1() { return &___m_FormattedValue_1; }
	inline void set_m_FormattedValue_1(String_t* value)
	{
		___m_FormattedValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_1), value);
	}

	inline static int32_t get_offset_of_m_UserID_2() { return static_cast<int32_t>(offsetof(Score_t839788964, ___m_UserID_2)); }
	inline String_t* get_m_UserID_2() const { return ___m_UserID_2; }
	inline String_t** get_address_of_m_UserID_2() { return &___m_UserID_2; }
	inline void set_m_UserID_2(String_t* value)
	{
		___m_UserID_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserID_2), value);
	}

	inline static int32_t get_offset_of_m_Rank_3() { return static_cast<int32_t>(offsetof(Score_t839788964, ___m_Rank_3)); }
	inline int32_t get_m_Rank_3() const { return ___m_Rank_3; }
	inline int32_t* get_address_of_m_Rank_3() { return &___m_Rank_3; }
	inline void set_m_Rank_3(int32_t value)
	{
		___m_Rank_3 = value;
	}

	inline static int32_t get_offset_of_U3CleaderboardIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Score_t839788964, ___U3CleaderboardIDU3Ek__BackingField_4)); }
	inline String_t* get_U3CleaderboardIDU3Ek__BackingField_4() const { return ___U3CleaderboardIDU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CleaderboardIDU3Ek__BackingField_4() { return &___U3CleaderboardIDU3Ek__BackingField_4; }
	inline void set_U3CleaderboardIDU3Ek__BackingField_4(String_t* value)
	{
		___U3CleaderboardIDU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CleaderboardIDU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Score_t839788964, ___U3CvalueU3Ek__BackingField_5)); }
	inline int64_t get_U3CvalueU3Ek__BackingField_5() const { return ___U3CvalueU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CvalueU3Ek__BackingField_5() { return &___U3CvalueU3Ek__BackingField_5; }
	inline void set_U3CvalueU3Ek__BackingField_5(int64_t value)
	{
		___U3CvalueU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORE_T839788964_H
#ifndef TEXTURE2D_T601339354_H
#define TEXTURE2D_T601339354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t601339354  : public Texture_t1949372386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T601339354_H
#ifndef ACTION_1_T2194597286_H
#define ACTION_1_T2194597286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t2194597286  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2194597286_H
#ifndef ACTION_2_T3179150494_H
#define ACTION_2_T3179150494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Boolean,System.String>
struct  Action_2_t3179150494  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T3179150494_H
#ifndef ACTION_1_T3658893960_H
#define ACTION_1_T3658893960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct  Action_1_t3658893960  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3658893960_H
#ifndef LOCALUSER_T4076573085_H
#define LOCALUSER_T4076573085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_t4076573085  : public UserProfile_t1869465636
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t2705473828* ___m_Friends_5;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_7;

public:
	inline static int32_t get_offset_of_m_Friends_5() { return static_cast<int32_t>(offsetof(LocalUser_t4076573085, ___m_Friends_5)); }
	inline IUserProfileU5BU5D_t2705473828* get_m_Friends_5() const { return ___m_Friends_5; }
	inline IUserProfileU5BU5D_t2705473828** get_address_of_m_Friends_5() { return &___m_Friends_5; }
	inline void set_m_Friends_5(IUserProfileU5BU5D_t2705473828* value)
	{
		___m_Friends_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Friends_5), value);
	}

	inline static int32_t get_offset_of_m_Authenticated_6() { return static_cast<int32_t>(offsetof(LocalUser_t4076573085, ___m_Authenticated_6)); }
	inline bool get_m_Authenticated_6() const { return ___m_Authenticated_6; }
	inline bool* get_address_of_m_Authenticated_6() { return &___m_Authenticated_6; }
	inline void set_m_Authenticated_6(bool value)
	{
		___m_Authenticated_6 = value;
	}

	inline static int32_t get_offset_of_m_Underage_7() { return static_cast<int32_t>(offsetof(LocalUser_t4076573085, ___m_Underage_7)); }
	inline bool get_m_Underage_7() const { return ___m_Underage_7; }
	inline bool* get_address_of_m_Underage_7() { return &___m_Underage_7; }
	inline void set_m_Underage_7(bool value)
	{
		___m_Underage_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALUSER_T4076573085_H
#ifndef ACTION_1_T334544374_H
#define ACTION_1_T334544374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct  Action_1_t334544374  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T334544374_H
#ifndef ACHIEVEMENT_T509047912_H
#define ACHIEVEMENT_T509047912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Achievement
struct  Achievement_t509047912  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Completed
	bool ___m_Completed_0;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Hidden
	bool ___m_Hidden_1;
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::m_LastReportedDate
	DateTime_t2990056487  ___m_LastReportedDate_2;
	// System.String UnityEngine.SocialPlatforms.Impl.Achievement::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_3;
	// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::<percentCompleted>k__BackingField
	double ___U3CpercentCompletedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Completed_0() { return static_cast<int32_t>(offsetof(Achievement_t509047912, ___m_Completed_0)); }
	inline bool get_m_Completed_0() const { return ___m_Completed_0; }
	inline bool* get_address_of_m_Completed_0() { return &___m_Completed_0; }
	inline void set_m_Completed_0(bool value)
	{
		___m_Completed_0 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_1() { return static_cast<int32_t>(offsetof(Achievement_t509047912, ___m_Hidden_1)); }
	inline bool get_m_Hidden_1() const { return ___m_Hidden_1; }
	inline bool* get_address_of_m_Hidden_1() { return &___m_Hidden_1; }
	inline void set_m_Hidden_1(bool value)
	{
		___m_Hidden_1 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_2() { return static_cast<int32_t>(offsetof(Achievement_t509047912, ___m_LastReportedDate_2)); }
	inline DateTime_t2990056487  get_m_LastReportedDate_2() const { return ___m_LastReportedDate_2; }
	inline DateTime_t2990056487 * get_address_of_m_LastReportedDate_2() { return &___m_LastReportedDate_2; }
	inline void set_m_LastReportedDate_2(DateTime_t2990056487  value)
	{
		___m_LastReportedDate_2 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Achievement_t509047912, ___U3CidU3Ek__BackingField_3)); }
	inline String_t* get_U3CidU3Ek__BackingField_3() const { return ___U3CidU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_3() { return &___U3CidU3Ek__BackingField_3; }
	inline void set_U3CidU3Ek__BackingField_3(String_t* value)
	{
		___U3CidU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CpercentCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Achievement_t509047912, ___U3CpercentCompletedU3Ek__BackingField_4)); }
	inline double get_U3CpercentCompletedU3Ek__BackingField_4() const { return ___U3CpercentCompletedU3Ek__BackingField_4; }
	inline double* get_address_of_U3CpercentCompletedU3Ek__BackingField_4() { return &___U3CpercentCompletedU3Ek__BackingField_4; }
	inline void set_U3CpercentCompletedU3Ek__BackingField_4(double value)
	{
		___U3CpercentCompletedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENT_T509047912_H
#ifndef ACTION_1_T1445344399_H
#define ACTION_1_T1445344399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct  Action_1_t1445344399  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1445344399_H
#ifndef ACTION_1_T1253178395_H
#define ACTION_1_T1253178395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct  Action_1_t1253178395  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1253178395_H
// System.String[]
struct StringU5BU5D_t148011198  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t1427979700  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AchievementDescription_t214289417 * m_Items[1];

public:
	inline AchievementDescription_t214289417 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AchievementDescription_t214289417 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AchievementDescription_t214289417 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AchievementDescription_t214289417 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AchievementDescription_t214289417 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AchievementDescription_t214289417 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t491924267  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t783875789  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UserProfile_t1869465636 * m_Items[1];

public:
	inline UserProfile_t1869465636 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserProfile_t1869465636 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserProfile_t1869465636 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline UserProfile_t1869465636 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserProfile_t1869465636 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserProfile_t1869465636 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t2705473828  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t2074805605  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GcAchievementData_t731726700  m_Items[1];

public:
	inline GcAchievementData_t731726700  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcAchievementData_t731726700 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcAchievementData_t731726700  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GcAchievementData_t731726700  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcAchievementData_t731726700 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcAchievementData_t731726700  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_t1510630649  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Achievement_t509047912 * m_Items[1];

public:
	inline Achievement_t509047912 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t509047912 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t509047912 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Achievement_t509047912 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t509047912 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t509047912 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t3676091538  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t3409191417  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GcScoreData_t3204758376  m_Items[1];

public:
	inline GcScoreData_t3204758376  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcScoreData_t3204758376 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcScoreData_t3204758376  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GcScoreData_t3204758376  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcScoreData_t3204758376 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcScoreData_t3204758376  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t1654613837  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Score_t839788964 * m_Items[1];

public:
	inline Score_t839788964 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_t839788964 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_t839788964 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Score_t839788964 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_t839788964 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_t839788964 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t299758263  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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


// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m1837038064_gshared (Action_1_t3164870675 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
extern "C"  void Action_2_Invoke_m3220602812_gshared (Action_2_t2916729094 * __this, bool p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
extern "C"  void Action_1_Invoke_m1665903769_gshared (Action_1_t2194597286 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1797028503_gshared (Action_2_t2916729094 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m1862698926_gshared (List_1_t3976455761 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t1103937127  List_1_GetEnumerator_m3005454951_gshared (List_1_t3976455761 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m4178741041_gshared (Enumerator_t1103937127 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3148533063_gshared (Enumerator_t1103937127 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m2802946889_gshared (Enumerator_t1103937127 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m4002443743_gshared (List_1_t3976455761 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m754512582 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C"  void GameCenterPlatform_Internal_ResetAllAchievements_m200367346 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C"  void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m1493439841 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C"  void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m1311563388 (RuntimeObject * __this /* static, unused */, String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern "C"  AchievementDescription_t214289417 * GcAchievementDescriptionData_ToAchievementDescription_m2727538795 (GcAchievementDescriptionData_t159318338 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m2620645656 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C"  void AchievementDescription_SetImage_m2831865998 (AchievementDescription_t214289417 * __this, Texture2D_t601339354 * ___image0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0)
#define Action_1_Invoke_m2415595642(__this, p0, method) ((  void (*) (Action_1_t1445344399 *, IAchievementDescriptionU5BU5D_t491924267*, const RuntimeMethod*))Action_1_Invoke_m1837038064_gshared)(__this, p0, method)
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern "C"  void GameCenterPlatform_PopulateLocalUser_m1152273578 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
#define Action_2_Invoke_m4105483451(__this, p0, p1, method) ((  void (*) (Action_2_t3179150494 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m3220602812_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GameCenterPlatform_SafeClearArray_m1070659531 (RuntimeObject * __this /* static, unused */, UserProfileU5BU5D_t783875789** ___array0, int32_t ___size1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GcUserProfileData_AddToArray_m647586710 (GcUserProfileData_t3774347881 * __this, UserProfileU5BU5D_t783875789** ___array0, int32_t ___number1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SafeSetUserImage_m2044418657 (RuntimeObject * __this /* static, unused */, UserProfileU5BU5D_t783875789** ___array0, Texture2D_t601339354 * ___texture1, int32_t ___number2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C"  void LocalUser_SetFriends_m3418938091 (LocalUser_t4076573085 * __this, IUserProfileU5BU5D_t2705473828* ___friends0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
#define Action_1_Invoke_m1665903769(__this, p0, method) ((  void (*) (Action_1_t2194597286 *, bool, const RuntimeMethod*))Action_1_Invoke_m1665903769_gshared)(__this, p0, method)
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C"  Achievement_t509047912 * GcAchievementData_ToAchievement_m364887381 (GcAchievementData_t731726700 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0)
#define Action_1_Invoke_m584514625(__this, p0, method) ((  void (*) (Action_1_t334544374 *, IAchievementU5BU5D_t3676091538*, const RuntimeMethod*))Action_1_Invoke_m1837038064_gshared)(__this, p0, method)
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C"  Score_t839788964 * GcScoreData_ToScore_m2167954864 (GcScoreData_t3204758376 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
#define Action_1_Invoke_m3244804856(__this, p0, method) ((  void (*) (Action_1_t1253178395 *, IScoreU5BU5D_t299758263*, const RuntimeMethod*))Action_1_Invoke_m1837038064_gshared)(__this, p0, method)
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern "C"  bool GameCenterPlatform_VerifyAuthentication_m4274466937 (GameCenterPlatform_t3069447718 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadFriends_m3129328603 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::.ctor()
extern "C"  void U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0__ctor_m800188368 (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
#define Action_2__ctor_m410699131(__this, p0, p1, method) ((  void (*) (Action_2_t3179150494 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1797028503_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C"  void GameCenterPlatform_Internal_Authenticate_m757880465 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C"  void LocalUser__ctor_m3573885150 (LocalUser_t4076573085 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C"  bool GameCenterPlatform_Internal_Authenticated_m3979905575 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C"  String_t* UserProfile_get_id_m4279460589 (UserProfile_t1869465636 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m2292317872 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C"  void LocalUser_SetAuthenticated_m398823236 (LocalUser_t4076573085 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C"  String_t* GameCenterPlatform_Internal_UserName_m3757669667 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C"  void UserProfile_SetUserName_m134841919 (UserProfile_t1869465636 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C"  String_t* GameCenterPlatform_Internal_UserID_m4201883386 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C"  void UserProfile_SetUserID_m2935936560 (UserProfile_t1869465636 * __this, String_t* ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C"  bool GameCenterPlatform_Internal_Underage_m3775459272 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C"  void LocalUser_SetUnderage_m1751695376 (LocalUser_t4076573085 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C"  Texture2D_t601339354 * GameCenterPlatform_Internal_UserImage_m36093628 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C"  void UserProfile_SetImage_m1856246236 (UserProfile_t1869465636 * __this, Texture2D_t601339354 * ___image0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadAchievementDescriptions_m565517090 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double,System.Object)
extern "C"  void GameCenterPlatform_Internal_ReportProgress_m4008060365 (RuntimeObject * __this /* static, unused */, String_t* ___id0, double ___progress1, RuntimeObject * ___callback2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadAchievements_m3404685087 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String,System.Object)
extern "C"  void GameCenterPlatform_Internal_ReportScore_m4279187171 (RuntimeObject * __this /* static, unused */, int64_t ___score0, String_t* ___category1, RuntimeObject * ___callback2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String,System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadScores_m2575595469 (RuntimeObject * __this /* static, unused */, String_t* ___category0, RuntimeObject * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  void GcLeaderboard__ctor_m1629398101 (GcLeaderboard_t558175163 * __this, Leaderboard_t2550452145 * ___board0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(!0)
#define List_1_Add_m3918193856(__this, p0, method) ((  void (*) (List_1_t2323180381 *, GcLeaderboard_t558175163 *, const RuntimeMethod*))List_1_Add_m1862698926_gshared)(__this, p0, method)
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C"  StringU5BU5D_t148011198* Leaderboard_GetUserFilter_m3684461858 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
extern "C"  void GcLeaderboard_Internal_LoadScores_m2958935462 (GcLeaderboard_t558175163 * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, StringU5BU5D_t148011198* ___userIDs3, int32_t ___playerScope4, int32_t ___timeScope5, RuntimeObject * ___callback6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
#define List_1_GetEnumerator_m648429457(__this, method) ((  Enumerator_t3745629043  (*) (List_1_t2323180381 *, const RuntimeMethod*))List_1_GetEnumerator_m3005454951_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Current()
#define Enumerator_get_Current_m3395527110(__this, method) ((  GcLeaderboard_t558175163 * (*) (Enumerator_t3745629043 *, const RuntimeMethod*))Enumerator_get_Current_m4178741041_gshared)(__this, method)
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  bool GcLeaderboard_Contains_m3083501333 (GcLeaderboard_t558175163 * __this, Leaderboard_t2550452145 * ___board0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C"  bool GcLeaderboard_Loading_m2414935601 (GcLeaderboard_t558175163 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::MoveNext()
#define Enumerator_MoveNext_m1669917842(__this, method) ((  bool (*) (Enumerator_t3745629043 *, const RuntimeMethod*))Enumerator_MoveNext_m3148533063_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Dispose()
#define Enumerator_Dispose_m2961317852(__this, method) ((  void (*) (Enumerator_t3745629043 *, const RuntimeMethod*))Enumerator_Dispose_m2802946889_gshared)(__this, method)
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern "C"  RuntimeObject* GameCenterPlatform_get_localUser_m3791417702 (GameCenterPlatform_t3069447718 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C"  void GameCenterPlatform_Internal_ShowAchievementsUI_m2530738290 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_Internal_ShowLeaderboardUI_m3188213548 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(!0)
#define Action_1_Invoke_m2364610610(__this, p0, method) ((  void (*) (Action_1_t3658893960 *, IUserProfileU5BU5D_t2705473828*, const RuntimeMethod*))Action_1_Invoke_m1837038064_gshared)(__this, p0, method)
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadUsers_m3617262344 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t148011198* ___userIds0, RuntimeObject * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m3102761989 (Texture2D_t601339354 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C"  void Leaderboard__ctor_m3385400425 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C"  void Achievement__ctor_m1215914369 (Achievement_t509047912 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
#define List_1__ctor_m2870300834(__this, method) ((  void (*) (List_1_t2323180381 *, const RuntimeMethod*))List_1__ctor_m4002443743_gshared)(__this, method)
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m1604064251 (DateTime_t2990056487 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C"  DateTime_t2990056487  DateTime_AddSeconds_m865288063 (DateTime_t2990056487 * __this, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C"  void Achievement__ctor_m3282845061 (Achievement_t509047912 * __this, String_t* ___id0, double ___percentCompleted1, bool ___completed2, bool ___hidden3, DateTime_t2990056487  ___lastReportedDate4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C"  void AchievementDescription__ctor_m4033065372 (AchievementDescription_t214289417 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t601339354 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C"  void GcLeaderboard_Dispose_m225871768 (GcLeaderboard_t558175163 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3605663471 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C"  void Leaderboard_SetScores_m3233755424 (Leaderboard_t2550452145 * __this, IScoreU5BU5D_t299758263* ___scores0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C"  void Leaderboard_SetLocalUserScore_m2030678762 (Leaderboard_t2550452145 * __this, RuntimeObject* ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C"  void Leaderboard_SetMaxRange_m816940963 (Leaderboard_t2550452145 * __this, uint32_t ___maxRange0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C"  void Leaderboard_SetTitle_m3373571837 (Leaderboard_t2550452145 * __this, String_t* ___title0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C"  void Score__ctor_m2035808112 (Score_t839788964 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t2990056487  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C"  void UserProfile__ctor_m3600873509 (UserProfile_t1869465636 * __this, String_t* ___name0, String_t* ___id1, bool ___friend2, int32_t ___state3, Texture2D_t601339354 * ___image4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C"  UserProfile_t1869465636 * GcUserProfileData_ToUserProfile_m1897416945 (GcUserProfileData_t3774347881 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C"  void Achievement_set_id_m729892567 (Achievement_t509047912 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C"  void Achievement_set_percentCompleted_m1457230770 (Achievement_t509047912 * __this, double ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C"  void Achievement__ctor_m2191329013 (Achievement_t509047912 * __this, String_t* ___id0, double ___percent1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C"  String_t* Achievement_get_id_m410789631 (Achievement_t509047912 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C"  double Achievement_get_percentCompleted_m1958958222 (Achievement_t509047912 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C"  bool Achievement_get_completed_m3181294604 (Achievement_t509047912 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C"  bool Achievement_get_hidden_m689700096 (Achievement_t509047912 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C"  DateTime_t2990056487  Achievement_get_lastReportedDate_m2944382953 (Achievement_t509047912 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2604261171 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t3878505910* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C"  void AchievementDescription_set_id_m3842483060 (AchievementDescription_t214289417 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C"  String_t* AchievementDescription_get_id_m1224954612 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C"  String_t* AchievementDescription_get_title_m1205091471 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C"  String_t* AchievementDescription_get_achievedDescription_m3510738019 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C"  String_t* AchievementDescription_get_unachievedDescription_m2266688405 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C"  int32_t AchievementDescription_get_points_m3078683917 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C"  bool AchievementDescription_get_hidden_m1850868293 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C"  void Leaderboard_set_id_m885681779 (Leaderboard_t2550452145 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C"  void Range__ctor_m848956052 (Range_t495627371 * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C"  void Leaderboard_set_range_m236752582 (Leaderboard_t2550452145 * __this, Range_t495627371  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C"  void Leaderboard_set_userScope_m1112496700 (Leaderboard_t2550452145 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void Leaderboard_set_timeScope_m2369962580 (Leaderboard_t2550452145 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern "C"  void Score__ctor_m1839590982 (Score_t839788964 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C"  String_t* Leaderboard_get_id_m3692820377 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C"  Range_t495627371  Leaderboard_get_range_m2415198618 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C"  int32_t Leaderboard_get_userScope_m1117136597 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C"  int32_t Leaderboard_get_timeScope_m3537555803 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C"  void UserProfile__ctor_m377376795 (UserProfile_t1869465636 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t2990056487  DateTime_get_Now_m2105661497 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C"  void Score_set_leaderboardID_m2191401613 (Score_t839788964 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C"  void Score_set_value_m2388605480 (Score_t839788964 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C"  int64_t Score_get_value_m2496502396 (Score_t839788964 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C"  String_t* Score_get_leaderboardID_m1445832709 (Score_t839788964 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C"  String_t* UserProfile_get_userName_m3052723369 (UserProfile_t1869465636 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C"  bool UserProfile_get_isFriend_m2435881928 (UserProfile_t1869465636 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C"  int32_t UserProfile_get_state_m1675724417 (UserProfile_t1869465636 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
extern "C"  void GameCenterPlatform__ctor_m4077040844 (GameCenterPlatform_t3069447718 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C"  void GameCenterPlatform_Internal_Authenticate_m757880465 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_Authenticate_m757880465_ftn) ();
	static GameCenterPlatform_Internal_Authenticate_m757880465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticate_m757880465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C"  bool GameCenterPlatform_Internal_Authenticated_m3979905575 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*GameCenterPlatform_Internal_Authenticated_m3979905575_ftn) ();
	static GameCenterPlatform_Internal_Authenticated_m3979905575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticated_m3979905575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C"  String_t* GameCenterPlatform_Internal_UserName_m3757669667 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m3757669667_ftn) ();
	static GameCenterPlatform_Internal_UserName_m3757669667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m3757669667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C"  String_t* GameCenterPlatform_Internal_UserID_m4201883386 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m4201883386_ftn) ();
	static GameCenterPlatform_Internal_UserID_m4201883386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m4201883386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C"  bool GameCenterPlatform_Internal_Underage_m3775459272 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*GameCenterPlatform_Internal_Underage_m3775459272_ftn) ();
	static GameCenterPlatform_Internal_Underage_m3775459272_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Underage_m3775459272_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C"  Texture2D_t601339354 * GameCenterPlatform_Internal_UserImage_m36093628 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef Texture2D_t601339354 * (*GameCenterPlatform_Internal_UserImage_m36093628_ftn) ();
	static GameCenterPlatform_Internal_UserImage_m36093628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserImage_m36093628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()");
	Texture2D_t601339354 * retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadFriends_m3129328603 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadFriends_m3129328603_ftn) (RuntimeObject *);
	static GameCenterPlatform_Internal_LoadFriends_m3129328603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadFriends_m3129328603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadAchievementDescriptions_m565517090 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievementDescriptions_m565517090_ftn) (RuntimeObject *);
	static GameCenterPlatform_Internal_LoadAchievementDescriptions_m565517090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievementDescriptions_m565517090_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadAchievements_m3404685087 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievements_m3404685087_ftn) (RuntimeObject *);
	static GameCenterPlatform_Internal_LoadAchievements_m3404685087_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievements_m3404685087_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double,System.Object)
extern "C"  void GameCenterPlatform_Internal_ReportProgress_m4008060365 (RuntimeObject * __this /* static, unused */, String_t* ___id0, double ___progress1, RuntimeObject * ___callback2, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportProgress_m4008060365_ftn) (String_t*, double, RuntimeObject *);
	static GameCenterPlatform_Internal_ReportProgress_m4008060365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportProgress_m4008060365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double,System.Object)");
	_il2cpp_icall_func(___id0, ___progress1, ___callback2);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String,System.Object)
extern "C"  void GameCenterPlatform_Internal_ReportScore_m4279187171 (RuntimeObject * __this /* static, unused */, int64_t ___score0, String_t* ___category1, RuntimeObject * ___callback2, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportScore_m4279187171_ftn) (int64_t, String_t*, RuntimeObject *);
	static GameCenterPlatform_Internal_ReportScore_m4279187171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportScore_m4279187171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String,System.Object)");
	_il2cpp_icall_func(___score0, ___category1, ___callback2);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String,System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadScores_m2575595469 (RuntimeObject * __this /* static, unused */, String_t* ___category0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadScores_m2575595469_ftn) (String_t*, RuntimeObject *);
	static GameCenterPlatform_Internal_LoadScores_m2575595469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadScores_m2575595469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String,System.Object)");
	_il2cpp_icall_func(___category0, ___callback1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C"  void GameCenterPlatform_Internal_ShowAchievementsUI_m2530738290 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m2530738290_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m2530738290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m2530738290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_Internal_ShowLeaderboardUI_m3188213548 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m3188213548_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m3188213548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m3188213548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadUsers_m3617262344 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t148011198* ___userIds0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m3617262344_ftn) (StringU5BU5D_t148011198*, RuntimeObject *);
	static GameCenterPlatform_Internal_LoadUsers_m3617262344_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m3617262344_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)");
	_il2cpp_icall_func(___userIds0, ___callback1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C"  void GameCenterPlatform_Internal_ResetAllAchievements_m200367346 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ResetAllAchievements_m200367346_ftn) ();
	static GameCenterPlatform_Internal_ResetAllAchievements_m200367346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ResetAllAchievements_m200367346_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C"  void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m1493439841 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m1493439841_ftn) (bool);
	static GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m1493439841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m1493439841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ResetAllAchievements_m709346934 (RuntimeObject * __this /* static, unused */, Action_1_t2194597286 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ResetAllAchievements_m709346934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2194597286 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->set_s_ResetAchievements_4(L_0);
		GameCenterPlatform_Internal_ResetAllAchievements_m200367346(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern "C"  void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2608539986 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2608539986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m1493439841(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void GameCenterPlatform_ShowLeaderboardUI_m3003992662 (RuntimeObject * __this /* static, unused */, String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowLeaderboardUI_m3003992662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int32_t L_1 = ___timeScope1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m1311563388(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C"  void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m1311563388 (RuntimeObject * __this /* static, unused */, String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m1311563388_ftn) (String_t*, int32_t);
	static GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m1311563388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m1311563388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID0, ___timeScope1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern "C"  void GameCenterPlatform_ClearAchievementDescriptions_m1422315050 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ClearAchievementDescriptions_m1422315050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t1427979700* L_0 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_adCache_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t1427979700* L_1 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_1);
		int32_t L_2 = ___size0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		int32_t L_3 = ___size0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->set_s_adCache_1(((AchievementDescriptionU5BU5D_t1427979700*)SZArrayNew(AchievementDescriptionU5BU5D_t1427979700_il2cpp_TypeInfo_var, (uint32_t)L_3)));
	}

IL_0023:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
extern "C"  void GameCenterPlatform_SetAchievementDescription_m3537799850 (RuntimeObject * __this /* static, unused */, GcAchievementDescriptionData_t159318338  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetAchievementDescription_m3537799850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t1427979700* L_0 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_adCache_1();
		int32_t L_1 = ___number1;
		AchievementDescription_t214289417 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m2727538795((&___data0), /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (AchievementDescription_t214289417 *)L_2);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetAchievementDescriptionImage_m3268750428 (RuntimeObject * __this /* static, unused */, Texture2D_t601339354 * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetAchievementDescriptionImage_m3268750428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t1427979700* L_0 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_0);
		int32_t L_1 = ___number1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) <= ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___number1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_Log_m2620645656(NULL /*static, unused*/, _stringLiteral3969619136, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t1427979700* L_3 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_adCache_1();
		int32_t L_4 = ___number1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AchievementDescription_t214289417 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Texture2D_t601339354 * L_7 = ___texture0;
		NullCheck(L_6);
		AchievementDescription_SetImage_m2831865998(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern "C"  void GameCenterPlatform_TriggerAchievementDescriptionCallback_m179843090 (RuntimeObject * __this /* static, unused */, Action_1_t1445344399 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerAchievementDescriptionCallback_m179843090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t1445344399 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t1427979700* L_1 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_adCache_1();
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t1427979700* L_2 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_Log_m2620645656(NULL /*static, unused*/, _stringLiteral3286749098, /*hidden argument*/NULL);
	}

IL_0028:
	{
		Action_1_t1445344399 * L_3 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t1427979700* L_4 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_3);
		Action_1_Invoke_m2415595642(L_3, (IAchievementDescriptionU5BU5D_t491924267*)(IAchievementDescriptionU5BU5D_t491924267*)L_4, /*hidden argument*/Action_1_Invoke_m2415595642_RuntimeMethod_var);
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32,System.String)
extern "C"  void GameCenterPlatform_AuthenticateCallbackWrapper_m2158750177 (RuntimeObject * __this /* static, unused */, int32_t ___result0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_AuthenticateCallbackWrapper_m2158750177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t3179150494 * G_B3_0 = NULL;
	Action_2_t3179150494 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Action_2_t3179150494 * G_B4_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m1152273578(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_2_t3179150494 * L_0 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_AuthenticateCallback_0();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		Action_2_t3179150494 * L_1 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_AuthenticateCallback_0();
		int32_t L_2 = ___result0;
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B3_0 = L_1;
			goto IL_0023;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0024:
	{
		String_t* L_3 = ___error1;
		NullCheck(G_B4_1);
		Action_2_Invoke_m4105483451(G_B4_1, (bool)G_B4_0, L_3, /*hidden argument*/Action_2_Invoke_m4105483451_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->set_s_AuthenticateCallback_0((Action_2_t3179150494 *)NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern "C"  void GameCenterPlatform_ClearFriends_m1585190820 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ClearFriends_m1585190820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size0;
		GameCenterPlatform_SafeClearArray_m1070659531(NULL /*static, unused*/, (((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_address_of_s_friends_2()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern "C"  void GameCenterPlatform_SetFriends_m312217810 (RuntimeObject * __this /* static, unused */, GcUserProfileData_t3774347881  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetFriends_m312217810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number1;
		GcUserProfileData_AddToArray_m647586710((&___data0), (((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_address_of_s_friends_2()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetFriendImage_m391854885 (RuntimeObject * __this /* static, unused */, Texture2D_t601339354 * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetFriendImage_m391854885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		Texture2D_t601339354 * L_0 = ___texture0;
		int32_t L_1 = ___number1;
		GameCenterPlatform_SafeSetUserImage_m2044418657(NULL /*static, unused*/, (((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_address_of_s_friends_2()), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Action`1<System.Boolean>,System.Int32)
extern "C"  void GameCenterPlatform_TriggerFriendsCallbackWrapper_m3996103761 (RuntimeObject * __this /* static, unused */, Action_1_t2194597286 * ___callback0, int32_t ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerFriendsCallbackWrapper_m3996103761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2194597286 * G_B5_0 = NULL;
	Action_1_t2194597286 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Action_1_t2194597286 * G_B6_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_t783875789* L_0 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_friends_2();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		LocalUser_t4076573085 * L_1 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		UserProfileU5BU5D_t783875789* L_2 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_friends_2();
		NullCheck(L_1);
		LocalUser_SetFriends_m3418938091(L_1, (IUserProfileU5BU5D_t2705473828*)(IUserProfileU5BU5D_t2705473828*)L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		Action_1_t2194597286 * L_3 = ___callback0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t2194597286 * L_4 = ___callback0;
		int32_t L_5 = ___result1;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			G_B5_0 = L_4;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		Action_1_Invoke_m1665903769(G_B6_1, (bool)G_B6_0, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>,UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
extern "C"  void GameCenterPlatform_AchievementCallbackWrapper_m1089436760 (RuntimeObject * __this /* static, unused */, Action_1_t334544374 * ___callback0, GcAchievementDataU5BU5D_t2074805605* ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_AchievementCallbackWrapper_m1089436760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AchievementU5BU5D_t1510630649* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Action_1_t334544374 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		GcAchievementDataU5BU5D_t2074805605* L_1 = ___result1;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_Log_m2620645656(NULL /*static, unused*/, _stringLiteral643263737, /*hidden argument*/NULL);
	}

IL_001a:
	{
		GcAchievementDataU5BU5D_t2074805605* L_2 = ___result1;
		NullCheck(L_2);
		V_0 = ((AchievementU5BU5D_t1510630649*)SZArrayNew(AchievementU5BU5D_t1510630649_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))));
		V_1 = 0;
		goto IL_003d;
	}

IL_002a:
	{
		AchievementU5BU5D_t1510630649* L_3 = V_0;
		int32_t L_4 = V_1;
		GcAchievementDataU5BU5D_t2074805605* L_5 = ___result1;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Achievement_t509047912 * L_7 = GcAchievementData_ToAchievement_m364887381(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Achievement_t509047912 *)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_9 = V_1;
		GcAchievementDataU5BU5D_t2074805605* L_10 = ___result1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_002a;
		}
	}
	{
		Action_1_t334544374 * L_11 = ___callback0;
		AchievementU5BU5D_t1510630649* L_12 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_m584514625(L_11, (IAchievementU5BU5D_t3676091538*)(IAchievementU5BU5D_t3676091538*)L_12, /*hidden argument*/Action_1_Invoke_m584514625_RuntimeMethod_var);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void GameCenterPlatform_ProgressCallbackWrapper_m2172268200 (RuntimeObject * __this /* static, unused */, Action_1_t2194597286 * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ProgressCallbackWrapper_m2172268200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2194597286 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Action_1_t2194597286 * L_1 = ___callback0;
		bool L_2 = ___success1;
		NullCheck(L_1);
		Action_1_Invoke_m1665903769(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
	}

IL_000e:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void GameCenterPlatform_ScoreCallbackWrapper_m1292460225 (RuntimeObject * __this /* static, unused */, Action_1_t2194597286 * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ScoreCallbackWrapper_m1292460225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2194597286 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Action_1_t2194597286 * L_1 = ___callback0;
		bool L_2 = ___success1;
		NullCheck(L_1);
		Action_1_Invoke_m1665903769(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
	}

IL_000e:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IScore[]>,UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GameCenterPlatform_ScoreLoaderCallbackWrapper_m198310030 (RuntimeObject * __this /* static, unused */, Action_1_t1253178395 * ___callback0, GcScoreDataU5BU5D_t3409191417* ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ScoreLoaderCallbackWrapper_m198310030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScoreU5BU5D_t1654613837* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Action_1_t1253178395 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		GcScoreDataU5BU5D_t3409191417* L_1 = ___result1;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t1654613837*)SZArrayNew(ScoreU5BU5D_t1654613837_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_002b;
	}

IL_0018:
	{
		ScoreU5BU5D_t1654613837* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t3409191417* L_4 = ___result1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Score_t839788964 * L_6 = GcScoreData_ToScore_m2167954864(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Score_t839788964 *)L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t3409191417* L_9 = ___result1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t1253178395 * L_10 = ___callback0;
		ScoreU5BU5D_t1654613837* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m3244804856(L_10, (IScoreU5BU5D_t299758263*)(IScoreU5BU5D_t299758263*)L_11, /*hidden argument*/Action_1_Invoke_m3244804856_RuntimeMethod_var);
	}

IL_003c:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m3283980680 (GameCenterPlatform_t3069447718 * __this, RuntimeObject* ___user0, Action_1_t2194597286 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m3283980680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t2194597286 * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t2194597286 * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m1665903769(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
	}

IL_001a:
	{
		goto IL_0025;
	}

IL_001f:
	{
		Action_1_t2194597286 * L_3 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadFriends_m3129328603(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m3808260266 (GameCenterPlatform_t3069447718 * __this, RuntimeObject* ___user0, Action_1_t2194597286 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m3808260266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260 * V_0 = NULL;
	{
		U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260 * L_0 = (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260 *)il2cpp_codegen_object_new(U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260_il2cpp_TypeInfo_var);
		U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0__ctor_m800188368(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260 * L_1 = V_0;
		Action_1_t2194597286 * L_2 = ___callback1;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		RuntimeObject* L_3 = ___user0;
		U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m3709205484_RuntimeMethod_var;
		Action_2_t3179150494 * L_6 = (Action_2_t3179150494 *)il2cpp_codegen_object_new(Action_2_t3179150494_il2cpp_TypeInfo_var);
		Action_2__ctor_m410699131(L_6, L_4, L_5, /*hidden argument*/Action_2__ctor_m410699131_RuntimeMethod_var);
		InterfaceActionInvoker2< RuntimeObject*, Action_2_t3179150494 * >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`2<System.Boolean,System.String>) */, ISocialPlatform_t1878494741_il2cpp_TypeInfo_var, __this, L_3, L_6);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`2<System.Boolean,System.String>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m247672382 (GameCenterPlatform_t3069447718 * __this, RuntimeObject* ___user0, Action_2_t3179150494 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m247672382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t3179150494 * L_0 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->set_s_AuthenticateCallback_0(L_0);
		GameCenterPlatform_Internal_Authenticate_m757880465(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern "C"  RuntimeObject* GameCenterPlatform_get_localUser_m3791417702 (GameCenterPlatform_t3069447718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_get_localUser_m3791417702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		LocalUser_t4076573085 * L_0 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		LocalUser_t4076573085 * L_1 = (LocalUser_t4076573085 *)il2cpp_codegen_object_new(LocalUser_t4076573085_il2cpp_TypeInfo_var);
		LocalUser__ctor_m3573885150(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->set_m_LocalUser_5(L_1);
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		bool L_2 = GameCenterPlatform_Internal_Authenticated_m3979905575(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		LocalUser_t4076573085 * L_3 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		NullCheck(L_3);
		String_t* L_4 = UserProfile_get_id_m4279460589(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m2292317872(NULL /*static, unused*/, L_4, _stringLiteral2436469487, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m1152273578(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		LocalUser_t4076573085 * L_6 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		V_0 = L_6;
		goto IL_0048;
	}

IL_0048:
	{
		RuntimeObject* L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern "C"  void GameCenterPlatform_PopulateLocalUser_m1152273578 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_PopulateLocalUser_m1152273578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		LocalUser_t4076573085 * L_0 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		bool L_1 = GameCenterPlatform_Internal_Authenticated_m3979905575(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m398823236(L_0, L_1, /*hidden argument*/NULL);
		LocalUser_t4076573085 * L_2 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m3757669667(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m134841919(L_2, L_3, /*hidden argument*/NULL);
		LocalUser_t4076573085 * L_4 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m4201883386(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_m2935936560(L_4, L_5, /*hidden argument*/NULL);
		LocalUser_t4076573085 * L_6 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		bool L_7 = GameCenterPlatform_Internal_Underage_m3775459272(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		LocalUser_SetUnderage_m1751695376(L_6, L_7, /*hidden argument*/NULL);
		LocalUser_t4076573085 * L_8 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		Texture2D_t601339354 * L_9 = GameCenterPlatform_Internal_UserImage_m36093628(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		UserProfile_SetImage_m1856246236(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern "C"  void GameCenterPlatform_LoadAchievementDescriptions_m3743483042 (GameCenterPlatform_t3069447718 * __this, Action_1_t1445344399 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadAchievementDescriptions_m3743483042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Action_1_t1445344399 * L_1 = ___callback0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t1445344399 * L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_m2415595642(L_2, (IAchievementDescriptionU5BU5D_t491924267*)(IAchievementDescriptionU5BU5D_t491924267*)((AchievementDescriptionU5BU5D_t1427979700*)SZArrayNew(AchievementDescriptionU5BU5D_t1427979700_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/Action_1_Invoke_m2415595642_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0024:
	{
		Action_1_t1445344399 * L_3 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadAchievementDescriptions_m565517090(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ReportProgress_m526233875 (GameCenterPlatform_t3069447718 * __this, String_t* ___id0, double ___progress1, Action_1_t2194597286 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ReportProgress_m526233875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t2194597286 * L_1 = ___callback2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t2194597286 * L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m1665903769(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
	}

IL_001a:
	{
		goto IL_0027;
	}

IL_001f:
	{
		String_t* L_3 = ___id0;
		double L_4 = ___progress1;
		Action_1_t2194597286 * L_5 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ReportProgress_m4008060365(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern "C"  void GameCenterPlatform_LoadAchievements_m1252109789 (GameCenterPlatform_t3069447718 * __this, Action_1_t334544374 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadAchievements_m1252109789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Action_1_t334544374 * L_1 = ___callback0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t334544374 * L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_m584514625(L_2, (IAchievementU5BU5D_t3676091538*)(IAchievementU5BU5D_t3676091538*)((AchievementU5BU5D_t1510630649*)SZArrayNew(AchievementU5BU5D_t1510630649_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/Action_1_Invoke_m584514625_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0024:
	{
		Action_1_t334544374 * L_3 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadAchievements_m3404685087(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ReportScore_m508852342 (GameCenterPlatform_t3069447718 * __this, int64_t ___score0, String_t* ___board1, Action_1_t2194597286 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ReportScore_m508852342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t2194597286 * L_1 = ___callback2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t2194597286 * L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m1665903769(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
	}

IL_001a:
	{
		goto IL_0027;
	}

IL_001f:
	{
		int64_t L_3 = ___score0;
		String_t* L_4 = ___board1;
		Action_1_t2194597286 * L_5 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ReportScore_m4279187171(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern "C"  void GameCenterPlatform_LoadScores_m2850237741 (GameCenterPlatform_t3069447718 * __this, String_t* ___category0, Action_1_t1253178395 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadScores_m2850237741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Action_1_t1253178395 * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t1253178395 * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m3244804856(L_2, (IScoreU5BU5D_t299758263*)(IScoreU5BU5D_t299758263*)((ScoreU5BU5D_t1654613837*)SZArrayNew(ScoreU5BU5D_t1654613837_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/Action_1_Invoke_m3244804856_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002b;
	}

IL_0024:
	{
		String_t* L_3 = ___category0;
		Action_1_t1253178395 * L_4 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadScores_m2575595469(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_LoadScores_m2285859017 (GameCenterPlatform_t3069447718 * __this, RuntimeObject* ___board0, Action_1_t2194597286 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadScores_m2285859017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_t2550452145 * V_0 = NULL;
	GcLeaderboard_t558175163 * V_1 = NULL;
	StringU5BU5D_t148011198* V_2 = NULL;
	Range_t495627371  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Range_t495627371  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t2194597286 * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t2194597286 * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m1665903769(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
	}

IL_001a:
	{
		goto IL_0080;
	}

IL_001f:
	{
		RuntimeObject* L_3 = ___board0;
		V_0 = ((Leaderboard_t2550452145 *)CastclassClass((RuntimeObject*)L_3, Leaderboard_t2550452145_il2cpp_TypeInfo_var));
		Leaderboard_t2550452145 * L_4 = V_0;
		GcLeaderboard_t558175163 * L_5 = (GcLeaderboard_t558175163 *)il2cpp_codegen_object_new(GcLeaderboard_t558175163_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_m1629398101(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		List_1_t2323180381 * L_6 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_GcBoards_6();
		GcLeaderboard_t558175163 * L_7 = V_1;
		NullCheck(L_6);
		List_1_Add_m3918193856(L_6, L_7, /*hidden argument*/List_1_Add_m3918193856_RuntimeMethod_var);
		Leaderboard_t2550452145 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t148011198* L_9 = Leaderboard_GetUserFilter_m3684461858(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t148011198* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		V_2 = (StringU5BU5D_t148011198*)NULL;
	}

IL_0049:
	{
		GcLeaderboard_t558175163 * L_11 = V_1;
		RuntimeObject* L_12 = ___board0;
		NullCheck(L_12);
		String_t* L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t493877766_il2cpp_TypeInfo_var, L_12);
		RuntimeObject* L_14 = ___board0;
		NullCheck(L_14);
		Range_t495627371  L_15 = InterfaceFuncInvoker0< Range_t495627371  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t493877766_il2cpp_TypeInfo_var, L_14);
		V_3 = L_15;
		int32_t L_16 = (&V_3)->get_from_0();
		RuntimeObject* L_17 = ___board0;
		NullCheck(L_17);
		Range_t495627371  L_18 = InterfaceFuncInvoker0< Range_t495627371  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t493877766_il2cpp_TypeInfo_var, L_17);
		V_4 = L_18;
		int32_t L_19 = (&V_4)->get_count_1();
		StringU5BU5D_t148011198* L_20 = V_2;
		RuntimeObject* L_21 = ___board0;
		NullCheck(L_21);
		int32_t L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_t493877766_il2cpp_TypeInfo_var, L_21);
		RuntimeObject* L_23 = ___board0;
		NullCheck(L_23);
		int32_t L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t493877766_il2cpp_TypeInfo_var, L_23);
		Action_1_t2194597286 * L_25 = ___callback1;
		NullCheck(L_11);
		GcLeaderboard_Internal_LoadScores_m2958935462(L_11, L_13, L_16, L_19, L_20, L_22, L_24, L_25, /*hidden argument*/NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void GameCenterPlatform_LeaderboardCallbackWrapper_m1628002216 (RuntimeObject * __this /* static, unused */, Action_1_t2194597286 * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LeaderboardCallbackWrapper_m1628002216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2194597286 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Action_1_t2194597286 * L_1 = ___callback0;
		bool L_2 = ___success1;
		NullCheck(L_1);
		Action_1_Invoke_m1665903769(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern "C"  bool GameCenterPlatform_GetLoading_m3707591069 (GameCenterPlatform_t3069447718 * __this, RuntimeObject* ___board0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_GetLoading_m3707591069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GcLeaderboard_t558175163 * V_1 = NULL;
	Enumerator_t3745629043  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0071;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		List_1_t2323180381 * L_1 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_m_GcBoards_6();
		NullCheck(L_1);
		Enumerator_t3745629043  L_2 = List_1_GetEnumerator_m648429457(L_1, /*hidden argument*/List_1_GetEnumerator_m648429457_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004b;
		}

IL_0024:
		{
			GcLeaderboard_t558175163 * L_3 = Enumerator_get_Current_m3395527110((&V_2), /*hidden argument*/Enumerator_get_Current_m3395527110_RuntimeMethod_var);
			V_1 = L_3;
			GcLeaderboard_t558175163 * L_4 = V_1;
			RuntimeObject* L_5 = ___board0;
			NullCheck(L_4);
			bool L_6 = GcLeaderboard_Contains_m3083501333(L_4, ((Leaderboard_t2550452145 *)CastclassClass((RuntimeObject*)L_5, Leaderboard_t2550452145_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_004a;
			}
		}

IL_003e:
		{
			GcLeaderboard_t558175163 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = GcLeaderboard_Loading_m2414935601(L_7, /*hidden argument*/NULL);
			V_0 = L_8;
			IL2CPP_LEAVE(0x71, FINALLY_005c);
		}

IL_004a:
		{
		}

IL_004b:
		{
			bool L_9 = Enumerator_MoveNext_m1669917842((&V_2), /*hidden argument*/Enumerator_MoveNext_m1669917842_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0024;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2961317852((&V_2), /*hidden argument*/Enumerator_Dispose_m2961317852_RuntimeMethod_var);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006a:
	{
		V_0 = (bool)0;
		goto IL_0071;
	}

IL_0071:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern "C"  bool GameCenterPlatform_VerifyAuthentication_m4274466937 (GameCenterPlatform_t3069447718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_VerifyAuthentication_m4274466937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = GameCenterPlatform_get_localUser_m3791417702(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t3762680006_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_Log_m2620645656(NULL /*static, unused*/, _stringLiteral1676738798, /*hidden argument*/NULL);
		V_0 = (bool)0;
		goto IL_002a;
	}

IL_0023:
	{
		V_0 = (bool)1;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern "C"  void GameCenterPlatform_ShowAchievementsUI_m792371047 (GameCenterPlatform_t3069447718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowAchievementsUI_m792371047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0016;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_m2530738290(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_ShowLeaderboardUI_m3630267930 (GameCenterPlatform_t3069447718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowLeaderboardUI_m3630267930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0016;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m3188213548(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern "C"  void GameCenterPlatform_ClearUsers_m3414163867 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ClearUsers_m3414163867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size0;
		GameCenterPlatform_SafeClearArray_m1070659531(NULL /*static, unused*/, (((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_address_of_s_users_3()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern "C"  void GameCenterPlatform_SetUser_m2859250675 (RuntimeObject * __this /* static, unused */, GcUserProfileData_t3774347881  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetUser_m2859250675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number1;
		GcUserProfileData_AddToArray_m647586710((&___data0), (((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_address_of_s_users_3()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetUserImage_m1966720439 (RuntimeObject * __this /* static, unused */, Texture2D_t601339354 * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetUserImage_m1966720439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		Texture2D_t601339354 * L_0 = ___texture0;
		int32_t L_1 = ___number1;
		GameCenterPlatform_SafeSetUserImage_m2044418657(NULL /*static, unused*/, (((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_address_of_s_users_3()), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C"  void GameCenterPlatform_TriggerUsersCallbackWrapper_m1985083776 (RuntimeObject * __this /* static, unused */, Action_1_t3658893960 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerUsersCallbackWrapper_m1985083776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3658893960 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Action_1_t3658893960 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_t783875789* L_2 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_users_3();
		NullCheck(L_1);
		Action_1_Invoke_m2364610610(L_1, (IUserProfileU5BU5D_t2705473828*)(IUserProfileU5BU5D_t2705473828*)L_2, /*hidden argument*/Action_1_Invoke_m2364610610_RuntimeMethod_var);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C"  void GameCenterPlatform_LoadUsers_m2714512510 (GameCenterPlatform_t3069447718 * __this, StringU5BU5D_t148011198* ___userIds0, Action_1_t3658893960 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadUsers_m2714512510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4274466937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Action_1_t3658893960 * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t3658893960 * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m2364610610(L_2, (IUserProfileU5BU5D_t2705473828*)(IUserProfileU5BU5D_t2705473828*)((UserProfileU5BU5D_t783875789*)SZArrayNew(UserProfileU5BU5D_t783875789_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/Action_1_Invoke_m2364610610_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002b;
	}

IL_0024:
	{
		StringU5BU5D_t148011198* L_3 = ___userIds0;
		Action_1_t3658893960 * L_4 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadUsers_m3617262344(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SafeSetUserImage_m2044418657 (RuntimeObject * __this /* static, unused */, UserProfileU5BU5D_t783875789** ___array0, Texture2D_t601339354 * ___texture1, int32_t ___number2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SafeSetUserImage_m2044418657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserProfileU5BU5D_t783875789** L_0 = ___array0;
		NullCheck((*((UserProfileU5BU5D_t783875789**)L_0)));
		int32_t L_1 = ___number2;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((UserProfileU5BU5D_t783875789**)L_0)))->max_length))))) <= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___number2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_Log_m2620645656(NULL /*static, unused*/, _stringLiteral2721255499, /*hidden argument*/NULL);
		Texture2D_t601339354 * L_3 = (Texture2D_t601339354 *)il2cpp_codegen_object_new(Texture2D_t601339354_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3102761989(L_3, ((int32_t)76), ((int32_t)76), /*hidden argument*/NULL);
		___texture1 = L_3;
	}

IL_0029:
	{
		UserProfileU5BU5D_t783875789** L_4 = ___array0;
		NullCheck((*((UserProfileU5BU5D_t783875789**)L_4)));
		int32_t L_5 = ___number2;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((UserProfileU5BU5D_t783875789**)L_4)))->max_length))))) <= ((int32_t)L_5)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_6 = ___number2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		UserProfileU5BU5D_t783875789** L_7 = ___array0;
		int32_t L_8 = ___number2;
		NullCheck((*((UserProfileU5BU5D_t783875789**)L_7)));
		int32_t L_9 = L_8;
		UserProfile_t1869465636 * L_10 = ((*((UserProfileU5BU5D_t783875789**)L_7)))->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Texture2D_t601339354 * L_11 = ___texture1;
		NullCheck(L_10);
		UserProfile_SetImage_m1856246236(L_10, L_11, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_Log_m2620645656(NULL /*static, unused*/, _stringLiteral2903419543, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GameCenterPlatform_SafeClearArray_m1070659531 (RuntimeObject * __this /* static, unused */, UserProfileU5BU5D_t783875789** ___array0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SafeClearArray_m1070659531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserProfileU5BU5D_t783875789** L_0 = ___array0;
		if (!(*((UserProfileU5BU5D_t783875789**)L_0)))
		{
			goto IL_0012;
		}
	}
	{
		UserProfileU5BU5D_t783875789** L_1 = ___array0;
		NullCheck((*((UserProfileU5BU5D_t783875789**)L_1)));
		int32_t L_2 = ___size1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((UserProfileU5BU5D_t783875789**)L_1)))->max_length))))) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		UserProfileU5BU5D_t783875789** L_3 = ___array0;
		int32_t L_4 = ___size1;
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)((UserProfileU5BU5D_t783875789*)SZArrayNew(UserProfileU5BU5D_t783875789_il2cpp_TypeInfo_var, (uint32_t)L_4));
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)((UserProfileU5BU5D_t783875789*)SZArrayNew(UserProfileU5BU5D_t783875789_il2cpp_TypeInfo_var, (uint32_t)L_4)));
	}

IL_001a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern "C"  RuntimeObject* GameCenterPlatform_CreateLeaderboard_m1254609911 (GameCenterPlatform_t3069447718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_CreateLeaderboard_m1254609911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_t2550452145 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Leaderboard_t2550452145 * L_0 = (Leaderboard_t2550452145 *)il2cpp_codegen_object_new(Leaderboard_t2550452145_il2cpp_TypeInfo_var);
		Leaderboard__ctor_m3385400425(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Leaderboard_t2550452145 * L_1 = V_0;
		V_1 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
extern "C"  RuntimeObject* GameCenterPlatform_CreateAchievement_m1431391544 (GameCenterPlatform_t3069447718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_CreateAchievement_m1431391544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Achievement_t509047912 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Achievement_t509047912 * L_0 = (Achievement_t509047912 *)il2cpp_codegen_object_new(Achievement_t509047912_il2cpp_TypeInfo_var);
		Achievement__ctor_m1215914369(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Achievement_t509047912 * L_1 = V_0;
		V_1 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern "C"  void GameCenterPlatform_TriggerResetAchievementCallback_m3982148884 (RuntimeObject * __this /* static, unused */, bool ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerResetAchievementCallback_m3982148884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		Action_1_t2194597286 * L_0 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_ResetAchievements_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var);
		Action_1_t2194597286 * L_1 = ((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->get_s_ResetAchievements_4();
		bool L_2 = ___result0;
		NullCheck(L_1);
		Action_1_Invoke_m1665903769(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
extern "C"  void GameCenterPlatform__cctor_m527395500 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform__cctor_m527395500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->set_s_adCache_1(((AchievementDescriptionU5BU5D_t1427979700*)SZArrayNew(AchievementDescriptionU5BU5D_t1427979700_il2cpp_TypeInfo_var, (uint32_t)0)));
		((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->set_s_friends_2(((UserProfileU5BU5D_t783875789*)SZArrayNew(UserProfileU5BU5D_t783875789_il2cpp_TypeInfo_var, (uint32_t)0)));
		((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->set_s_users_3(((UserProfileU5BU5D_t783875789*)SZArrayNew(UserProfileU5BU5D_t783875789_il2cpp_TypeInfo_var, (uint32_t)0)));
		List_1_t2323180381 * L_0 = (List_1_t2323180381 *)il2cpp_codegen_object_new(List_1_t2323180381_il2cpp_TypeInfo_var);
		List_1__ctor_m2870300834(L_0, /*hidden argument*/List_1__ctor_m2870300834_RuntimeMethod_var);
		((GameCenterPlatform_t3069447718_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t3069447718_il2cpp_TypeInfo_var))->set_m_GcBoards_6(L_0);
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
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::.ctor()
extern "C"  void U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0__ctor_m800188368 (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::<>m__0(System.Boolean,System.String)
extern "C"  void U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m3709205484 (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t2269101260 * __this, bool ___success0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m3709205484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2194597286 * L_0 = __this->get_callback_0();
		bool L_1 = ___success0;
		NullCheck(L_0);
		Action_1_Invoke_m1665903769(L_0, L_1, /*hidden argument*/Action_1_Invoke_m1665903769_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t731726700_marshal_pinvoke(const GcAchievementData_t731726700& unmarshaled, GcAchievementData_t731726700_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Identifier_0());
	marshaled.___m_PercentCompleted_1 = unmarshaled.get_m_PercentCompleted_1();
	marshaled.___m_Completed_2 = unmarshaled.get_m_Completed_2();
	marshaled.___m_Hidden_3 = unmarshaled.get_m_Hidden_3();
	marshaled.___m_LastReportedDate_4 = unmarshaled.get_m_LastReportedDate_4();
}
extern "C" void GcAchievementData_t731726700_marshal_pinvoke_back(const GcAchievementData_t731726700_marshaled_pinvoke& marshaled, GcAchievementData_t731726700& unmarshaled)
{
	unmarshaled.set_m_Identifier_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0));
	double unmarshaled_m_PercentCompleted_temp_1 = 0.0;
	unmarshaled_m_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.set_m_PercentCompleted_1(unmarshaled_m_PercentCompleted_temp_1);
	int32_t unmarshaled_m_Completed_temp_2 = 0;
	unmarshaled_m_Completed_temp_2 = marshaled.___m_Completed_2;
	unmarshaled.set_m_Completed_2(unmarshaled_m_Completed_temp_2);
	int32_t unmarshaled_m_Hidden_temp_3 = 0;
	unmarshaled_m_Hidden_temp_3 = marshaled.___m_Hidden_3;
	unmarshaled.set_m_Hidden_3(unmarshaled_m_Hidden_temp_3);
	int32_t unmarshaled_m_LastReportedDate_temp_4 = 0;
	unmarshaled_m_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate_4;
	unmarshaled.set_m_LastReportedDate_4(unmarshaled_m_LastReportedDate_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t731726700_marshal_pinvoke_cleanup(GcAchievementData_t731726700_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t731726700_marshal_com(const GcAchievementData_t731726700& unmarshaled, GcAchievementData_t731726700_marshaled_com& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Identifier_0());
	marshaled.___m_PercentCompleted_1 = unmarshaled.get_m_PercentCompleted_1();
	marshaled.___m_Completed_2 = unmarshaled.get_m_Completed_2();
	marshaled.___m_Hidden_3 = unmarshaled.get_m_Hidden_3();
	marshaled.___m_LastReportedDate_4 = unmarshaled.get_m_LastReportedDate_4();
}
extern "C" void GcAchievementData_t731726700_marshal_com_back(const GcAchievementData_t731726700_marshaled_com& marshaled, GcAchievementData_t731726700& unmarshaled)
{
	unmarshaled.set_m_Identifier_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Identifier_0));
	double unmarshaled_m_PercentCompleted_temp_1 = 0.0;
	unmarshaled_m_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.set_m_PercentCompleted_1(unmarshaled_m_PercentCompleted_temp_1);
	int32_t unmarshaled_m_Completed_temp_2 = 0;
	unmarshaled_m_Completed_temp_2 = marshaled.___m_Completed_2;
	unmarshaled.set_m_Completed_2(unmarshaled_m_Completed_temp_2);
	int32_t unmarshaled_m_Hidden_temp_3 = 0;
	unmarshaled_m_Hidden_temp_3 = marshaled.___m_Hidden_3;
	unmarshaled.set_m_Hidden_3(unmarshaled_m_Hidden_temp_3);
	int32_t unmarshaled_m_LastReportedDate_temp_4 = 0;
	unmarshaled_m_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate_4;
	unmarshaled.set_m_LastReportedDate_4(unmarshaled_m_LastReportedDate_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t731726700_marshal_com_cleanup(GcAchievementData_t731726700_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C"  Achievement_t509047912 * GcAchievementData_ToAchievement_m364887381 (GcAchievementData_t731726700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcAchievementData_ToAchievement_m364887381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t2990056487  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Achievement_t509047912 * V_1 = NULL;
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = NULL;
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = NULL;
	{
		String_t* L_0 = __this->get_m_Identifier_0();
		double L_1 = __this->get_m_PercentCompleted_1();
		int32_t L_2 = __this->get_m_Completed_2();
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		int32_t L_3 = __this->get_m_Hidden_3();
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0030;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0031:
	{
		DateTime__ctor_m1604064251((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_LastReportedDate_4();
		DateTime_t2990056487  L_5 = DateTime_AddSeconds_m865288063((&V_0), (((double)((double)L_4))), /*hidden argument*/NULL);
		Achievement_t509047912 * L_6 = (Achievement_t509047912 *)il2cpp_codegen_object_new(Achievement_t509047912_il2cpp_TypeInfo_var);
		Achievement__ctor_m3282845061(L_6, G_B6_3, G_B6_2, (bool)G_B6_1, (bool)G_B6_0, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_005c;
	}

IL_005c:
	{
		Achievement_t509047912 * L_7 = V_1;
		return L_7;
	}
}
extern "C"  Achievement_t509047912 * GcAchievementData_ToAchievement_m364887381_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcAchievementData_t731726700 * _thisAdjusted = reinterpret_cast<GcAchievementData_t731726700 *>(__this + 1);
	return GcAchievementData_ToAchievement_m364887381(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern "C" void GcAchievementDescriptionData_t159318338_marshal_pinvoke(const GcAchievementDescriptionData_t159318338& unmarshaled, GcAchievementDescriptionData_t159318338_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception);
}
extern "C" void GcAchievementDescriptionData_t159318338_marshal_pinvoke_back(const GcAchievementDescriptionData_t159318338_marshaled_pinvoke& marshaled, GcAchievementDescriptionData_t159318338& unmarshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern "C" void GcAchievementDescriptionData_t159318338_marshal_pinvoke_cleanup(GcAchievementDescriptionData_t159318338_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern "C" void GcAchievementDescriptionData_t159318338_marshal_com(const GcAchievementDescriptionData_t159318338& unmarshaled, GcAchievementDescriptionData_t159318338_marshaled_com& marshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception);
}
extern "C" void GcAchievementDescriptionData_t159318338_marshal_com_back(const GcAchievementDescriptionData_t159318338_marshaled_com& marshaled, GcAchievementDescriptionData_t159318338& unmarshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern "C" void GcAchievementDescriptionData_t159318338_marshal_com_cleanup(GcAchievementDescriptionData_t159318338_marshaled_com& marshaled)
{
}
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern "C"  AchievementDescription_t214289417 * GcAchievementDescriptionData_ToAchievementDescription_m2727538795 (GcAchievementDescriptionData_t159318338 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcAchievementDescriptionData_ToAchievementDescription_m2727538795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AchievementDescription_t214289417 * V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Texture2D_t601339354 * G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Texture2D_t601339354 * G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	Texture2D_t601339354 * G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	String_t* G_B3_5 = NULL;
	{
		String_t* L_0 = __this->get_m_Identifier_0();
		String_t* L_1 = __this->get_m_Title_1();
		Texture2D_t601339354 * L_2 = __this->get_m_Image_2();
		String_t* L_3 = __this->get_m_AchievedDescription_3();
		String_t* L_4 = __this->get_m_UnachievedDescription_4();
		int32_t L_5 = __this->get_m_Hidden_5();
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0031:
	{
		int32_t L_6 = __this->get_m_Points_6();
		AchievementDescription_t214289417 * L_7 = (AchievementDescription_t214289417 *)il2cpp_codegen_object_new(AchievementDescription_t214289417_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m4033065372(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, (bool)G_B3_0, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		AchievementDescription_t214289417 * L_8 = V_0;
		return L_8;
	}
}
extern "C"  AchievementDescription_t214289417 * GcAchievementDescriptionData_ToAchievementDescription_m2727538795_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcAchievementDescriptionData_t159318338 * _thisAdjusted = reinterpret_cast<GcAchievementDescriptionData_t159318338 *>(__this + 1);
	return GcAchievementDescriptionData_ToAchievementDescription_m2727538795(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
extern "C" void GcLeaderboard_t558175163_marshal_pinvoke(const GcLeaderboard_t558175163& unmarshaled, GcLeaderboard_t558175163_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception);
}
extern "C" void GcLeaderboard_t558175163_marshal_pinvoke_back(const GcLeaderboard_t558175163_marshaled_pinvoke& marshaled, GcLeaderboard_t558175163& unmarshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
extern "C" void GcLeaderboard_t558175163_marshal_pinvoke_cleanup(GcLeaderboard_t558175163_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
extern "C" void GcLeaderboard_t558175163_marshal_com(const GcLeaderboard_t558175163& unmarshaled, GcLeaderboard_t558175163_marshaled_com& marshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception);
}
extern "C" void GcLeaderboard_t558175163_marshal_com_back(const GcLeaderboard_t558175163_marshaled_com& marshaled, GcLeaderboard_t558175163& unmarshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
extern "C" void GcLeaderboard_t558175163_marshal_com_cleanup(GcLeaderboard_t558175163_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  void GcLeaderboard__ctor_m1629398101 (GcLeaderboard_t558175163 * __this, Leaderboard_t2550452145 * ___board0, const RuntimeMethod* method)
{
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		Leaderboard_t2550452145 * L_0 = ___board0;
		__this->set_m_GenericLeaderboard_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern "C"  void GcLeaderboard_Finalize_m945531037 (GcLeaderboard_t558175163 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		GcLeaderboard_Dispose_m225871768(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3605663471(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  bool GcLeaderboard_Contains_m3083501333 (GcLeaderboard_t558175163 * __this, Leaderboard_t2550452145 * ___board0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_t2550452145 * L_0 = __this->get_m_GenericLeaderboard_1();
		Leaderboard_t2550452145 * L_1 = ___board0;
		V_0 = (bool)((((RuntimeObject*)(Leaderboard_t2550452145 *)L_0) == ((RuntimeObject*)(Leaderboard_t2550452145 *)L_1))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GcLeaderboard_SetScores_m2806394880 (GcLeaderboard_t558175163 * __this, GcScoreDataU5BU5D_t3409191417* ___scoreDatas0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcLeaderboard_SetScores_m2806394880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScoreU5BU5D_t1654613837* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Leaderboard_t2550452145 * L_0 = __this->get_m_GenericLeaderboard_1();
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		GcScoreDataU5BU5D_t3409191417* L_1 = ___scoreDatas0;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t1654613837*)SZArrayNew(ScoreU5BU5D_t1654613837_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0030;
	}

IL_001d:
	{
		ScoreU5BU5D_t1654613837* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t3409191417* L_4 = ___scoreDatas0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Score_t839788964 * L_6 = GcScoreData_ToScore_m2167954864(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Score_t839788964 *)L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t3409191417* L_9 = ___scoreDatas0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		Leaderboard_t2550452145 * L_10 = __this->get_m_GenericLeaderboard_1();
		ScoreU5BU5D_t1654613837* L_11 = V_0;
		NullCheck(L_10);
		Leaderboard_SetScores_m3233755424(L_10, (IScoreU5BU5D_t299758263*)(IScoreU5BU5D_t299758263*)L_11, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern "C"  void GcLeaderboard_SetLocalScore_m3157417088 (GcLeaderboard_t558175163 * __this, GcScoreData_t3204758376  ___scoreData0, const RuntimeMethod* method)
{
	{
		Leaderboard_t2550452145 * L_0 = __this->get_m_GenericLeaderboard_1();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Leaderboard_t2550452145 * L_1 = __this->get_m_GenericLeaderboard_1();
		Score_t839788964 * L_2 = GcScoreData_ToScore_m2167954864((&___scoreData0), /*hidden argument*/NULL);
		NullCheck(L_1);
		Leaderboard_SetLocalUserScore_m2030678762(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern "C"  void GcLeaderboard_SetMaxRange_m1846729578 (GcLeaderboard_t558175163 * __this, uint32_t ___maxRange0, const RuntimeMethod* method)
{
	{
		Leaderboard_t2550452145 * L_0 = __this->get_m_GenericLeaderboard_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Leaderboard_t2550452145 * L_1 = __this->get_m_GenericLeaderboard_1();
		uint32_t L_2 = ___maxRange0;
		NullCheck(L_1);
		Leaderboard_SetMaxRange_m816940963(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern "C"  void GcLeaderboard_SetTitle_m3462059717 (GcLeaderboard_t558175163 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		Leaderboard_t2550452145 * L_0 = __this->get_m_GenericLeaderboard_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Leaderboard_t2550452145 * L_1 = __this->get_m_GenericLeaderboard_1();
		String_t* L_2 = ___title0;
		NullCheck(L_1);
		Leaderboard_SetTitle_m3373571837(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
extern "C"  void GcLeaderboard_Internal_LoadScores_m2958935462 (GcLeaderboard_t558175163 * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, StringU5BU5D_t148011198* ___userIDs3, int32_t ___playerScope4, int32_t ___timeScope5, RuntimeObject * ___callback6, const RuntimeMethod* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScores_m2958935462_ftn) (GcLeaderboard_t558175163 *, String_t*, int32_t, int32_t, StringU5BU5D_t148011198*, int32_t, int32_t, RuntimeObject *);
	static GcLeaderboard_Internal_LoadScores_m2958935462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScores_m2958935462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)");
	_il2cpp_icall_func(__this, ___category0, ___from1, ___count2, ___userIDs3, ___playerScope4, ___timeScope5, ___callback6);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C"  bool GcLeaderboard_Loading_m2414935601 (GcLeaderboard_t558175163 * __this, const RuntimeMethod* method)
{
	typedef bool (*GcLeaderboard_Loading_m2414935601_ftn) (GcLeaderboard_t558175163 *);
	static GcLeaderboard_Loading_m2414935601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Loading_m2414935601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C"  void GcLeaderboard_Dispose_m225871768 (GcLeaderboard_t558175163 * __this, const RuntimeMethod* method)
{
	typedef void (*GcLeaderboard_Dispose_m225871768_ftn) (GcLeaderboard_t558175163 *);
	static GcLeaderboard_Dispose_m225871768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Dispose_m225871768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()");
	_il2cpp_icall_func(__this);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t3204758376_marshal_pinvoke(const GcScoreData_t3204758376& unmarshaled, GcScoreData_t3204758376_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Category_0());
	marshaled.___m_ValueLow_1 = unmarshaled.get_m_ValueLow_1();
	marshaled.___m_ValueHigh_2 = unmarshaled.get_m_ValueHigh_2();
	marshaled.___m_Date_3 = unmarshaled.get_m_Date_3();
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.get_m_FormattedValue_4());
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.get_m_PlayerID_5());
	marshaled.___m_Rank_6 = unmarshaled.get_m_Rank_6();
}
extern "C" void GcScoreData_t3204758376_marshal_pinvoke_back(const GcScoreData_t3204758376_marshaled_pinvoke& marshaled, GcScoreData_t3204758376& unmarshaled)
{
	unmarshaled.set_m_Category_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0));
	uint32_t unmarshaled_m_ValueLow_temp_1 = 0;
	unmarshaled_m_ValueLow_temp_1 = marshaled.___m_ValueLow_1;
	unmarshaled.set_m_ValueLow_1(unmarshaled_m_ValueLow_temp_1);
	int32_t unmarshaled_m_ValueHigh_temp_2 = 0;
	unmarshaled_m_ValueHigh_temp_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.set_m_ValueHigh_2(unmarshaled_m_ValueHigh_temp_2);
	int32_t unmarshaled_m_Date_temp_3 = 0;
	unmarshaled_m_Date_temp_3 = marshaled.___m_Date_3;
	unmarshaled.set_m_Date_3(unmarshaled_m_Date_temp_3);
	unmarshaled.set_m_FormattedValue_4(il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4));
	unmarshaled.set_m_PlayerID_5(il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5));
	int32_t unmarshaled_m_Rank_temp_6 = 0;
	unmarshaled_m_Rank_temp_6 = marshaled.___m_Rank_6;
	unmarshaled.set_m_Rank_6(unmarshaled_m_Rank_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t3204758376_marshal_pinvoke_cleanup(GcScoreData_t3204758376_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t3204758376_marshal_com(const GcScoreData_t3204758376& unmarshaled, GcScoreData_t3204758376_marshaled_com& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Category_0());
	marshaled.___m_ValueLow_1 = unmarshaled.get_m_ValueLow_1();
	marshaled.___m_ValueHigh_2 = unmarshaled.get_m_ValueHigh_2();
	marshaled.___m_Date_3 = unmarshaled.get_m_Date_3();
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_FormattedValue_4());
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_PlayerID_5());
	marshaled.___m_Rank_6 = unmarshaled.get_m_Rank_6();
}
extern "C" void GcScoreData_t3204758376_marshal_com_back(const GcScoreData_t3204758376_marshaled_com& marshaled, GcScoreData_t3204758376& unmarshaled)
{
	unmarshaled.set_m_Category_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Category_0));
	uint32_t unmarshaled_m_ValueLow_temp_1 = 0;
	unmarshaled_m_ValueLow_temp_1 = marshaled.___m_ValueLow_1;
	unmarshaled.set_m_ValueLow_1(unmarshaled_m_ValueLow_temp_1);
	int32_t unmarshaled_m_ValueHigh_temp_2 = 0;
	unmarshaled_m_ValueHigh_temp_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.set_m_ValueHigh_2(unmarshaled_m_ValueHigh_temp_2);
	int32_t unmarshaled_m_Date_temp_3 = 0;
	unmarshaled_m_Date_temp_3 = marshaled.___m_Date_3;
	unmarshaled.set_m_Date_3(unmarshaled_m_Date_temp_3);
	unmarshaled.set_m_FormattedValue_4(il2cpp_codegen_marshal_bstring_result(marshaled.___m_FormattedValue_4));
	unmarshaled.set_m_PlayerID_5(il2cpp_codegen_marshal_bstring_result(marshaled.___m_PlayerID_5));
	int32_t unmarshaled_m_Rank_temp_6 = 0;
	unmarshaled_m_Rank_temp_6 = marshaled.___m_Rank_6;
	unmarshaled.set_m_Rank_6(unmarshaled_m_Rank_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t3204758376_marshal_com_cleanup(GcScoreData_t3204758376_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C"  Score_t839788964 * GcScoreData_ToScore_m2167954864 (GcScoreData_t3204758376 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcScoreData_ToScore_m2167954864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t2990056487  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Score_t839788964 * V_1 = NULL;
	{
		String_t* L_0 = __this->get_m_Category_0();
		int32_t L_1 = __this->get_m_ValueHigh_2();
		uint32_t L_2 = __this->get_m_ValueLow_1();
		String_t* L_3 = __this->get_m_PlayerID_5();
		DateTime__ctor_m1604064251((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_Date_3();
		DateTime_t2990056487  L_5 = DateTime_AddSeconds_m865288063((&V_0), (((double)((double)L_4))), /*hidden argument*/NULL);
		String_t* L_6 = __this->get_m_FormattedValue_4();
		int32_t L_7 = __this->get_m_Rank_6();
		Score_t839788964 * L_8 = (Score_t839788964 *)il2cpp_codegen_object_new(Score_t839788964_il2cpp_TypeInfo_var);
		Score__ctor_m2035808112(L_8, L_0, ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)L_1)))<<(int32_t)((int32_t)32))), (int64_t)(((int64_t)((uint64_t)L_2))))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0056;
	}

IL_0056:
	{
		Score_t839788964 * L_9 = V_1;
		return L_9;
	}
}
extern "C"  Score_t839788964 * GcScoreData_ToScore_m2167954864_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcScoreData_t3204758376 * _thisAdjusted = reinterpret_cast<GcScoreData_t3204758376 *>(__this + 1);
	return GcScoreData_ToScore_m2167954864(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern "C" void GcUserProfileData_t3774347881_marshal_pinvoke(const GcUserProfileData_t3774347881& unmarshaled, GcUserProfileData_t3774347881_marshaled_pinvoke& marshaled)
{
	Exception_t* ___image_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_3Exception);
}
extern "C" void GcUserProfileData_t3774347881_marshal_pinvoke_back(const GcUserProfileData_t3774347881_marshaled_pinvoke& marshaled, GcUserProfileData_t3774347881& unmarshaled)
{
	Exception_t* ___image_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_3Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern "C" void GcUserProfileData_t3774347881_marshal_pinvoke_cleanup(GcUserProfileData_t3774347881_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern "C" void GcUserProfileData_t3774347881_marshal_com(const GcUserProfileData_t3774347881& unmarshaled, GcUserProfileData_t3774347881_marshaled_com& marshaled)
{
	Exception_t* ___image_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_3Exception);
}
extern "C" void GcUserProfileData_t3774347881_marshal_com_back(const GcUserProfileData_t3774347881_marshaled_com& marshaled, GcUserProfileData_t3774347881& unmarshaled)
{
	Exception_t* ___image_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_3Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern "C" void GcUserProfileData_t3774347881_marshal_com_cleanup(GcUserProfileData_t3774347881_marshaled_com& marshaled)
{
}
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C"  UserProfile_t1869465636 * GcUserProfileData_ToUserProfile_m1897416945 (GcUserProfileData_t3774347881 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcUserProfileData_ToUserProfile_m1897416945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UserProfile_t1869465636 * V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		String_t* L_0 = __this->get_userName_0();
		String_t* L_1 = __this->get_userID_1();
		int32_t L_2 = __this->get_isFriend_2();
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001f;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0020:
	{
		Texture2D_t601339354 * L_3 = __this->get_image_3();
		UserProfile_t1869465636 * L_4 = (UserProfile_t1869465636 *)il2cpp_codegen_object_new(UserProfile_t1869465636_il2cpp_TypeInfo_var);
		UserProfile__ctor_m3600873509(L_4, G_B3_2, G_B3_1, (bool)G_B3_0, 3, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0032;
	}

IL_0032:
	{
		UserProfile_t1869465636 * L_5 = V_0;
		return L_5;
	}
}
extern "C"  UserProfile_t1869465636 * GcUserProfileData_ToUserProfile_m1897416945_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcUserProfileData_t3774347881 * _thisAdjusted = reinterpret_cast<GcUserProfileData_t3774347881 *>(__this + 1);
	return GcUserProfileData_ToUserProfile_m1897416945(_thisAdjusted, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GcUserProfileData_AddToArray_m647586710 (GcUserProfileData_t3774347881 * __this, UserProfileU5BU5D_t783875789** ___array0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcUserProfileData_AddToArray_m647586710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserProfileU5BU5D_t783875789** L_0 = ___array0;
		NullCheck((*((UserProfileU5BU5D_t783875789**)L_0)));
		int32_t L_1 = ___number1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((UserProfileU5BU5D_t783875789**)L_0)))->max_length))))) <= ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___number1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		UserProfileU5BU5D_t783875789** L_3 = ___array0;
		int32_t L_4 = ___number1;
		UserProfile_t1869465636 * L_5 = GcUserProfileData_ToUserProfile_m1897416945(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t783875789**)L_3)));
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t783875789**)L_3)), L_5);
		((*((UserProfileU5BU5D_t783875789**)L_3)))->SetAt(static_cast<il2cpp_array_size_t>(L_4), (UserProfile_t1869465636 *)L_5);
		goto IL_002b;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3621315395_il2cpp_TypeInfo_var);
		Debug_Log_m2620645656(NULL /*static, unused*/, _stringLiteral2646355121, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
extern "C"  void GcUserProfileData_AddToArray_m647586710_AdjustorThunk (RuntimeObject * __this, UserProfileU5BU5D_t783875789** ___array0, int32_t ___number1, const RuntimeMethod* method)
{
	GcUserProfileData_t3774347881 * _thisAdjusted = reinterpret_cast<GcUserProfileData_t3774347881 *>(__this + 1);
	GcUserProfileData_AddToArray_m647586710(_thisAdjusted, ___array0, ___number1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C"  void Achievement__ctor_m3282845061 (Achievement_t509047912 * __this, String_t* ___id0, double ___percentCompleted1, bool ___completed2, bool ___hidden3, DateTime_t2990056487  ___lastReportedDate4, const RuntimeMethod* method)
{
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		Achievement_set_id_m729892567(__this, L_0, /*hidden argument*/NULL);
		double L_1 = ___percentCompleted1;
		Achievement_set_percentCompleted_m1457230770(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___completed2;
		__this->set_m_Completed_0(L_2);
		bool L_3 = ___hidden3;
		__this->set_m_Hidden_1(L_3);
		DateTime_t2990056487  L_4 = ___lastReportedDate4;
		__this->set_m_LastReportedDate_2(L_4);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C"  void Achievement__ctor_m2191329013 (Achievement_t509047912 * __this, String_t* ___id0, double ___percent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement__ctor_m2191329013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		Achievement_set_id_m729892567(__this, L_0, /*hidden argument*/NULL);
		double L_1 = ___percent1;
		Achievement_set_percentCompleted_m1457230770(__this, L_1, /*hidden argument*/NULL);
		__this->set_m_Hidden_1((bool)0);
		__this->set_m_Completed_0((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t2990056487_il2cpp_TypeInfo_var);
		DateTime_t2990056487  L_2 = ((DateTime_t2990056487_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t2990056487_il2cpp_TypeInfo_var))->get_MinValue_3();
		__this->set_m_LastReportedDate_2(L_2);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C"  void Achievement__ctor_m1215914369 (Achievement_t509047912 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement__ctor_m1215914369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Achievement__ctor_m2191329013(__this, _stringLiteral454807528, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern "C"  String_t* Achievement_ToString_m2535933452 (Achievement_t509047912 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement_ToString_m2535933452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3878505910* L_0 = ((ObjectU5BU5D_t3878505910*)SZArrayNew(ObjectU5BU5D_t3878505910_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		String_t* L_1 = Achievement_get_id_m410789631(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t3878505910* L_2 = L_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2106716464);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_3 = L_2;
		double L_4 = Achievement_get_percentCompleted_m1958958222(__this, /*hidden argument*/NULL);
		double L_5 = L_4;
		RuntimeObject * L_6 = Box(Double_t1605119752_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3878505910* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2106716464);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_8 = L_7;
		bool L_9 = Achievement_get_completed_m3181294604(__this, /*hidden argument*/NULL);
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(Boolean_t1241177154_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3878505910* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2106716464);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_13 = L_12;
		bool L_14 = Achievement_get_hidden_m689700096(__this, /*hidden argument*/NULL);
		bool L_15 = L_14;
		RuntimeObject * L_16 = Box(Boolean_t1241177154_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3878505910* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral2106716464);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_18 = L_17;
		DateTime_t2990056487  L_19 = Achievement_get_lastReportedDate_m2944382953(__this, /*hidden argument*/NULL);
		DateTime_t2990056487  L_20 = L_19;
		RuntimeObject * L_21 = Box(DateTime_t2990056487_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2604261171(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0074;
	}

IL_0074:
	{
		String_t* L_23 = V_0;
		return L_23;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C"  String_t* Achievement_get_id_m410789631 (Achievement_t509047912 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C"  void Achievement_set_id_m729892567 (Achievement_t509047912 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C"  double Achievement_get_percentCompleted_m1958958222 (Achievement_t509047912 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = __this->get_U3CpercentCompletedU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C"  void Achievement_set_percentCompleted_m1457230770 (Achievement_t509047912 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CpercentCompletedU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C"  bool Achievement_get_completed_m3181294604 (Achievement_t509047912 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Completed_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C"  bool Achievement_get_hidden_m689700096 (Achievement_t509047912 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Hidden_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C"  DateTime_t2990056487  Achievement_get_lastReportedDate_m2944382953 (Achievement_t509047912 * __this, const RuntimeMethod* method)
{
	DateTime_t2990056487  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DateTime_t2990056487  L_0 = __this->get_m_LastReportedDate_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		DateTime_t2990056487  L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C"  void AchievementDescription__ctor_m4033065372 (AchievementDescription_t214289417 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t601339354 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method)
{
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		AchievementDescription_set_id_m3842483060(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___title1;
		__this->set_m_Title_0(L_1);
		Texture2D_t601339354 * L_2 = ___image2;
		__this->set_m_Image_1(L_2);
		String_t* L_3 = ___achievedDescription3;
		__this->set_m_AchievedDescription_2(L_3);
		String_t* L_4 = ___unachievedDescription4;
		__this->set_m_UnachievedDescription_3(L_4);
		bool L_5 = ___hidden5;
		__this->set_m_Hidden_4(L_5);
		int32_t L_6 = ___points6;
		__this->set_m_Points_5(L_6);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern "C"  String_t* AchievementDescription_ToString_m3344561324 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AchievementDescription_ToString_m3344561324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3878505910* L_0 = ((ObjectU5BU5D_t3878505910*)SZArrayNew(ObjectU5BU5D_t3878505910_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11)));
		String_t* L_1 = AchievementDescription_get_id_m1224954612(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t3878505910* L_2 = L_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2106716464);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_3 = L_2;
		String_t* L_4 = AchievementDescription_get_title_m1205091471(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3878505910* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2106716464);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_6 = L_5;
		String_t* L_7 = AchievementDescription_get_achievedDescription_m3510738019(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3878505910* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral2106716464);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_9 = L_8;
		String_t* L_10 = AchievementDescription_get_unachievedDescription_m2266688405(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3878505910* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral2106716464);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_12 = L_11;
		int32_t L_13 = AchievementDescription_get_points_m3078683917(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t429044550_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3878505910* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral2106716464);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_17 = L_16;
		bool L_18 = AchievementDescription_get_hidden_m1850868293(__this, /*hidden argument*/NULL);
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(Boolean_t1241177154_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m2604261171(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C"  void AchievementDescription_SetImage_m2831865998 (AchievementDescription_t214289417 * __this, Texture2D_t601339354 * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_t601339354 * L_0 = ___image0;
		__this->set_m_Image_1(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C"  String_t* AchievementDescription_get_id_m1224954612 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C"  void AchievementDescription_set_id_m3842483060 (AchievementDescription_t214289417 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C"  String_t* AchievementDescription_get_title_m1205091471 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Title_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C"  String_t* AchievementDescription_get_achievedDescription_m3510738019 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_AchievedDescription_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C"  String_t* AchievementDescription_get_unachievedDescription_m2266688405 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UnachievedDescription_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C"  bool AchievementDescription_get_hidden_m1850868293 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Hidden_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C"  int32_t AchievementDescription_get_points_m3078683917 (AchievementDescription_t214289417 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Points_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C"  void Leaderboard__ctor_m3385400425 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard__ctor_m3385400425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		Leaderboard_set_id_m885681779(__this, _stringLiteral3358311208, /*hidden argument*/NULL);
		Range_t495627371  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Range__ctor_m848956052((&L_0), 1, ((int32_t)10), /*hidden argument*/NULL);
		Leaderboard_set_range_m236752582(__this, L_0, /*hidden argument*/NULL);
		Leaderboard_set_userScope_m1112496700(__this, 0, /*hidden argument*/NULL);
		Leaderboard_set_timeScope_m2369962580(__this, 2, /*hidden argument*/NULL);
		__this->set_m_Loading_0((bool)0);
		Score_t839788964 * L_1 = (Score_t839788964 *)il2cpp_codegen_object_new(Score_t839788964_il2cpp_TypeInfo_var);
		Score__ctor_m1839590982(L_1, _stringLiteral3358311208, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		__this->set_m_LocalUserScore_1(L_1);
		__this->set_m_MaxRange_2(0);
		__this->set_m_Scores_3((IScoreU5BU5D_t299758263*)((ScoreU5BU5D_t1654613837*)SZArrayNew(ScoreU5BU5D_t1654613837_il2cpp_TypeInfo_var, (uint32_t)0)));
		__this->set_m_Title_4(_stringLiteral3358311208);
		__this->set_m_UserIDs_5(((StringU5BU5D_t148011198*)SZArrayNew(StringU5BU5D_t148011198_il2cpp_TypeInfo_var, (uint32_t)0)));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern "C"  String_t* Leaderboard_ToString_m954631092 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard_ToString_m954631092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Range_t495627371  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Range_t495627371  V_1;
	memset(&V_1, 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		ObjectU5BU5D_t3878505910* L_0 = ((ObjectU5BU5D_t3878505910*)SZArrayNew(ObjectU5BU5D_t3878505910_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3685380792);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3685380792);
		ObjectU5BU5D_t3878505910* L_1 = L_0;
		String_t* L_2 = Leaderboard_get_id_m3692820377(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3878505910* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4261950714);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral4261950714);
		ObjectU5BU5D_t3878505910* L_4 = L_3;
		String_t* L_5 = __this->get_m_Title_4();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3878505910* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3623808776);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3623808776);
		ObjectU5BU5D_t3878505910* L_7 = L_6;
		bool L_8 = __this->get_m_Loading_0();
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t1241177154_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3878505910* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral964669832);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral964669832);
		ObjectU5BU5D_t3878505910* L_12 = L_11;
		Range_t495627371  L_13 = Leaderboard_get_range_m2415198618(__this, /*hidden argument*/NULL);
		V_0 = L_13;
		int32_t L_14 = (&V_0)->get_from_0();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t429044550_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3878505910* L_17 = L_12;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral2513360023);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral2513360023);
		ObjectU5BU5D_t3878505910* L_18 = L_17;
		Range_t495627371  L_19 = Leaderboard_get_range_m2415198618(__this, /*hidden argument*/NULL);
		V_1 = L_19;
		int32_t L_20 = (&V_1)->get_count_1();
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t429044550_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3878505910* L_23 = L_18;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral789049815);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral789049815);
		ObjectU5BU5D_t3878505910* L_24 = L_23;
		uint32_t L_25 = __this->get_m_MaxRange_2();
		uint32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(UInt32_t2976429035_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_27);
		ObjectU5BU5D_t3878505910* L_28 = L_24;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral1973488311);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteral1973488311);
		ObjectU5BU5D_t3878505910* L_29 = L_28;
		IScoreU5BU5D_t299758263* L_30 = __this->get_m_Scores_3();
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length))));
		RuntimeObject * L_32 = Box(Int32_t429044550_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_32);
		ObjectU5BU5D_t3878505910* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral390998453);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteral390998453);
		ObjectU5BU5D_t3878505910* L_34 = L_33;
		int32_t L_35 = Leaderboard_get_userScope_m1117136597(__this, /*hidden argument*/NULL);
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(UserScope_t1582197478_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_37);
		ObjectU5BU5D_t3878505910* L_38 = L_34;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral2883195848);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteral2883195848);
		ObjectU5BU5D_t3878505910* L_39 = L_38;
		int32_t L_40 = Leaderboard_get_timeScope_m3537555803(__this, /*hidden argument*/NULL);
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(TimeScope_t585631293_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (RuntimeObject *)L_42);
		ObjectU5BU5D_t3878505910* L_43 = L_39;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral4041458718);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (RuntimeObject *)_stringLiteral4041458718);
		ObjectU5BU5D_t3878505910* L_44 = L_43;
		StringU5BU5D_t148011198* L_45 = __this->get_m_UserIDs_5();
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length))));
		RuntimeObject * L_47 = Box(Int32_t429044550_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (RuntimeObject *)L_47);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m2604261171(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		V_2 = L_48;
		goto IL_0104;
	}

IL_0104:
	{
		String_t* L_49 = V_2;
		return L_49;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C"  void Leaderboard_SetLocalUserScore_m2030678762 (Leaderboard_t2550452145 * __this, RuntimeObject* ___score0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___score0;
		__this->set_m_LocalUserScore_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C"  void Leaderboard_SetMaxRange_m816940963 (Leaderboard_t2550452145 * __this, uint32_t ___maxRange0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___maxRange0;
		__this->set_m_MaxRange_2(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C"  void Leaderboard_SetScores_m3233755424 (Leaderboard_t2550452145 * __this, IScoreU5BU5D_t299758263* ___scores0, const RuntimeMethod* method)
{
	{
		IScoreU5BU5D_t299758263* L_0 = ___scores0;
		__this->set_m_Scores_3(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C"  void Leaderboard_SetTitle_m3373571837 (Leaderboard_t2550452145 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___title0;
		__this->set_m_Title_4(L_0);
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C"  StringU5BU5D_t148011198* Leaderboard_GetUserFilter_m3684461858 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method)
{
	StringU5BU5D_t148011198* V_0 = NULL;
	{
		StringU5BU5D_t148011198* L_0 = __this->get_m_UserIDs_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		StringU5BU5D_t148011198* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C"  String_t* Leaderboard_get_id_m3692820377 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C"  void Leaderboard_set_id_m885681779 (Leaderboard_t2550452145 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C"  int32_t Leaderboard_get_userScope_m1117136597 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CuserScopeU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C"  void Leaderboard_set_userScope_m1112496700 (Leaderboard_t2550452145 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CuserScopeU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C"  Range_t495627371  Leaderboard_get_range_m2415198618 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method)
{
	Range_t495627371  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Range_t495627371  L_0 = __this->get_U3CrangeU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Range_t495627371  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C"  void Leaderboard_set_range_m236752582 (Leaderboard_t2550452145 * __this, Range_t495627371  ___value0, const RuntimeMethod* method)
{
	{
		Range_t495627371  L_0 = ___value0;
		__this->set_U3CrangeU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C"  int32_t Leaderboard_get_timeScope_m3537555803 (Leaderboard_t2550452145 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CtimeScopeU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void Leaderboard_set_timeScope_m2369962580 (Leaderboard_t2550452145 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtimeScopeU3Ek__BackingField_9(L_0);
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
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C"  void LocalUser__ctor_m3573885150 (LocalUser_t4076573085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalUser__ctor_m3573885150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserProfile__ctor_m377376795(__this, /*hidden argument*/NULL);
		__this->set_m_Friends_5((IUserProfileU5BU5D_t2705473828*)((UserProfileU5BU5D_t783875789*)SZArrayNew(UserProfileU5BU5D_t783875789_il2cpp_TypeInfo_var, (uint32_t)0)));
		__this->set_m_Authenticated_6((bool)0);
		__this->set_m_Underage_7((bool)0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C"  void LocalUser_SetFriends_m3418938091 (LocalUser_t4076573085 * __this, IUserProfileU5BU5D_t2705473828* ___friends0, const RuntimeMethod* method)
{
	{
		IUserProfileU5BU5D_t2705473828* L_0 = ___friends0;
		__this->set_m_Friends_5(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C"  void LocalUser_SetAuthenticated_m398823236 (LocalUser_t4076573085 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Authenticated_6(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C"  void LocalUser_SetUnderage_m1751695376 (LocalUser_t4076573085 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Underage_7(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C"  bool LocalUser_get_authenticated_m3766019885 (LocalUser_t4076573085 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Authenticated_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern "C"  void Score__ctor_m1839590982 (Score_t839788964 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score__ctor_m1839590982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int64_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t2990056487_il2cpp_TypeInfo_var);
		DateTime_t2990056487  L_2 = DateTime_get_Now_m2105661497(NULL /*static, unused*/, /*hidden argument*/NULL);
		Score__ctor_m2035808112(__this, L_0, L_1, _stringLiteral2436469487, L_2, _stringLiteral26043577, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C"  void Score__ctor_m2035808112 (Score_t839788964 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t2990056487  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method)
{
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID0;
		Score_set_leaderboardID_m2191401613(__this, L_0, /*hidden argument*/NULL);
		int64_t L_1 = ___value1;
		Score_set_value_m2388605480(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___userID2;
		__this->set_m_UserID_2(L_2);
		DateTime_t2990056487  L_3 = ___date3;
		__this->set_m_Date_0(L_3);
		String_t* L_4 = ___formattedValue4;
		__this->set_m_FormattedValue_1(L_4);
		int32_t L_5 = ___rank5;
		__this->set_m_Rank_3(L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern "C"  String_t* Score_ToString_m2103626204 (Score_t839788964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_ToString_m2103626204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3878505910* L_0 = ((ObjectU5BU5D_t3878505910*)SZArrayNew(ObjectU5BU5D_t3878505910_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3375474526);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3375474526);
		ObjectU5BU5D_t3878505910* L_1 = L_0;
		int32_t L_2 = __this->get_m_Rank_3();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t429044550_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3878505910* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2221508954);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2221508954);
		ObjectU5BU5D_t3878505910* L_6 = L_5;
		int64_t L_7 = Score_get_value_m2496502396(__this, /*hidden argument*/NULL);
		int64_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int64_t2997302630_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3878505910* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral1530585596);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1530585596);
		ObjectU5BU5D_t3878505910* L_11 = L_10;
		String_t* L_12 = Score_get_leaderboardID_m1445832709(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3878505910* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1879369753);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1879369753);
		ObjectU5BU5D_t3878505910* L_14 = L_13;
		String_t* L_15 = __this->get_m_UserID_2();
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3878505910* L_16 = L_14;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral130993916);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral130993916);
		ObjectU5BU5D_t3878505910* L_17 = L_16;
		DateTime_t2990056487  L_18 = __this->get_m_Date_0();
		DateTime_t2990056487  L_19 = L_18;
		RuntimeObject * L_20 = Box(DateTime_t2990056487_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m2604261171(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0078;
	}

IL_0078:
	{
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C"  String_t* Score_get_leaderboardID_m1445832709 (Score_t839788964 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CleaderboardIDU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C"  void Score_set_leaderboardID_m2191401613 (Score_t839788964 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CleaderboardIDU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C"  int64_t Score_get_value_m2496502396 (Score_t839788964 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_U3CvalueU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C"  void Score_set_value_m2388605480 (Score_t839788964 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CvalueU3Ek__BackingField_5(L_0);
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
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C"  void UserProfile__ctor_m377376795 (UserProfile_t1869465636 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile__ctor_m377376795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		__this->set_m_UserName_0(_stringLiteral633375957);
		__this->set_m_ID_1(_stringLiteral2436469487);
		__this->set_m_IsFriend_2((bool)0);
		__this->set_m_State_3(3);
		Texture2D_t601339354 * L_0 = (Texture2D_t601339354 *)il2cpp_codegen_object_new(Texture2D_t601339354_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3102761989(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C"  void UserProfile__ctor_m3600873509 (UserProfile_t1869465636 * __this, String_t* ___name0, String_t* ___id1, bool ___friend2, int32_t ___state3, Texture2D_t601339354 * ___image4, const RuntimeMethod* method)
{
	{
		Object__ctor_m754512582(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		String_t* L_1 = ___id1;
		__this->set_m_ID_1(L_1);
		bool L_2 = ___friend2;
		__this->set_m_IsFriend_2(L_2);
		int32_t L_3 = ___state3;
		__this->set_m_State_3(L_3);
		Texture2D_t601339354 * L_4 = ___image4;
		__this->set_m_Image_4(L_4);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern "C"  String_t* UserProfile_ToString_m4104302451 (UserProfile_t1869465636 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile_ToString_m4104302451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3878505910* L_0 = ((ObjectU5BU5D_t3878505910*)SZArrayNew(ObjectU5BU5D_t3878505910_il2cpp_TypeInfo_var, (uint32_t)7));
		String_t* L_1 = UserProfile_get_id_m4279460589(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t3878505910* L_2 = L_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2106716464);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_3 = L_2;
		String_t* L_4 = UserProfile_get_userName_m3052723369(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3878505910* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2106716464);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_6 = L_5;
		bool L_7 = UserProfile_get_isFriend_m2435881928(__this, /*hidden argument*/NULL);
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t1241177154_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3878505910* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2106716464);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral2106716464);
		ObjectU5BU5D_t3878505910* L_11 = L_10;
		int32_t L_12 = UserProfile_get_state_m1675724417(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(UserState_t3962258049_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2604261171(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C"  void UserProfile_SetUserName_m134841919 (UserProfile_t1869465636 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C"  void UserProfile_SetUserID_m2935936560 (UserProfile_t1869465636 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->set_m_ID_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C"  void UserProfile_SetImage_m1856246236 (UserProfile_t1869465636 * __this, Texture2D_t601339354 * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_t601339354 * L_0 = ___image0;
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C"  String_t* UserProfile_get_userName_m3052723369 (UserProfile_t1869465636 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UserName_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C"  String_t* UserProfile_get_id_m4279460589 (UserProfile_t1869465636 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ID_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C"  bool UserProfile_get_isFriend_m2435881928 (UserProfile_t1869465636 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_IsFriend_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C"  int32_t UserProfile_get_state_m1675724417 (UserProfile_t1869465636 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_State_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C"  void Range__ctor_m848956052 (Range_t495627371 * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fromValue0;
		__this->set_from_0(L_0);
		int32_t L_1 = ___valueCount1;
		__this->set_count_1(L_1);
		return;
	}
}
extern "C"  void Range__ctor_m848956052_AdjustorThunk (RuntimeObject * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	Range_t495627371 * _thisAdjusted = reinterpret_cast<Range_t495627371 *>(__this + 1);
	Range__ctor_m848956052(_thisAdjusted, ___fromValue0, ___valueCount1, method);
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
