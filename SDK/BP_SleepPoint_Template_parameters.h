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

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.GetPriority
struct ABP_SleepPoint_Template_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.GetDetectAction
struct ABP_SleepPoint_Template_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckRay
struct ABP_SleepPoint_Template_C_CheckRay_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ChangeSelectText
struct ABP_SleepPoint_Template_C_ChangeSelectText_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.LavelIDtoText
struct ABP_SleepPoint_Template_C_LavelIDtoText_Params
{
	struct FName                                       LavelID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GetText;                                                  // (Parm, OutParm)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckBeginTriggerIn
struct ABP_SleepPoint_Template_C_CheckBeginTriggerIn_Params
{
	bool                                               BeginIn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ChangeBSEnable
struct ABP_SleepPoint_Template_C_ChangeBSEnable_Params
{
	bool                                               BsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckItemValid
struct ABP_SleepPoint_Template_C_CheckItemValid_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BSAction
struct ABP_SleepPoint_Template_C_BSAction_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.SetItemEnable
struct ABP_SleepPoint_Template_C_SetItemEnable_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.RegisterDetect
struct ABP_SleepPoint_Template_C_RegisterDetect_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Register;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.UserConstructionScript
struct ABP_SleepPoint_Template_C_UserConstructionScript_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.Catch_OnSelect
struct ABP_SleepPoint_Template_C_Catch_OnSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.Select_Cancel
struct ABP_SleepPoint_Template_C_Select_Cancel_Params
{
	bool                                               IsDeny;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.SaveLoadWidgetFinish
struct ABP_SleepPoint_Template_C_SaveLoadWidgetFinish_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.OpenSyetemMenuSelect
struct ABP_SleepPoint_Template_C_OpenSyetemMenuSelect_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ReceiveTick
struct ABP_SleepPoint_Template_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.DecideDetectAction
struct ABP_SleepPoint_Template_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BeginBsIn
struct ABP_SleepPoint_Template_C_BeginBsIn_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_SleepPoint_Template_C_BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_SleepPoint_Template_C_BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CancelBsIn
struct ABP_SleepPoint_Template_C_CancelBsIn_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ReceiveBeginPlay
struct ABP_SleepPoint_Template_C_ReceiveBeginPlay_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckLoadEnd
struct ABP_SleepPoint_Template_C_CheckLoadEnd_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckFadein
struct ABP_SleepPoint_Template_C_CheckFadein_Params
{
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ExecuteUbergraph_BP_SleepPoint_Template
struct ABP_SleepPoint_Template_C_ExecuteUbergraph_BP_SleepPoint_Template_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ED_DoSleep__DelegateSignature
struct ABP_SleepPoint_Template_C_ED_DoSleep__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
