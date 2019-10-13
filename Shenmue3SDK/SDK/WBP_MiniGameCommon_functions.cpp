
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

// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.SetIconImageSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               DesiredSize                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_MiniGameCommon_C::SetIconImageSize(const struct FVector2D& DesiredSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.SetIconImageSize");

	UWBP_MiniGameCommon_C_SetIconImageSize_Params params;
	params.DesiredSize = DesiredSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.SetVisibleButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameCommon_C::SetVisibleButtonIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.SetVisibleButtonIcon");

	UWBP_MiniGameCommon_C_SetVisibleButtonIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGameCommon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.Construct");

	UWBP_MiniGameCommon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameCommon_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.Tick");

	UWBP_MiniGameCommon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.ExecuteUbergraph_WBP_MiniGameCommon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameCommon_C::ExecuteUbergraph_WBP_MiniGameCommon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.ExecuteUbergraph_WBP_MiniGameCommon");

	UWBP_MiniGameCommon_C_ExecuteUbergraph_WBP_MiniGameCommon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
