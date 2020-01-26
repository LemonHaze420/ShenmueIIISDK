
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_KungFu_Result.BP_KungFu_Result_C.ConstructWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_KungFu_Result_C::ConstructWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.ConstructWidget");

	ABP_KungFu_Result_C_ConstructWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KungFu_Result.BP_KungFu_Result_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_KungFu_Result_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.UserConstructionScript");

	ABP_KungFu_Result_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KungFu_Result.BP_KungFu_Result_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_KungFu_Result_C::InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2");

	ABP_KungFu_Result_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KungFu_Result.BP_KungFu_Result_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KungFu_Result_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.ReceiveEndPlay");

	ABP_KungFu_Result_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KungFu_Result.BP_KungFu_Result_C.OnWidgetAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_KungFu_Result_C::OnWidgetAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.OnWidgetAnimationFinished");

	ABP_KungFu_Result_C_OnWidgetAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KungFu_Result.BP_KungFu_Result_C.StartClose
// (BlueprintCallable, BlueprintEvent)

void ABP_KungFu_Result_C::StartClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.StartClose");

	ABP_KungFu_Result_C_StartClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KungFu_Result.BP_KungFu_Result_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_KungFu_Result_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.ReceiveBeginPlay");

	ABP_KungFu_Result_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KungFu_Result.BP_KungFu_Result_C.StartInputWait
// (BlueprintCallable, BlueprintEvent)

void ABP_KungFu_Result_C::StartInputWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.StartInputWait");

	ABP_KungFu_Result_C_StartInputWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KungFu_Result.BP_KungFu_Result_C.ExecuteUbergraph_BP_KungFu_Result
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KungFu_Result_C::ExecuteUbergraph_BP_KungFu_Result(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.ExecuteUbergraph_BP_KungFu_Result");

	ABP_KungFu_Result_C_ExecuteUbergraph_BP_KungFu_Result_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KungFu_Result.BP_KungFu_Result_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_KungFu_Result_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KungFu_Result.BP_KungFu_Result_C.OnClose__DelegateSignature");

	ABP_KungFu_Result_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
