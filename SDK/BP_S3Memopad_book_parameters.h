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

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsEnableJump
struct ABP_S3Memopad_book_C_IsEnableJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsEnableDown
struct ABP_S3Memopad_book_C_IsEnableDown_Params
{
	bool                                               A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsEnableUp
struct ABP_S3Memopad_book_C_IsEnableUp_Params
{
	bool                                               A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetTabJumpPage
struct ABP_S3Memopad_book_C_GetTabJumpPage_Params
{
	int                                                TabIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                page;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetPageInterval
struct ABP_S3Memopad_book_C_GetPageInterval_Params
{
	float                                              PageInterval;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetSubEvntListLength
struct ABP_S3Memopad_book_C_GetSubEvntListLength_Params
{
	int                                                Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckFirstOpenPage
struct ABP_S3Memopad_book_C_CheckFirstOpenPage_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetOpenMainEventPage
struct ABP_S3Memopad_book_C_SetOpenMainEventPage_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSkipSubEvent
struct ABP_S3Memopad_book_C_CheckSkipSubEvent_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSameSpread
struct ABP_S3Memopad_book_C_CheckSameSpread_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DeleteSubEventList
struct ABP_S3Memopad_book_C_DeleteSubEventList_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetNowOpenPageIndex
struct ABP_S3Memopad_book_C_GetNowOpenPageIndex_Params
{
	int                                                NowOpenPage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSubEventPage
struct ABP_S3Memopad_book_C_CheckSubEventPage_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckOngoingSubEvent
struct ABP_S3Memopad_book_C_CheckOngoingSubEvent_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckUnreadTab
struct ABP_S3Memopad_book_C_CheckUnreadTab_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSubEvntFlg
struct ABP_S3Memopad_book_C_CheckSubEvntFlg_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsPageAnimation
struct ABP_S3Memopad_book_C_IsPageAnimation_Params
{
	bool                                               AnimationNow;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.StartMotivationMove
struct ABP_S3Memopad_book_C_StartMotivationMove_Params
{
	bool                                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckMotivationMovePage
struct ABP_S3Memopad_book_C_CheckMotivationMovePage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsActiveOpenNewPageButton
struct ABP_S3Memopad_book_C_IsActiveOpenNewPageButton_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPageContinueTurning
struct ABP_S3Memopad_book_C_NextPageContinueTurning_Params
{
	bool                                               bRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ChangeCurrentMapPage
struct ABP_S3Memopad_book_C_ChangeCurrentMapPage_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnPage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetContinueTurnPageTexture
struct ABP_S3Memopad_book_C_GetContinueTurnPageTexture_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckPageDataValid
struct ABP_S3Memopad_book_C_CheckPageDataValid_Params
{
	int                                                PageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DataValid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InitTab
struct ABP_S3Memopad_book_C_InitTab_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsActiveStartEndPage
struct ABP_S3Memopad_book_C_IsActiveStartEndPage_Params
{
	bool                                               ActiveStart;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ActiveEnd;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetLastPage
struct ABP_S3Memopad_book_C_GetLastPage_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetAlready
struct ABP_S3Memopad_book_C_SetAlready_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetCaptureMempPAdPart
struct ABP_S3Memopad_book_C_SetCaptureMempPAdPart_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetText
struct ABP_S3Memopad_book_C_SetText_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderF;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderR;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3Memopad_page_C*                        PageF;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3Memopad_page_C*                        PageR;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastUpdateDelayTime;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetPhoto
struct ABP_S3Memopad_book_C_SetPhoto_Params
{
	class UTextureRenderTarget2D*                      RenderTexture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Photo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ScreenSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   CoodinatePosition;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   CoodinateSize;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PivotPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3Memopad_page_C*                        page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetMapTexture
struct ABP_S3Memopad_book_C_SetMapTexture_Params
{
	class UTextureRenderTarget2D*                      RenderTarget_Left;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget_Right;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3Memopad_page_C*                        Page_Left;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3Memopad_page_C*                        Page_Right;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetPageCountMax
struct ABP_S3Memopad_book_C_SetPageCountMax_Params
{
	int                                                targetPage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetOpenPageIndex
struct ABP_S3Memopad_book_C_GetOpenPageIndex_Params
{
	int                                                targetPage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OpenPage;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetNextTabIndex
struct ABP_S3Memopad_book_C_SetNextTabIndex_Params
{
	bool                                               UpPush;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNextTab;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckTabVisible
struct ABP_S3Memopad_book_C_CheckTabVisible_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetLastMemoNoInPage
struct ABP_S3Memopad_book_C_GetLastMemoNoInPage_Params
{
	int                                                PageNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MemoNo;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckButton
struct ABP_S3Memopad_book_C_CheckButton_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsActiveOpenMotivationPageButton
struct ABP_S3Memopad_book_C_IsActiveOpenMotivationPageButton_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetPageTextureRFIndex
struct ABP_S3Memopad_book_C_GetPageTextureRFIndex_Params
{
	int                                                PageR;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PageF;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.StopAllActor
struct ABP_S3Memopad_book_C_StopAllActor_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.TabCheck
struct ABP_S3Memopad_book_C_TabCheck_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TagIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetPageData
struct ABP_S3Memopad_book_C_GetPageData_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetIsAnimation
struct ABP_S3Memopad_book_C_GetIsAnimation_Params
{
	bool                                               isAnim;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetRenderItem
struct ABP_S3Memopad_book_C_GetRenderItem_Params
{
	bool                                               IsLast;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      Texture_1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      Texture_2;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetPageStatus
struct ABP_S3Memopad_book_C_SetPageStatus_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckCoverAnim
struct ABP_S3Memopad_book_C_CheckCoverAnim_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetCoverAnim
struct ABP_S3Memopad_book_C_SetCoverAnim_Params
{
	class ABP_S3Memopad_page_C*                        page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AnimId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetCoverOffset
struct ABP_S3Memopad_book_C_SetCoverOffset_Params
{
	class UChildActorComponent*                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.AddPage
struct ABP_S3Memopad_book_C_AddPage_Params
{
	TArray<class ABP_S3Memopad_page_C*>                PageArray;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3Memopad_page_C*                        page;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPage
struct ABP_S3Memopad_book_C_NextPage_Params
{
	bool                                               bRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLast;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.TurnedPage
struct ABP_S3Memopad_book_C_TurnedPage_Params
{
	class ABP_S3Memopad_page_C*                        page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LastPage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CloseBook
struct ABP_S3Memopad_book_C_CloseBook_Params
{
	bool                                               Finish;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.OpenBook
struct ABP_S3Memopad_book_C_OpenBook_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CreateBook
struct ABP_S3Memopad_book_C_CreateBook_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.doCmd_screenOut
struct ABP_S3Memopad_book_C_doCmd_screenOut_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.UserConstructionScript
struct ABP_S3Memopad_book_C_UserConstructionScript_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove1__FinishedFunc
struct ABP_S3Memopad_book_C_tl_PageMove1__FinishedFunc_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove1__UpdateFunc
struct ABP_S3Memopad_book_C_tl_PageMove1__UpdateFunc_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove2__FinishedFunc
struct ABP_S3Memopad_book_C_tl_PageMove2__FinishedFunc_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove2__UpdateFunc
struct ABP_S3Memopad_book_C_tl_PageMove2__UpdateFunc_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.fade__FinishedFunc
struct ABP_S3Memopad_book_C_fade__FinishedFunc_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.fade__UpdateFunc
struct ABP_S3Memopad_book_C_fade__UpdateFunc_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.򠪦􆖐񍳔_
struct ABP_S3Memopad_book_C_UnknownFunc01__Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_Ctrl_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2
struct ABP_S3Memopad_book_C_InpActEvt_Ctrl_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_20
struct ABP_S3Memopad_book_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_19
struct ABP_S3Memopad_book_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18
struct ABP_S3Memopad_book_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_17
struct ABP_S3Memopad_book_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16
struct ABP_S3Memopad_book_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15
struct ABP_S3Memopad_book_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14
struct ABP_S3Memopad_book_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13
struct ABP_S3Memopad_book_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_12
struct ABP_S3Memopad_book_C_InpActEvt_MenuPageLeft_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_11
struct ABP_S3Memopad_book_C_InpActEvt_MenuPageRight_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ReceiveBeginPlay
struct ABP_S3Memopad_book_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.doCmd_screenIn
struct ABP_S3Memopad_book_C_doCmd_screenIn_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ReceiveDestroyed
struct ABP_S3Memopad_book_C_ReceiveDestroyed_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ReceiveTick
struct ABP_S3Memopad_book_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PlayCoverAnim
struct ABP_S3Memopad_book_C_PlayCoverAnim_Params
{
	struct FMemopadCoverAnim                           Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPageLeft
struct ABP_S3Memopad_book_C_NextPageLeft_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPageRight
struct ABP_S3Memopad_book_C_NextPageRight_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.Destroy
struct ABP_S3Memopad_book_C_Destroy_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.BackTab
struct ABP_S3Memopad_book_C_BackTab_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextTab
struct ABP_S3Memopad_book_C_NextTab_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetTabSize
struct ABP_S3Memopad_book_C_SetTabSize_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InitPageTexture
struct ABP_S3Memopad_book_C_InitPageTexture_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PushNewPage
struct ABP_S3Memopad_book_C_PushNewPage_Params
{
	bool                                               IsR2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PushPageEndButton
struct ABP_S3Memopad_book_C_PushPageEndButton_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PushPageStartButton
struct ABP_S3Memopad_book_C_PushPageStartButton_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PermissionDetectIcon
struct ABP_S3Memopad_book_C_PermissionDetectIcon_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.OnPageUpdateEnd
struct ABP_S3Memopad_book_C_OnPageUpdateEnd_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ExecuteUbergraph_BP_S3Memopad_book
struct ABP_S3Memopad_book_C_ExecuteUbergraph_BP_S3Memopad_book_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoUseStartEndPageButton__DelegateSignature
struct ABP_S3Memopad_book_C_DoUseStartEndPageButton__DelegateSignature_Params
{
	bool                                               Active_StartPage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active_EndPage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoButtonCheck__DelegateSignature
struct ABP_S3Memopad_book_C_DoButtonCheck__DelegateSignature_Params
{
	bool                                               cancel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BookMark;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewPage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNotAllBookmark;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoUseNewPageButton__DelegateSignature
struct ABP_S3Memopad_book_C_DoUseNewPageButton__DelegateSignature_Params
{
	bool                                               Use;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoUseCancelButton__DelegateSignature
struct ABP_S3Memopad_book_C_DoUseCancelButton__DelegateSignature_Params
{
	bool                                               bUse;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.onEndScreenOut__DelegateSignature
struct ABP_S3Memopad_book_C_onEndScreenOut__DelegateSignature_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.onEndScreenIn__DelegateSignature
struct ABP_S3Memopad_book_C_onEndScreenIn__DelegateSignature_Params
{
};

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.command_screenOut__DelegateSignature
struct ABP_S3Memopad_book_C_command_screenOut__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
