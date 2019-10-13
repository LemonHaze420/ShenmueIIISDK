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

// Function UITextManager.UITextManager_C.GetLocalTxt
struct AUITextManager_C_GetLocalTxt_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function UITextManager.UITextManager_C.GetLocalizedText
struct AUITextManager_C_GetLocalizedText_Params
{
	TEnumAsByte<EUIText_Enum>                          ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function UITextManager.UITextManager_C.UserConstructionScript
struct AUITextManager_C_UserConstructionScript_Params
{
};

// Function UITextManager.UITextManager_C.ReceiveBeginPlay
struct AUITextManager_C_ReceiveBeginPlay_Params
{
};

// Function UITextManager.UITextManager_C.ExecuteUbergraph_UITextManager
struct AUITextManager_C_ExecuteUbergraph_UITextManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
