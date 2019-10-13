#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ChangeNPCSHEposchange
struct ABP_Hakkason_JumpInTalk_C_ChangeNPCSHEposchange_Params
{
	int                                                SetPos;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.BeginHitCheck
struct ABP_Hakkason_JumpInTalk_C_BeginHitCheck_Params
{
	class UPrimitiveComponent*                         TrgBox;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BeginIn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ForcedHouseIn
struct ABP_Hakkason_JumpInTalk_C_ForcedHouseIn_Params
{
	bool                                               rc;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckHouseInAndNeedTalk
struct ABP_Hakkason_JumpInTalk_C_CheckHouseInAndNeedTalk_Params
{
	bool                                               HouseInTalk;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ForcedSet
struct ABP_Hakkason_JumpInTalk_C_ForcedSet_Params
{
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckTalkEnd
struct ABP_Hakkason_JumpInTalk_C_CheckTalkEnd_Params
{
	bool                                               talk_end;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ChangePlayerCamera
struct ABP_Hakkason_JumpInTalk_C_ChangePlayerCamera_Params
{
	float                                              PlayerDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AddRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.TurnSHEdirection
struct ABP_Hakkason_JumpInTalk_C_TurnSHEdirection_Params
{
	float                                              DefYaw;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckTalkPostion
struct ABP_Hakkason_JumpInTalk_C_CheckTalkPostion_Params
{
	unsigned char                                      Postype;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckTalkEnable
struct ABP_Hakkason_JumpInTalk_C_CheckTalkEnable_Params
{
	bool                                               TalkEnable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckSHEDoor
struct ABP_Hakkason_JumpInTalk_C_CheckSHEDoor_Params
{
	bool                                               UsePlayer;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DoorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.InitSet
struct ABP_Hakkason_JumpInTalk_C_InitSet_Params
{
	class UPrimitiveComponent*                         Door1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         Door2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.UserConstructionScript
struct ABP_Hakkason_JumpInTalk_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnBeginOverlap
struct ABP_Hakkason_JumpInTalk_C_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnEndOverlap
struct ABP_Hakkason_JumpInTalk_C_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ReceiveTick
struct ABP_Hakkason_JumpInTalk_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.RenewalActorCount
struct ABP_Hakkason_JumpInTalk_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.TickChangeCheckKill
struct ABP_Hakkason_JumpInTalk_C_TickChangeCheckKill_Params
{
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnBeginOverlapBack
struct ABP_Hakkason_JumpInTalk_C_OnBeginOverlapBack_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnEndOverlapBack
struct ABP_Hakkason_JumpInTalk_C_OnEndOverlapBack_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ExspHouseIn
struct ABP_Hakkason_JumpInTalk_C_ExspHouseIn_Params
{
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.LocalEvt_ClothChange
struct ABP_Hakkason_JumpInTalk_C_LocalEvt_ClothChange_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ExecuteUbergraph_BP_Hakkason_JumpInTalk
struct ABP_Hakkason_JumpInTalk_C_ExecuteUbergraph_BP_Hakkason_JumpInTalk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
