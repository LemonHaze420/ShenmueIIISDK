
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

// Function BPI_MiniGameContainerJobAction.BPI_MiniGameContainerJobAction_C.ContainerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_MiniGameContainerJobAction_C::ContainerAction(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGameContainerJobAction.BPI_MiniGameContainerJobAction_C.ContainerAction");

	UBPI_MiniGameContainerJobAction_C_ContainerAction_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
