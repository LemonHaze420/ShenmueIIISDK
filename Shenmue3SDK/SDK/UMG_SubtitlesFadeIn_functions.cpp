
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.ShowTextOnly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         TextArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Eternity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SubtitlesFadeIn_C::ShowTextOnly(bool Eternity, TArray<struct FString>* TextArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.ShowTextOnly");

	UUMG_SubtitlesFadeIn_C_ShowTextOnly_Params params;
	params.Eternity = Eternity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextArray != nullptr)
		*TextArray = params.TextArray;
}


// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SubtitlesFadeIn_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.Construct");

	UUMG_SubtitlesFadeIn_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.PlayFadeOut
// (BlueprintCallable, BlueprintEvent)

void UUMG_SubtitlesFadeIn_C::PlayFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.PlayFadeOut");

	UUMG_SubtitlesFadeIn_C_PlayFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.ExecuteUbergraph_UMG_SubtitlesFadeIn
// ()
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
