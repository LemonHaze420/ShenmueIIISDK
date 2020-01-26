#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPW_SaveMessage.BPW_SaveMessage_C.ShowMessage
struct UBPW_SaveMessage_C_ShowMessage_Params
{
	TEnumAsByte<ESaveMessageType>                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveMessage.BPW_SaveMessage_C.Construct
struct UBPW_SaveMessage_C_Construct_Params
{
};

// Function BPW_SaveMessage.BPW_SaveMessage_C.OnAnimationFinished
struct UBPW_SaveMessage_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_SaveMessage.BPW_SaveMessage_C.ExecuteUbergraph_BPW_SaveMessage
struct UBPW_SaveMessage_C_ExecuteUbergraph_BPW_SaveMessage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveMessage.BPW_SaveMessage_C.OnFinishedSaveMessage__DelegateSignature
struct UBPW_SaveMessage_C_OnFinishedSaveMessage__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
