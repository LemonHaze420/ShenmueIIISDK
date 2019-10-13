#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.SetInputEnabled
struct UBPC_ResultScreenInputDelayer_C_SetInputEnabled_Params
{
	bool                                               bValue;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.DelayInput
struct UBPC_ResultScreenInputDelayer_C_DelayInput_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPW_UI_GeneralWindow_Button_C*              Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.NotifyAnimationComplete
struct UBPC_ResultScreenInputDelayer_C_NotifyAnimationComplete_Params
{
};

// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.ReceiveEndPlay
struct UBPC_ResultScreenInputDelayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.ExecuteUbergraph_BPC_ResultScreenInputDelayer
struct UBPC_ResultScreenInputDelayer_C_ExecuteUbergraph_BPC_ResultScreenInputDelayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.OnDisableInput__DelegateSignature
struct UBPC_ResultScreenInputDelayer_C_OnDisableInput__DelegateSignature_Params
{
};

// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.OnEnableInput__DelegateSignature
struct UBPC_ResultScreenInputDelayer_C_OnEnableInput__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
