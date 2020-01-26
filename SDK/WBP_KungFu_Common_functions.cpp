
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

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetEnabledMasterImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::SetEnabledMasterImage(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetEnabledMasterImage");

	UWBP_KungFu_Common_C_SetEnabledMasterImage_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.UpdateKungFuLevelInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Common_C::UpdateKungFuLevelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.UpdateKungFuLevelInfo");

	UWBP_KungFu_Common_C_UpdateKungFuLevelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.ChangeKungFuNameToNext
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Common_C::ChangeKungFuNameToNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.ChangeKungFuNameToNext");

	UWBP_KungFu_Common_C_ChangeKungFuNameToNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetCurrentTimeRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::SetCurrentTimeRate(float TimeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetCurrentTimeRate");

	UWBP_KungFu_Common_C_SetCurrentTimeRate_Params params;
	params.TimeRate = TimeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Get_KungFuName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_KungFu_Common_C::Get_KungFuName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.Get_KungFuName_Text_1");

	UWBP_KungFu_Common_C_Get_KungFuName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetKungFuImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_KungFuType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::SetKungFuImage(TEnumAsByte<E_MiniGame_KungFuType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetKungFuImage");

	UWBP_KungFu_Common_C_SetKungFuImage_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetArrowSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          moveSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          IntervalTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::SetArrowSettings(float moveSpeed, float MoveTime, float IntervalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetArrowSettings");

	UWBP_KungFu_Common_C_SetArrowSettings_Params params;
	params.moveSpeed = moveSpeed;
	params.MoveTime = MoveTime;
	params.IntervalTime = IntervalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.DisabledAllArrow
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Common_C::DisabledAllArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.DisabledAllArrow");

	UWBP_KungFu_Common_C_DisabledAllArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetEnabledArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Up                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::SetEnabledArrow(bool Enabled, bool Up, bool Left)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetEnabledArrow");

	UWBP_KungFu_Common_C_SetEnabledArrow_Params params;
	params.Enabled = Enabled;
	params.Up = Up;
	params.Left = Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.UpdateImageAlpha
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          TargetAlpha                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reach                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::UpdateImageAlpha(class UImage* Image, float TargetAlpha, float DeltaTime, bool* Reach)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.UpdateImageAlpha");

	UWBP_KungFu_Common_C_UpdateImageAlpha_Params params;
	params.Image = Image;
	params.TargetAlpha = TargetAlpha;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reach != nullptr)
		*Reach = params.Reach;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.UpdateButtonUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::UpdateButtonUI(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.UpdateButtonUI");

	UWBP_KungFu_Common_C_UpdateButtonUI_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.EnabledButtonIconAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::EnabledButtonIconAnim(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.EnabledButtonIconAnim");

	UWBP_KungFu_Common_C_EnabledButtonIconAnim_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Count Check
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Common_C::Count_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.Count Check");

	UWBP_KungFu_Common_C_Count_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.AddPushCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::AddPushCount(int AddCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.AddPushCount");

	UWBP_KungFu_Common_C_AddPushCount_Params params;
	params.AddCount = AddCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KungFu_Common_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.Construct");

	UWBP_KungFu_Common_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Common_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.Reset");

	UWBP_KungFu_Common_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Event_ChangeNextNameWithAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Common_C::Event_ChangeNextNameWithAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.Event_ChangeNextNameWithAnim");

	UWBP_KungFu_Common_C_Event_ChangeNextNameWithAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Event_MaxLevelMasterdAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Common_C::Event_MaxLevelMasterdAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.Event_MaxLevelMasterdAnim");

	UWBP_KungFu_Common_C_Event_MaxLevelMasterdAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.Tick");

	UWBP_KungFu_Common_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.ExecuteUbergraph_WBP_KungFu_Common
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Common_C::ExecuteUbergraph_WBP_KungFu_Common(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.ExecuteUbergraph_WBP_KungFu_Common");

	UWBP_KungFu_Common_C_ExecuteUbergraph_WBP_KungFu_Common_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Common.WBP_KungFu_Common_C.CountMAX__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Common_C::CountMAX__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Common.WBP_KungFu_Common_C.CountMAX__DelegateSignature");

	UWBP_KungFu_Common_C_CountMAX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
