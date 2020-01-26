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

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SpawnCameraFromClass
struct Uwgt_TalkCameraPrev_C_SpawnCameraFromClass_Params
{
	class UClass*                                      cameraClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraKind
struct Uwgt_TalkCameraPrev_C_CheckCameraKind_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ToggleWindowSize
struct Uwgt_TalkCameraPrev_C_ToggleWindowSize_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckLookAtSocket
struct Uwgt_TalkCameraPrev_C_CheckLookAtSocket_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckDistance
struct Uwgt_TalkCameraPrev_C_CheckDistance_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckAngle
struct Uwgt_TalkCameraPrev_C_CheckAngle_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckShoulderOrNot
struct Uwgt_TalkCameraPrev_C_CheckShoulderOrNot_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckPersonNum
struct Uwgt_TalkCameraPrev_C_CheckPersonNum_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Refresh
struct Uwgt_TalkCameraPrev_C_Refresh_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetFilterdCameras
struct Uwgt_TalkCameraPrev_C_GetFilterdCameras_Params
{
	TArray<class UClass*>                              Cameras;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CheckCameraCollision
struct Uwgt_TalkCameraPrev_C_CheckCameraCollision_Params
{
	class UClass*                                      TalkCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          HitResults;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ResetCollisionErrorText
struct Uwgt_TalkCameraPrev_C_ResetCollisionErrorText_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SetCollisionErrorText
struct Uwgt_TalkCameraPrev_C_SetCollisionErrorText_Params
{
	bool                                               IsHit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          HitResults;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.CanUseCamera
struct Uwgt_TalkCameraPrev_C_CanUseCamera_Params
{
	class UClass*                                      cameraClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.OnKeyDown
struct Uwgt_TalkCameraPrev_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.OnPreviewKeyDown
struct Uwgt_TalkCameraPrev_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ChangePrevCamera
struct Uwgt_TalkCameraPrev_C_ChangePrevCamera_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetPrevDefautTalkCamera
struct Uwgt_TalkCameraPrev_C_GetPrevDefautTalkCamera_Params
{
	class UClass*                                      cameraClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ChangeNextCamera
struct Uwgt_TalkCameraPrev_C_ChangeNextCamera_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.GetNextDefautTalkCamera
struct Uwgt_TalkCameraPrev_C_GetNextDefautTalkCamera_Params
{
	class UClass*                                      cameraClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.SetCameraName
struct Uwgt_TalkCameraPrev_C_SetCameraName_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Construct
struct Uwgt_TalkCameraPrev_C_Construct_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Destruct
struct Uwgt_TalkCameraPrev_C_Destruct_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__PrevButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__rejectCameraByCollision_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__CheckCollision_K2Node_ComponentBoundEvent_87_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.Tick
struct Uwgt_TalkCameraPrev_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__CheckBox_3_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__CheckBox_4_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__CheckBox_5_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__Single_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__Pair_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Sholder_K2Node_ComponentBoundEvent_357_OnSelectionChangedEvent__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__Sholder_K2Node_ComponentBoundEvent_357_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__Near_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__NotNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__Far_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__TooFar_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__Bust_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__Wast_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__Full_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__Closeup_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__SizeToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.BndEvt__CameraKind_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct Uwgt_TalkCameraPrev_C_BndEvt__CameraKind_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TalkCameraPrev.wgt_TalkCameraPrev_C.ExecuteUbergraph_wgt_TalkCameraPrev
struct Uwgt_TalkCameraPrev_C_ExecuteUbergraph_wgt_TalkCameraPrev_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
