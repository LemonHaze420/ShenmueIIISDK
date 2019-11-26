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

// Function BP_TextDataManager.BP_TextDataManager_C.FindClipperOnlyData
struct UBP_TextDataManager_C_FindClipperOnlyData_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Clipper;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TextDataManager.BP_TextDataManager_C.GetTalkTextData
struct UBP_TextDataManager_C_GetTalkTextData_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    FirstType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextDataType                                    TextType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS3TextData                                 TextData;                                                 // (Parm, OutParm)
};

// Function BP_TextDataManager.BP_TextDataManager_C.GetTextDataStringAbridged 
struct UBP_TextDataManager_C_GetTextDataStringAbridged__Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutString;                                                // (Parm, OutParm, ZeroConstructor)
	struct FString                                     ClipperString;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TextDataManager.BP_TextDataManager_C.GetItemDataString
struct UBP_TextDataManager_C_GetItemDataString_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Description;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TextDataManager.BP_TextDataManager_C.CreateRubyInfo
struct UBP_TextDataManager_C_CreateRubyInfo_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_RubyInfo                                OutInfo;                                                  // (Parm, OutParm)
};

// Function BP_TextDataManager.BP_TextDataManager_C.GetVoiceData
struct UBP_TextDataManager_C_GetVoiceData_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Voice;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TextDataManager.BP_TextDataManager_C.GetTextDataString
struct UBP_TextDataManager_C_GetTextDataString_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutString;                                                // (Parm, OutParm, ZeroConstructor)
	struct FString                                     ClipperString;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             TextArray;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                LinefeedCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_RubyInfo>                        RubyInfoArray;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TextDataManager.BP_TextDataManager_C.Reimport
struct UBP_TextDataManager_C_Reimport_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RootAssetPath;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TextDataManager.BP_TextDataManager_C.UserConstructionScript
struct UBP_TextDataManager_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
