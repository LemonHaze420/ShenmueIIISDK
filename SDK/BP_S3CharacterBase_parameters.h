#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.IsTalking
struct ABP_S3CharacterBase_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetEnableIK
struct ABP_S3CharacterBase_C_GetEnableIK_Params
{
	bool                                               bIKEnabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.SetEnableIK
struct ABP_S3CharacterBase_C_SetEnableIK_Params
{
	bool                                               bInIKEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHandedness
struct ABP_S3CharacterBase_C_GetProfileHandedness_Params
{
	TEnumAsByte<ES3HandednessType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReturnOutOfWorld
struct ABP_S3CharacterBase_C_ReturnOutOfWorld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.IsInShelter
struct ABP_S3CharacterBase_C_IsInShelter_Params
{
	bool                                               Sheltered;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileCharaName
struct ABP_S3CharacterBase_C_GetProfileCharaName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileDisplayName
struct ABP_S3CharacterBase_C_GetProfileDisplayName_Params
{
	struct FString                                     Display_Name;                                             // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Display_Rubi;                                             // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Display_Name_Alphabet;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileGender
struct ABP_S3CharacterBase_C_GetProfileGender_Params
{
	TEnumAsByte<ES3CharacterGender>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileWeight
struct ABP_S3CharacterBase_C_GetProfileWeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHeight
struct ABP_S3CharacterBase_C_GetProfileHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileAge
struct ABP_S3CharacterBase_C_GetProfileAge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfile
struct ABP_S3CharacterBase_C_GetProfile_Params
{
	struct FS3CharacterProfile                         Profile;                                                  // (Parm, OutParm)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.DestroyComponentByTag
struct ABP_S3CharacterBase_C_DestroyComponentByTag_Params
{
	class UClass*                                      ComponentClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.UserConstructionScript
struct ABP_S3CharacterBase_C_UserConstructionScript_Params
{
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.OnTalkStart
struct ABP_S3CharacterBase_C_OnTalkStart_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.OnTalkFinished
struct ABP_S3CharacterBase_C_OnTalkFinished_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_Player
struct ABP_S3CharacterBase_C_Screen_Player_Params
{
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_NPC
struct ABP_S3CharacterBase_C_Screen_NPC_Params
{
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReceiveTick
struct ABP_S3CharacterBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReceiveBeginPlay
struct ABP_S3CharacterBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.TagCharaCheck
struct ABP_S3CharacterBase_C_TagCharaCheck_Params
{
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.LoadFaceAnimAsset
struct ABP_S3CharacterBase_C_LoadFaceAnimAsset_Params
{
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.SetFaceAnimData
struct ABP_S3CharacterBase_C_SetFaceAnimData_Params
{
	class US3FaceAnimDataAsset*                        InFaceMontageData;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.StartCharaFadeOut
struct ABP_S3CharacterBase_C_StartCharaFadeOut_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.StartCharaFadeIn
struct ABP_S3CharacterBase_C_StartCharaFadeIn_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ExecuteUbergraph_BP_S3CharacterBase
struct ABP_S3CharacterBase_C_ExecuteUbergraph_BP_S3CharacterBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
