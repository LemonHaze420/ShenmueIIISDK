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

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.JudgeLoadingType
struct UBP_S3SaveLoadManager_C_JudgeLoadingType_Params
{
	int                                                EventStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3LoadingType                                     Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecRetrySave
struct UBP_S3SaveLoadManager_C_ExecRetrySave_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecLoadRetrySaveData
struct UBP_S3SaveLoadManager_C_ExecLoadRetrySaveData_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class US3SaveGame*                                 SaveData;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenIgnoreDialog
struct UBP_S3SaveLoadManager_C_OpenIgnoreDialog_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveLoadTestWidget
struct UBP_S3SaveLoadManager_C_OpenSaveLoadTestWidget_Params
{
	struct FName                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ResetSaveData
struct UBP_S3SaveLoadManager_C_ResetSaveData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenLevel
struct UBP_S3SaveLoadManager_C_OpenLevel_Params
{
	ES3Where                                           LocationId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecLoadAutoSaveData
struct UBP_S3SaveLoadManager_C_ExecLoadAutoSaveData_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class US3SaveGame*                                 SaveData;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenLoadWidget
struct UBP_S3SaveLoadManager_C_OpenLoadWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveWidget
struct UBP_S3SaveLoadManager_C_OpenSaveWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.UserConstructionScript
struct UBP_S3SaveLoadManager_C_UserConstructionScript_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_1
struct UBP_S3SaveLoadManager_C_CustomEvent_1_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_2
struct UBP_S3SaveLoadManager_C_CustomEvent_2_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_3
struct UBP_S3SaveLoadManager_C_CustomEvent_3_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenLoadWidgetImpl
struct UBP_S3SaveLoadManager_C_OpenLoadWidgetImpl_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveWidgetImpl
struct UBP_S3SaveLoadManager_C_OpenSaveWidgetImpl_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_4
struct UBP_S3SaveLoadManager_C_CustomEvent_4_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.BeginLoadData
struct UBP_S3SaveLoadManager_C_BeginLoadData_Params
{
	class US3SaveGame*                                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRetryData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CloseIgnoreDialog
struct UBP_S3SaveLoadManager_C_CloseIgnoreDialog_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ConfirmClearData
struct UBP_S3SaveLoadManager_C_ConfirmClearData_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.SelectLevel
struct UBP_S3SaveLoadManager_C_SelectLevel_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.SelectChobu
struct UBP_S3SaveLoadManager_C_SelectChobu_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.SelectHakkason
struct UBP_S3SaveLoadManager_C_SelectHakkason_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.StartClearData
struct UBP_S3SaveLoadManager_C_StartClearData_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.WidgetClosed
struct UBP_S3SaveLoadManager_C_WidgetClosed_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveLoadWidget
struct UBP_S3SaveLoadManager_C_OpenSaveLoadWidget_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ShowNotInstallDLCDialog
struct UBP_S3SaveLoadManager_C_ShowNotInstallDLCDialog_Params
{
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CloseNotInstallDLC
struct UBP_S3SaveLoadManager_C_CloseNotInstallDLC_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecuteUbergraph_BP_S3SaveLoadManager
struct UBP_S3SaveLoadManager_C_ExecuteUbergraph_BP_S3SaveLoadManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
