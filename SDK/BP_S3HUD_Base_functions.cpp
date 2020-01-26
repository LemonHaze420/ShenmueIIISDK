
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetScreenFadeZOrder
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3HUD_Base_C::GetScreenFadeZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetScreenFadeZOrder");

	ABP_S3HUD_Base_C_GetScreenFadeZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.MakeCustomDialogParam
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WindowWidth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3DialogType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Justify                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_GeneralWindow_Image> Images                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FST_GeneralWindowParam  Param                          (Parm, OutParm)

void ABP_S3HUD_Base_C::MakeCustomDialogParam(class AActor* Executor, int FontSize, float WindowWidth, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, TArray<struct FName>* Labels, TArray<struct FST_GeneralWindow_Image>* Images, struct FST_GeneralWindowParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.MakeCustomDialogParam");

	ABP_S3HUD_Base_C_MakeCustomDialogParam_Params params;
	params.Executor = Executor;
	params.FontSize = FontSize;
	params.WindowWidth = WindowWidth;
	params.Type = Type;
	params.Justify = Justify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
	if (Images != nullptr)
		*Images = params.Images;
	if (Param != nullptr)
		*Param = params.Param;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ShowSaveMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESaveMessageType>  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::ShowSaveMessage(TEnumAsByte<ESaveMessageType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ShowSaveMessage");

	ABP_S3HUD_Base_C_ShowSaveMessage_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsVisibleLongLoading
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::IsVisibleLongLoading(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsVisibleLongLoading");

	ABP_S3HUD_Base_C_IsVisibleLongLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.HideLongLoading
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::HideLongLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.HideLongLoading");

	ABP_S3HUD_Base_C_HideLongLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ShowLongLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3LoadingType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::ShowLongLoading(ES3LoadingType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ShowLongLoading");

	ABP_S3HUD_Base_C_ShowLongLoading_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsVisibleDialog
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3HUD_Base_C::IsVisibleDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsVisibleDialog");

	ABP_S3HUD_Base_C_IsVisibleDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetMenuManagerActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::GetMenuManagerActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetMenuManagerActor");

	ABP_S3HUD_Base_C_GetMenuManagerActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.RemovePersistantWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3HUD_Base_C::RemovePersistantWidget(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.RemovePersistantWidget");

	ABP_S3HUD_Base_C_RemovePersistantWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.AddPersistantWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ZOrder                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::AddPersistantWidget(class UUserWidget* Widget, int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.AddPersistantWidget");

	ABP_S3HUD_Base_C_AddPersistantWidget_Params params;
	params.Widget = Widget;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.CleanUpOnHUDChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::CleanUpOnHUDChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.CleanUpOnHUDChange");

	ABP_S3HUD_Base_C_CleanUpOnHUDChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.MakeCommonDialogParam
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WindowWidth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3DialogType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Justify                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_GeneralWindowParam  Param                          (Parm, OutParm)

void ABP_S3HUD_Base_C::MakeCommonDialogParam(class AActor* Executor, int FontSize, float WindowWidth, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, TArray<struct FName>* Labels, struct FST_GeneralWindowParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.MakeCommonDialogParam");

	ABP_S3HUD_Base_C_MakeCommonDialogParam_Params params;
	params.Executor = Executor;
	params.FontSize = FontSize;
	params.WindowWidth = WindowWidth;
	params.Type = Type;
	params.Justify = Justify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
	if (Param != nullptr)
		*Param = params.Param;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidDetectAction_Impl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::ForbidDetectAction_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidDetectAction_Impl");

	ABP_S3HUD_Base_C_ForbidDetectAction_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitDetectAction_Impl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::PermitDetectAction_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitDetectAction_Impl");

	ABP_S3HUD_Base_C_PermitDetectAction_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.CloseDialog_Impl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::CloseDialog_Impl(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.CloseDialog_Impl");

	ABP_S3HUD_Base_C_CloseDialog_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.OpenCommonDialog_Impl
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// ES3DialogType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Justify                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::OpenCommonDialog_Impl(class AActor* Executor, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, TArray<struct FName>* Labels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.OpenCommonDialog_Impl");

	ABP_S3HUD_Base_C_OpenCommonDialog_Impl_Params params;
	params.Executor = Executor;
	params.Type = Type;
	params.Justify = Justify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidWindowUI_Impl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::ForbidWindowUI_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidWindowUI_Impl");

	ABP_S3HUD_Base_C_ForbidWindowUI_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitWindowUI_Impl
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::PermitWindowUI_Impl(class AActor* Actor, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitWindowUI_Impl");

	ABP_S3HUD_Base_C_PermitWindowUI_Impl_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.OpenCustomDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GeneralWindowParam  Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3HUD_Base_C::OpenCustomDialog(const struct FST_GeneralWindowParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.OpenCustomDialog");

	ABP_S3HUD_Base_C_OpenCustomDialog_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.HideLoading
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3HUD_Base_C::HideLoading(class AActor* Executor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.HideLoading");

	ABP_S3HUD_Base_C_HideLoading_Params params;
	params.Executor = Executor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ShowLoading
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3HUD_Base_C::ShowLoading(class AActor* Executor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ShowLoading");

	ABP_S3HUD_Base_C_ShowLoading_Params params;
	params.Executor = Executor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ScreenFadeOut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3HUD_Base_C::ScreenFadeOut(float FadeTime, const struct FLinearColor& FadeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ScreenFadeOut");

	ABP_S3HUD_Base_C_ScreenFadeOut_Params params;
	params.FadeTime = FadeTime;
	params.FadeColor = FadeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ScreenFadeInAutoColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3HUD_Base_C::ScreenFadeInAutoColor(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ScreenFadeInAutoColor");

	ABP_S3HUD_Base_C_ScreenFadeInAutoColor_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ScreenFadeIn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3HUD_Base_C::ScreenFadeIn(float FadeTime, const struct FLinearColor& FadeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ScreenFadeIn");

	ABP_S3HUD_Base_C_ScreenFadeIn_Params params;
	params.FadeTime = FadeTime;
	params.FadeColor = FadeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.DisableAutoFadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::DisableAutoFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.DisableAutoFadeIn");

	ABP_S3HUD_Base_C_DisableAutoFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsHiddenFade
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Hidden                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::IsHiddenFade(bool* Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsHiddenFade");

	ABP_S3HUD_Base_C_IsHiddenFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hidden != nullptr)
		*Hidden = params.Hidden;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetFadeColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIgnoreOpacity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorAndOpacity                (Parm, OutParm, IsPlainOldData)

void ABP_S3HUD_Base_C::GetFadeColor(bool bIgnoreOpacity, struct FLinearColor* ColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetFadeColor");

	ABP_S3HUD_Base_C_GetFadeColor_Params params;
	params.bIgnoreOpacity = bIgnoreOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ColorAndOpacity != nullptr)
		*ColorAndOpacity = params.ColorAndOpacity;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.InitOnHUDChange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InitialColor                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           EnableAutoFadeIn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_WidgetZOrder> ReceieveWidgets                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_S3HUD_Base_C::InitOnHUDChange(const struct FLinearColor& InitialColor, bool EnableAutoFadeIn, TArray<struct FST_WidgetZOrder>* ReceieveWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.InitOnHUDChange");

	ABP_S3HUD_Base_C_InitOnHUDChange_Params params;
	params.InitialColor = InitialColor;
	params.EnableAutoFadeIn = EnableAutoFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReceieveWidgets != nullptr)
		*ReceieveWidgets = params.ReceieveWidgets;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.CastChildActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::CastChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.CastChildActor");

	ABP_S3HUD_Base_C_CastChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetEyecatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_eyecatch_C*          BP_eyecatch                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::GetEyecatch(class ABP_eyecatch_C** BP_eyecatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.GetEyecatch");

	ABP_S3HUD_Base_C_GetEyecatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_eyecatch != nullptr)
		*BP_eyecatch = params.BP_eyecatch;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.DrawCameraLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::DrawCameraLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.DrawCameraLocation");

	ABP_S3HUD_Base_C_DrawCameraLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsFinishedFadeOut
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::IsFinishedFadeOut(bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsFinishedFadeOut");

	ABP_S3HUD_Base_C_IsFinishedFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsScreenFading
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Fading                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::IsScreenFading(bool* Fading)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.IsScreenFading");

	ABP_S3HUD_Base_C_IsScreenFading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fading != nullptr)
		*Fading = params.Fading;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.UserConstructionScript");

	ABP_S3HUD_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.TL_ScreenFade__FinishedFunc
// (BlueprintEvent)

void ABP_S3HUD_Base_C::TL_ScreenFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.TL_ScreenFade__FinishedFunc");

	ABP_S3HUD_Base_C_TL_ScreenFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.TL_ScreenFade__UpdateFunc
// (BlueprintEvent)

void ABP_S3HUD_Base_C::TL_ScreenFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.TL_ScreenFade__UpdateFunc");

	ABP_S3HUD_Base_C_TL_ScreenFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.BindSaveMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::BindSaveMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.BindSaveMessage");

	ABP_S3HUD_Base_C_BindSaveMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.StartAutoSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::StartAutoSave(bool bSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.StartAutoSave");

	ABP_S3HUD_Base_C_StartAutoSave_Params params;
	params.bSystem = bSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.FinishAutoSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::FinishAutoSave(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.FinishAutoSave");

	ABP_S3HUD_Base_C_FinishAutoSave_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.FinishSystemSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::FinishSystemSave(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.FinishSystemSave");

	ABP_S3HUD_Base_C_FinishSystemSave_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.UnbindSaveMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::UnbindSaveMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.UnbindSaveMessage");

	ABP_S3HUD_Base_C_UnbindSaveMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.BeginScreenFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3HUD_Base_C::BeginScreenFade(bool Visible, float FadeTime, const struct FLinearColor& FadeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.BeginScreenFade");

	ABP_S3HUD_Base_C_BeginScreenFade_Params params;
	params.Visible = Visible;
	params.FadeTime = FadeTime;
	params.FadeColor = FadeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3HUD_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ReceiveBeginPlay");

	ABP_S3HUD_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_S3HUD_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ReceiveDestroyed");

	ABP_S3HUD_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int                            SizeX                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::ReceiveDrawHUD(int SizeX, int SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ReceiveDrawHUD");

	ABP_S3HUD_Base_C_ReceiveDrawHUD_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.FinishedLoadLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::FinishedLoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.FinishedLoadLevel");

	ABP_S3HUD_Base_C_FinishedLoadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitWindowUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::PermitWindowUI(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitWindowUI");

	ABP_S3HUD_Base_C_PermitWindowUI_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidWindowUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::ForbidWindowUI(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidWindowUI");

	ABP_S3HUD_Base_C_ForbidWindowUI_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.OpenCommonDialog
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Labels                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// ES3DialogType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Justify                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::OpenCommonDialog(class AActor* Executor, TArray<struct FName> Labels, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.OpenCommonDialog");

	ABP_S3HUD_Base_C_OpenCommonDialog_Params params;
	params.Executor = Executor;
	params.Labels = Labels;
	params.Type = Type;
	params.Justify = Justify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.CloseDialog
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::CloseDialog(class AActor* Executor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.CloseDialog");

	ABP_S3HUD_Base_C_CloseDialog_Params params;
	params.Executor = Executor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::PermitDetectAction(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.PermitDetectAction");

	ABP_S3HUD_Base_C_PermitDetectAction_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::ForbidDetectAction(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ForbidDetectAction");

	ABP_S3HUD_Base_C_ForbidDetectAction_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.DestroyLoading
// (BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::DestroyLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.DestroyLoading");

	ABP_S3HUD_Base_C_DestroyLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.DestroySaveMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_S3HUD_Base_C::DestroySaveMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.DestroySaveMessage");

	ABP_S3HUD_Base_C_DestroySaveMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3HUD_Base.BP_S3HUD_Base_C.ExecuteUbergraph_BP_S3HUD_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3HUD_Base_C::ExecuteUbergraph_BP_S3HUD_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3HUD_Base.BP_S3HUD_Base_C.ExecuteUbergraph_BP_S3HUD_Base");

	ABP_S3HUD_Base_C_ExecuteUbergraph_BP_S3HUD_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
