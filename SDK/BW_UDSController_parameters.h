#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BW_UDSController.BW_UDSController_C.SetupRainControllerBindings
struct UBW_UDSController_C_SetupRainControllerBindings_Params
{
};

// Function BW_UDSController.BW_UDSController_C.GetText_1
struct UBW_UDSController_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_UDSController.BW_UDSController_C.UpdateGameTime
struct UBW_UDSController_C_UpdateGameTime_Params
{
};

// Function BW_UDSController.BW_UDSController_C.GetSpeedButtonText
struct UBW_UDSController_C_GetSpeedButtonText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_UDSController.BW_UDSController_C.WeatherTypeChanged
struct UBW_UDSController_C_WeatherTypeChanged_Params
{
};

// Function BW_UDSController.BW_UDSController_C.CloudDensityChanged
struct UBW_UDSController_C_CloudDensityChanged_Params
{
};

// Function BW_UDSController.BW_UDSController_C.MoonPhaseChanged
struct UBW_UDSController_C_MoonPhaseChanged_Params
{
};

// Function BW_UDSController.BW_UDSController_C.CloudShadowChanged
struct UBW_UDSController_C_CloudShadowChanged_Params
{
};

// Function BW_UDSController.BW_UDSController_C.Construct
struct UBW_UDSController_C_Construct_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BoolPropertyChanged_Event_2
struct UBW_UDSController_C_BoolPropertyChanged_Event_2_Params
{
};

// Function BW_UDSController.BW_UDSController_C.FloatPropertyChanged_Event_1
struct UBW_UDSController_C_FloatPropertyChanged_Event_1_Params
{
};

// Function BW_UDSController.BW_UDSController_C.FloatPropertyChanged_Event_2
struct UBW_UDSController_C_FloatPropertyChanged_Event_2_Params
{
};

// Function BW_UDSController.BW_UDSController_C.񣌘򠳾񍯐�0�0_1
struct UBW_UDSController_C__UnknownFunc01_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__MorningButton_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__MorningButton_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__NoonButton_K2Node_ComponentBoundEvent_365_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__NoonButton_K2Node_ComponentBoundEvent_365_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__EveningButton_K2Node_ComponentBoundEvent_380_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__EveningButton_K2Node_ComponentBoundEvent_380_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__NightButton_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__NightButton_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__SpeedButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__SpeedButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__StopButton_K2Node_ComponentBoundEvent_335_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__StopButton_K2Node_ComponentBoundEvent_335_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__20Button_K2Node_ComponentBoundEvent_596_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__20Button_K2Node_ComponentBoundEvent_596_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__40Button_K2Node_ComponentBoundEvent_616_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__40Button_K2Node_ComponentBoundEvent_616_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__60Button_K2Node_ComponentBoundEvent_637_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__60Button_K2Node_ComponentBoundEvent_637_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__90Button_K2Node_ComponentBoundEvent_659_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__90Button_K2Node_ComponentBoundEvent_659_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.BndEvt__110Button_K2Node_ComponentBoundEvent_682_OnButtonClickedEvent__DelegateSignature
struct UBW_UDSController_C_BndEvt__110Button_K2Node_ComponentBoundEvent_682_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_UDSController.BW_UDSController_C.Tick
struct UBW_UDSController_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_UDSController.BW_UDSController_C.CustomEvent
struct UBW_UDSController_C_CustomEvent_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_UDSController.BW_UDSController_C.ChangeDate
struct UBW_UDSController_C_ChangeDate_Params
{
};

// Function BW_UDSController.BW_UDSController_C.ExecuteUbergraph_BW_UDSController
struct UBW_UDSController_C_ExecuteUbergraph_BW_UDSController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
