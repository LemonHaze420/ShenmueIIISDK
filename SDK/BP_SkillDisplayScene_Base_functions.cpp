
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

// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.IsLoading
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SkillDisplayScene_Base_C::IsLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.IsLoading");

	ABP_SkillDisplayScene_Base_C_IsLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.GetWidgetVisible
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SkillDisplayScene_Base_C::GetWidgetVisible(class UWidget* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.GetWidgetVisible");

	ABP_SkillDisplayScene_Base_C_GetWidgetVisible_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.CaptureSingleFrame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::CaptureSingleFrame(const struct FName& Item, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.CaptureSingleFrame");

	ABP_SkillDisplayScene_Base_C_CaptureSingleFrame_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.SetRenderTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  TextureRenderTarget2D          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::SetRenderTexture(class UTextureRenderTarget2D* TextureRenderTarget2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.SetRenderTexture");

	ABP_SkillDisplayScene_Base_C_SetRenderTexture_Params params;
	params.TextureRenderTarget2D = TextureRenderTarget2D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.EnableDrawToTexture
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRender                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::EnableDrawToTexture(bool bRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.EnableDrawToTexture");

	ABP_SkillDisplayScene_Base_C_EnableDrawToTexture_Params params;
	params.bRender = bRender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.StopMotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::StopMotion(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.StopMotion");

	ABP_SkillDisplayScene_Base_C_StopMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.PlayMotionForItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::PlayMotionForItem(const struct FName& Skill, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.PlayMotionForItem");

	ABP_SkillDisplayScene_Base_C_PlayMotionForItem_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillDisplayScene_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.UserConstructionScript");

	ABP_SkillDisplayScene_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveTick");

	ABP_SkillDisplayScene_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveEndPlay");

	ABP_SkillDisplayScene_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ExecuteUbergraph_BP_SkillDisplayScene_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::ExecuteUbergraph_BP_SkillDisplayScene_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ExecuteUbergraph_BP_SkillDisplayScene_Base");

	ABP_SkillDisplayScene_Base_C_ExecuteUbergraph_BP_SkillDisplayScene_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
