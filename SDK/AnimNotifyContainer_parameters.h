#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AnimNotifyContainer.AnimNotifyContainer_C.ConsumeNotifyTrigger
struct UAnimNotifyContainer_C_ConsumeNotifyTrigger_Params
{
	struct FName                                       NotifyID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_AnimNotifyTrigger_Base_C*                NotifyTrigger;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.AddAffectActorToNotifyStateByRef
struct UAnimNotifyContainer_C_AddAffectActorToNotifyStateByRef_Params
{
	class UBP_AnimNotifyState_Base_C*                  NotifyState;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AffectActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.PopAllNotifyTriggerByID
struct UAnimNotifyContainer_C_PopAllNotifyTriggerByID_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.SetTimeSinceNotifyToZero
struct UAnimNotifyContainer_C_SetTimeSinceNotifyToZero_Params
{
	struct FName                                       InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.GetTimeSinceNotify
struct UAnimNotifyContainer_C_GetTimeSinceNotify_Params
{
	struct FName                                       Identifier;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimePassed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.TrackNotifyTime
struct UAnimNotifyContainer_C_TrackNotifyTime_Params
{
	struct FName                                       Identifier;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckAffectActor
struct UAnimNotifyContainer_C_CheckAffectActor_Params
{
	class UBP_AnimNotifyState_Base_C*                  StateInstance;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.GetNotifyAnimation
struct UAnimNotifyContainer_C_GetNotifyAnimation_Params
{
	class UBP_AnimNotifyState_Base_C*                  StateInstance;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckAffectActorCount
struct UAnimNotifyContainer_C_CheckAffectActorCount_Params
{
	class UBP_AnimNotifyState_Base_C*                  StateInstance;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyStateInstanceAnimation
struct UAnimNotifyContainer_C_CheckNotifyStateInstanceAnimation_Params
{
	class UBP_AnimNotifyState_Base_C*                  StateInstance;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyStateExistWithAffectActor
struct UAnimNotifyContainer_C_CheckNotifyStateExistWithAffectActor_Params
{
	struct FName                                       NotifyID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AffectActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromLatest;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Exist;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_AnimNotifyState_Base_C*                  NotifyState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NotifyStateIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.IsStateInstanceActive
struct UAnimNotifyContainer_C_IsStateInstanceActive_Params
{
	class UBP_AnimNotifyState_Base_C*                  StateInstance;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveOldestNotifyStateById
struct UAnimNotifyContainer_C_RemoveOldestNotifyStateById_Params
{
	struct FName                                       NotifyID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveOldestNotifyTriggerByID
struct UAnimNotifyContainer_C_RemoveOldestNotifyTriggerByID_Params
{
	struct FName                                       NotifyID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.ClearAllNotifies
struct UAnimNotifyContainer_C_ClearAllNotifies_Params
{
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveAllNotifyStateById
struct UAnimNotifyContainer_C_RemoveAllNotifyStateById_Params
{
	struct FName                                       NotifyID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyStateTick
struct UAnimNotifyContainer_C_ReceiveAnimNotifyStateTick_Params
{
	class UAnimNotifyState*                            Notify;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.Update
struct UAnimNotifyContainer_C_Update_Params
{
	float                                              DeltaSecond;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveNotifyTrigger
struct UAnimNotifyContainer_C_RemoveNotifyTrigger_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveNotifyState
struct UAnimNotifyContainer_C_RemoveNotifyState_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveAllNotifyTriggerByID
struct UAnimNotifyContainer_C_RemoveAllNotifyTriggerByID_Params
{
	struct FName                                       NotifyID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.AddAffectActorToNotifyTrigger
struct UAnimNotifyContainer_C_AddAffectActorToNotifyTrigger_Params
{
	int                                                NotifyStateIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AffectActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyTriggerExist
struct UAnimNotifyContainer_C_CheckNotifyTriggerExist_Params
{
	struct FName                                       NotifyID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Exist;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_AnimNotifyTrigger_Base_C*                NotifyTrigger;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NotifyTriggerIndex;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.AddAffectActorToNotifyState
struct UAnimNotifyContainer_C_AddAffectActorToNotifyState_Params
{
	int                                                NotifyStateIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AffectActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyStateExist
struct UAnimNotifyContainer_C_CheckNotifyStateExist_Params
{
	struct FName                                       NotifyID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromLatest;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Exist;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_AnimNotifyState_Base_C*                  NotifyState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NotifyStateIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyTrigger
struct UAnimNotifyContainer_C_ReceiveAnimNotifyTrigger_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyStateEnd
struct UAnimNotifyContainer_C_ReceiveAnimNotifyStateEnd_Params
{
	class UAnimNotifyState*                            Notify;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyStateBegin
struct UAnimNotifyContainer_C_ReceiveAnimNotifyStateBegin_Params
{
	class UAnimNotifyState*                            Notify;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.Reset
struct UAnimNotifyContainer_C_Reset_Params
{
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.ExecuteUbergraph_AnimNotifyContainer
struct UAnimNotifyContainer_C_ExecuteUbergraph_AnimNotifyContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.OnReceieveAnimNotifyStateEnd__DelegateSignature
struct UAnimNotifyContainer_C_OnReceieveAnimNotifyStateEnd__DelegateSignature_Params
{
	class UBP_AnimNotifyState_Base_C*                  State;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.OnReceieveAnimNotifyTrigger__DelegateSignature
struct UAnimNotifyContainer_C_OnReceieveAnimNotifyTrigger__DelegateSignature_Params
{
	class UBP_AnimNotifyTrigger_Base_C*                newParam;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyContainer.AnimNotifyContainer_C.OnReceiveAnimNotifyStateBegin__DelegateSignature
struct UAnimNotifyContainer_C_OnReceiveAnimNotifyStateBegin__DelegateSignature_Params
{
	class UBP_AnimNotifyState_Base_C*                  newParam;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
