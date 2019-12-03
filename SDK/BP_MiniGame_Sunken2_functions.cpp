
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

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckEnabledFlagState
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           UseFlag                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::STATIC_CheckEnabledFlagState(bool* UseFlag, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckEnabledFlagState");

	ABP_MiniGame_Sunken2_C_CheckEnabledFlagState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseFlag != nullptr)
		*UseFlag = params.UseFlag;
	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckFirstDetection
// (NetReliable, Exec, Native, Static, Protected, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFirst                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::STATIC_CheckFirstDetection(bool* IsFirst)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckFirstDetection");

	ABP_MiniGame_Sunken2_C_CheckFirstDetection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFirst != nullptr)
		*IsFirst = params.IsFirst;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckBarTiming
// (NetRequest, Native, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsJust                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsEx                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::STATIC_CheckBarTiming(bool* IsJust, bool* IsEx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckBarTiming");

	ABP_MiniGame_Sunken2_C_CheckBarTiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJust != nullptr)
		*IsJust = params.IsJust;
	if (IsEx != nullptr)
		*IsEx = params.IsEx;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetIdleMotionPlayRate
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::STATIC_SetIdleMotionPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetIdleMotionPlayRate");

	ABP_MiniGame_Sunken2_C_SetIdleMotionPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetHelpPriority
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_MiniGame_Sunken2_C::STATIC_GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetHelpPriority");

	ABP_MiniGame_Sunken2_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WaitBarUpdate
// (Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          WaitMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WaitEnd                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::WaitBarUpdate(float WaitMax, bool* WaitEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WaitBarUpdate");

	ABP_MiniGame_Sunken2_C_WaitBarUpdate_Params params;
	params.WaitMax = WaitMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitEnd != nullptr)
		*WaitEnd = params.WaitEnd;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AppendPreloadLabels
// (Exec, Native, NetMulticast, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FST_MG_SupportNPCAction> Actions                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGame_Sunken2_C::AppendPreloadLabels(TArray<struct FName>* Labels, TArray<struct FST_MG_SupportNPCAction>* Actions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AppendPreloadLabels");

	ABP_MiniGame_Sunken2_C_AppendPreloadLabels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
	if (Actions != nullptr)
		*Actions = params.Actions;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetPreloadLabels
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::SetPreloadLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetPreloadLabels");

	ABP_MiniGame_Sunken2_C_SetPreloadLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetClothMeshComponent
// (Net, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::STATIC_InitAsyncLoad(bool* dummy)
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
// (Net, NetReliable, Native, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           Change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::CalcDifficulty(bool* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CalcDifficulty");

	ABP_MiniGame_Sunken2_C_CalcDifficulty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Change != nullptr)
		*Change = params.Change;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetDetectAction
// (NetRequest, NetResponse, Static, NetMulticast, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_Sunken2_C::STATIC_GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetDetectAction");

	ABP_MiniGame_Sunken2_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Enabled3DUISideBar
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure)

void ABP_MiniGame_Sunken2_C::Update3DUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Update3DUI");

	ABP_MiniGame_Sunken2_C_Update3DUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetDifficultyData
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::STATIC_SetDifficultyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetDifficultyData");

	ABP_MiniGame_Sunken2_C_SetDifficultyData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DecideWoodId
// (Net, NetReliable, Exec, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::DecideWoodId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DecideWoodId");

	ABP_MiniGame_Sunken2_C_DecideWoodId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UpdateChopCount
// (Net, Exec, Native, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::UpdateChopCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UpdateChopCount");

	ABP_MiniGame_Sunken2_C_UpdateChopCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.IsGameFinished
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
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
// (NetRequest, NetResponse, Static, Private, Delegate, NetServer)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_Sunken2_C::STATIC_SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SpawnInputControlActor");

	ABP_MiniGame_Sunken2_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UserConstructionScript");

	ABP_MiniGame_Sunken2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__FinishedFunc
// (Net, NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::Timeline_UpdatFieldOfView__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__FinishedFunc");

	ABP_MiniGame_Sunken2_C_Timeline_UpdatFieldOfView__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__UpdateFunc
