
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

// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.getActionType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Sight                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS3DetectActionParam> Params                         (Parm, OutParm, ZeroConstructor)

void UBPC_DoorTalkComponent_C::getActionType(bool* Sight, TArray<struct FS3DetectActionParam>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.getActionType");

	UBPC_DoorTalkComponent_C_getActionType_Params params;
	params.Sight = Sight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_DoorTalkComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ReceiveBeginPlay");

	UBPC_DoorTalkComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.RunDoorTalk
// (BlueprintCallable, BlueprintEvent)

void UBPC_DoorTalkComponent_C::RunDoorTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.RunDoorTalk");

	UBPC_DoorTalkComponent_C_RunDoorTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.FinishDoorTalk
// (BlueprintCallable, BlueprintEvent)

void UBPC_DoorTalkComponent_C::FinishDoorTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.FinishDoorTalk");

	UBPC_DoorTalkComponent_C_FinishDoorTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorTalkComponent_C::CustomEvent_2(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.CustomEvent_2");

	UBPC_DoorTalkComponent_C_CustomEvent_2_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ExecuteUbergraph_BPC_DoorTalkComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorTalkComponent_C::ExecuteUbergraph_BPC_DoorTalkComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ExecuteUbergraph_BPC_DoorTalkComponent");

	UBPC_DoorTalkComponent_C_ExecuteUbergraph_BPC_DoorTalkComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
