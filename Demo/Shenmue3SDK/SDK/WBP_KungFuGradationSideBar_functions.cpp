
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

// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.PlayMaxAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KungFuGradationSideBar_C::PlayMaxAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.PlayMaxAnim");

	UWBP_KungFuGradationSideBar_C_PlayMaxAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.SetRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFuGradationSideBar_C::SetRatio(float Percent, int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.SetRatio");

	UWBP_KungFuGradationSideBar_C_SetRatio_Params params;
	params.Percent = Percent;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.Ease
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_KungFuGradationSideBar_C::Ease(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.Ease");

	UWBP_KungFuGradationSideBar_C_Ease_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFuGradationSideBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.Tick");

	UWBP_KungFuGradationSideBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KungFuGradationSideBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.Construct");

	UWBP_KungFuGradationSideBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.ExecuteUbergraph_WBP_KungFuGradationSideBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFuGradationSideBar_C::ExecuteUbergraph_WBP_KungFuGradationSideBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.ExecuteUbergraph_WBP_KungFuGradationSideBar");

	UWBP_KungFuGradationSideBar_C_ExecuteUbergraph_WBP_KungFuGradationSideBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
