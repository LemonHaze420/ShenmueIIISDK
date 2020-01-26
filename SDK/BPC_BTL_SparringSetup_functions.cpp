
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

// Function BPC_BTL_SparringSetup.BPC_BTL_SparringSetup_C.GetShowSimon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_BTL_SparringSetup_C::GetShowSimon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_SparringSetup.BPC_BTL_SparringSetup_C.GetShowSimon");

	UBPC_BTL_SparringSetup_C_GetShowSimon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
