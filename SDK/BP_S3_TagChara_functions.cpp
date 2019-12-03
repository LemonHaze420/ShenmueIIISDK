
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

// Function BP_S3_TagChara.BP_S3_TagChara_C.SetProfileFromTable
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_S3_TagChara_C::SetProfileFromTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_TagChara.BP_S3_TagChara_C.SetProfileFromTable");

	UBP_S3_TagChara_C_SetProfileFromTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_TagChara.BP_S3_TagChara_C.ReceiveBeginPlay
// (Net, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBP_S3_TagChara_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_TagChara.BP_S3_TagChara_C.ReceiveBeginPlay");

	UBP_S3_TagChara_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_TagChara.BP_S3_TagChara_C.ExecuteUbergraph_BP_S3_TagChara
// (NetReliable, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3_TagChara_C::STATIC_ExecuteUbergraph_BP_S3_TagChara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_TagChara.BP_S3_TagChara_C.ExecuteUbergraph_BP_S3_TagChara");

	UBP_S3_TagChara_C_ExecuteUbergraph_BP_S3_TagChara_Params params;
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
