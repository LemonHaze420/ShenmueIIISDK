
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

// Function BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C.UserConstructionScript
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintCallable)

void ABP_MiniGame_UDY_Input_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C.UserConstructionScript");

	ABP_MiniGame_UDY_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2
// (Native, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_UDY_Input_C::STATIC_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2");

	ABP_MiniGame_UDY_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C.ReceiveTick
// (NetRequest, Exec, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDY_Input_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C.ReceiveTick");

	ABP_MiniGame_UDY_Input_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C.ExecuteUbergraph_BP_MiniGame_UDY_Input
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDY_Input_C::STATIC_ExecuteUbergraph_BP_MiniGame_UDY_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C.ExecuteUbergraph_BP_MiniGame_UDY_Input");

	ABP_MiniGame_UDY_Input_C_ExecuteUbergraph_BP_MiniGame_UDY_Input_Params params;
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
