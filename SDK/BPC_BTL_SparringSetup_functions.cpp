
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

// Function BPC_BTL_SparringSetup.BPC_BTL_SparringSetup_C.GetShowSimon
// (NetRequest, Native, NetResponse, Static, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_BTL_SparringSetup_C::STATIC_GetShowSimon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_SparringSetup.BPC_BTL_SparringSetup_C.GetShowSimon");

	UBPC_BTL_SparringSetup_C_GetShowSimon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
