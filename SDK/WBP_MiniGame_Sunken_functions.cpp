
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

// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayUnbeliAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_Sunken_C::PlayUnbeliAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayUnbeliAnim");

	UWBP_MiniGame_Sunken_C_PlayUnbeliAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayExcellentAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_Sunken_C::PlayExcellentAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayExcellentAnim");

	UWBP_MiniGame_Sunken_C_PlayExcellentAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.SetLocalizeText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ExcellentText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   UnbelievableText               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MiniGame_Sunken_C::SetLocalizeText(const struct FText& ExcellentText, const struct FText& UnbelievableText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.SetLocalizeText");

	UWBP_MiniGame_Sunken_C_SetLocalizeText_Params params;
	params.ExcellentText = ExcellentText;
	params.UnbelievableText = UnbelievableText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGame_Sunken_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Construct");

	UWBP_MiniGame_Sunken_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Sunken_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Tick");

	UWBP_MiniGame_Sunken_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.ExecuteUbergraph_WBP_MiniGame_Sunken
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Sunken_C::ExecuteUbergraph_WBP_MiniGame_Sunken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.ExecuteUbergraph_WBP_MiniGame_Sunken");

	UWBP_MiniGame_Sunken_C_ExecuteUbergraph_WBP_MiniGame_Sunken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
