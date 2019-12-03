
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

// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.GetActionType
// (NetReliable, Event, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Sight                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS3DetectActionParam> Params                         (Parm, OutParm, ZeroConstructor)

void UBPC_DoorTalkComponent_C::GetActionType(bool Sight, TArray<struct FS3DetectActionParam>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.GetActionType");

	UBPC_DoorTalkComponent_C_GetActionType_Params params;
	params.Sight = Sight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ReceiveBeginPlay
// (Net, Exec, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_DoorTalkComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ReceiveBeginPlay");

	UBPC_DoorTalkComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.RunDoorTalk
// (Net, NetReliable, Native, Event, NetResponse, Static, NetServer)

void UBPC_DoorTalkComponent_C::STATIC_RunDoorTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.RunDoorTalk");

	UBPC_DoorTalkComponent_C_RunDoorTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.FinishDoorTalk
// (Net, NetReliable, Native, Event, NetResponse, Static, NetServer)

void UBPC_DoorTalkComponent_C::STATIC_FinishDoorTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.FinishDoorTalk");

	UBPC_DoorTalkComponent_C_FinishDoorTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.CustomEvent_2
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorTalkComponent_C::STATIC_CustomEvent_2(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.CustomEvent_2");

	UBPC_DoorTalkComponent_C_CustomEvent_2_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ExecuteUbergraph_BPC_DoorTalkComponent
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorTalkComponent_C::STATIC_ExecuteUbergraph_BPC_DoorTalkComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ExecuteUbergraph_BPC_DoorTalkComponent");

	UBPC_DoorTalkComponent_C_ExecuteUbergraph_BPC_DoorTalkComponent_Params params;
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
