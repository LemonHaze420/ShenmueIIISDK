
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

// Function BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheelInput_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C.UserConstructionScript");

	ABP_MiniGameBigWheelInput_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameBigWheelInput_C::InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4");

	ABP_MiniGameBigWheelInput_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameBigWheelInput_C::InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3");

	ABP_MiniGameBigWheelInput_C_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C.ExecuteUbergraph_BP_MiniGameBigWheelInput
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheelInput_C::ExecuteUbergraph_BP_MiniGameBigWheelInput(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C.ExecuteUbergraph_BP_MiniGameBigWheelInput");

	ABP_MiniGameBigWheelInput_C_ExecuteUbergraph_BP_MiniGameBigWheelInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
