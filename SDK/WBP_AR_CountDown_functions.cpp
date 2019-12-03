
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

// Function WBP_AR_CountDown.WBP_AR_CountDown_C.SetCount
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_CountDown_C::STATIC_SetCount(int Count, int* CurrentCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_CountDown.WBP_AR_CountDown_C.SetCount");

	UWBP_AR_CountDown_C_SetCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCount != nullptr)
		*CurrentCount = params.CurrentCount;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
