
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

// Function BW_UDSController.BW_UDSController_C.SetupRainControllerBindings
// (Exec, Event, Static, MulticastDelegate, Public, Private, Protected, NetClient, Const)

void UBW_UDSController_C::STATIC_SetupRainControllerBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.SetupRainControllerBindings");

	UBW_UDSController_C_SetupRainControllerBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.GetText_1
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_UDSController_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.GetText_1");

	UBW_UDSController_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_UDSController.BW_UDSController_C.UpdateGameTime
// (NetReliable, Exec, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::UpdateGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.UpdateGameTime");

	UBW_UDSController_C_UpdateGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.GetSpeedButtonText
// (Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_UDSController_C::STATIC_GetSpeedButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.GetSpeedButtonText");

	UBW_UDSController_C_GetSpeedButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_UDSController.BW_UDSController_C.WeatherTypeChanged
// (NetReliable, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::WeatherTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.WeatherTypeChanged");

	UBW_UDSController_C_WeatherTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.CloudDensityChanged
// (Net, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::CloudDensityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.CloudDensityChanged");

	UBW_UDSController_C_CloudDensityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.MoonPhaseChanged
// (Net, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::MoonPhaseChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.MoonPhaseChanged");

	UBW_UDSController_C_MoonPhaseChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.CloudShadowChanged
// (NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::CloudShadowChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.CloudShadowChanged");

	UBW_UDSController_C_CloudShadowChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.Construct
// (NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.Construct");

	UBW_UDSController_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BoolPropertyChanged_Event_2
// (Net, NetReliable, NetRequest, Exec, Native, Event, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BoolPropertyChanged_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BoolPropertyChanged_Event_2");

	UBW_UDSController_C_BoolPropertyChanged_Event_2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.FloatPropertyChanged_Event_1
// (Net, NetReliable, NetRequest, Exec, Native, Event, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::FloatPropertyChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.FloatPropertyChanged_Event_1");

	UBW_UDSController_C_FloatPropertyChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.FloatPropertyChanged_Event_2
// (NetReliable, NetRequest, Exec, Native, Event, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::FloatPropertyChanged_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.FloatPropertyChanged_Event_2");

	UBW_UDSController_C_FloatPropertyChanged_Event_2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.񣌘򠳾񍯐�0�0_1
// (NetReliable, NetRequest, Exec, Native, Event, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::UnknownFunc01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.񣌘򠳾񍯐�0�0_1");

	UBW_UDSController_C__UnknownFunc01_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__MorningButton_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Exec, Native, Event, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__MorningButton_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__MorningButton_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__MorningButton_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__NoonButton_K2Node_ComponentBoundEvent_365_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::STATIC_BndEvt__NoonButton_K2Node_ComponentBoundEvent_365_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__NoonButton_K2Node_ComponentBoundEvent_365_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__NoonButton_K2Node_ComponentBoundEvent_365_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__EveningButton_K2Node_ComponentBoundEvent_380_OnButtonClickedEvent__DelegateSignature
// (Exec, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__EveningButton_K2Node_ComponentBoundEvent_380_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__EveningButton_K2Node_ComponentBoundEvent_380_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__EveningButton_K2Node_ComponentBoundEvent_380_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__NightButton_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature
// (Exec, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__NightButton_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__NightButton_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__NightButton_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__SpeedButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__SpeedButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__SpeedButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__SpeedButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__StopButton_K2Node_ComponentBoundEvent_335_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__StopButton_K2Node_ComponentBoundEvent_335_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__StopButton_K2Node_ComponentBoundEvent_335_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__StopButton_K2Node_ComponentBoundEvent_335_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__20Button_K2Node_ComponentBoundEvent_596_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__20Button_K2Node_ComponentBoundEvent_596_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__20Button_K2Node_ComponentBoundEvent_596_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__20Button_K2Node_ComponentBoundEvent_596_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__40Button_K2Node_ComponentBoundEvent_616_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__40Button_K2Node_ComponentBoundEvent_616_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__40Button_K2Node_ComponentBoundEvent_616_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__40Button_K2Node_ComponentBoundEvent_616_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__60Button_K2Node_ComponentBoundEvent_637_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__60Button_K2Node_ComponentBoundEvent_637_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__60Button_K2Node_ComponentBoundEvent_637_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__60Button_K2Node_ComponentBoundEvent_637_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__90Button_K2Node_ComponentBoundEvent_659_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__90Button_K2Node_ComponentBoundEvent_659_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__90Button_K2Node_ComponentBoundEvent_659_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__90Button_K2Node_ComponentBoundEvent_659_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.BndEvt__110Button_K2Node_ComponentBoundEvent_682_OnButtonClickedEvent__DelegateSignature
// (NetRequest, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::BndEvt__110Button_K2Node_ComponentBoundEvent_682_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.BndEvt__110Button_K2Node_ComponentBoundEvent_682_OnButtonClickedEvent__DelegateSignature");

	UBW_UDSController_C_BndEvt__110Button_K2Node_ComponentBoundEvent_682_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.Tick
// (Net, NetReliable, Native, NetResponse, MulticastDelegate, Public, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_UDSController_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.Tick");

	UBW_UDSController_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.CustomEvent
// (Event, Static, MulticastDelegate, Public, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_UDSController_C::STATIC_CustomEvent(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.CustomEvent");

	UBW_UDSController_C_CustomEvent_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.ChangeDate
// (Net, NetReliable, NetResponse, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_UDSController_C::ChangeDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.ChangeDate");

	UBW_UDSController_C_ChangeDate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_UDSController.BW_UDSController_C.ExecuteUbergraph_BW_UDSController
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_UDSController_C::ExecuteUbergraph_BW_UDSController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_UDSController.BW_UDSController_C.ExecuteUbergraph_BW_UDSController");

	UBW_UDSController_C_ExecuteUbergraph_BW_UDSController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
