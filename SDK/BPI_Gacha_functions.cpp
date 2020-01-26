
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

// Function BPI_Gacha.BPI_Gacha_C.GetGachaID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   GachaId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Gacha_C::GetGachaID(struct FName* GachaId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Gacha.BPI_Gacha_C.GetGachaID");

	UBPI_Gacha_C_GetGachaID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GachaId != nullptr)
		*GachaId = params.GachaId;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
