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

// Function BW_DebugReward.BW_DebugReward_C.UpdateRewardState
struct UBW_DebugReward_C_UpdateRewardState_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.ChangeCheck
struct UBW_DebugReward_C_ChangeCheck_Params
{
	class UCheckBox*                                   CheckBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_DebugReward.BW_DebugReward_C.SetBackerId
struct UBW_DebugReward_C_SetBackerId_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugReward.BW_DebugReward_C.ShowBackerId
struct UBW_DebugReward_C_ShowBackerId_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__BackerTextBox_K2Node_ComponentBoundEvent_133_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__BackerTextBox_K2Node_ComponentBoundEvent_133_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__PresetId_K2Node_ComponentBoundEvent_101_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__PresetId_K2Node_ComponentBoundEvent_101_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugReward.BW_DebugReward_C.Construct
struct UBW_DebugReward_C_Construct_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__JacketButton_K2Node_ComponentBoundEvent_1139_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__JacketButton_K2Node_ComponentBoundEvent_1139_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__GachaButton_K2Node_ComponentBoundEvent_1188_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__GachaButton_K2Node_ComponentBoundEvent_1188_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__Toy1Button_K2Node_ComponentBoundEvent_1237_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__Toy1Button_K2Node_ComponentBoundEvent_1237_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__ToyAllButton_K2Node_ComponentBoundEvent_1286_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__ToyAllButton_K2Node_ComponentBoundEvent_1286_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__AdvanceButton_K2Node_ComponentBoundEvent_1362_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__AdvanceButton_K2Node_ComponentBoundEvent_1362_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__SpecialPButton_K2Node_ComponentBoundEvent_1411_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__SpecialPButton_K2Node_ComponentBoundEvent_1411_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__SpecialHButton_K2Node_ComponentBoundEvent_1460_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__SpecialHButton_K2Node_ComponentBoundEvent_1460_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__ArcaneButton_K2Node_ComponentBoundEvent_1509_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__ArcaneButton_K2Node_ComponentBoundEvent_1509_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__RodButton_K2Node_ComponentBoundEvent_1558_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__RodButton_K2Node_ComponentBoundEvent_1558_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__PictureButton_K2Node_ComponentBoundEvent_1607_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__PictureButton_K2Node_ComponentBoundEvent_1607_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__OtoshidamaButton_K2Node_ComponentBoundEvent_1656_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__OtoshidamaButton_K2Node_ComponentBoundEvent_1656_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__FlowerButton_K2Node_ComponentBoundEvent_1705_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__FlowerButton_K2Node_ComponentBoundEvent_1705_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__FudaButton_K2Node_ComponentBoundEvent_1754_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__FudaButton_K2Node_ComponentBoundEvent_1754_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__DiceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__DiceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__ChibiButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__ChibiButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__Chibi2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__Chibi2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__HandButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__HandButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__GuestButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__GuestButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__FreeButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__FreeButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__TravellerButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__TravellerButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__BattleButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__BattleButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__YataiButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__YataiButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__FaceButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__FaceButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugReward_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugReward.BW_DebugReward_C.ExecuteUbergraph_BW_DebugReward
struct UBW_DebugReward_C_ExecuteUbergraph_BW_DebugReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
