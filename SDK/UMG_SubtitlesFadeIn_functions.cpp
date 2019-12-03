
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

// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.ShowTextOnly
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         TextArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Eternity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SubtitlesFadeIn_C::ShowTextOnly(bool Eternity, TArray<struct FString>* TextArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.ShowTextOnly");

	UUMG_SubtitlesFadeIn_C_ShowTextOnly_Params params;
	params.Eternity = Eternity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextArray != nullptr)
		*TextArray = params.TextArray;
}


// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.Construct
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UUMG_SubtitlesFadeIn_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.Construct");

	UUMG_SubtitlesFadeIn_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.PlayFadeOut
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UUMG_SubtitlesFadeIn_C::STATIC_PlayFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.PlayFadeOut");

	UUMG_SubtitlesFadeIn_C_PlayFadeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.ExecuteUbergraph_UMG_SubtitlesFadeIn
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SubtitlesFadeIn_C::ExecuteUbergraph_UMG_SubtitlesFadeIn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.ExecuteUbergraph_UMG_SubtitlesFadeIn");

	UUMG_SubtitlesFadeIn_C_ExecuteUbergraph_UMG_SubtitlesFadeIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
