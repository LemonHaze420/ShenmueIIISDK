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

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.GetPriority
struct ASL_Hakkason_SheLead_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.GetDetectAction
struct ASL_Hakkason_SheLead_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa_Pos
struct ASL_Hakkason_SheLead_C_SpawnShenfa_Pos_Params
{
	class ANPC_SplineMoveActor_C*                      SplineActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     she_pos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              she_dir;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.SpawnShenfa
struct ASL_Hakkason_SheLead_C_SpawnShenfa_Params
{
	struct FName                                       LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FindTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ANPC_SplineMoveActor_C*                      SplineActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.isPlayer
struct ASL_Hakkason_SheLead_C_isPlayer_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isPlayer;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ReceiveTick
struct ASL_Hakkason_SheLead_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ReceiveBeginPlay
struct ASL_Hakkason_SheLead_C_ReceiveBeginPlay_Params
{
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLead
struct ASL_Hakkason_SheLead_C_StartLead_Params
{
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfa
struct ASL_Hakkason_SheLead_C_StartHanabashiShenfa_Params
{
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ReceiveEndPlay
struct ASL_Hakkason_SheLead_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.BndEvt__TriggerBox_MiharashiTalkOff_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct ASL_Hakkason_SheLead_C_BndEvt__TriggerBox_MiharashiTalkOff_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.WaitLeadStop
struct ASL_Hakkason_SheLead_C_WaitLeadStop_Params
{
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.DecideDetectAction
struct ASL_Hakkason_SheLead_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHouse
struct ASL_Hakkason_SheLead_C_StartLeadSheHouse_Params
{
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartLeadSheHousePos
struct ASL_Hakkason_SheLead_C_StartLeadSheHousePos_Params
{
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartHanabashiShenfaPos
struct ASL_Hakkason_SheLead_C_StartHanabashiShenfaPos_Params
{
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.StartleadPos
struct ASL_Hakkason_SheLead_C_StartleadPos_Params
{
};

// Function SL_Hakkason_SheLead.SL_Hakkason_SheLead_C.ExecuteUbergraph_SL_Hakkason_SheLead
struct ASL_Hakkason_SheLead_C_ExecuteUbergraph_SL_Hakkason_SheLead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
