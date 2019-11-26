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

// Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.GetTargetCharacters
struct UBP_TalkProcess_ChangeClothes_C_GetTargetCharacters_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AS3Character*>                        Characters;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.Activate
struct UBP_TalkProcess_ChangeClothes_C_Activate_Params
{
};

// Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.Finish
struct UBP_TalkProcess_ChangeClothes_C_Finish_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.ExecuteUbergraph_BP_TalkProcess_ChangeClothes
struct UBP_TalkProcess_ChangeClothes_C_ExecuteUbergraph_BP_TalkProcess_ChangeClothes_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
