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

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetScreenFadeZOrder
struct ABP_S3HUD_Base_C_GetScreenFadeZOrder_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.MakeCustomDialogParam
struct ABP_S3HUD_Base_C_MakeCustomDialogParam_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Labels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WindowWidth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3DialogType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justify;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_GeneralWindow_Image>             Images;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FST_GeneralWindowParam                      Param;                                                    // (Parm, OutParm)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ShowSaveMessage
struct ABP_S3HUD_Base_C_ShowSaveMessage_Params
{
	TEnumAsByte<ESaveMessageType>                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsVisibleLongLoading
struct ABP_S3HUD_Base_C_IsVisibleLongLoading_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.HideLongLoading
struct ABP_S3HUD_Base_C_HideLongLoading_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ShowLongLoading
struct ABP_S3HUD_Base_C_ShowLongLoading_Params
{
	ES3LoadingType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsVisibleDialog
struct ABP_S3HUD_Base_C_IsVisibleDialog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetMenuManagerActor
struct ABP_S3HUD_Base_C_GetMenuManagerActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.RemovePersistantWidget
struct ABP_S3HUD_Base_C_RemovePersistantWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.AddPersistantWidget
struct ABP_S3HUD_Base_C_AddPersistantWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ZOrder;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.CleanUpOnHUDChange
struct ABP_S3HUD_Base_C_CleanUpOnHUDChange_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.MakeCommonDialogParam
struct ABP_S3HUD_Base_C_MakeCommonDialogParam_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Labels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WindowWidth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3DialogType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justify;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_GeneralWindowParam                      Param;                                                    // (Parm, OutParm)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidDetectAction_Impl
struct ABP_S3HUD_Base_C_ForbidDetectAction_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitDetectAction_Impl
struct ABP_S3HUD_Base_C_PermitDetectAction_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.CloseDialog_Impl
struct ABP_S3HUD_Base_C_CloseDialog_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.OpenCommonDialog_Impl
struct ABP_S3HUD_Base_C_OpenCommonDialog_Impl_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Labels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ES3DialogType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justify;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidWindowUI_Impl
struct ABP_S3HUD_Base_C_ForbidWindowUI_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitWindowUI_Impl
struct ABP_S3HUD_Base_C_PermitWindowUI_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.OpenCustomDialog
struct ABP_S3HUD_Base_C_OpenCustomDialog_Params
{
	struct FST_GeneralWindowParam                      Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.HideLoading
struct ABP_S3HUD_Base_C_HideLoading_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ShowLoading
struct ABP_S3HUD_Base_C_ShowLoading_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ScreenFadeOut
struct ABP_S3HUD_Base_C_ScreenFadeOut_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ScreenFadeInAutoColor
struct ABP_S3HUD_Base_C_ScreenFadeInAutoColor_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ScreenFadeIn
struct ABP_S3HUD_Base_C_ScreenFadeIn_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.DisableAutoFadeIn
struct ABP_S3HUD_Base_C_DisableAutoFadeIn_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsHiddenFade
struct ABP_S3HUD_Base_C_IsHiddenFade_Params
{
	bool                                               Hidden;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetFadeColor
struct ABP_S3HUD_Base_C_GetFadeColor_Params
{
	bool                                               bIgnoreOpacity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacity;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.InitOnHUDChange
struct ABP_S3HUD_Base_C_InitOnHUDChange_Params
{
	struct FLinearColor                                InitialColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               EnableAutoFadeIn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_WidgetZOrder>                    ReceieveWidgets;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.CastChildActor
struct ABP_S3HUD_Base_C_CastChildActor_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetEyecatch
struct ABP_S3HUD_Base_C_GetEyecatch_Params
{
	class ABP_eyecatch_C*                              BP_eyecatch;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.DrawCameraLocation
struct ABP_S3HUD_Base_C_DrawCameraLocation_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsFinishedFadeOut
struct ABP_S3HUD_Base_C_IsFinishedFadeOut_Params
{
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsScreenFading
struct ABP_S3HUD_Base_C_IsScreenFading_Params
{
	bool                                               Fading;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.UserConstructionScript
struct ABP_S3HUD_Base_C_UserConstructionScript_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.TL_ScreenFade__FinishedFunc
struct ABP_S3HUD_Base_C_TL_ScreenFade__FinishedFunc_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.TL_ScreenFade__UpdateFunc
struct ABP_S3HUD_Base_C_TL_ScreenFade__UpdateFunc_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.BindSaveMessage
struct ABP_S3HUD_Base_C_BindSaveMessage_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.StartAutoSave
struct ABP_S3HUD_Base_C_StartAutoSave_Params
{
	bool                                               bSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.FinishAutoSave
struct ABP_S3HUD_Base_C_FinishAutoSave_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.FinishSystemSave
struct ABP_S3HUD_Base_C_FinishSystemSave_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.UnbindSaveMessage
struct ABP_S3HUD_Base_C_UnbindSaveMessage_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.BeginScreenFade
struct ABP_S3HUD_Base_C_BeginScreenFade_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ReceiveBeginPlay
struct ABP_S3HUD_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ReceiveDestroyed
struct ABP_S3HUD_Base_C_ReceiveDestroyed_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ReceiveDrawHUD
struct ABP_S3HUD_Base_C_ReceiveDrawHUD_Params
{
	int                                                SizeX;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.FinishedLoadLevel
struct ABP_S3HUD_Base_C_FinishedLoadLevel_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitWindowUI
struct ABP_S3HUD_Base_C_PermitWindowUI_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidWindowUI
struct ABP_S3HUD_Base_C_ForbidWindowUI_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.OpenCommonDialog
struct ABP_S3HUD_Base_C_OpenCommonDialog_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Labels;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ES3DialogType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justify;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.CloseDialog
struct ABP_S3HUD_Base_C_CloseDialog_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitDetectAction
struct ABP_S3HUD_Base_C_PermitDetectAction_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidDetectAction
struct ABP_S3HUD_Base_C_ForbidDetectAction_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.DestroyLoading
struct ABP_S3HUD_Base_C_DestroyLoading_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.DestroySaveMessage
struct ABP_S3HUD_Base_C_DestroySaveMessage_Params
{
};

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ExecuteUbergraph_BP_S3HUD_Base
struct ABP_S3HUD_Base_C_ExecuteUbergraph_BP_S3HUD_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
