
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AllReset
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3HelpWindow_C::AllReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AllReset");

	Uwgt_S3HelpWindow_C_AllReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::AddPage(int Index, int Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddPage");

	Uwgt_S3HelpWindow_C_AddPage_Params params;
	params.Index = Index;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddImg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uwgt_S3HelpWindow_C::AddImg(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddImg");

	Uwgt_S3HelpWindow_C_AddImg_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Last                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::AddCategory(const struct FString& Name, const struct FString& ID, bool Last)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddCategory");

	Uwgt_S3HelpWindow_C_AddCategory_Params params;
	params.Name = Name;
	params.ID = ID;
	params.Last = Last;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.SetScroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectCategoryIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::SetScroll(int SelectCategoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.SetScroll");

	Uwgt_S3HelpWindow_C_SetScroll_Params params;
	params.SelectCategoryIndex = SelectCategoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.ChgHelpImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::ChgHelpImage(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.ChgHelpImage");

	Uwgt_S3HelpWindow_C_ChgHelpImage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PrevScroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NextScrollVal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectCategoryIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::PrevScroll(float NextScrollVal, int SelectCategoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PrevScroll");

	Uwgt_S3HelpWindow_C_PrevScroll_Params params;
	params.NextScrollVal = NextScrollVal;
	params.SelectCategoryIndex = SelectCategoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.NextScroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NextScrollVal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectCategoryIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::NextScroll(float NextScrollVal, int SelectCategoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.NextScroll");

	Uwgt_S3HelpWindow_C_NextScroll_Params params;
	params.NextScrollVal = NextScrollVal;
	params.SelectCategoryIndex = SelectCategoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayCloseAnime
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3HelpWindow_C::PlayCloseAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayCloseAnime");

	Uwgt_S3HelpWindow_C_PlayCloseAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayOpenAnime
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3HelpWindow_C::PlayOpenAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayOpenAnime");

	Uwgt_S3HelpWindow_C_PlayOpenAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.OnLoaded_6E1564824F630812B0409FA66A36D2DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::OnLoaded_6E1564824F630812B0409FA66A36D2DC(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.OnLoaded_6E1564824F630812B0409FA66A36D2DC");

	Uwgt_S3HelpWindow_C_OnLoaded_6E1564824F630812B0409FA66A36D2DC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3HelpWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Construct");

	Uwgt_S3HelpWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Tick");

	Uwgt_S3HelpWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_S3HelpWindow_C::BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3HelpWindow_C_BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_S3HelpWindow_C::BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3HelpWindow_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.SetTexture
// (BlueprintCallable, BlueprintEvent)

void Uwgt_S3HelpWindow_C::SetTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.SetTexture");

	Uwgt_S3HelpWindow_C_SetTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.ExecuteUbergraph_wgt_S3HelpWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::ExecuteUbergraph_wgt_S3HelpWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.ExecuteUbergraph_wgt_S3HelpWindow");

	Uwgt_S3HelpWindow_C_ExecuteUbergraph_wgt_S3HelpWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