// (Net, NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::Timeline_UpdatFieldOfView__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__UpdateFunc");

	ABP_MiniGame_Sunken2_C_Timeline_UpdatFieldOfView__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__FinishedFunc
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::NormalHitObjectImpact__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__FinishedFunc");

	ABP_MiniGame_Sunken2_C_NormalHitObjectImpact__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__UpdateFunc
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::NormalHitObjectImpact__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__UpdateFunc");

	ABP_MiniGame_Sunken2_C_NormalHitObjectImpact__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__FinishedFunc
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::Timeline_EyeClose__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__FinishedFunc");

	ABP_MiniGame_Sunken2_C_Timeline_EyeClose__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__UpdateFunc
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::Timeline_EyeClose__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__UpdateFunc");

	ABP_MiniGame_Sunken2_C_Timeline_EyeClose__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.StartMiniGame
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.StartMiniGame");

	ABP_MiniGame_Sunken2_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndMiniGame
// (Net, NetReliable, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndMiniGame");

	ABP_MiniGame_Sunken2_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WinMiniGame
// (Net, NetRequest, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WinMiniGame");

	ABP_MiniGame_Sunken2_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.LoseMiniGame
// (Net, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.LoseMiniGame");

	ABP_MiniGame_Sunken2_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DrawMiniGame
// (Net, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DrawMiniGame");

	ABP_MiniGame_Sunken2_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedFade
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedFade");

	ABP_MiniGame_Sunken2_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.FinalizeTalk
// (Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.FinalizeTalk");

	ABP_MiniGame_Sunken2_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedCoinSequence
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::OnFinishedCoinSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedCoinSequence");

	ABP_MiniGame_Sunken2_C_OnFinishedCoinSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedStart
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::OnFinishedStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedStart");

	ABP_MiniGame_Sunken2_C_OnFinishedStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_TimeUp
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::Event_TimeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_TimeUp");

	ABP_MiniGame_Sunken2_C_Event_TimeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_SkillCountMax
// (NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::Event_SkillCountMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_SkillCountMax");

	ABP_MiniGame_Sunken2_C_Event_SkillCountMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_ResultEnd
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::Event_ResultEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_ResultEnd");

	ABP_MiniGame_Sunken2_C_Event_ResultEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveBeginPlay
// (NetReliable, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveBeginPlay");

	ABP_MiniGame_Sunken2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStart
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::GameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStart");

	ABP_MiniGame_Sunken2_C_GameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AxAction
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::AxAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AxAction");

	ABP_MiniGame_Sunken2_C_AxAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveTick
// (Exec, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveTick");

	ABP_MiniGame_Sunken2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ResetResultMenuEvent
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::ResetResultMenuEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ResetResultMenuEvent");

	ABP_MiniGame_Sunken2_C_ResetResultMenuEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStartEvent
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::GameStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStartEvent");

	ABP_MiniGame_Sunken2_C_GameStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonRight
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::InputAction_ButtonRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonRight");

	ABP_MiniGame_Sunken2_C_InputAction_ButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PunchMotionEnd
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::PunchMotionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PunchMotionEnd");

	ABP_MiniGame_Sunken2_C_PunchMotionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayCameraImpact
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::PlayCameraImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayCameraImpact");

	ABP_MiniGame_Sunken2_C_PlayCameraImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonTop
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::InputAction_ButtonTop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonTop");

	ABP_MiniGame_Sunken2_C_InputAction_ButtonTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonBottom
// (Net, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::InputAction_ButtonBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonBottom");

	ABP_MiniGame_Sunken2_C_InputAction_ButtonBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ImpactToObject
// (Net, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::ImpactToObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ImpactToObject");

	ABP_MiniGame_Sunken2_C_ImpactToObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayEyeCloseTimeline
// (Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::PlayEyeCloseTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayEyeCloseTimeline");

	ABP_MiniGame_Sunken2_C_PlayEyeCloseTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndEyeCloseTimeline
// (Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Sunken2_C::EndEyeCloseTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndEyeCloseTimeline");

	ABP_MiniGame_Sunken2_C_EndEyeCloseTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_Sunken2_C_BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetResponse, Static, MulticastDelegate, Private, NetServer, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::STATIC_BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_Sunken2_C_BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ExecuteUbergraph_BP_MiniGame_Sunken2
// (Net, Exec, Native, Static, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken2_C::STATIC_ExecuteUbergraph_BP_MiniGame_Sunken2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ExecuteUbergraph_BP_MiniGame_Sunken2");

	ABP_MiniGame_Sunken2_C_ExecuteUbergraph_BP_MiniGame_Sunken2_Params params;
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
