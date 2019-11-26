
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsEnableJump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3Memopad_book_C::IsEnableJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsEnableJump");

	ABP_S3Memopad_book_C_IsEnableJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsEnableDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3Memopad_book_C::IsEnableDown(bool A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsEnableDown");

	ABP_S3Memopad_book_C_IsEnableDown_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsEnableUp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3Memopad_book_C::IsEnableUp(bool A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsEnableUp");

	ABP_S3Memopad_book_C_IsEnableUp_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetTabJumpPage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TabIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            page                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetTabJumpPage(int TabIndex, int* page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetTabJumpPage");

	ABP_S3Memopad_book_C_GetTabJumpPage_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (page != nullptr)
		*page = params.page;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetPageInterval
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          PageInterval                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetPageInterval(float* PageInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetPageInterval");

	ABP_S3Memopad_book_C_GetPageInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PageInterval != nullptr)
		*PageInterval = params.PageInterval;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetSubEvntListLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetSubEvntListLength(int* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetSubEvntListLength");

	ABP_S3Memopad_book_C_GetSubEvntListLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckFirstOpenPage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CheckFirstOpenPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckFirstOpenPage");

	ABP_S3Memopad_book_C_CheckFirstOpenPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetOpenMainEventPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::SetOpenMainEventPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetOpenMainEventPage");

	ABP_S3Memopad_book_C_SetOpenMainEventPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSkipSubEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CheckSkipSubEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSkipSubEvent");

	ABP_S3Memopad_book_C_CheckSkipSubEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSameSpread
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CheckSameSpread()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSameSpread");

	ABP_S3Memopad_book_C_CheckSameSpread_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DeleteSubEventList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::DeleteSubEventList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.DeleteSubEventList");

	ABP_S3Memopad_book_C_DeleteSubEventList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetNowOpenPageIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NowOpenPage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetNowOpenPageIndex(int* NowOpenPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetNowOpenPageIndex");

	ABP_S3Memopad_book_C_GetNowOpenPageIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NowOpenPage != nullptr)
		*NowOpenPage = params.NowOpenPage;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSubEventPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CheckSubEventPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSubEventPage");

	ABP_S3Memopad_book_C_CheckSubEventPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckOngoingSubEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CheckOngoingSubEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckOngoingSubEvent");

	ABP_S3Memopad_book_C_CheckOngoingSubEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckUnreadTab
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CheckUnreadTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckUnreadTab");

	ABP_S3Memopad_book_C_CheckUnreadTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSubEvntFlg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CheckSubEvntFlg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckSubEvntFlg");

	ABP_S3Memopad_book_C_CheckSubEvntFlg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsPageAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AnimationNow                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::IsPageAnimation(bool* AnimationNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsPageAnimation");

	ABP_S3Memopad_book_C_IsPageAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationNow != nullptr)
		*AnimationNow = params.AnimationNow;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.StartMotivationMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::StartMotivationMove(bool Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.StartMotivationMove");

	ABP_S3Memopad_book_C_StartMotivationMove_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckMotivationMovePage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3Memopad_book_C::CheckMotivationMovePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckMotivationMovePage");

	ABP_S3Memopad_book_C_CheckMotivationMovePage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsActiveOpenNewPageButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::IsActiveOpenNewPageButton(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsActiveOpenNewPageButton");

	ABP_S3Memopad_book_C_IsActiveOpenNewPageButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPageContinueTurning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::NextPageContinueTurning(bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPageContinueTurning");

	ABP_S3Memopad_book_C_NextPageContinueTurning_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ChangeCurrentMapPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnPage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::ChangeCurrentMapPage(int page, int* ReturnPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.ChangeCurrentMapPage");

	ABP_S3Memopad_book_C_ChangeCurrentMapPage_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnPage != nullptr)
		*ReturnPage = params.ReturnPage;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetContinueTurnPageTexture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture*                Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetContinueTurnPageTexture(class UTexture** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetContinueTurnPageTexture");

	ABP_S3Memopad_book_C_GetContinueTurnPageTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckPageDataValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DataValid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::CheckPageDataValid(int PageIndex, bool* DataValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckPageDataValid");

	ABP_S3Memopad_book_C_CheckPageDataValid_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataValid != nullptr)
		*DataValid = params.DataValid;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InitTab
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::InitTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InitTab");

	ABP_S3Memopad_book_C_InitTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsActiveStartEndPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ActiveStart                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ActiveEnd                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::IsActiveStartEndPage(bool* ActiveStart, bool* ActiveEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsActiveStartEndPage");

	ABP_S3Memopad_book_C_IsActiveStartEndPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveStart != nullptr)
		*ActiveStart = params.ActiveStart;
	if (ActiveEnd != nullptr)
		*ActiveEnd = params.ActiveEnd;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetLastPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::GetLastPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetLastPage");

	ABP_S3Memopad_book_C_GetLastPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetAlready
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::SetAlready(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetAlready");

	ABP_S3Memopad_book_C_SetAlready_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetCaptureMempPAdPart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::SetCaptureMempPAdPart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetCaptureMempPAdPart");

	ABP_S3Memopad_book_C_SetCaptureMempPAdPart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  RenderF                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  RenderR                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3Memopad_page_C*    PageF                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3Memopad_page_C*    PageR                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LastUpdateDelayTime            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::SetText(int page, class UTextureRenderTarget2D* RenderF, class UTextureRenderTarget2D* RenderR, class ABP_S3Memopad_page_C* PageF, class ABP_S3Memopad_page_C* PageR, float LastUpdateDelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetText");

	ABP_S3Memopad_book_C_SetText_Params params;
	params.page = page;
	params.RenderF = RenderF;
	params.RenderR = RenderR;
	params.PageF = PageF;
	params.PageR = PageR;
	params.LastUpdateDelayTime = LastUpdateDelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetPhoto
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  RenderTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Photo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ScreenSize                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               CoodinatePosition              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               CoodinateSize                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               PivotPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3Memopad_page_C*    page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::SetPhoto(class UTextureRenderTarget2D* RenderTexture, class UTexture* Photo, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoodinatePosition, const struct FVector2D& CoodinateSize, float Rotation, const struct FVector2D& PivotPoint, bool Right, int Index, class ABP_S3Memopad_page_C* page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetPhoto");

	ABP_S3Memopad_book_C_SetPhoto_Params params;
	params.RenderTexture = RenderTexture;
	params.Photo = Photo;
	params.ScreenPosition = ScreenPosition;
	params.ScreenSize = ScreenSize;
	params.CoodinatePosition = CoodinatePosition;
	params.CoodinateSize = CoodinateSize;
	params.Rotation = Rotation;
	params.PivotPoint = PivotPoint;
	params.Right = Right;
	params.Index = Index;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetMapTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  RenderTarget_Left              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  RenderTarget_Right             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3Memopad_page_C*    Page_Left                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3Memopad_page_C*    Page_Right                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::SetMapTexture(class UTextureRenderTarget2D* RenderTarget_Left, class UTextureRenderTarget2D* RenderTarget_Right, class ABP_S3Memopad_page_C* Page_Left, class ABP_S3Memopad_page_C* Page_Right, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetMapTexture");

	ABP_S3Memopad_book_C_SetMapTexture_Params params;
	params.RenderTarget_Left = RenderTarget_Left;
	params.RenderTarget_Right = RenderTarget_Right;
	params.Page_Left = Page_Left;
	params.Page_Right = Page_Right;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetPageCountMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            targetPage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::SetPageCountMax(int targetPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetPageCountMax");

	ABP_S3Memopad_book_C_SetPageCountMax_Params params;
	params.targetPage = targetPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetOpenPageIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            targetPage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OpenPage                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetOpenPageIndex(int targetPage, int* OpenPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetOpenPageIndex");

	ABP_S3Memopad_book_C_GetOpenPageIndex_Params params;
	params.targetPage = targetPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OpenPage != nullptr)
		*OpenPage = params.OpenPage;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetNextTabIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UpPush                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNextTab                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::SetNextTabIndex(bool UpPush, bool* IsNextTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetNextTabIndex");

	ABP_S3Memopad_book_C_SetNextTabIndex_Params params;
	params.UpPush = UpPush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNextTab != nullptr)
		*IsNextTab = params.IsNextTab;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckTabVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CheckTabVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckTabVisible");

	ABP_S3Memopad_book_C_CheckTabVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetLastMemoNoInPage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PageNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MemoNo                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetLastMemoNoInPage(int PageNo, int* MemoNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetLastMemoNoInPage");

	ABP_S3Memopad_book_C_GetLastMemoNoInPage_Params params;
	params.PageNo = PageNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemoNo != nullptr)
		*MemoNo = params.MemoNo;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CheckButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckButton");

	ABP_S3Memopad_book_C_CheckButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsActiveOpenMotivationPageButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::IsActiveOpenMotivationPageButton(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.IsActiveOpenMotivationPageButton");

	ABP_S3Memopad_book_C_IsActiveOpenMotivationPageButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetPageTextureRFIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PageR                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PageF                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetPageTextureRFIndex(int* PageR, int* PageF)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetPageTextureRFIndex");

	ABP_S3Memopad_book_C_GetPageTextureRFIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PageR != nullptr)
		*PageR = params.PageR;
	if (PageF != nullptr)
		*PageF = params.PageF;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.StopAllActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::StopAllActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.StopAllActor");

	ABP_S3Memopad_book_C_StopAllActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.TabCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TagIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::TabCheck(int page, int* TagIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.TabCheck");

	ABP_S3Memopad_book_C_TabCheck_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagIndex != nullptr)
		*TagIndex = params.TagIndex;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetPageData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::GetPageData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetPageData");

	ABP_S3Memopad_book_C_GetPageData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetIsAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isAnim                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetIsAnimation(bool* isAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetIsAnimation");

	ABP_S3Memopad_book_C_GetIsAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAnim != nullptr)
		*isAnim = params.isAnim;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetRenderItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLast                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  Texture_1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  Texture_2                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::GetRenderItem(bool IsLast, class UTextureRenderTarget2D** Texture_1, class UTextureRenderTarget2D** Texture_2, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.GetRenderItem");

	ABP_S3Memopad_book_C_GetRenderItem_Params params;
	params.IsLast = IsLast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture_1 != nullptr)
		*Texture_1 = params.Texture_1;
	if (Texture_2 != nullptr)
		*Texture_2 = params.Texture_2;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetPageStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::SetPageStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetPageStatus");

	ABP_S3Memopad_book_C_SetPageStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckCoverAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::CheckCoverAnim(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CheckCoverAnim");

	ABP_S3Memopad_book_C_CheckCoverAnim_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetCoverAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3Memopad_page_C*    page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AnimId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::SetCoverAnim(class ABP_S3Memopad_page_C* page, float WaitTime, int AnimId, bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetCoverAnim");

	ABP_S3Memopad_book_C_SetCoverAnim_Params params;
	params.page = page;
	params.WaitTime = WaitTime;
	params.AnimId = AnimId;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetCoverOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::SetCoverOffset(class UChildActorComponent* Component, float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetCoverOffset");

	ABP_S3Memopad_book_C_SetCoverOffset_Params params;
	params.Component = Component;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.AddPage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_S3Memopad_page_C*> PageArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3Memopad_page_C*    page                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::AddPage(bool bRight, TArray<class ABP_S3Memopad_page_C*>* PageArray, class ABP_S3Memopad_page_C** page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.AddPage");

	ABP_S3Memopad_book_C_AddPage_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PageArray != nullptr)
		*PageArray = params.PageArray;
	if (page != nullptr)
		*page = params.page;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLast                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::NextPage(bool bRight, bool IsLast)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPage");

	ABP_S3Memopad_book_C_NextPage_Params params;
	params.bRight = bRight;
	params.IsLast = IsLast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.TurnedPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3Memopad_page_C*    page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LastPage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::TurnedPage(class ABP_S3Memopad_page_C* page, bool LastPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.TurnedPage");

	ABP_S3Memopad_book_C_TurnedPage_Params params;
	params.page = page;
	params.LastPage = LastPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CloseBook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Finish                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::CloseBook(bool Finish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CloseBook");

	ABP_S3Memopad_book_C_CloseBook_Params params;
	params.Finish = Finish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.OpenBook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::OpenBook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.OpenBook");

	ABP_S3Memopad_book_C_OpenBook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.CreateBook
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::CreateBook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.CreateBook");

	ABP_S3Memopad_book_C_CreateBook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.doCmd_screenOut
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::doCmd_screenOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.doCmd_screenOut");

	ABP_S3Memopad_book_C_doCmd_screenOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.UserConstructionScript");

	ABP_S3Memopad_book_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove1__FinishedFunc
// (BlueprintEvent)

void ABP_S3Memopad_book_C::tl_PageMove1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove1__FinishedFunc");

	ABP_S3Memopad_book_C_tl_PageMove1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove1__UpdateFunc
// (BlueprintEvent)

void ABP_S3Memopad_book_C::tl_PageMove1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove1__UpdateFunc");

	ABP_S3Memopad_book_C_tl_PageMove1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove2__FinishedFunc
// (BlueprintEvent)

void ABP_S3Memopad_book_C::tl_PageMove2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove2__FinishedFunc");

	ABP_S3Memopad_book_C_tl_PageMove2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove2__UpdateFunc
// (BlueprintEvent)

void ABP_S3Memopad_book_C::tl_PageMove2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.tl_PageMove2__UpdateFunc");

	ABP_S3Memopad_book_C_tl_PageMove2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.fade__FinishedFunc
// (BlueprintEvent)

void ABP_S3Memopad_book_C::fade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.fade__FinishedFunc");

	ABP_S3Memopad_book_C_fade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.fade__UpdateFunc
// (BlueprintEvent)

void ABP_S3Memopad_book_C::fade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.fade__UpdateFunc");

	ABP_S3Memopad_book_C_fade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.򠪦􆖐񍳔_
// (BlueprintEvent)

void ABP_S3Memopad_book_C::UnknownFunc01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.򠪦􆖐񍳔_");

	ABP_S3Memopad_book_C_UnknownFunc01__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_Ctrl_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_Ctrl_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_Ctrl_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2");

	ABP_S3Memopad_book_C_InpActEvt_Ctrl_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_20");

	ABP_S3Memopad_book_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_19");

	ABP_S3Memopad_book_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18");

	ABP_S3Memopad_book_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_17");

	ABP_S3Memopad_book_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16");

	ABP_S3Memopad_book_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15");

	ABP_S3Memopad_book_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14");

	ABP_S3Memopad_book_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13");

	ABP_S3Memopad_book_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_MenuPageLeft_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_12");

	ABP_S3Memopad_book_C_InpActEvt_MenuPageLeft_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::InpActEvt_MenuPageRight_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_11");

	ABP_S3Memopad_book_C_InpActEvt_MenuPageRight_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3Memopad_book_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.ReceiveBeginPlay");

	ABP_S3Memopad_book_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.doCmd_screenIn
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::doCmd_screenIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.doCmd_screenIn");

	ABP_S3Memopad_book_C_doCmd_screenIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_S3Memopad_book_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.ReceiveDestroyed");

	ABP_S3Memopad_book_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.ReceiveTick");

	ABP_S3Memopad_book_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PlayCoverAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMemopadCoverAnim       Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3Memopad_book_C::PlayCoverAnim(const struct FMemopadCoverAnim& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.PlayCoverAnim");

	ABP_S3Memopad_book_C_PlayCoverAnim_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPageLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::NextPageLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPageLeft");

	ABP_S3Memopad_book_C_NextPageLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPageRight
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::NextPageRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextPageRight");

	ABP_S3Memopad_book_C_NextPageRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.Destroy
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.Destroy");

	ABP_S3Memopad_book_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.BackTab
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::BackTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.BackTab");

	ABP_S3Memopad_book_C_BackTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextTab
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::NextTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.NextTab");

	ABP_S3Memopad_book_C_NextTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetTabSize
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::SetTabSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.SetTabSize");

	ABP_S3Memopad_book_C_SetTabSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.InitPageTexture
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::InitPageTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.InitPageTexture");

	ABP_S3Memopad_book_C_InitPageTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PushNewPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsR2                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::PushNewPage(bool IsR2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.PushNewPage");

	ABP_S3Memopad_book_C_PushNewPage_Params params;
	params.IsR2 = IsR2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PushPageEndButton
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::PushPageEndButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.PushPageEndButton");

	ABP_S3Memopad_book_C_PushPageEndButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PushPageStartButton
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::PushPageStartButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.PushPageStartButton");

	ABP_S3Memopad_book_C_PushPageStartButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.PermissionDetectIcon
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::PermissionDetectIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.PermissionDetectIcon");

	ABP_S3Memopad_book_C_PermissionDetectIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.OnPageUpdateEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::OnPageUpdateEnd(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.OnPageUpdateEnd");

	ABP_S3Memopad_book_C_OnPageUpdateEnd_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.ExecuteUbergraph_BP_S3Memopad_book
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::ExecuteUbergraph_BP_S3Memopad_book(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.ExecuteUbergraph_BP_S3Memopad_book");

	ABP_S3Memopad_book_C_ExecuteUbergraph_BP_S3Memopad_book_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoUseStartEndPageButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active_StartPage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active_EndPage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::DoUseStartEndPageButton__DelegateSignature(bool Active_StartPage, bool Active_EndPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoUseStartEndPageButton__DelegateSignature");

	ABP_S3Memopad_book_C_DoUseStartEndPageButton__DelegateSignature_Params params;
	params.Active_StartPage = Active_StartPage;
	params.Active_EndPage = Active_EndPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoButtonCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           cancel                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BookMark                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewPage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNotAllBookmark               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::DoButtonCheck__DelegateSignature(bool cancel, bool BookMark, bool NewPage, bool IsNotAllBookmark)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoButtonCheck__DelegateSignature");

	ABP_S3Memopad_book_C_DoButtonCheck__DelegateSignature_Params params;
	params.cancel = cancel;
	params.BookMark = BookMark;
	params.NewPage = NewPage;
	params.IsNotAllBookmark = IsNotAllBookmark;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoUseNewPageButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Use                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::DoUseNewPageButton__DelegateSignature(bool Use)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoUseNewPageButton__DelegateSignature");

	ABP_S3Memopad_book_C_DoUseNewPageButton__DelegateSignature_Params params;
	params.Use = Use;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoUseCancelButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_book_C::DoUseCancelButton__DelegateSignature(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.DoUseCancelButton__DelegateSignature");

	ABP_S3Memopad_book_C_DoUseCancelButton__DelegateSignature_Params params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.onEndScreenOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::onEndScreenOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.onEndScreenOut__DelegateSignature");

	ABP_S3Memopad_book_C_onEndScreenOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.onEndScreenIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::onEndScreenIn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.onEndScreenIn__DelegateSignature");

	ABP_S3Memopad_book_C_onEndScreenIn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_book.BP_S3Memopad_book_C.command_screenOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3Memopad_book_C::command_screenOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_book.BP_S3Memopad_book_C.command_screenOut__DelegateSignature");

	ABP_S3Memopad_book_C_command_screenOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
