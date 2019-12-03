
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

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.OverwriteWithAnimation
// (NetRequest, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_OverwriteWithAnimation(bool* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.OverwriteWithAnimation");

	ABP_CutsceneSkeletalMeshActor_C_OverwriteWithAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.CheckWetness
// (Net, NetReliable, Native, Event, Static, Public, Protected, Delegate, NetServer, NetClient, DLLImport)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_CheckWetness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.CheckWetness");

	ABP_CutsceneSkeletalMeshActor_C_CheckWetness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetManualEyeCloseRate
// (NetReliable, NetRequest, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetManualEyeCloseRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetManualEyeCloseRate");

	ABP_CutsceneSkeletalMeshActor_C_GetManualEyeCloseRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsManualEyeClose
// (Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneSkeletalMeshActor_C::STATIC_IsManualEyeClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsManualEyeClose");

	ABP_CutsceneSkeletalMeshActor_C_IsManualEyeClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationVerticalBaseAngle
// (Net, NetReliable, NetRequest, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetEyeRotationVerticalBaseAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationVerticalBaseAngle");

	ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationVerticalBaseAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationHorizontalBaseAngle
// (Net, NetReliable, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetEyeRotationHorizontalBaseAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationHorizontalBaseAngle");

	ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationHorizontalBaseAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationVerticalRate
// (NetReliable, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetEyeRotationVerticalRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationVerticalRate");

	ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationVerticalRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationHorizontalRate
// (Net, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetEyeRotationHorizontalRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationHorizontalRate");

	ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationHorizontalRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationAlpha
// (Net, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetEyeRotationAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationAlpha");

	ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetupIndoorCollision
