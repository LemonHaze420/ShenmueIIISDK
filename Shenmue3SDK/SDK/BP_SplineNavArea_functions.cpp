
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

// Function BP_SplineNavArea.BP_SplineNavArea_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SplineNavArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineNavArea.BP_SplineNavArea_C.UserConstructionScript");

	ABP_SplineNavArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineNavArea.BP_SplineNavArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SplineNavArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineNavArea.BP_SplineNavArea_C.ReceiveBeginPlay");

	ABP_SplineNavArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SplineNavArea.BP_SplineNavArea_C.ExecuteUbergraph_BP_SplineNavArea
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SplineNavArea_C::ExecuteUbergraph_BP_SplineNavArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplineNavArea.BP_SplineNavArea_C.ExecuteUbergraph_BP_SplineNavArea");

	ABP_SplineNavArea_C_ExecuteUbergraph_BP_SplineNavArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
