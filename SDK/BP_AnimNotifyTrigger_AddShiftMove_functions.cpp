
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

// Function BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotifyTrigger_AddShiftMove_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C.GetNotifyName");

	UBP_AnimNotifyTrigger_AddShiftMove_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
