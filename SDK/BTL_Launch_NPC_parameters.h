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

// Function BTL_Launch_NPC.BTL_Launch_NPC_C.GetDataFromAsset
struct UBTL_Launch_NPC_C_GetDataFromAsset_Params
{
	class UBTL_NPCDataAsset*                           Asset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_Launch_NPC.BTL_Launch_NPC_C.SetDefaultAsNeccessary
struct UBTL_Launch_NPC_C_SetDefaultAsNeccessary_Params
{
	class UBTL_NPCDataAsset*                           DefaultDataAsset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_Launch_NPC.BTL_Launch_NPC_C.SetHardDataAsset
struct UBTL_Launch_NPC_C_SetHardDataAsset_Params
{
	class UBTL_NPCDataAsset*                           Asset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_Launch_NPC.BTL_Launch_NPC_C.FinishedLoading__DelegateSignature
struct UBTL_Launch_NPC_C_FinishedLoading__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
