
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

// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ResetInputValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TestNewSB_GameInput_C::ResetInputValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ResetInputValue");

	ABP_TestNewSB_GameInput_C_ResetInputValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.MoveNailPos
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TestNewSB_GameInput_C::MoveNailPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.MoveNailPos");

	ABP_TestNewSB_GameInput_C_MoveNailPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.IsChangeAxisValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bChange                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TestNewSB_GameInput_C::IsChangeAxisValue(bool* bChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.IsChangeAxisValue");

	ABP_TestNewSB_GameInput_C_IsChangeAxisValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChange != nullptr)
		*bChange = params.bChange;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TestNewSB_GameInput_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.UserConstructionScript");

	ABP_TestNewSB_GameInput_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TestNewSB_GameInput_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.EndMiniGame");

	ABP_TestNewSB_GameInput_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TestNewSB_GameInput_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ReceiveTick");

	ABP_TestNewSB_GameInput_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TestNewSB_GameInput_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ReceiveBeginPlay");

	ABP_TestNewSB_GameInput_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TestNewSB_GameInput_C::InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_4");

	ABP_TestNewSB_GameInput_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ManualUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_TestNewSB_GameInput_C::ManualUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ManualUpdate");

	ABP_TestNewSB_GameInput_C_ManualUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ExecuteUbergraph_BP_TestNewSB_GameInput
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TestNewSB_GameInput_C::ExecuteUbergraph_BP_TestNewSB_GameInput(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.ExecuteUbergraph_BP_TestNewSB_GameInput");

	ABP_TestNewSB_GameInput_C_ExecuteUbergraph_BP_TestNewSB_GameInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.OnFlickDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TestNewSB_GameInput_C::OnFlickDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestNewSB_GameInput.BP_TestNewSB_GameInput_C.OnFlickDispatcher__DelegateSignature");

	ABP_TestNewSB_GameInput_C_OnFlickDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
