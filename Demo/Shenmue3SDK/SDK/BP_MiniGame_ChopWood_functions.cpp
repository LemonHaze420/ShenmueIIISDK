
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

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.UpdateMeshWetness
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::UpdateMeshWetness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.UpdateMeshWetness");

	ABP_MiniGame_ChopWood_C_UpdateMeshWetness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_ChopWood_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GetDetectAction");

	ABP_MiniGame_ChopWood_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetVisibleUIButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::SetVisibleUIButtonIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetVisibleUIButtonIcon");

	ABP_MiniGame_ChopWood_C_SetVisibleUIButtonIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GetClothMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_ChopWood_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GetClothMeshComponent");

	ABP_MiniGame_ChopWood_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.InitAsyncLoad");

	ABP_MiniGame_ChopWood_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StopAllChopBGM
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::StopAllChopBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StopAllChopBGM");

	ABP_MiniGame_ChopWood_C_StopAllChopBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StopChopBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_CW_BGMType> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::StopChopBGM(TEnumAsByte<E_MiniGame_CW_BGMType> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StopChopBGM");

	ABP_MiniGame_ChopWood_C_StopChopBGM_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlayChopBGMFromCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_CW_BGMType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::PlayChopBGMFromCue(TEnumAsByte<E_MiniGame_CW_BGMType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlayChopBGMFromCue");

	ABP_MiniGame_ChopWood_C_PlayChopBGMFromCue_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.DecideWoodId
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::DecideWoodId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.DecideWoodId");

	ABP_MiniGame_ChopWood_C_DecideWoodId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.UpdateChopCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::UpdateChopCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.UpdateChopCount");

	ABP_MiniGame_ChopWood_C_UpdateChopCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetAnimXmoveFromHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           JustHit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlusAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::SetAnimXmoveFromHit(bool JustHit, bool PlusAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetAnimXmoveFromHit");

	ABP_MiniGame_ChopWood_C_SetAnimXmoveFromHit_Params params;
	params.JustHit = JustHit;
	params.PlusAngle = PlusAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.AddDebugVolumeType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::AddDebugVolumeType(int Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.AddDebugVolumeType");

	ABP_MiniGame_ChopWood_C_AddDebugVolumeType_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::SetVolume(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetVolume");

	ABP_MiniGame_ChopWood_C_SetVolume_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.CheckHitWood
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           JustHit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::CheckHitWood(bool* Hit, bool* JustHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.CheckHitWood");

	ABP_MiniGame_ChopWood_C_CheckHitWood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (JustHit != nullptr)
		*JustHit = params.JustHit;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.IsGameFinished
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_ChopWood_C::IsGameFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.IsGameFinished");

	ABP_MiniGame_ChopWood_C_IsGameFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_ChopWood_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SpawnInputControlActor");

	ABP_MiniGame_ChopWood_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SpawnWood
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::SpawnWood()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SpawnWood");

	ABP_MiniGame_ChopWood_C_SpawnWood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.UserConstructionScript");

	ABP_MiniGame_ChopWood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.TImeline_Xmove__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::TImeline_Xmove__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.TImeline_Xmove__FinishedFunc");

	ABP_MiniGame_ChopWood_C_TImeline_Xmove__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.TImeline_Xmove__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::TImeline_Xmove__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.TImeline_Xmove__UpdateFunc");

	ABP_MiniGame_ChopWood_C_TImeline_Xmove__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Timeline_Ymove_Chop__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__FinishedFunc");

	ABP_MiniGame_ChopWood_C_Timeline_Ymove_Chop__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Timeline_Ymove_Chop__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__UpdateFunc");

	ABP_MiniGame_ChopWood_C_Timeline_Ymove_Chop__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__EndHitCheck__EventFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Timeline_Ymove_Chop__EndHitCheck__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__EndHitCheck__EventFunc");

	ABP_MiniGame_ChopWood_C_Timeline_Ymove_Chop__EndHitCheck__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__TimingOfHit__EventFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Timeline_Ymove_Chop__TimingOfHit__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__TimingOfHit__EventFunc");

	ABP_MiniGame_ChopWood_C_Timeline_Ymove_Chop__TimingOfHit__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Reset__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Timeline_Ymove_Reset__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Reset__FinishedFunc");

	ABP_MiniGame_ChopWood_C_Timeline_Ymove_Reset__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Reset__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Timeline_Ymove_Reset__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Reset__UpdateFunc");

	ABP_MiniGame_ChopWood_C_Timeline_Ymove_Reset__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_UpdatFieldOfView__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Timeline_UpdatFieldOfView__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_UpdatFieldOfView__FinishedFunc");

	ABP_MiniGame_ChopWood_C_Timeline_UpdatFieldOfView__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_UpdatFieldOfView__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Timeline_UpdatFieldOfView__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_UpdatFieldOfView__UpdateFunc");

	ABP_MiniGame_ChopWood_C_Timeline_UpdatFieldOfView__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.OnFinishedFade
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.OnFinishedFade");

	ABP_MiniGame_ChopWood_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.FinalizeTalk");

	ABP_MiniGame_ChopWood_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.DrawMiniGame");

	ABP_MiniGame_ChopWood_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.LoseMiniGame");

	ABP_MiniGame_ChopWood_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.WinMiniGame");

	ABP_MiniGame_ChopWood_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.EndMiniGame");

	ABP_MiniGame_ChopWood_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.OnfinishedSequence_Start
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::OnfinishedSequence_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.OnfinishedSequence_Start");

	ABP_MiniGame_ChopWood_C_OnfinishedSequence_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlaySEResultWood
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::PlaySEResultWood()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlaySEResultWood");

	ABP_MiniGame_ChopWood_C_PlaySEResultWood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlaySEResultMoney
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::PlaySEResultMoney()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlaySEResultMoney");

	ABP_MiniGame_ChopWood_C_PlaySEResultMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Event_WidgetEndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Event_WidgetEndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Event_WidgetEndMiniGame");

	ABP_MiniGame_ChopWood_C_Event_WidgetEndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.DelayedPauseAnim
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::DelayedPauseAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.DelayedPauseAnim");

	ABP_MiniGame_ChopWood_C_DelayedPauseAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StartMiniGame");

	ABP_MiniGame_ChopWood_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ReceiveBeginPlay");

	ABP_MiniGame_ChopWood_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GameStart
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::GameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GameStart");

	ABP_MiniGame_ChopWood_C_GameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.AxAction
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::AxAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.AxAction");

	ABP_MiniGame_ChopWood_C_AxAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ReceiveTick");

	ABP_MiniGame_ChopWood_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ResetResultMenuEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::ResetResultMenuEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ResetResultMenuEvent");

	ABP_MiniGame_ChopWood_C_ResetResultMenuEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlayGetWoodMotion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::PlayGetWoodMotion(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlayGetWoodMotion");

	ABP_MiniGame_ChopWood_C_PlayGetWoodMotion_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ReadyWood
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::ReadyWood()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ReadyWood");

	ABP_MiniGame_ChopWood_C_ReadyWood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetXmoveTimeLine
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::SetXmoveTimeLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetXmoveTimeLine");

	ABP_MiniGame_ChopWood_C_SetXmoveTimeLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GameStartEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::GameStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GameStartEvent");

	ABP_MiniGame_ChopWood_C_GameStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Event_EndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChopWood_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Event_EndMiniGame");

	ABP_MiniGame_ChopWood_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ExecuteUbergraph_BP_MiniGame_ChopWood
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChopWood_C::ExecuteUbergraph_BP_MiniGame_ChopWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ExecuteUbergraph_BP_MiniGame_ChopWood");

	ABP_MiniGame_ChopWood_C_ExecuteUbergraph_BP_MiniGame_ChopWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
