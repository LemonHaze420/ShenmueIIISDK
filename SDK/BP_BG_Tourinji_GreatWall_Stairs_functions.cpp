
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

// Function BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C.CalculateBaseRelativeTransform
// (Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)

void ABP_BG_Tourinji_GreatWall_Stairs_C::CalculateBaseRelativeTransform(struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C.CalculateBaseRelativeTransform");

	ABP_BG_Tourinji_GreatWall_Stairs_C_CalculateBaseRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
}


// Function BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C.UserConstructionScript
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, BlueprintPure, NetValidate)

void ABP_BG_Tourinji_GreatWall_Stairs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C.UserConstructionScript");

	ABP_BG_Tourinji_GreatWall_Stairs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
