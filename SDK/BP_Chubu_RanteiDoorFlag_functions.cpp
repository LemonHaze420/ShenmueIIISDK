
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

// Function BP_Chubu_RanteiDoorFlag.BP_Chubu_RanteiDoorFlag_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Chubu_RanteiDoorFlag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_RanteiDoorFlag.BP_Chubu_RanteiDoorFlag_C.UserConstructionScript");

	ABP_Chubu_RanteiDoorFlag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chubu_RanteiDoorFlag.BP_Chubu_RanteiDoorFlag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Chubu_RanteiDoorFlag_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_RanteiDoorFlag.BP_Chubu_RanteiDoorFlag_C.ReceiveBeginPlay");

	ABP_Chubu_RanteiDoorFlag_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chubu_RanteiDoorFlag.BP_Chubu_RanteiDoorFlag_C.ExecuteUbergraph_BP_Chubu_RanteiDoorFlag
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chubu_RanteiDoorFlag_C::ExecuteUbergraph_BP_Chubu_RanteiDoorFlag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_RanteiDoorFlag.BP_Chubu_RanteiDoorFlag_C.ExecuteUbergraph_BP_Chubu_RanteiDoorFlag");

	ABP_Chubu_RanteiDoorFlag_C_ExecuteUbergraph_BP_Chubu_RanteiDoorFlag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
