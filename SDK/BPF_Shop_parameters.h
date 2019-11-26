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

// Function BPF_Shop.BPF_Shop_C.SellMagnification_SkillBook
struct UBPF_Shop_C_SellMagnification_SkillBook_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnification_Skillbook;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Shop.BPF_Shop_C.SellMagnification
struct UBPF_Shop_C_SellMagnification_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SellMagnification;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Shop.BPF_Shop_C.GetS3ShopDataManager
struct UBPF_Shop_C_GetS3ShopDataManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_ShopDataManager_C*                       BP_ShopDataManager;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
