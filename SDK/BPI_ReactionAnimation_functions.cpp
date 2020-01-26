
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

// Function BPI_ReactionAnimation.BPI_ReactionAnimation_C.PlayGreeting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_ReactionAnimation_C::PlayGreeting(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ReactionAnimation.BPI_ReactionAnimation_C.PlayGreeting");

	UBPI_ReactionAnimation_C_PlayGreeting_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
