
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

// Function BP_S3GameMode_Hakkason.BP_S3GameMode_Hakkason_C.UserConstructionScript
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3GameMode_Hakkason_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Hakkason.BP_S3GameMode_Hakkason_C.UserConstructionScript");

	ABP_S3GameMode_Hakkason_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Hakkason.BP_S3GameMode_Hakkason_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3GameMode_Hakkason_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Hakkason.BP_S3GameMode_Hakkason_C.ReceiveBeginPlay");

	ABP_S3GameMode_Hakkason_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Hakkason.BP_S3GameMode_Hakkason_C.ExecuteUbergraph_BP_S3GameMode_Hakkason
// (NetReliable, Exec, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_Hakkason_C::ExecuteUbergraph_BP_S3GameMode_Hakkason(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Hakkason.BP_S3GameMode_Hakkason_C.ExecuteUbergraph_BP_S3GameMode_Hakkason");

	ABP_S3GameMode_Hakkason_C_ExecuteUbergraph_BP_S3GameMode_Hakkason_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
