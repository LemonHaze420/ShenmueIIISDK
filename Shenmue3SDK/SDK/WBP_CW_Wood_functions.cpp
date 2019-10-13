
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

// Function WBP_CW_Wood.WBP_CW_Wood_C.HideMiniWood
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CW_Wood_C::HideMiniWood()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_Wood.WBP_CW_Wood_C.HideMiniWood");

	UWBP_CW_Wood_C_HideMiniWood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_Wood.WBP_CW_Wood_C.IsEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_Wood_C::IsEnd(bool* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_Wood.WBP_CW_Wood_C.IsEnd");

	UWBP_CW_Wood_C_IsEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (End != nullptr)
		*End = params.End;
}


// Function WBP_CW_Wood.WBP_CW_Wood_C.PlayConcentrateAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CW_Wood_C::PlayConcentrateAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_Wood.WBP_CW_Wood_C.PlayConcentrateAnim");

	UWBP_CW_Wood_C_PlayConcentrateAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_Wood.WBP_CW_Wood_C.SetWoodVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WoodNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_Wood_C::SetWoodVisible(int WoodNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_Wood.WBP_CW_Wood_C.SetWoodVisible");

	UWBP_CW_Wood_C_SetWoodVisible_Params params;
	params.WoodNum = WoodNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_Wood.WBP_CW_Wood_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CW_Wood_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_Wood.WBP_CW_Wood_C.Construct");

	UWBP_CW_Wood_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_Wood.WBP_CW_Wood_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_Wood_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_Wood.WBP_CW_Wood_C.Tick");

	UWBP_CW_Wood_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CW_Wood.WBP_CW_Wood_C.ExecuteUbergraph_WBP_CW_Wood
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CW_Wood_C::ExecuteUbergraph_WBP_CW_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CW_Wood.WBP_CW_Wood_C.ExecuteUbergraph_WBP_CW_Wood");

	UWBP_CW_Wood_C_ExecuteUbergraph_WBP_CW_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
