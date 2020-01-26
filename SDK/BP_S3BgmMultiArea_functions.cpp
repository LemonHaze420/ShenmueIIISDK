
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

// Function BP_S3BgmMultiArea.BP_S3BgmMultiArea_C.CheckOverlap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmMultiArea_C::CheckOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmMultiArea.BP_S3BgmMultiArea_C.CheckOverlap");

	ABP_S3BgmMultiArea_C_CheckOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmMultiArea.BP_S3BgmMultiArea_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmMultiArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmMultiArea.BP_S3BgmMultiArea_C.UserConstructionScript");

	ABP_S3BgmMultiArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmMultiArea.BP_S3BgmMultiArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3BgmMultiArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmMultiArea.BP_S3BgmMultiArea_C.ReceiveBeginPlay");

	ABP_S3BgmMultiArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmMultiArea.BP_S3BgmMultiArea_C.ExecuteUbergraph_BP_S3BgmMultiArea
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmMultiArea_C::ExecuteUbergraph_BP_S3BgmMultiArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmMultiArea.BP_S3BgmMultiArea_C.ExecuteUbergraph_BP_S3BgmMultiArea");

	ABP_S3BgmMultiArea_C_ExecuteUbergraph_BP_S3BgmMultiArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
