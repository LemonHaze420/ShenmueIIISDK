
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

// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.CSEvent_Enable
// (NetRequest, Exec, Event, MulticastDelegate, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseFade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowCScontrol_C::CSEvent_Enable(const struct FName& CutsceneName, bool UseFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.CSEvent_Enable");

	UBP_MainFlowCScontrol_C_CSEvent_Enable_Params params;
	params.CutsceneName = CutsceneName;
	params.UseFade = UseFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.CallCS_Event
// (Net, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowCScontrol_C::STATIC_CallCS_Event(const struct FName& EventName, bool End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.CallCS_Event");

	UBP_MainFlowCScontrol_C_CallCS_Event_Params params;
	params.EventName = EventName;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnStartCutScene
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_MainFlowCScontrol_C::STATIC_OnStartCutScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnStartCutScene");

	UBP_MainFlowCScontrol_C_OnStartCutScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnEndCutscene
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_MainFlowCScontrol_C::STATIC_OnEndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnEndCutscene");

	UBP_MainFlowCScontrol_C_OnEndCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.ExecuteUbergraph_BP_MainFlowCScontrol
// (Exec, Native, Event, Static, Public, Private, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowCScontrol_C::STATIC_ExecuteUbergraph_BP_MainFlowCScontrol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.ExecuteUbergraph_BP_MainFlowCScontrol");

	UBP_MainFlowCScontrol_C_ExecuteUbergraph_BP_MainFlowCScontrol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