// (NetReliable, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_CutsceneSkeletalMeshActor_C::SetupIndoorCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetupIndoorCollision");

	ABP_CutsceneSkeletalMeshActor_C_SetupIndoorCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetProfile
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS3CharacterProfile     Profile                        (Parm, OutParm)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_GetProfile(struct FS3CharacterProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetProfile");

	ABP_CutsceneSkeletalMeshActor_C_GetProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetProfileFromTable
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_SetProfileFromTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetProfileFromTable");

	ABP_CutsceneSkeletalMeshActor_C_SetProfileFromTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetRightHandIKAlpha
// (Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetRightHandIKAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetRightHandIKAlpha");

	ABP_CutsceneSkeletalMeshActor_C_GetRightHandIKAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetRightHandIKEffectorTarget
// (NetReliable, NetRequest, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_CutsceneSkeletalMeshActor_C::STATIC_GetRightHandIKEffectorTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetRightHandIKEffectorTarget");

	ABP_CutsceneSkeletalMeshActor_C_GetRightHandIKEffectorTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsUseRightHandIK
// (Net, NetRequest, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneSkeletalMeshActor_C::STATIC_IsUseRightHandIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsUseRightHandIK");

	ABP_CutsceneSkeletalMeshActor_C_IsUseRightHandIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetLeftHandIKAlpha
// (Net, NetReliable, NetRequest, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetLeftHandIKAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetLeftHandIKAlpha");

	ABP_CutsceneSkeletalMeshActor_C_GetLeftHandIKAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetLeftHandIKEffectorTarget
// (Net, Native, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_CutsceneSkeletalMeshActor_C::STATIC_GetLeftHandIKEffectorTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetLeftHandIKEffectorTarget");

	ABP_CutsceneSkeletalMeshActor_C_GetLeftHandIKEffectorTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsUseLeftHandIK
// (Native, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneSkeletalMeshActor_C::STATIC_IsUseLeftHandIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsUseLeftHandIK");

	ABP_CutsceneSkeletalMeshActor_C_IsUseLeftHandIK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetCharaName
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_CutsceneSkeletalMeshActor_C::GetCharaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetCharaName");

	ABP_CutsceneSkeletalMeshActor_C_GetCharaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightFullBody_SEQ2
// (NetReliable, NetRequest, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetWeightFullBody_SEQ2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightFullBody_SEQ2");

	ABP_CutsceneSkeletalMeshActor_C_GetWeightFullBody_SEQ2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightH_R2
// (Net, NetRequest, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetWeightH_R2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightH_R2");

	ABP_CutsceneSkeletalMeshActor_C_GetWeightH_R2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightH_L2
// (NetRequest, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetWeightH_L2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightH_L2");

	ABP_CutsceneSkeletalMeshActor_C_GetWeightH_L2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledCalcEmotion
// (Net, NetRequest, Exec, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneSkeletalMeshActor_C::STATIC_IsEnabledCalcEmotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledCalcEmotion");

	ABP_CutsceneSkeletalMeshActor_C_IsEnabledCalcEmotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsForceEyeClose
// (NetRequest, Exec, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneSkeletalMeshActor_C::STATIC_IsForceEyeClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsForceEyeClose");

	ABP_CutsceneSkeletalMeshActor_C_IsForceEyeClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightF_SEQ2
// (NetRequest, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneSkeletalMeshActor_C::GetWeightF_SEQ2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightF_SEQ2");

	ABP_CutsceneSkeletalMeshActor_C_GetWeightF_SEQ2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsTalkSelf
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneSkeletalMeshActor_C::STATIC_IsTalkSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsTalkSelf");

	ABP_CutsceneSkeletalMeshActor_C_IsTalkSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledFreeStateEmotion
// (Net, NetReliable, Exec, Static, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneSkeletalMeshActor_C::STATIC_IsEnabledFreeStateEmotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledFreeStateEmotion");

	ABP_CutsceneSkeletalMeshActor_C_IsEnabledFreeStateEmotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ReleaseCutscenePlayer
// (Net, NetReliable, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_ReleaseCutscenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ReleaseCutscenePlayer");

	ABP_CutsceneSkeletalMeshActor_C_ReleaseCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetCutscenePlayer
// (Net, NetRequest, Native, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_CutscenePlayer_C*    CutscenePlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_SetCutscenePlayer(class ABP_CutscenePlayer_C* CutscenePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetCutscenePlayer");

	ABP_CutsceneSkeletalMeshActor_C_SetCutscenePlayer_Params params;
	params.CutscenePlayer = CutscenePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledEyeBlink
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneSkeletalMeshActor_C::IsEnabledEyeBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledEyeBlink");

	ABP_CutsceneSkeletalMeshActor_C_IsEnabledEyeBlink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledClipper
// (Net, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneSkeletalMeshActor_C::IsEnabledClipper()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledClipper");

	ABP_CutsceneSkeletalMeshActor_C_IsEnabledClipper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetUpdateEnabled
// (NetRequest, Native, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_SetUpdateEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetUpdateEnabled");

	ABP_CutsceneSkeletalMeshActor_C_SetUpdateEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.UserConstructionScript
// (NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.UserConstructionScript");

	ABP_CutsceneSkeletalMeshActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SpawnMiniGame
// (Net, NetReliable, Native, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_SpawnMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SpawnMiniGame");

	ABP_CutsceneSkeletalMeshActor_C_SpawnMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ChangedClothes
// (Net, Exec, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_ChangedClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ChangedClothes");

	ABP_CutsceneSkeletalMeshActor_C_ChangedClothes_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ReceiveBeginPlay
// (NetReliable, Native, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_CutsceneSkeletalMeshActor_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ReceiveBeginPlay");

	ABP_CutsceneSkeletalMeshActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ExecuteUbergraph_BP_CutsceneSkeletalMeshActor
// (NetResponse, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneSkeletalMeshActor_C::ExecuteUbergraph_BP_CutsceneSkeletalMeshActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ExecuteUbergraph_BP_CutsceneSkeletalMeshActor");

	ABP_CutsceneSkeletalMeshActor_C_ExecuteUbergraph_BP_CutsceneSkeletalMeshActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
