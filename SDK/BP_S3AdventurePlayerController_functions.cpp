
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ForceStartAttentionLoadLevel_Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ForcedLocation                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::ForceStartAttentionLoadLevel_Location(const struct FVector& ForcedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ForceStartAttentionLoadLevel_Location");

	ABP_S3AdventurePlayerController_C_ForceStartAttentionLoadLevel_Location_Params params;
	params.ForcedLocation = ForcedLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention_Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ForcedLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::StartAttention_Location(const struct FVector& ForcedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention_Location");

	ABP_S3AdventurePlayerController_C_StartAttention_Location_Params params;
	params.ForcedLocation = ForcedLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ExitAttention
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::ExitAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ExitAttention");

	ABP_S3AdventurePlayerController_C_ExitAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::StartAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention");

	ABP_S3AdventurePlayerController_C_StartAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ResetZoom
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::ResetZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ResetZoom");

	ABP_S3AdventurePlayerController_C_ResetZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.IsLookActor
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Look                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::IsLookActor(class AActor* OwnerActor, const struct FVector& TraceStart, bool* Look)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.IsLookActor");

	ABP_S3AdventurePlayerController_C_IsLookActor_Params params;
	params.OwnerActor = OwnerActor;
	params.TraceStart = TraceStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Look != nullptr)
		*Look = params.Look;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.Init");

	ABP_S3AdventurePlayerController_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.CheckAttention
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::CheckAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.CheckAttention");

	ABP_S3AdventurePlayerController_C_CheckAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.IsZoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::IsZoom(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.IsZoom");

	ABP_S3AdventurePlayerController_C_IsZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.UserConstructionScript");

	ABP_S3AdventurePlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.InpActEvt_SystemPause_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AdventurePlayerController_C::InpActEvt_SystemPause_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.InpActEvt_SystemPause_K2Node_InputActionEvent_2");

	ABP_S3AdventurePlayerController_C_InpActEvt_SystemPause_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveBeginPlay");

	ABP_S3AdventurePlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StreamingDebug
// (BlueprintCallable, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::StreamingDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StreamingDebug");

	ABP_S3AdventurePlayerController_C_StreamingDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveTick");

	ABP_S3AdventurePlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveEndPlay");

	ABP_S3AdventurePlayerController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.OpenHelp
// (BlueprintCallable, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::OpenHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.OpenHelp");

	ABP_S3AdventurePlayerController_C_OpenHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ExecuteUbergraph_BP_S3AdventurePlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::ExecuteUbergraph_BP_S3AdventurePlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ExecuteUbergraph_BP_S3AdventurePlayerController");

	ABP_S3AdventurePlayerController_C_ExecuteUbergraph_BP_S3AdventurePlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
