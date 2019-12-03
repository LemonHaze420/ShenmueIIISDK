
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

// Function BP_QTEComponent.BP_QTEComponent_C.StopTimeCountSE
// (Net, Exec, Native, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBP_QTEComponent_C::StopTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.StopTimeCountSE");

	UBP_QTEComponent_C_StopTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.PlayTimeCountSE
// (NetRequest, Exec, Native, Event, NetMulticast, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_QTEComponent_C::PlayTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.PlayTimeCountSE");

	UBP_QTEComponent_C_PlayTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.UpdateTime
// (Net, Event, NetResponse, NetMulticast, Private, Delegate, NetServer)
// Parameters:
// float                          TickDeltaSeconds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentDeltaSeconds            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_QTEComponent_C::UpdateTime(float TickDeltaSeconds, float* CurrentDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.UpdateTime");

	UBP_QTEComponent_C_UpdateTime_Params params;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentDeltaSeconds != nullptr)
		*CurrentDeltaSeconds = params.CurrentDeltaSeconds;
}


// Function BP_QTEComponent.BP_QTEComponent_C.SetUseRealTime
// (NetReliable, Exec, Native, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseRealTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QTEComponent_C::SetUseRealTime(bool UseRealTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.SetUseRealTime");

	UBP_QTEComponent_C_SetUseRealTime_Params params;
	params.UseRealTime = UseRealTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.ClearResult
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_QTEComponent_C::ClearResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.ClearResult");

	UBP_QTEComponent_C_ClearResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.InputFunction
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_QTEComponent_C::STATIC_InputFunction(const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.InputFunction");

	UBP_QTEComponent_C_InputFunction_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.InputEndFunction
// (Event, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, Const)

void UBP_QTEComponent_C::InputEndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.InputEndFunction");

	UBP_QTEComponent_C_InputEndFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.InputStartFunction
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   SuccessAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QTEComponent_C::InputStartFunction(const struct FName& SuccessAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.InputStartFunction");

	UBP_QTEComponent_C_InputStartFunction_Params params;
	params.SuccessAction = SuccessAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.EndFunction
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, Delegate, NetServer)

void UBP_QTEComponent_C::EndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.EndFunction");

	UBP_QTEComponent_C_EndFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.Prepare
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBP_QTEComponent_C::STATIC_Prepare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.Prepare");

	UBP_QTEComponent_C_Prepare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.GetButtonImage
// (Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_QTEComponent_C::GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.GetButtonImage");

	UBP_QTEComponent_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;
}


// Function BP_QTEComponent.BP_QTEComponent_C.PlaySE
// (NetRequest, Exec, Native, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_QTEComponent_C::PlaySE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.PlaySE");

	UBP_QTEComponent_C_PlaySE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.ReceiveTick
// (Net, NetReliable, NetRequest, Native, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QTEComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.ReceiveTick");

	UBP_QTEComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.ReceiveEndPlay
// (Net, NetReliable, NetRequest, Native, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QTEComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.ReceiveEndPlay");

	UBP_QTEComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.ExecuteUbergraph_BP_QTEComponent
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Delegate, NetServer)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QTEComponent_C::ExecuteUbergraph_BP_QTEComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.ExecuteUbergraph_BP_QTEComponent");

	UBP_QTEComponent_C_ExecuteUbergraph_BP_QTEComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.ButtonDown__DelegateSignature
// (Net, NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Succeed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QTEComponent_C::STATIC_ButtonDown__DelegateSignature(bool Succeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.ButtonDown__DelegateSignature");

	UBP_QTEComponent_C_ButtonDown__DelegateSignature_Params params;
	params.Succeed = Succeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.End__DelegateSignature
// (Net, NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_QTEComponent_C::STATIC_End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.End__DelegateSignature");

	UBP_QTEComponent_C_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTEComponent.BP_QTEComponent_C.Success__DelegateSignature
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBP_QTEComponent_C::STATIC_Success__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTEComponent.BP_QTEComponent_C.Success__DelegateSignature");

	UBP_QTEComponent_C_Success__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
