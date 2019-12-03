
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

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetChinaTextures
// (NetReliable, NetRequest, Native, Event, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent)

void ABP_MiniGame_Kachofugetsu_C::STATIC_SetChinaTextures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetChinaTextures");

	ABP_MiniGame_Kachofugetsu_C_SetChinaTextures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetAppearRate
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGame_Kachofugetsu_C::STATIC_GetAppearRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetAppearRate");

	ABP_MiniGame_Kachofugetsu_C_GetAppearRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetChinaText
// (NetReliable, Exec, NetResponse, Protected, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Return                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_Kachofugetsu_C::GetChinaText(int Index, struct FString* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetChinaText");

	ABP_MiniGame_Kachofugetsu_C_GetChinaText_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.MainCameraEndPos
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_MiniGame_Kachofugetsu_C::STATIC_MainCameraEndPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.MainCameraEndPos");

	ABP_MiniGame_Kachofugetsu_C_MainCameraEndPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InitializeGameCollision
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::STATIC_InitializeGameCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InitializeGameCollision");

	ABP_MiniGame_Kachofugetsu_C_InitializeGameCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdateBackerEventCount
// (Native, Event, NetResponse, Static, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::STATIC_UpdateBackerEventCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdateBackerEventCount");

	ABP_MiniGame_Kachofugetsu_C_UpdateBackerEventCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetDetectAction
// (NetRequest, Event, NetResponse, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_Kachofugetsu_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetDetectAction");

	ABP_MiniGame_Kachofugetsu_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetResultWaitTime
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// TEnumAsByte<EMiniGameKFTypeEnum> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGame_Kachofugetsu_C::GetResultWaitTime(TEnumAsByte<EMiniGameKFTypeEnum> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetResultWaitTime");

	ABP_MiniGame_Kachofugetsu_C_GetResultWaitTime_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetRandomResult
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMiniGameKFTypeEnum> IgnoreType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseIgnoreType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMiniGameKFTypeEnum> Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_GetRandomResult(TEnumAsByte<EMiniGameKFTypeEnum> IgnoreType, bool UseIgnoreType, TEnumAsByte<EMiniGameKFTypeEnum>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetRandomResult");

	ABP_MiniGame_Kachofugetsu_C_GetRandomResult_Params params;
	params.IgnoreType = IgnoreType;
	params.UseIgnoreType = UseIgnoreType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdatePlayCountWinFlag
// (NetResponse, Protected, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::UpdatePlayCountWinFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdatePlayCountWinFlag");

	ABP_MiniGame_Kachofugetsu_C_UpdatePlayCountWinFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SpawnForceResultSequence
// (Exec, Native, Event, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMiniGameKFTypeEnum> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::SpawnForceResultSequence(TEnumAsByte<EMiniGameKFTypeEnum> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SpawnForceResultSequence");

	ABP_MiniGame_Kachofugetsu_C_SpawnForceResultSequence_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetClothMeshComponent
// (Net, NetRequest, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_Kachofugetsu_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetClothMeshComponent");

	ABP_MiniGame_Kachofugetsu_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetLevelSequence
// (NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// TEnumAsByte<EMiniGameKFTypeEnum> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          Sequence                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::GetLevelSequence(TEnumAsByte<EMiniGameKFTypeEnum> Type, class ULevelSequence** Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetLevelSequence");

	ABP_MiniGame_Kachofugetsu_C_GetLevelSequence_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sequence != nullptr)
		*Sequence = params.Sequence;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InitAsyncLoad
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InitAsyncLoad");

	ABP_MiniGame_Kachofugetsu_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.CalcForceWinRate
// (Native, Event, NetResponse, Static, MulticastDelegate, Public, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::STATIC_CalcForceWinRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.CalcForceWinRate");

	ABP_MiniGame_Kachofugetsu_C_CalcForceWinRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsForceWinByFortune
// (Exec, Native, Event, NetResponse, Static, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsForceWin                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_IsForceWinByFortune(bool* IsForceWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsForceWinByFortune");

	ABP_MiniGame_Kachofugetsu_C_IsForceWinByFortune_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsForceWin != nullptr)
		*IsForceWin = params.IsForceWin;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsBackerEvent
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsEvent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_IsBackerEvent(bool* IsEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsBackerEvent");

	ABP_MiniGame_Kachofugetsu_C_IsBackerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEvent != nullptr)
		*IsEvent = params.IsEvent;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetGameCollisionEnabled
// (NetReliable, NetRequest, Exec, Event, NetResponse, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::SetGameCollisionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetGameCollisionEnabled");

	ABP_MiniGame_Kachofugetsu_C_SetGameCollisionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsEventStep
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_Kachofugetsu_C::IsEventStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsEventStep");

	ABP_MiniGame_Kachofugetsu_C_IsEventStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SaveEventLosing
// (Event, Static, NetMulticast, Public, Private, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::STATIC_SaveEventLosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SaveEventLosing");

	ABP_MiniGame_Kachofugetsu_C_SaveEventLosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsForceWin
