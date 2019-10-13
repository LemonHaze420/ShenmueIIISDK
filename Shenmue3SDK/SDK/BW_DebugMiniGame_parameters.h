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

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.OpenAllForkliftJobs
struct UBW_DebugMiniGame_C_OpenAllForkliftJobs_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.AddVitalityLevel
struct UBW_DebugMiniGame_C_AddVitalityLevel_Params
{
	int                                                B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.ResetFocus
struct UBW_DebugMiniGame_C_ResetFocus_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.DisplayCategoryLevel
struct UBW_DebugMiniGame_C_DisplayCategoryLevel_Params
{
	TEnumAsByte<E_MiniGame_KungFuType>                 Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBW_DebugBattleListStat_C*                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.AddKunFuLevel
struct UBW_DebugMiniGame_C_AddKunFuLevel_Params
{
	TEnumAsByte<E_MiniGame_KungFuType>                 Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_6_OnPlus__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_6_OnPlus__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_7_OnMinus__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_7_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_8_OnMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_8_OnMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.Tick
struct UBW_DebugMiniGame_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__TotalLevel_K2Node_ComponentBoundEvent_9_OnPlus__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_9_OnPlus__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__TotalLevel_K2Node_ComponentBoundEvent_10_OnMinus__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_10_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__TotalLevel_K2Node_ComponentBoundEvent_11_OnMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_11_OnMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_792_OnPlusMin__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_792_OnPlusMin__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_814_OnMinusMin__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_814_OnMinusMin__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_834_OnPlusMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_834_OnPlusMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_852_OnMinusMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_852_OnMinusMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_868_OnPlusMin__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_868_OnPlusMin__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_894_OnMinusMin__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_894_OnMinusMin__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_918_OnPlusMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_918_OnPlusMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_940_OnMinusMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_940_OnMinusMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_960_OnPlusMin__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_960_OnPlusMin__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_990_OnMinusMin__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_990_OnMinusMin__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1018_OnPlusMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1018_OnPlusMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1044_OnMinusMax__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1044_OnMinusMax__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.PreConstruct
struct UBW_DebugMiniGame_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__AllOpenForkliftContainerButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugMiniGame_C_BndEvt__AllOpenForkliftContainerButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.ExecuteUbergraph_BW_DebugMiniGame
struct UBW_DebugMiniGame_C_ExecuteUbergraph_BW_DebugMiniGame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
