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

// Function BPW_SaveLoadData.BPW_SaveLoadData_C.GetIconData
struct UBPW_SaveLoadData_C_GetIconData_Params
{
	struct FString                                     AreaId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_SaveLoadData.BPW_SaveLoadData_C.IsFocus
struct UBPW_SaveLoadData_C_IsFocus_Params
{
	bool                                               Focus;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadData.BPW_SaveLoadData_C.SetData
struct UBPW_SaveLoadData_C_SetData_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FDateTime                                   SaveDate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDateTime                                   GameDate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	ES3Where                                           Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DataSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AreaId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FS3BattleStatsSaveData                      BattleData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BetMoney;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadData.BPW_SaveLoadData_C.OnLoaded_27F679DB4249387B3159F79A44E9A691
struct UBPW_SaveLoadData_C_OnLoaded_27F679DB4249387B3159F79A44E9A691_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadData.BPW_SaveLoadData_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
struct UBPW_SaveLoadData_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BPW_SaveLoadData.BPW_SaveLoadData_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
struct UBPW_SaveLoadData_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BPW_SaveLoadData.BPW_SaveLoadData_C.SetSaveIcon
struct UBPW_SaveLoadData_C_SetSaveIcon_Params
{
	struct FString                                     AreaId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_SaveLoadData.BPW_SaveLoadData_C.ExecuteUbergraph_BPW_SaveLoadData
struct UBPW_SaveLoadData_C_ExecuteUbergraph_BPW_SaveLoadData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
