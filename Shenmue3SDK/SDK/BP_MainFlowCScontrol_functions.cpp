
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.CSEvent_Enable
// (Public, BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowCScontrol_C::CallCS_Event(const struct FName& EventName, bool End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.CallCS_Event");

	UBP_MainFlowCScontrol_C_CallCS_Event_Params params;
	params.EventName = EventName;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnStartCutScene
// (BlueprintCallable, BlueprintEvent)

void UBP_MainFlowCScontrol_C::OnStartCutScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnStartCutScene");

	UBP_MainFlowCScontrol_C_OnStartCutScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnEndCutscene
// (BlueprintCallable, BlueprintEvent)

void UBP_MainFlowCScontrol_C::OnEndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnEndCutscene");

	UBP_MainFlowCScontrol_C_OnEndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.ExecuteUbergraph_BP_MainFlowCScontrol
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowCScontrol_C::ExecuteUbergraph_BP_MainFlowCScontrol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.ExecuteUbergraph_BP_MainFlowCScontrol");

	UBP_MainFlowCScontrol_C_ExecuteUbergraph_BP_MainFlowCScontrol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
