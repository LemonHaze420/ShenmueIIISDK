
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

// Function BP_HakkasonFood.BP_HakkasonFood_C.InitSet
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HakkasonFood_C::InitSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonFood.BP_HakkasonFood_C.InitSet");

	ABP_HakkasonFood_C_InitSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HakkasonFood.BP_HakkasonFood_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HakkasonFood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonFood.BP_HakkasonFood_C.UserConstructionScript");

	ABP_HakkasonFood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
