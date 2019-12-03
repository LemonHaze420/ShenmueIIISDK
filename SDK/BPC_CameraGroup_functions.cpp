
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

// Function BPC_CameraGroup.BPC_CameraGroup_C.GetAllCameras
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          AllCameras                     (Parm, OutParm, ZeroConstructor)

void UBPC_CameraGroup_C::GetAllCameras(TArray<class UClass*>* AllCameras)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CameraGroup.BPC_CameraGroup_C.GetAllCameras");

	UBPC_CameraGroup_C_GetAllCameras_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllCameras != nullptr)
		*AllCameras = params.AllCameras;
}


// Function BPC_CameraGroup.BPC_CameraGroup_C.ReceiveBeginPlay
// (Native, Event, NetResponse, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBPC_CameraGroup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CameraGroup.BPC_CameraGroup_C.ReceiveBeginPlay");

	UBPC_CameraGroup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CameraGroup.BPC_CameraGroup_C.ExecuteUbergraph_BPC_CameraGroup
// (NetRequest, Native, Event, NetResponse, NetMulticast, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CameraGroup_C::ExecuteUbergraph_BPC_CameraGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CameraGroup.BPC_CameraGroup_C.ExecuteUbergraph_BPC_CameraGroup");

	UBPC_CameraGroup_C_ExecuteUbergraph_BPC_CameraGroup_Params params;
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
