
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
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ForcedLocation                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::ForceStartAttentionLoadLevel_Location(const struct FVector& ForcedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ForceStartAttentionLoadLevel_Location");

	ABP_S3AdventurePlayerController_C_ForceStartAttentionLoadLevel_Location_Params params;
	params.ForcedLocation = ForcedLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention_Location
// (NetRequest, NetResponse, Static, NetMulticast, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ForcedLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::STATIC_StartAttention_Location(const struct FVector& ForcedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention_Location");

	ABP_S3AdventurePlayerController_C_StartAttention_Location_Params params;
	params.ForcedLocation = ForcedLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ExitAttention
// (Net, Exec, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AdventurePlayerController_C::STATIC_ExitAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ExitAttention");

	ABP_S3AdventurePlayerController_C_ExitAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AdventurePlayerController_C::StartAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention");

	ABP_S3AdventurePlayerController_C_StartAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ResetZoom
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3AdventurePlayerController_C::ResetZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ResetZoom");

	ABP_S3AdventurePlayerController_C_ResetZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.IsLookActor
// (Exec, Native, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Look                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::STATIC_IsLookActor(class AActor* OwnerActor, const struct FVector& TraceStart, bool* Look)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.IsLookActor");

	ABP_S3AdventurePlayerController_C_IsLookActor_Params params;
	params.OwnerActor = OwnerActor;
	params.TraceStart = TraceStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Look != nullptr)
		*Look = params.Look;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.Init
// (Exec, Event, NetMulticast, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3AdventurePlayerController_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.Init");

	ABP_S3AdventurePlayerController_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.CheckAttention
// (Net, NetReliable, NetRequest, Exec, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_S3AdventurePlayerController_C::CheckAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.CheckAttention");

	ABP_S3AdventurePlayerController_C_CheckAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.IsZoom
// (NetReliable, Exec, Event, Static, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::STATIC_IsZoom(bool* Value)
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
// (NetReliable, Native, NetResponse, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AdventurePlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.UserConstructionScript");

	ABP_S3AdventurePlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.InpActEvt_SystemPause_K2Node_InputActionEvent_2
// (NetReliable, Exec, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AdventurePlayerController_C::STATIC_InpActEvt_SystemPause_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.InpActEvt_SystemPause_K2Node_InputActionEvent_2");

	ABP_S3AdventurePlayerController_C_InpActEvt_SystemPause_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3AdventurePlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveBeginPlay");

	ABP_S3AdventurePlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StreamingDebug
// (Net, NetReliable, Exec, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3AdventurePlayerController_C::StreamingDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StreamingDebug");

	ABP_S3AdventurePlayerController_C_StreamingDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveTick
// (Exec, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveTick");

	ABP_S3AdventurePlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveEndPlay
// (Net, Exec, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AdventurePlayerController_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveEndPlay");

	ABP_S3AdventurePlayerController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.OpenHelp
// (Net, Exec, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3AdventurePlayerController_C::OpenHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.OpenHelp");

	ABP_S3AdventurePlayerController_C_OpenHelp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ExecuteUbergraph_BP_S3AdventurePlayerController
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
