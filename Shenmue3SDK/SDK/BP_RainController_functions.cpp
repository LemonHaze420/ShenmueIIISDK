
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

// Function BP_RainController.BP_RainController_C.ToggleDebugDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RainController_C::ToggleDebugDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ToggleDebugDisplay");

	ABP_RainController_C_ToggleDebugDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.GetMaterialParams
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FS3RainParam            RainParam                      (Parm, OutParm)

void ABP_RainController_C::GetMaterialParams(struct FS3RainParam* RainParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.GetMaterialParams");

	ABP_RainController_C_GetMaterialParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RainParam != nullptr)
		*RainParam = params.RainParam;
}


// Function BP_RainController.BP_RainController_C.ResetMaterialParams
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RainController_C::ResetMaterialParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ResetMaterialParams");

	ABP_RainController_C_ResetMaterialParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.SetMaterialParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Strength1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength3                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OpacityMultiplier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::SetMaterialParams(float Strength1, float Strength2, float Strength3, float Speed, float OpacityMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.SetMaterialParams");

	ABP_RainController_C_SetMaterialParams_Params params;
	params.Strength1 = Strength1;
	params.Strength2 = Strength2;
	params.Strength3 = Strength3;
	params.Speed = Speed;
	params.OpacityMultiplier = OpacityMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RainController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.UserConstructionScript");

	ABP_RainController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.InpActEvt_Ctrl_R_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RainController_C::InpActEvt_Ctrl_R_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.InpActEvt_Ctrl_R_K2Node_InputKeyEvent_2");

	ABP_RainController_C_InpActEvt_Ctrl_R_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RainController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveBeginPlay");

	ABP_RainController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveTick");

	ABP_RainController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ToggleDisplay
// (BlueprintCallable, BlueprintEvent)

void ABP_RainController_C::ToggleDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ToggleDisplay");

	ABP_RainController_C_ToggleDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::ExecuteUbergraph_BP_RainController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController");

	ABP_RainController_C_ExecuteUbergraph_BP_RainController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
