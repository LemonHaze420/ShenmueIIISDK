
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

// Function BP_CreateMemoMapTexture.BP_CreateMemoMapTexture_C.UserConstructionScript
// (Native, NetResponse, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CreateMemoMapTexture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoMapTexture.BP_CreateMemoMapTexture_C.UserConstructionScript");

	ABP_CreateMemoMapTexture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreateMemoMapTexture.BP_CreateMemoMapTexture_C.ReceiveBeginPlay
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_CreateMemoMapTexture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoMapTexture.BP_CreateMemoMapTexture_C.ReceiveBeginPlay");

	ABP_CreateMemoMapTexture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreateMemoMapTexture.BP_CreateMemoMapTexture_C.ExecuteUbergraph_BP_CreateMemoMapTexture
// (Net, Exec, Native, Event, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CreateMemoMapTexture_C::ExecuteUbergraph_BP_CreateMemoMapTexture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoMapTexture.BP_CreateMemoMapTexture_C.ExecuteUbergraph_BP_CreateMemoMapTexture");

	ABP_CreateMemoMapTexture_C_ExecuteUbergraph_BP_CreateMemoMapTexture_Params params;
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
