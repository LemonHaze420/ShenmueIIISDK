
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

// Function BP_MiniGame_Sunken_Input.BP_MiniGame_Sunken_Input_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_Input_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_Input.BP_MiniGame_Sunken_Input_C.UserConstructionScript");

	ABP_MiniGame_Sunken_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_Input.BP_MiniGame_Sunken_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2
// (NetReliable, NetRequest, Native, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_Sunken_Input_C::STATIC_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_Input.BP_MiniGame_Sunken_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2");

	ABP_MiniGame_Sunken_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_Input.BP_MiniGame_Sunken_Input_C.ExecuteUbergraph_BP_MiniGame_Sunken_Input
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_Input_C::STATIC_ExecuteUbergraph_BP_MiniGame_Sunken_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_Input.BP_MiniGame_Sunken_Input_C.ExecuteUbergraph_BP_MiniGame_Sunken_Input");

	ABP_MiniGame_Sunken_Input_C_ExecuteUbergraph_BP_MiniGame_Sunken_Input_Params params;
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