// (NetRequest, Exec, Event, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ForceWin                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::IsForceWin(bool* ForceWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsForceWin");

	ABP_MiniGame_Kachofugetsu_C_IsForceWin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForceWin != nullptr)
		*ForceWin = params.ForceWin;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.LoadEventLosing
// (NetRequest, Native, NetResponse, Protected, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::LoadEventLosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.LoadEventLosing");

	ABP_MiniGame_Kachofugetsu_C_LoadEventLosing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetBoardInfo
// (NetMulticast, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::SetBoardInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetBoardInfo");

	ABP_MiniGame_Kachofugetsu_C_SetBoardInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetBallThrowPower
// (Net, Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, Const)
// Parameters:
// float                          Power                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::GetBallThrowPower(float* Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetBallThrowPower");

	ABP_MiniGame_Kachofugetsu_C_GetBallThrowPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Power != nullptr)
		*Power = params.Power;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DetachAndThrowBall
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::STATIC_DetachAndThrowBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DetachAndThrowBall");

	ABP_MiniGame_Kachofugetsu_C_DetachAndThrowBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetAnimInstance
// (Net, Exec, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_MiniGame_KF_Ryo_C*  AsABP_Mini_Game_KF_Ryo         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::GetAnimInstance(class UABP_MiniGame_KF_Ryo_C** AsABP_Mini_Game_KF_Ryo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetAnimInstance");

	ABP_MiniGame_Kachofugetsu_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsABP_Mini_Game_KF_Ryo != nullptr)
		*AsABP_Mini_Game_KF_Ryo = params.AsABP_Mini_Game_KF_Ryo;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ForceRepay
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::STATIC_ForceRepay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ForceRepay");

	ABP_MiniGame_Kachofugetsu_C_ForceRepay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdateBallMove
// (Net, NetRequest, Native, Event, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::UpdateBallMove(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdateBallMove");

	ABP_MiniGame_Kachofugetsu_C_UpdateBallMove_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InitializeValue
// (Exec, Native, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::STATIC_InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InitializeValue");

	ABP_MiniGame_Kachofugetsu_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdateGameMainCamera
// (NetReliable, Exec, Native, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::UpdateGameMainCamera(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdateGameMainCamera");

	ABP_MiniGame_Kachofugetsu_C_UpdateGameMainCamera_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SpawnBall
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::STATIC_SpawnBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SpawnBall");

	ABP_MiniGame_Kachofugetsu_C_SpawnBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DecideType
// (Net, NetReliable, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::DecideType(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DecideType");

	ABP_MiniGame_Kachofugetsu_C_DecideType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetPlayerMeshPos
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// struct FVector                 pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::SetPlayerMeshPos(const struct FVector& pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetPlayerMeshPos");

	ABP_MiniGame_Kachofugetsu_C_SetPlayerMeshPos_Params params;
	params.pos = pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InterpPlayerMeshPos
