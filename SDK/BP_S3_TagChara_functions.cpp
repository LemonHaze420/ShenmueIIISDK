
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_S3_TagChara_C::SetProfileFromTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_TagChara.BP_S3_TagChara_C.SetProfileFromTable");

	UBP_S3_TagChara_C_SetProfileFromTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_TagChara.BP_S3_TagChara_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_S3_TagChara_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_TagChara.BP_S3_TagChara_C.ReceiveBeginPlay");

	UBP_S3_TagChara_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_TagChara.BP_S3_TagChara_C.ExecuteUbergraph_BP_S3_TagChara
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3_TagChara_C::ExecuteUbergraph_BP_S3_TagChara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_TagChara.BP_S3_TagChara_C.ExecuteUbergraph_BP_S3_TagChara");

	UBP_S3_TagChara_C_ExecuteUbergraph_BP_S3_TagChara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
