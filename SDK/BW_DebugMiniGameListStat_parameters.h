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

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.SetAllValue
struct UBW_DebugMiniGameListStat_C_SetAllValue_Params
{
	float                                              MinRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BasePercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinLimitRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.SetValueText
struct UBW_DebugMiniGameListStat_C_SetValueText_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PercentBase;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.PreConstruct
struct UBW_DebugMiniGameListStat_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugMiniGameListStat_C_BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugMiniGameListStat_C_BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.ResetFocus
struct UBW_DebugMiniGameListStat_C_ResetFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugMiniGameListStat_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugMiniGameListStat_C_BndEvt__S3Button_1_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.ExecuteUbergraph_BW_DebugMiniGameListStat
struct UBW_DebugMiniGameListStat_C_ExecuteUbergraph_BW_DebugMiniGameListStat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnMinusMax__DelegateSignature
struct UBW_DebugMiniGameListStat_C_OnMinusMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnPlusMax__DelegateSignature
struct UBW_DebugMiniGameListStat_C_OnPlusMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnMinusMin__DelegateSignature
struct UBW_DebugMiniGameListStat_C_OnMinusMin__DelegateSignature_Params
{
};

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnPlusMin__DelegateSignature
struct UBW_DebugMiniGameListStat_C_OnPlusMin__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
