
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

// Function BPF_BP_S3_CharacterAdventure.BPF_BP_S3_CharacterAdventure_C.Get_BP_S3_CharacterAdventure
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3_Character_Adventure_C* Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_BP_S3_CharacterAdventure_C::STATIC_Get_BP_S3_CharacterAdventure(class UObject* __WorldContext, class ABP_S3_Character_Adventure_C** Character, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BP_S3_CharacterAdventure.BPF_BP_S3_CharacterAdventure_C.Get_BP_S3_CharacterAdventure");

	UBPF_BP_S3_CharacterAdventure_C_Get_BP_S3_CharacterAdventure_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
