
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

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.OverrideGachaPrice
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_Gacha_C::OverrideGachaPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.OverrideGachaPrice");

	ABP_MiniGameChoose_Gacha_C_OverrideGachaPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_Gacha_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.UserConstructionScript");

	ABP_MiniGameChoose_Gacha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_Right_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Gacha_C::InpActEvt_MG_Right_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_Right_K2Node_InputActionEvent_8");

	ABP_MiniGameChoose_Gacha_C_InpActEvt_MG_Right_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_Left_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Gacha_C::InpActEvt_MG_Left_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_Left_K2Node_InputActionEvent_7");

	ABP_MiniGameChoose_Gacha_C_InpActEvt_MG_Left_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Gacha_C::InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_6");

	ABP_MiniGameChoose_Gacha_C_InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameChoose_Gacha_C::InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_5");

	ABP_MiniGameChoose_Gacha_C_InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameChoose_Gacha_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ReceiveBeginPlay");

	ABP_MiniGameChoose_Gacha_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_Gacha_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.DecideDetectAction");

	ABP_MiniGameChoose_Gacha_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_Gacha_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ReceiveTick");

	ABP_MiniGameChoose_Gacha_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_Gacha_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ReceiveEndPlay");

	ABP_MiniGameChoose_Gacha_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ExecuteUbergraph_BP_MiniGameChoose_Gacha
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_Gacha_C::ExecuteUbergraph_BP_MiniGameChoose_Gacha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ExecuteUbergraph_BP_MiniGameChoose_Gacha");

	ABP_MiniGameChoose_Gacha_C_ExecuteUbergraph_BP_MiniGameChoose_Gacha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
