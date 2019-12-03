
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
// (Exec, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SkillDisplayScene_Base_C::STATIC_GetWidgetVisible(class UWidget* self2)
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
// (Net, NetReliable, Exec, Event, NetResponse, Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Net, NetRequest, Native, NetResponse, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  TextureRenderTarget2D          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::SetRenderTexture(class UTextureRenderTarget2D* TextureRenderTarget2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.SetRenderTexture");

	ABP_SkillDisplayScene_Base_C_SetRenderTexture_Params params;
	params.TextureRenderTarget2D = TextureRenderTarget2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.EnableDrawToTexture
// (NetRequest, Event, NetResponse, NetMulticast, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_SkillDisplayScene_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.UserConstructionScript");

	ABP_SkillDisplayScene_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveTick
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveTick");

	ABP_SkillDisplayScene_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveEndPlay
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ReceiveEndPlay");

	ABP_SkillDisplayScene_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Base.BP_SkillDisplayScene_Base_C.ExecuteUbergraph_BP_SkillDisplayScene_Base
// (Exec, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Base_C::STATIC_ExecuteUbergraph_BP_SkillDisplayScene_Base(int EntryPoint)
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
