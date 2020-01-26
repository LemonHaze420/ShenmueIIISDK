
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

// Function BP_FL_CanDownArea.BP_FL_CanDownArea_C.IsContainerArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsArea                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FL_CanDownArea_C::IsContainerArea(bool* IsArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_CanDownArea.BP_FL_CanDownArea_C.IsContainerArea");

	ABP_FL_CanDownArea_C_IsContainerArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsArea != nullptr)
		*IsArea = params.IsArea;
}


// Function BP_FL_CanDownArea.BP_FL_CanDownArea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FL_CanDownArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_CanDownArea.BP_FL_CanDownArea_C.UserConstructionScript");

	ABP_FL_CanDownArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
