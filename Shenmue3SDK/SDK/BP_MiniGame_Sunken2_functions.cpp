
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

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckBarTiming
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsJust                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsEx                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::CheckBarTiming(bool* IsJust, bool* IsEx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckBarTiming");

	ABP_MiniGame_Sunken2_C_CheckBarTiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJust != nullptr)
		*IsJust = params.IsJust;
	if (IsEx != nullptr)
		*IsEx = params.IsEx;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetIdleMotionPlayRate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::SetIdleMotionPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetIdleMotionPlayRate");

	ABP_MiniGame_Sunken2_C_SetIdleMotionPlayRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetHelpPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_MiniGame_Sunken2_C::GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetHelpPriority");

	ABP_MiniGame_Sunken2_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WaitBarUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WaitMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WaitEnd                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::WaitBarUpdate(float WaitMax, bool* WaitEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WaitBarUpdate");

	ABP_MiniGame_Sunken2_C_WaitBarUpdate_Params params;
	params.WaitMax = WaitMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitEnd != nullptr)
		*WaitEnd = params.WaitEnd;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AppendPreloadLabels
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FST_MG_SupportNPCAction> Actions                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGame_Sunken2_C::AppendPreloadLabels(TArray<struct FName>* Labels, TArray<struct FST_MG_SupportNPCAction>* Actions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AppendPreloadLabels");

	ABP_MiniGame_Sunken2_C_AppendPreloadLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
	if (Actions != nullptr)
		*Actions = params.Actions;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetPreloadLabels
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::SetPreloadLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetPreloadLabels");

	ABP_MiniGame_Sunken2_C_SetPreloadLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetClothMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_Sunken2_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetClothMeshComponent");

	ABP_MiniGame_Sunken2_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InitAsyncLoad");

	ABP_MiniGame_Sunken2_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CalcDifficulty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::CalcDifficulty(bool* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CalcDifficulty");

	ABP_MiniGame_Sunken2_C_CalcDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Change != nullptr)
		*Change = params.Change;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_Sunken2_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetDetectAction");

	ABP_MiniGame_Sunken2_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Enabled3DUISideBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::Enabled3DUISideBar(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Enabled3DUISideBar");

	ABP_MiniGame_Sunken2_C_Enabled3DUISideBar_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Update3DUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::Update3DUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Update3DUI");

	ABP_MiniGame_Sunken2_C_Update3DUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetDifficultyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::SetDifficultyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetDifficultyData");

	ABP_MiniGame_Sunken2_C_SetDifficultyData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DecideWoodId
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::DecideWoodId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DecideWoodId");

	ABP_MiniGame_Sunken2_C_DecideWoodId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UpdateChopCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::UpdateChopCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UpdateChopCount");

	ABP_MiniGame_Sunken2_C_UpdateChopCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.IsGameFinished
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_Sunken2_C::IsGameFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.IsGameFinished");

	ABP_MiniGame_Sunken2_C_IsGameFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_Sunken2_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SpawnInputControlActor");

	ABP_MiniGame_Sunken2_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UserConstructionScript");

	ABP_MiniGame_Sunken2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken2_C::Timeline_UpdatFieldOfView__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__FinishedFunc");

	ABP_MiniGame_Sunken2_C_Timeline_UpdatFieldOfView__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken2_C::Timeline_UpdatFieldOfView__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__UpdateFunc");

	ABP_MiniGame_Sunken2_C_Timeline_UpdatFieldOfView__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken2_C::NormalHitObjectImpact__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__FinishedFunc");

	ABP_MiniGame_Sunken2_C_NormalHitObjectImpact__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken2_C::NormalHitObjectImpact__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__UpdateFunc");

	ABP_MiniGame_Sunken2_C_NormalHitObjectImpact__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken2_C::Timeline_EyeClose__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__FinishedFunc");

	ABP_MiniGame_Sunken2_C_Timeline_EyeClose__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken2_C::Timeline_EyeClose__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__UpdateFunc");

	ABP_MiniGame_Sunken2_C_Timeline_EyeClose__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.StartMiniGame");

	ABP_MiniGame_Sunken2_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndMiniGame");

	ABP_MiniGame_Sunken2_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WinMiniGame");

	ABP_MiniGame_Sunken2_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.LoseMiniGame");

	ABP_MiniGame_Sunken2_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DrawMiniGame");

	ABP_MiniGame_Sunken2_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedFade
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedFade");

	ABP_MiniGame_Sunken2_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.FinalizeTalk");

	ABP_MiniGame_Sunken2_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedCoinSequence
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::OnFinishedCoinSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedCoinSequence");

	ABP_MiniGame_Sunken2_C_OnFinishedCoinSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedStart
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::OnFinishedStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedStart");

	ABP_MiniGame_Sunken2_C_OnFinishedStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_TimeUp
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::Event_TimeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_TimeUp");

	ABP_MiniGame_Sunken2_C_Event_TimeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_SkillCountMax
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::Event_SkillCountMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_SkillCountMax");

	ABP_MiniGame_Sunken2_C_Event_SkillCountMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_ResultEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::Event_ResultEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_ResultEnd");

	ABP_MiniGame_Sunken2_C_Event_ResultEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveBeginPlay");

	ABP_MiniGame_Sunken2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStart
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::GameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStart");

	ABP_MiniGame_Sunken2_C_GameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AxAction
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::AxAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AxAction");

	ABP_MiniGame_Sunken2_C_AxAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveTick");

	ABP_MiniGame_Sunken2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ResetResultMenuEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::ResetResultMenuEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ResetResultMenuEvent");

	ABP_MiniGame_Sunken2_C_ResetResultMenuEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStartEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::GameStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStartEvent");

	ABP_MiniGame_Sunken2_C_GameStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonRight
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::InputAction_ButtonRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonRight");

	ABP_MiniGame_Sunken2_C_InputAction_ButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PunchMotionEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::PunchMotionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PunchMotionEnd");

	ABP_MiniGame_Sunken2_C_PunchMotionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayCameraImpact
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::PlayCameraImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayCameraImpact");

	ABP_MiniGame_Sunken2_C_PlayCameraImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonTop
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::InputAction_ButtonTop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonTop");

	ABP_MiniGame_Sunken2_C_InputAction_ButtonTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonBottom
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::InputAction_ButtonBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonBottom");

	ABP_MiniGame_Sunken2_C_InputAction_ButtonBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ImpactToObject
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::ImpactToObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ImpactToObject");

	ABP_MiniGame_Sunken2_C_ImpactToObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayEyeCloseTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::PlayEyeCloseTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayEyeCloseTimeline");

	ABP_MiniGame_Sunken2_C_PlayEyeCloseTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndEyeCloseTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken2_C::EndEyeCloseTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndEyeCloseTimeline");

	ABP_MiniGame_Sunken2_C_EndEyeCloseTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ExecuteUbergraph_BP_MiniGame_Sunken2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::ExecuteUbergraph_BP_MiniGame_Sunken2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ExecuteUbergraph_BP_MiniGame_Sunken2");

	ABP_MiniGame_Sunken2_C_ExecuteUbergraph_BP_MiniGame_Sunken2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
