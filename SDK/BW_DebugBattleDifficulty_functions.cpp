
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

// Function BW_DebugBattleDifficulty.BW_DebugBattleDifficulty_C.Update
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleDifficulty_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleDifficulty.BW_DebugBattleDifficulty_C.Update");

	UBW_DebugBattleDifficulty_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleDifficulty.BW_DebugBattleDifficulty_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleDifficulty_C::BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleDifficulty.BW_DebugBattleDifficulty_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature");

	UBW_DebugBattleDifficulty_C_BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleDifficulty.BW_DebugBattleDifficulty_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleDifficulty_C::BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleDifficulty.BW_DebugBattleDifficulty_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature");

	UBW_DebugBattleDifficulty_C_BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleDifficulty.BW_DebugBattleDifficulty_C.ExecuteUbergraph_BW_DebugBattleDifficulty
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleDifficulty_C::ExecuteUbergraph_BW_DebugBattleDifficulty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleDifficulty.BW_DebugBattleDifficulty_C.ExecuteUbergraph_BW_DebugBattleDifficulty");

	UBW_DebugBattleDifficulty_C_ExecuteUbergraph_BW_DebugBattleDifficulty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
