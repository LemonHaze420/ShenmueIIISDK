
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

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.CanSkip
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::CanSkip(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.CanSkip");

	ABP_CutscenePlayer_C_CanSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.VisibleWidget
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::VisibleWidget(class UClass* WidgetClass, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.VisibleWidget");

	ABP_CutscenePlayer_C_VisibleWidget_Params params;
	params.WidgetClass = WidgetClass;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsReadyToPlayFirstSequence
// (NetReliable, NetRequest, Exec, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsReadyToPlayFirstSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsReadyToPlayFirstSequence");

	ABP_CutscenePlayer_C_IsReadyToPlayFirstSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.PlayFirstSequence
// (Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::PlayFirstSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.PlayFirstSequence");

	ABP_CutscenePlayer_C_PlayFirstSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsSubtitleUsedInCurrentVoiceLanguage
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InTextLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsSubtitleUsedInCurrentVoiceLanguage(const struct FName& InTextLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsSubtitleUsedInCurrentVoiceLanguage");

	ABP_CutscenePlayer_C_IsSubtitleUsedInCurrentVoiceLanguage_Params params;
	params.InTextLabel = InTextLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreDisableTargetActorTick
// (Exec, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_RestoreDisableTargetActorTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreDisableTargetActorTick");

	ABP_CutscenePlayer_C_RestoreDisableTargetActorTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DisableTargetActorTick
// (Native, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_DisableTargetActorTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.DisableTargetActorTick");

	ABP_CutscenePlayer_C_DisableTargetActorTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupDisableTickTargetActor
// (Exec, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::SetupDisableTickTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupDisableTickTargetActor");

	ABP_CutscenePlayer_C_SetupDisableTickTargetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateLoadOther
// (Net, NetReliable, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_UpdateLoadOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateLoadOther");

	ABP_CutscenePlayer_C_UpdateLoadOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateTextureForceResidentTargetStatus
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::UpdateTextureForceResidentTargetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateTextureForceResidentTargetStatus");

	ABP_CutscenePlayer_C_UpdateTextureForceResidentTargetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreTextureForceResident
// (NetReliable, NetRequest, Exec, Native, Event, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_CutscenePlayer_C::RestoreTextureForceResident()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreTextureForceResident");

	ABP_CutscenePlayer_C_RestoreTextureForceResident_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupTextureForceResident
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::SetupTextureForceResident()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupTextureForceResident");

	ABP_CutscenePlayer_C_SetupTextureForceResident_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ApplyEarringSetting
// (Net, NetReliable, NetResponse, Static, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_ApplyEarringSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ApplyEarringSetting");

	ABP_CutscenePlayer_C_ApplyEarringSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupCharaMaterial
// (NetReliable, Native, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_CutscenePlayer_C::SetupCharaMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupCharaMaterial");

	ABP_CutscenePlayer_C_SetupCharaMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetEndFadeInfo
// (NetRequest, Native, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           InIsUseEndFadeOut              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InEndFadeOutTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InEndFadeColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_SetEndFadeInfo(bool InIsUseEndFadeOut, float InEndFadeOutTime, const struct FLinearColor& InEndFadeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetEndFadeInfo");

	ABP_CutscenePlayer_C_SetEndFadeInfo_Params params;
	params.InIsUseEndFadeOut = InIsUseEndFadeOut;
	params.InEndFadeOutTime = InEndFadeOutTime;
	params.InEndFadeColor = InEndFadeColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSensorGimmickLightTargetActor
// (Exec, Native, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void ABP_CutscenePlayer_C::FinalizeSensorGimmickLightTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSensorGimmickLightTargetActor");

	ABP_CutscenePlayer_C_FinalizeSensorGimmickLightTargetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitializeSensorGimmickLightTargetActor
// (NetReliable, NetRequest, Exec, NetResponse, Static, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_InitializeSensorGimmickLightTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitializeSensorGimmickLightTargetActor");

	ABP_CutscenePlayer_C_InitializeSensorGimmickLightTargetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.StopSecondarySubtitle
// (Exec, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_StopSecondarySubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.StopSecondarySubtitle");

	ABP_CutscenePlayer_C_StopSecondarySubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ShowSecondarySubtitle
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   TextLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::ShowSecondarySubtitle(const struct FName& TextLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ShowSecondarySubtitle");

	ABP_CutscenePlayer_C_ShowSecondarySubtitle_Params params;
	params.TextLabel = TextLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSecondarySubtitlePlayer
// (NetReliable, Exec, Native, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void ABP_CutscenePlayer_C::FinalizeSecondarySubtitlePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSecondarySubtitlePlayer");

	ABP_CutscenePlayer_C_FinalizeSecondarySubtitlePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.CreateSecondarySubtitlePlayer
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_CreateSecondarySubtitlePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.CreateSecondarySubtitlePlayer");

	ABP_CutscenePlayer_C_CreateSecondarySubtitlePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnCharaClothesChanged
// (NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class US3ClothInterface> InInterface                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InCharaName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::OnCharaClothesChanged(const TScriptInterface<class US3ClothInterface>& InInterface, const struct FName& InCharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnCharaClothesChanged");

	ABP_CutscenePlayer_C_OnCharaClothesChanged_Params params;
	params.InInterface = InInterface;
	params.InCharaName = InCharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsChangingClothes
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::STATIC_IsChangingClothes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsChangingClothes");

	ABP_CutscenePlayer_C_IsChangingClothes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsLoadingOther
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsLoadingOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsLoadingOther");

	ABP_CutscenePlayer_C_IsLoadingOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RequestLoadOther
// (Net, NetRequest, Native, Event, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::RequestLoadOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.RequestLoadOther");

	ABP_CutscenePlayer_C_RequestLoadOther_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCharaReplaceActorTransform
// (Net, NetReliable, Native, Event, Static, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_CutscenePlayer_C::STATIC_GetCharaReplaceActorTransform(const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCharaReplaceActorTransform");

	ABP_CutscenePlayer_C_GetCharaReplaceActorTransform_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetReplaceableCharaNameList
// (Net, NetReliable, Static, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ABP_CutscenePlayer_C::STATIC_GetReplaceableCharaNameList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetReplaceableCharaNameList");

	ABP_CutscenePlayer_C_GetReplaceableCharaNameList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetOthersReplaceActorInfo
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::GetOthersReplaceActorInfo(int Index, struct FVector* Location, struct FRotator* Rotation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetOthersReplaceActorInfo");

	ABP_CutscenePlayer_C_GetOthersReplaceActorInfo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpIsEnabledChangeClothes
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABP_CutsceneSkeletalMeshActor_C* InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::TmpIsEnabledChangeClothes(class ABP_CutsceneSkeletalMeshActor_C* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpIsEnabledChangeClothes");

	ABP_CutscenePlayer_C_TmpIsEnabledChangeClothes_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupChangeClothes
// (Net, NetReliable, Static, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_SetupChangeClothes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupChangeClothes");

	ABP_CutscenePlayer_C_SetupChangeClothes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSky
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::FinalizeSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSky");

	ABP_CutscenePlayer_C_FinalizeSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupSky
// (Net, Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_CutscenePlayer_C::SetupSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupSky");

	ABP_CutscenePlayer_C_SetupSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugDispOtherInfo
// (NetReliable, Static, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_DebugDispOtherInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugDispOtherInfo");

	ABP_CutscenePlayer_C_DebugDispOtherInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsSpecifiedPostProcessTarget
// (Exec, Native, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 InObject                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::STATIC_IsSpecifiedPostProcessTarget(class UObject* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsSpecifiedPostProcessTarget");

	ABP_CutscenePlayer_C_IsSpecifiedPostProcessTarget_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpGetReplacePlayerLocationAndRotation
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_TmpGetReplacePlayerLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpGetReplacePlayerLocationAndRotation");

	ABP_CutscenePlayer_C_TmpGetReplacePlayerLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsEnabledPostProcess
// (Net, NetReliable, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsEnabledPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsEnabledPostProcess");

	ABP_CutscenePlayer_C_IsEnabledPostProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCameraComponentFromActor
// (Net, NetReliable, NetRequest, Event, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* ABP_CutscenePlayer_C::GetCameraComponentFromActor(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCameraComponentFromActor");

	ABP_CutscenePlayer_C_GetCameraComponentFromActor_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinishPostProcess
// (NetRequest, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::FinishPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinishPostProcess");

	ABP_CutscenePlayer_C_FinishPostProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitPostProcess
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::InitPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitPostProcess");

	ABP_CutscenePlayer_C_InitPostProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ResetAllCameraPostProcess
// (Native, Event, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::ResetAllCameraPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ResetAllCameraPostProcess");

	ABP_CutscenePlayer_C_ResetAllCameraPostProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ApplyPostProcessToCamera
// (Net, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 CameraObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::ApplyPostProcessToCamera(class UObject* CameraObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ApplyPostProcessToCamera");

	ABP_CutscenePlayer_C_ApplyPostProcessToCamera_Params params;
	params.CameraObject = CameraObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCameraComponentFromObject
// (Exec, Native, NetResponse, NetMulticast, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 InObject                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* ABP_CutscenePlayer_C::GetCameraComponentFromObject(class UObject* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCameraComponentFromObject");

	ABP_CutscenePlayer_C_GetCameraComponentFromObject_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetStartFadeInfo
// (Event, NetResponse, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          FadeOutTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FadeColor                      (Parm, OutParm, IsPlainOldData)

void ABP_CutscenePlayer_C::GetStartFadeInfo(float* FadeOutTime, struct FLinearColor* FadeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetStartFadeInfo");

	ABP_CutscenePlayer_C_GetStartFadeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FadeOutTime != nullptr)
		*FadeOutTime = params.FadeOutTime;
	if (FadeColor != nullptr)
		*FadeColor = params.FadeColor;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetIsFinishingFlag
// (Net, NetRequest, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::GetIsFinishingFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetIsFinishingFlag");

	ABP_CutscenePlayer_C_GetIsFinishingFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateSubtitleStaticMeshActorText
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::UpdateSubtitleStaticMeshActorText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateSubtitleStaticMeshActorText");

	ABP_CutscenePlayer_C_UpdateSubtitleStaticMeshActorText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ChangedCamera_Impl
// (NetRequest, Exec, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 CameraObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_ChangedCamera_Impl(class UObject* CameraObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ChangedCamera_Impl");

	ABP_CutscenePlayer_C_ChangedCamera_Impl_Params params;
	params.CameraObject = CameraObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeHideNPC
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::FinalizeHideNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeHideNPC");

	ABP_CutscenePlayer_C_FinalizeHideNPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitializeHideNPC
// (NetRequest, Public, Private, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_CutscenePlayer_C::InitializeHideNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitializeHideNPC");

	ABP_CutscenePlayer_C_InitializeHideNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugFinalizeWorkInProgress
// (Exec, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::DebugFinalizeWorkInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugFinalizeWorkInProgress");

	ABP_CutscenePlayer_C_DebugFinalizeWorkInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugInitializeWorkInProgress
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_DebugInitializeWorkInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugInitializeWorkInProgress");

	ABP_CutscenePlayer_C_DebugInitializeWorkInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetFinishingFlag
// (Net, Exec, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::GetFinishingFlag(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetFinishingFlag");

	ABP_CutscenePlayer_C_GetFinishingFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpGetSkyForceTimeOfDayValue
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutscenePlayer_C::TmpGetSkyForceTimeOfDayValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpGetSkyForceTimeOfDayValue");

	ABP_CutscenePlayer_C_TmpGetSkyForceTimeOfDayValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCharaLightingActors
// (Net, NetReliable, NetRequest, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AS3CharaLightingSequencerActor*> SpawnedCharaLightingActors     (Parm, OutParm, ZeroConstructor)

void ABP_CutscenePlayer_C::GetCharaLightingActors(TArray<class AS3CharaLightingSequencerActor*>* SpawnedCharaLightingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCharaLightingActors");

	ABP_CutscenePlayer_C_GetCharaLightingActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedCharaLightingActors != nullptr)
		*SpawnedCharaLightingActors = params.SpawnedCharaLightingActors;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeCharaLighting
// (NetReliable, Event, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::FinalizeCharaLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeCharaLighting");

	ABP_CutscenePlayer_C_FinalizeCharaLighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitializeCharaLighting
// (Net, NetRequest, Exec, Native, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::InitializeCharaLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitializeCharaLighting");

	ABP_CutscenePlayer_C_InitializeCharaLighting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetPossessableActors
// (NetReliable, Native, Event, NetResponse, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> ABP_CutscenePlayer_C::GetPossessableActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetPossessableActors");

	ABP_CutscenePlayer_C_GetPossessableActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.MovePlayerToReplaceActor
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::MovePlayerToReplaceActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.MovePlayerToReplaceActor");

	ABP_CutscenePlayer_C_MovePlayerToReplaceActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DisableReplacePlayer
// (NetReliable, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::DisableReplacePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.DisableReplacePlayer");

	ABP_CutscenePlayer_C_DisableReplacePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ShowSubtitleFromCharaIndex
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::ShowSubtitleFromCharaIndex(const struct FName& CharaName, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ShowSubtitleFromCharaIndex");

	ABP_CutscenePlayer_C_ShowSubtitleFromCharaIndex_Params params;
	params.CharaName = CharaName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetForceTimeOfDayValue
// (Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutscenePlayer_C::STATIC_GetForceTimeOfDayValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetForceTimeOfDayValue");

	ABP_CutscenePlayer_C_GetForceTimeOfDayValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseForceTimeOfDay
// (Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::STATIC_IsUseForceTimeOfDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseForceTimeOfDay");

	ABP_CutscenePlayer_C_IsUseForceTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseForceWeather
// (NetReliable, Exec, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsUseForceWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseForceWeather");

	ABP_CutscenePlayer_C_IsUseForceWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupSpecifiedHideTargetActors
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::SetupSpecifiedHideTargetActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupSpecifiedHideTargetActors");

	ABP_CutscenePlayer_C_SetupSpecifiedHideTargetActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsSpecifiedHideTargetActor
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Candidate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::STATIC_IsSpecifiedHideTargetActor(class AActor* Candidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsSpecifiedHideTargetActor");

	ABP_CutscenePlayer_C_IsSpecifiedHideTargetActor_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreSpecifiedHideTargetActors
// (Exec, Event, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_RestoreSpecifiedHideTargetActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreSpecifiedHideTargetActors");

	ABP_CutscenePlayer_C_RestoreSpecifiedHideTargetActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.HideSpecifiedHideTargetActors
// (Event, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_HideSpecifiedHideTargetActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.HideSpecifiedHideTargetActors");

	ABP_CutscenePlayer_C_HideSpecifiedHideTargetActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpGetNewReplaceActorRotation
// (Net, NetReliable, NetResponse, NetMulticast, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_CutsceneReplaceActorInfo ReplaceActorInfo               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_CutscenePlayer_C::TmpGetNewReplaceActorRotation(const struct FST_CutsceneReplaceActorInfo& ReplaceActorInfo, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpGetNewReplaceActorRotation");

	ABP_CutscenePlayer_C_TmpGetNewReplaceActorRotation_Params params;
	params.ReplaceActorInfo = ReplaceActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpIsUseOldReplaceOthers
// (Net, NetRequest, Event, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUseOld                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::TmpIsUseOldReplaceOthers(class AActor* SourceActor, bool* IsUseOld)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpIsUseOldReplaceOthers");

	ABP_CutscenePlayer_C_TmpIsUseOldReplaceOthers_Params params;
	params.SourceActor = SourceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseOld != nullptr)
		*IsUseOld = params.IsUseOld;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpNewReplacePlayerLocationAndRotation
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_CutscenePlayer_C::TmpNewReplacePlayerLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpNewReplacePlayerLocationAndRotation");

	ABP_CutscenePlayer_C_TmpNewReplacePlayerLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpIsUseOldReplacePlayer
// (NetReliable, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsUseOld                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::TmpIsUseOldReplacePlayer(bool* IsUseOld)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpIsUseOldReplacePlayer");

	ABP_CutscenePlayer_C_TmpIsUseOldReplacePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseOld != nullptr)
		*IsUseOld = params.IsUseOld;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsHidePlayerInPlayingSequencer
// (Exec, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsHidePlayerInPlayingSequencer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsHidePlayerInPlayingSequencer");

	ABP_CutscenePlayer_C_IsHidePlayerInPlayingSequencer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsEnabledGlobalStateChange
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::STATIC_IsEnabledGlobalStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsEnabledGlobalStateChange");

	ABP_CutscenePlayer_C_IsEnabledGlobalStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ForceResetCloth
// (Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_ForceResetCloth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ForceResetCloth");

	ABP_CutscenePlayer_C_ForceResetCloth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsPlayedLevelSequence
// (NetRequest, Exec, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsPlayedLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsPlayedLevelSequence");

	ABP_CutscenePlayer_C_IsPlayedLevelSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsShowingSubtitle
// (Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsShowingSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsShowingSubtitle");

	ABP_CutscenePlayer_C_IsShowingSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ReleaseCutsceneSkeletalMeshActorAttachment
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::ReleaseCutsceneSkeletalMeshActorAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ReleaseCutsceneSkeletalMeshActorAttachment");

	ABP_CutscenePlayer_C_ReleaseCutsceneSkeletalMeshActorAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetCutsceneSkeletalMeshActorAttachment
// (NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::SetCutsceneSkeletalMeshActorAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetCutsceneSkeletalMeshActorAttachment");

	ABP_CutscenePlayer_C_SetCutsceneSkeletalMeshActorAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSubtitlePlayer
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_FinalizeSubtitlePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSubtitlePlayer");

	ABP_CutscenePlayer_C_FinalizeSubtitlePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.CreateSubtitlePlayer
// (Native, Event, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_CreateSubtitlePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.CreateSubtitlePlayer");

	ABP_CutscenePlayer_C_CreateSubtitlePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.PlayEndReset
// (Net, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::PlayEndReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.PlayEndReset");

	ABP_CutscenePlayer_C_PlayEndReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.AddPlayEndResetDataIfHasTag
// (NetRequest, Exec, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::AddPlayEndResetDataIfHasTag(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.AddPlayEndResetDataIfHasTag");

	ABP_CutscenePlayer_C_AddPlayEndResetDataIfHasTag_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitPlayEndResetData
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_InitPlayEndResetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitPlayEndResetData");

	ABP_CutscenePlayer_C_InitPlayEndResetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ForceOnLights
// (Exec, Native, Static, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_ForceOnLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ForceOnLights");

	ABP_CutscenePlayer_C_ForceOnLights_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreForceOnTargetLights
// (NetReliable, NetRequest, Native, Event, Static, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_RestoreForceOnTargetLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreForceOnTargetLights");

	ABP_CutscenePlayer_C_RestoreForceOnTargetLights_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsForceOnTargetLight
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Candidate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::STATIC_IsForceOnTargetLight(class AActor* Candidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsForceOnTargetLight");

	ABP_CutscenePlayer_C_IsForceOnTargetLight_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupForceOnTargetLights
// (Net, NetReliable, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::SetupForceOnTargetLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupForceOnTargetLights");

	ABP_CutscenePlayer_C_SetupForceOnTargetLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugSkipToEnd
// (NetRequest, Native, Event, NetMulticast, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::DebugSkipToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugSkipToEnd");

	ABP_CutscenePlayer_C_DebugSkipToEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsPlayingLevelSequence
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsPlayingLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsPlayingLevelSequence");

	ABP_CutscenePlayer_C_IsPlayingLevelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.EndSequence
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_EndSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.EndSequence");

	ABP_CutscenePlayer_C_EndSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.PlaySequence
// (NetReliable, NetRequest, NetResponse, NetMulticast, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::PlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.PlaySequence");

	ABP_CutscenePlayer_C_PlaySequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetPossessableActorsActive
// (Net, Exec, NetResponse, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::SetPossessableActorsActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetPossessableActorsActive");

	ABP_CutscenePlayer_C_SetPossessableActorsActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.CheckRequiredUpdateProgrammedAnim
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InPos                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_CutsceneProgrammedAnimInfo Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsRequiredUpdate               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           isInRange                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class US3AnimCutsceneInstance* AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_CheckRequiredUpdateProgrammedAnim(float InPos, const struct FST_CutsceneProgrammedAnimInfo& Info, bool* IsRequiredUpdate, bool* isInRange, class US3AnimCutsceneInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.CheckRequiredUpdateProgrammedAnim");

	ABP_CutscenePlayer_C_CheckRequiredUpdateProgrammedAnim_Params params;
	params.InPos = InPos;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRequiredUpdate != nullptr)
		*IsRequiredUpdate = params.IsRequiredUpdate;
	if (isInRange != nullptr)
		*isInRange = params.isInRange;
	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateProgrammedAnimState
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_CutscenePlayer_C::UpdateProgrammedAnimState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateProgrammedAnimState");

	ABP_CutscenePlayer_C_UpdateProgrammedAnimState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetProgrammedAnimReferenced
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FST_CutsceneProgrammedAnimInfo> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewReferenced                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_SetProgrammedAnimReferenced(int Index, bool NewReferenced, TArray<struct FST_CutsceneProgrammedAnimInfo>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetProgrammedAnimReferenced");

	ABP_CutscenePlayer_C_SetProgrammedAnimReferenced_Params params;
	params.Index = Index;
	params.NewReferenced = NewReferenced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ResetProgrammedAnim
// (NetReliable, NetRequest, Exec, Event, Static, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_ResetProgrammedAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ResetProgrammedAnim");

	ABP_CutscenePlayer_C_ResetProgrammedAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateReplacePlayer
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_UpdateReplacePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateReplacePlayer");

	ABP_CutscenePlayer_C_UpdateReplacePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsValidPlayerReplaceActor
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::IsValidPlayerReplaceActor(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsValidPlayerReplaceActor");

	ABP_CutscenePlayer_C_IsValidPlayerReplaceActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateReplaceActor
// (NetReliable, NetRequest, Native, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_UpdateReplaceActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateReplaceActor");

	ABP_CutscenePlayer_C_UpdateReplaceActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetOthersReplaceActorRotation
// (Exec, Native, Event, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_GetOthersReplaceActorRotation(int Index, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetOthersReplaceActorRotation");

	ABP_CutscenePlayer_C_GetOthersReplaceActorRotation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetReplaceActorRotation
// (Exec, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FST_CutsceneReplaceActorInfo ReplaceActorInfo               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_GetReplaceActorRotation(const struct FST_CutsceneReplaceActorInfo& ReplaceActorInfo, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetReplaceActorRotation");

	ABP_CutscenePlayer_C_GetReplaceActorRotation_Params params;
	params.ReplaceActorInfo = ReplaceActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetOthersReplaceActorLocation
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_GetOthersReplaceActorLocation(int Index, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetOthersReplaceActorLocation");

	ABP_CutscenePlayer_C_GetOthersReplaceActorLocation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetReplaceActorLocation
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FST_CutsceneReplaceActorInfo ReplaceActorInfo               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_GetReplaceActorLocation(const struct FST_CutsceneReplaceActorInfo& ReplaceActorInfo, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetReplaceActorLocation");

	ABP_CutscenePlayer_C_GetReplaceActorLocation_Params params;
	params.ReplaceActorInfo = ReplaceActorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.StartResumeCamera
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_StartResumeCamera(float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.StartResumeCamera");

	ABP_CutscenePlayer_C_StartResumeCamera_Params params;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsShouldResumeCamera
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bShouldResume                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_IsShouldResumeCamera(bool* bShouldResume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsShouldResumeCamera");

	ABP_CutscenePlayer_C_IsShouldResumeCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldResume != nullptr)
		*bShouldResume = params.bShouldResume;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetSequenceRemainingTIme
// (NetReliable, NetRequest, Exec, Event, NetResponse, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::GetSequenceRemainingTIme(float* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetSequenceRemainingTIme");

	ABP_CutscenePlayer_C_GetSequenceRemainingTIme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateEndFadeOut
// (NetReliable, Event, NetMulticast, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::UpdateEndFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateEndFadeOut");

	ABP_CutscenePlayer_C_UpdateEndFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitSequencePlay
// (Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::InitSequencePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitSequencePlay");

	ABP_CutscenePlayer_C_InitSequencePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseEndFadeIn
// (NetReliable, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsUseFade                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_IsUseEndFadeIn(bool* IsUseFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseEndFadeIn");

	ABP_CutscenePlayer_C_IsUseEndFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseFade != nullptr)
		*IsUseFade = params.IsUseFade;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseStartFadeOut
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsUseFade                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::IsUseStartFadeOut(bool* IsUseFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseStartFadeOut");

	ABP_CutscenePlayer_C_IsUseStartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseFade != nullptr)
		*IsUseFade = params.IsUseFade;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitCutscene
// (NetRequest, Exec, Native, Event, Static, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_InitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitCutscene");

	ABP_CutscenePlayer_C_InitCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugUpdateHideSubtitle
// (NetReliable, Exec, Native, NetResponse, Static, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::STATIC_DebugUpdateHideSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugUpdateHideSubtitle");

	ABP_CutscenePlayer_C_DebugUpdateHideSubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugSwitchHideSubtitle
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::DebugSwitchHideSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugSwitchHideSubtitle");

	ABP_CutscenePlayer_C_DebugSwitchHideSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsFinishedLevelSequence
// (Net, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutscenePlayer_C::IsFinishedLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsFinishedLevelSequence");

	ABP_CutscenePlayer_C_IsFinishedLevelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ExitCutscene
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_CutscenePlayer_C::STATIC_ExitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ExitCutscene");

	ABP_CutscenePlayer_C_ExitCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetLength
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_GetLength(float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetLength");

	ABP_CutscenePlayer_C_GetLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ShowSubtitle
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   TextLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_ShowSubtitle(const struct FName& TextLabel, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ShowSubtitle");

	ABP_CutscenePlayer_C_ShowSubtitle_Params params;
	params.TextLabel = TextLabel;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetPlaybackPosition
// (NetRequest, Native, Event, NetResponse, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          NewPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::SetPlaybackPosition(float NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetPlaybackPosition");

	ABP_CutscenePlayer_C_SetPlaybackPosition_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetPlaybackPosition
// (Exec, Native, Event, Static, NetMulticast, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          PlaybackPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_GetPlaybackPosition(float* PlaybackPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetPlaybackPosition");

	ABP_CutscenePlayer_C_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlaybackPosition != nullptr)
		*PlaybackPosition = params.PlaybackPosition;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsPlaying
// (Net, NetReliable, NetRequest, Exec, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::IsPlaying(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsPlaying");

	ABP_CutscenePlayer_C_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UserConstructionScript
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_CutscenePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UserConstructionScript");

	ABP_CutscenePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ReceiveBeginPlay");

	ABP_CutscenePlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ReceiveTick
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ReceiveTick");

	ABP_CutscenePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ShowSubtitle
// (NetReliable, NetRequest, Exec, Static, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   TextLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_Event_ShowSubtitle(const struct FName& TextLabel, const struct FName& CharacterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ShowSubtitle");

	ABP_CutscenePlayer_C_Event_ShowSubtitle_Params params;
	params.TextLabel = TextLabel;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateResumeCamera
// (NetRequest, Exec, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::UpdateResumeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateResumeCamera");

	ABP_CutscenePlayer_C_UpdateResumeCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ReplacePlayer
// (NetRequest, Exec, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::Event_ReplacePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ReplacePlayer");

	ABP_CutscenePlayer_C_Event_ReplacePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.BindOnFinishedLevelSequencePlayer
// (Net, NetReliable, Exec, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::BindOnFinishedLevelSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.BindOnFinishedLevelSequencePlayer");

	ABP_CutscenePlayer_C_BindOnFinishedLevelSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UnbindOnFinishedLevelSequencePlayer
// (Net, NetReliable, Exec, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::UnbindOnFinishedLevelSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.UnbindOnFinishedLevelSequencePlayer");

	ABP_CutscenePlayer_C_UnbindOnFinishedLevelSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnFinishedLevelSequencePlayer
// (NetRequest, Exec, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_OnFinishedLevelSequencePlayer(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnFinishedLevelSequencePlayer");

	ABP_CutscenePlayer_C_OnFinishedLevelSequencePlayer_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_PlayCameraShake
// (NetReliable, Exec, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::Event_PlayCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_PlayCameraShake");

	ABP_CutscenePlayer_C_Event_PlayCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_StopCameraShake
// (Net, Exec, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::Event_StopCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_StopCameraShake");

	ABP_CutscenePlayer_C_Event_StopCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceResetCloth
// (Net, Exec, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::Event_ForceResetCloth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceResetCloth");

	ABP_CutscenePlayer_C_Event_ForceResetCloth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ShowSubtitleFromCharaIndex
// (Net, NetRequest, Native, NetResponse, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::Event_ShowSubtitleFromCharaIndex(const struct FName& CharacterName, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ShowSubtitleFromCharaIndex");

	ABP_CutscenePlayer_C_Event_ShowSubtitleFromCharaIndex_Params params;
	params.CharacterName = CharacterName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.StartCutscene
// (Exec, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::StartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.StartCutscene");

	ABP_CutscenePlayer_C_StartCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.EndCutscene
// (Net, NetReliable, NetRequest, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::EndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.EndCutscene");

	ABP_CutscenePlayer_C_EndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ChangedCamera
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 CameraObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_ChangedCamera(class UObject* CameraObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ChangedCamera");

	ABP_CutscenePlayer_C_ChangedCamera_Params params;
	params.CameraObject = CameraObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceWeather
// (NetReliable, NetRequest, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::Event_ForceWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceWeather");

	ABP_CutscenePlayer_C_Event_ForceWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceMoonPosition
// (NetReliable, NetRequest, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::Event_ForceMoonPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceMoonPosition");

	ABP_CutscenePlayer_C_Event_ForceMoonPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ShowSecondarySubtitle
// (NetReliable, Exec, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   TextLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_Event_ShowSecondarySubtitle(const struct FName& TextLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ShowSecondarySubtitle");

	ABP_CutscenePlayer_C_Event_ShowSecondarySubtitle_Params params;
	params.TextLabel = TextLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_StopSecondarySubtitle
// (Net, NetRequest, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_CutscenePlayer_C::Event_StopSecondarySubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_StopSecondarySubtitle");

	ABP_CutscenePlayer_C_Event_StopSecondarySubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_PlayForceFeedback
// (Net, NetRequest, Exec, Static, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ForceFeedbackID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreTimeDilation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_Event_PlayForceFeedback(const struct FName& ForceFeedbackID, bool bIgnoreTimeDilation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_PlayForceFeedback");

	ABP_CutscenePlayer_C_Event_PlayForceFeedback_Params params;
	params.ForceFeedbackID = ForceFeedbackID;
	params.bIgnoreTimeDilation = bIgnoreTimeDilation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceMipStreaming
// (Net, Exec, Native, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_Event_ForceMipStreaming(const struct FName& LevelName, const struct FName& ObjectName, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceMipStreaming");

	ABP_CutscenePlayer_C_Event_ForceMipStreaming_Params params;
	params.LevelName = LevelName;
	params.ObjectName = ObjectName;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ExecuteUbergraph_BP_CutscenePlayer
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutscenePlayer_C::STATIC_ExecuteUbergraph_BP_CutscenePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.ExecuteUbergraph_BP_CutscenePlayer");

	ABP_CutscenePlayer_C_ExecuteUbergraph_BP_CutscenePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnStartSequence__DelegateSignature
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_CutscenePlayer_C::OnStartSequence__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnStartSequence__DelegateSignature");

	ABP_CutscenePlayer_C_OnStartSequence__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnEndSequence__DelegateSignature
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_CutscenePlayer_C::OnEndSequence__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnEndSequence__DelegateSignature");

	ABP_CutscenePlayer_C_OnEndSequence__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