// (NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::InterpPlayerMeshPos(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InterpPlayerMeshPos");

	ABP_MiniGame_Kachofugetsu_C_InterpPlayerMeshPos_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InputAction
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMiniGameKFTypeEnum> Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::InputAction(TEnumAsByte<EMiniGameKFTypeEnum> Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InputAction");

	ABP_MiniGame_Kachofugetsu_C_InputAction_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SpawnInputControlActor
// (NetRequest, NetResponse, Static, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_Kachofugetsu_C::STATIC_SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SpawnInputControlActor");

	ABP_MiniGame_Kachofugetsu_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UserConstructionScript
// (Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, Const)

void ABP_MiniGame_Kachofugetsu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UserConstructionScript");

	ABP_MiniGame_Kachofugetsu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__FlowerCol_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__FlowerCol_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__FlowerCol_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__FlowerCol_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__FlowerCol_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_BndEvt__FlowerCol_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__FlowerCol_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__FlowerCol_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BirdCol_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__BirdCol_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BirdCol_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__BirdCol_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BirdCol_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (NetReliable, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_BndEvt__BirdCol_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BirdCol_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__BirdCol_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__WindCol_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_BndEvt__WindCol_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__WindCol_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__WindCol_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__WindCol_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (Exec, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_BndEvt__WindCol_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__WindCol_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__WindCol_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__MoonCol_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_BndEvt__MoonCol_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__MoonCol_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__MoonCol_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__MoonCol_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_BndEvt__MoonCol_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__MoonCol_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__MoonCol_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__GameArea_K2Node_ComponentBoundEvent_656_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_BndEvt__GameArea_K2Node_ComponentBoundEvent_656_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__GameArea_K2Node_ComponentBoundEvent_656_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__GameArea_K2Node_ComponentBoundEvent_656_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__CoverCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__CoverCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__CoverCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__CoverCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__BowlCol1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol2_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__BowlCol2_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol2_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol2_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol3_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__BowlCol3_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol3_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol3_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol4_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__BowlCol4_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol4_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol4_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol5_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__BowlCol5_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol5_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol5_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.WinMiniGame
// (NetReliable, Native, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.WinMiniGame");

	ABP_MiniGame_Kachofugetsu_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.LoseMiniGame
// (NetReliable, Native, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.LoseMiniGame");

	ABP_MiniGame_Kachofugetsu_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DrawMiniGame
// (Net, Native, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DrawMiniGame");

	ABP_MiniGame_Kachofugetsu_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.StartMiniGame
// (Net, Native, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.StartMiniGame");

	ABP_MiniGame_Kachofugetsu_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.EndMiniGame
// (Native, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.EndMiniGame");

	ABP_MiniGame_Kachofugetsu_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.FinalizeTalk
// (Net, NetReliable, Exec, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.FinalizeTalk");

	ABP_MiniGame_Kachofugetsu_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.OnFinishedFade
// (Net, NetReliable, NetRequest, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.OnFinishedFade");

	ABP_MiniGame_Kachofugetsu_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ReceiveBeginPlay
// (Native, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ReceiveBeginPlay");

	ABP_MiniGame_Kachofugetsu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ReceiveTick
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ReceiveTick");

	ABP_MiniGame_Kachofugetsu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (NetReliable, NetRequest, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (NetReliable, NetRequest, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_MiniGame_Kachofugetsu_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.OnTalkScriptEvent
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.OnTalkScriptEvent");

	ABP_MiniGame_Kachofugetsu_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ResumeMiniGame
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGame_Kachofugetsu_C::STATIC_ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ResumeMiniGame");

	ABP_MiniGame_Kachofugetsu_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ThrowBall
// (NetReliable, NetRequest, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::ThrowBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ThrowBall");

	ABP_MiniGame_Kachofugetsu_C_ThrowBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.FlowSelectDecideEvent
// (Net, NetRequest, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::FlowSelectDecideEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.FlowSelectDecideEvent");

	ABP_MiniGame_Kachofugetsu_C_FlowSelectDecideEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ThrowBallFromAnim
// (Net, NetRequest, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::ThrowBallFromAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ThrowBallFromAnim");

	ABP_MiniGame_Kachofugetsu_C_ThrowBallFromAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.StopThrowBallSE
// (NetRequest, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::StopThrowBallSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.StopThrowBallSE");

	ABP_MiniGame_Kachofugetsu_C_StopThrowBallSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BindBallHitXEvent
// (NetRequest, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::BindBallHitXEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BindBallHitXEvent");

	ABP_MiniGame_Kachofugetsu_C_BindBallHitXEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ForceWin
// (Net, NetReliable, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::ForceWin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ForceWin");

	ABP_MiniGame_Kachofugetsu_C_ForceWin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.CancelMiniGame
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.CancelMiniGame");

	ABP_MiniGame_Kachofugetsu_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ConsumeGamblePrice
// (Net, NetReliable, Exec, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Kachofugetsu_C::ConsumeGamblePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ConsumeGamblePrice");

	ABP_MiniGame_Kachofugetsu_C_ConsumeGamblePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ForceLoseEvent
// (Net, NetReliable, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::ForceLoseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ForceLoseEvent");

	ABP_MiniGame_Kachofugetsu_C_ForceLoseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DelayedInitialize
// (NetReliable, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::DelayedInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DelayedInitialize");

	ABP_MiniGame_Kachofugetsu_C_DelayedInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GameFlowForChina
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMiniGameKFTypeEnum> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::STATIC_GameFlowForChina(TEnumAsByte<EMiniGameKFTypeEnum> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GameFlowForChina");

	ABP_MiniGame_Kachofugetsu_C_GameFlowForChina_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ActionForChina
// (Net, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::ActionForChina()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ActionForChina");

	ABP_MiniGame_Kachofugetsu_C_ActionForChina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.PlayAppearUIAnim
// (Net, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::PlayAppearUIAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.PlayAppearUIAnim");

	ABP_MiniGame_Kachofugetsu_C_PlayAppearUIAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DecideResultForChina
// (Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::DecideResultForChina()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DecideResultForChina");

	ABP_MiniGame_Kachofugetsu_C_DecideResultForChina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BeginPause
// (Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::BeginPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BeginPause");

	ABP_MiniGame_Kachofugetsu_C_BeginPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.EndPause
// (Net, NetReliable, NetRequest, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Kachofugetsu_C::EndPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.EndPause");

	ABP_MiniGame_Kachofugetsu_C_EndPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ExecuteUbergraph_BP_MiniGame_Kachofugetsu
// (Net, NetRequest, Native, NetResponse, NetMulticast, Protected, Delegate, HasOutParms, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Kachofugetsu_C::ExecuteUbergraph_BP_MiniGame_Kachofugetsu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ExecuteUbergraph_BP_MiniGame_Kachofugetsu");

	ABP_MiniGame_Kachofugetsu_C_ExecuteUbergraph_BP_MiniGame_Kachofugetsu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
