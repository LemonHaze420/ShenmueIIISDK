
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

// Function BP_Hakkason_TouShop.BP_Hakkason_TouShop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_TouShop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TouShop.BP_Hakkason_TouShop_C.UserConstructionScript");

	ABP_Hakkason_TouShop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TouShop.BP_Hakkason_TouShop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Hakkason_TouShop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TouShop.BP_Hakkason_TouShop_C.ReceiveBeginPlay");

	ABP_Hakkason_TouShop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TouShop.BP_Hakkason_TouShop_C.StepEvent_TouShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TouShop_C::StepEvent_TouShop(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TouShop.BP_Hakkason_TouShop_C.StepEvent_TouShop");

	ABP_Hakkason_TouShop_C_StepEvent_TouShop_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TouShop.BP_Hakkason_TouShop_C.ExecuteUbergraph_BP_Hakkason_TouShop
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TouShop_C::ExecuteUbergraph_BP_Hakkason_TouShop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TouShop.BP_Hakkason_TouShop_C.ExecuteUbergraph_BP_Hakkason_TouShop");

	ABP_Hakkason_TouShop_C_ExecuteUbergraph_BP_Hakkason_TouShop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
