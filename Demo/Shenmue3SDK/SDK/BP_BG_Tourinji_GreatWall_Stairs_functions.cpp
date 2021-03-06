
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

// Function BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C.CalculateBaseRelativeTransform
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)

void ABP_BG_Tourinji_GreatWall_Stairs_C::CalculateBaseRelativeTransform(struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C.CalculateBaseRelativeTransform");

	ABP_BG_Tourinji_GreatWall_Stairs_C_CalculateBaseRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
}


// Function BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BG_Tourinji_GreatWall_Stairs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C.UserConstructionScript");

	ABP_BG_Tourinji_GreatWall_Stairs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
