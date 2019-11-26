
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

// Function BP_SkipController.BP_SkipController_C.GetCurentRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SkipController_C::GetCurentRate(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.GetCurentRate");

	ABP_SkipController_C_GetCurentRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function BP_SkipController.BP_SkipController_C.SetGenericCall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            z_order                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkipController_C::SetGenericCall(int z_order)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.SetGenericCall");

	ABP_SkipController_C_SetGenericCall_Params params;
	params.z_order = z_order;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.CheckVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkipController_C::CheckVisible(ES3PlayerBehavior ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.CheckVisible");

	ABP_SkipController_C_CheckVisible_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.DisableSkipScene
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkipController_C::DisableSkipScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.DisableSkipScene");

	ABP_SkipController_C_DisableSkipScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.EnableSkipScene
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkipController_C::EnableSkipScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.EnableSkipScene");

	ABP_SkipController_C_EnableSkipScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkipController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.UserConstructionScript");

	ABP_SkipController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SkipController_C::InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_4");

	ABP_SkipController_C_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SkipController_C::InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_3");

	ABP_SkipController_C_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkipController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.ReceiveBeginPlay");

	ABP_SkipController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkipController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.ReceiveEndPlay");

	ABP_SkipController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.ChangePlayerBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkipController_C::ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.ChangePlayerBehavior");

	ABP_SkipController_C_ChangePlayerBehavior_Params params;
	params.NewId = NewId;
	params.OldId = OldId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkipController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.ReceiveTick");

	ABP_SkipController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.ExecuteUbergraph_BP_SkipController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkipController_C::ExecuteUbergraph_BP_SkipController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.ExecuteUbergraph_BP_SkipController");

	ABP_SkipController_C_ExecuteUbergraph_BP_SkipController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipController.BP_SkipController_C.OnSkip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SkipController_C::OnSkip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipController.BP_SkipController_C.OnSkip__DelegateSignature");

	ABP_SkipController_C_OnSkip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
