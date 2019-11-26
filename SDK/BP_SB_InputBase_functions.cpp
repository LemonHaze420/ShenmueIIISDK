
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

// Function BP_SB_InputBase.BP_SB_InputBase_C.IsInputAxisValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bInput                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SB_InputBase_C::IsInputAxisValue(bool* bInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_InputBase.BP_SB_InputBase_C.IsInputAxisValue");

	ABP_SB_InputBase_C_IsInputAxisValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInput != nullptr)
		*bInput = params.bInput;
}


// Function BP_SB_InputBase.BP_SB_InputBase_C.IsChangeAxisValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bChange                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SB_InputBase_C::IsChangeAxisValue(bool* bChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_InputBase.BP_SB_InputBase_C.IsChangeAxisValue");

	ABP_SB_InputBase_C_IsChangeAxisValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChange != nullptr)
		*bChange = params.bChange;
}


// Function BP_SB_InputBase.BP_SB_InputBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_InputBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_InputBase.BP_SB_InputBase_C.UserConstructionScript");

	ABP_SB_InputBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
