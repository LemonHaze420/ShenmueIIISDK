
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

// Function BPI_BGM.BPI_BGM_C.GetBGM
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USoundAtomCue*           BGM                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_BGM_C::GetBGM(class USoundAtomCue** BGM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BGM.BPI_BGM_C.GetBGM");

	UBPI_BGM_C_GetBGM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGM != nullptr)
		*BGM = params.BGM;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
