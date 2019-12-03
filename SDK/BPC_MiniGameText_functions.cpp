
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

// Function BPC_MiniGameText.BPC_MiniGameText_C.GetMiniGameText
// (Exec, Native, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameText>    Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)

void UBPC_MiniGameText_C::GetMiniGameText(TEnumAsByte<E_MiniGameText> Enum, struct FString* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameText.BPC_MiniGameText_C.GetMiniGameText");

	UBPC_MiniGameText_C_GetMiniGameText_Params params;
	params.Enum = Enum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
