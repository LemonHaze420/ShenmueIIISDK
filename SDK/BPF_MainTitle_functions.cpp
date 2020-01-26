
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

// Function BPF_MainTitle.BPF_MainTitle_C.BPF_ExitGame
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_MainTitle_C::STATIC_BPF_ExitGame(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MainTitle.BPF_MainTitle_C.BPF_ExitGame");

	UBPF_MainTitle_C_BPF_ExitGame_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_MainTitle.BPF_MainTitle_C.BPF_LoadMainTitle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSkipIntro                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRunBoot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEndPIE                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_MainTitle_C::STATIC_BPF_LoadMainTitle(bool bSkipIntro, bool bRunBoot, bool bEndPIE, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MainTitle.BPF_MainTitle_C.BPF_LoadMainTitle");

	UBPF_MainTitle_C_BPF_LoadMainTitle_Params params;
	params.bSkipIntro = bSkipIntro;
	params.bRunBoot = bRunBoot;
	params.bEndPIE = bEndPIE;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
