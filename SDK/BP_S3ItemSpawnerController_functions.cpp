
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

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3ItemSpawnerController_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetPriority");

	ABP_S3ItemSpawnerController_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetDetectAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_S3ItemSpawnerController_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetDetectAction");

	ABP_S3ItemSpawnerController_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetOwnSearchArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_SearchArea_C*        SearchArea                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::GetOwnSearchArea(class ABP_SearchArea_C** SearchArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetOwnSearchArea");

	ABP_S3ItemSpawnerController_C_GetOwnSearchArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchArea != nullptr)
		*SearchArea = params.SearchArea;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetActionSpawnerPos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_S3ItemSpawnerController_C::GetActionSpawnerPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetActionSpawnerPos");

	ABP_S3ItemSpawnerController_C_GetActionSpawnerPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetInputDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          V                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESearchAreaDirection> Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::GetInputDirection(float V, float H, TEnumAsByte<ESearchAreaDirection>* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetInputDirection");

	ABP_S3ItemSpawnerController_C_GetInputDirection_Params params;
	params.V = V;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.ForceFindSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3ItemSpawner_C*     Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::ForceFindSpawner(class ABP_S3ItemSpawner_C* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.ForceFindSpawner");

	ABP_S3ItemSpawnerController_C_ForceFindSpawner_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetActionSpawner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3ItemSpawner_C*     ActionSpawner                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::GetActionSpawner(class ABP_S3ItemSpawner_C** ActionSpawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetActionSpawner");

	ABP_S3ItemSpawnerController_C_GetActionSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionSpawner != nullptr)
		*ActionSpawner = params.ActionSpawner;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.LockOnChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          V                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::LockOnChange(float V, float H)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.LockOnChange");

	ABP_S3ItemSpawnerController_C_LockOnChange_Params params;
	params.V = V;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.StartAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ContinuationFlag               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::StartAction(bool ContinuationFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.StartAction");

	ABP_S3ItemSpawnerController_C_StartAction_Params params;
	params.ContinuationFlag = ContinuationFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.CalcCameraTransform
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3ItemSpawner_C*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::CalcCameraTransform(class ABP_S3ItemSpawner_C* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.CalcCameraTransform");

	ABP_S3ItemSpawnerController_C_CalcCameraTransform_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SetSearchStep
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3SearchComponent*      SearchComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bUseFadeEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::SetSearchStep(class US3SearchComponent* SearchComponent, bool bUseFadeEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SetSearchStep");

	ABP_S3ItemSpawnerController_C_SetSearchStep_Params params;
	params.SearchComponent = SearchComponent;
	params.bUseFadeEvent = bUseFadeEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SetSearchComponent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3ItemSpawner_C*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::SetSearchComponent(class ABP_S3ItemSpawner_C* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SetSearchComponent");

	ABP_S3ItemSpawnerController_C_SetSearchComponent_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InitSearchArea
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawnerController_C::InitSearchArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InitSearchArea");

	ABP_S3ItemSpawnerController_C_InitSearchArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.NextTargetCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_S3ItemSpawner_C*     NextTarget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::NextTargetCheck(bool* Result, class ABP_S3ItemSpawner_C** NextTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.NextTargetCheck");

	ABP_S3ItemSpawnerController_C_NextTargetCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (NextTarget != nullptr)
		*NextTarget = params.NextTarget;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SwitchTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3ItemSpawner_C*     NewTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::SwitchTarget(class ABP_S3ItemSpawner_C** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SwitchTarget");

	ABP_S3ItemSpawnerController_C_SwitchTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTarget != nullptr)
		*NewTarget = params.NewTarget;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetListSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::GetListSize(int* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetListSize");

	ABP_S3ItemSpawnerController_C_GetListSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawnerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.UserConstructionScript");

	ABP_S3ItemSpawnerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemSpawnerController_C::InpActEvt_SearchRightButton_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_2");

	ABP_S3ItemSpawnerController_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3SearchComponent*      SearchComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::GetItem(class US3SearchComponent* SearchComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetItem");

	ABP_S3ItemSpawnerController_C_GetItem_Params params;
	params.SearchComponent = SearchComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SearchEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawnerController_C::SearchEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SearchEnd");

	ABP_S3ItemSpawnerController_C_SearchEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3ItemSpawnerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.ReceiveBeginPlay");

	ABP_S3ItemSpawnerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.DecideDetectAction");

	ABP_S3ItemSpawnerController_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.Event_InputEnabled
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawnerController_C::Event_InputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.Event_InputEnabled");

	ABP_S3ItemSpawnerController_C_Event_InputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.Event_DisableInputTransCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawnerController_C::Event_DisableInputTransCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.Event_DisableInputTransCamera");

	ABP_S3ItemSpawnerController_C_Event_DisableInputTransCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1");

	ABP_S3ItemSpawnerController_C_InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27");

	ABP_S3ItemSpawnerController_C_InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.Event_FadeOnAction
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawnerController_C::Event_FadeOnAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.Event_FadeOnAction");

	ABP_S3ItemSpawnerController_C_Event_FadeOnAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.AddItemSpawner
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3ItemSpawner*          ItemSpawner                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::AddItemSpawner(class AS3ItemSpawner* ItemSpawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.AddItemSpawner");

	ABP_S3ItemSpawnerController_C_AddItemSpawner_Params params;
	params.ItemSpawner = ItemSpawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.RemoveItemSpawner
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3ItemSpawner*          ItemSpawner                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::RemoveItemSpawner(class AS3ItemSpawner* ItemSpawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.RemoveItemSpawner");

	ABP_S3ItemSpawnerController_C_RemoveItemSpawner_Params params;
	params.ItemSpawner = ItemSpawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.OnFinishFadeInOnUseFade
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawnerController_C::OnFinishFadeInOnUseFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.OnFinishFadeInOnUseFade");

	ABP_S3ItemSpawnerController_C_OnFinishFadeInOnUseFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.ExecuteUbergraph_BP_S3ItemSpawnerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawnerController_C::ExecuteUbergraph_BP_S3ItemSpawnerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.ExecuteUbergraph_BP_S3ItemSpawnerController");

	ABP_S3ItemSpawnerController_C_ExecuteUbergraph_BP_S3ItemSpawnerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
