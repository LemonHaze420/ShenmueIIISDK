
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

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.MoveCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_MiniGameChoose_Otoshidama_C::MoveCamera(class USceneComponent* Target, class USceneComponent* Current, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.MoveCamera");

	ABP_MiniGameChoose_Otoshidama_C_MoveCamera_Params params;
	params.Target = Target;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_Otoshidama_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.UserConstructionScript");

	ABP_MiniGameChoose_Otoshidama_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Right_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_Right_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Right_K2Node_InputActionEvent_20");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Right_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Left_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_Left_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Left_K2Node_InputActionEvent_19");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Left_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_18");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_17");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Top_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_Top_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Top_K2Node_InputActionEvent_16");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Top_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Top_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_Top_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Top_K2Node_InputActionEvent_15");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Top_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_Bottom_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_14");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_Bottom_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_13");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Otoshidama_C::InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_11");

	ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.Input Update
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_Otoshidama_C::Input_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.Input Update");

	ABP_MiniGameChoose_Otoshidama_C_Input_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_Otoshidama_C::InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2");

	ABP_MiniGameChoose_Otoshidama_C_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_Otoshidama_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.ReceiveTick");

	ABP_MiniGameChoose_Otoshidama_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameChoose_Otoshidama_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.ReceiveBeginPlay");

	ABP_MiniGameChoose_Otoshidama_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_Otoshidama_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.DecideDetectAction");

	ABP_MiniGameChoose_Otoshidama_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InitializeMoneyInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_Otoshidama_C::InitializeMoneyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InitializeMoneyInfo");

	ABP_MiniGameChoose_Otoshidama_C_InitializeMoneyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.EndFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_Otoshidama_C::EndFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.EndFadeOut");

	ABP_MiniGameChoose_Otoshidama_C_EndFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.ExecuteUbergraph_BP_MiniGameChoose_Otoshidama
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_Otoshidama_C::ExecuteUbergraph_BP_MiniGameChoose_Otoshidama(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.ExecuteUbergraph_BP_MiniGameChoose_Otoshidama");

	ABP_MiniGameChoose_Otoshidama_C_ExecuteUbergraph_BP_MiniGameChoose_Otoshidama_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
