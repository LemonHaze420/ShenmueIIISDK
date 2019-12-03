
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

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AllReset
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void Uwgt_S3HelpWindow_C::STATIC_AllReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AllReset");

	Uwgt_S3HelpWindow_C_AllReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddPage
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Private, Delegate, BlueprintEvent, BlueprintPure)
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
// (NetReliable, Native, Event, Static, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uwgt_S3HelpWindow_C::STATIC_AddImg(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddImg");

	Uwgt_S3HelpWindow_C_AddImg_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddCategory
// (NetRequest, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            SelectCategoryIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::STATIC_SetScroll(int SelectCategoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.SetScroll");

	Uwgt_S3HelpWindow_C_SetScroll_Params params;
	params.SelectCategoryIndex = SelectCategoryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.ChgHelpImage
// (NetRequest, Event, Static, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::STATIC_ChgHelpImage(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.ChgHelpImage");

	Uwgt_S3HelpWindow_C_ChgHelpImage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PrevScroll
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// float                          NextScrollVal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectCategoryIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::STATIC_PrevScroll(float NextScrollVal, int SelectCategoryIndex)
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
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          NextScrollVal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectCategoryIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::STATIC_NextScroll(float NextScrollVal, int SelectCategoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.NextScroll");

	Uwgt_S3HelpWindow_C_NextScroll_Params params;
	params.NextScrollVal = NextScrollVal;
	params.SelectCategoryIndex = SelectCategoryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayCloseAnime
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)

void Uwgt_S3HelpWindow_C::STATIC_PlayCloseAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayCloseAnime");

	Uwgt_S3HelpWindow_C_PlayCloseAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayOpenAnime
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)

void Uwgt_S3HelpWindow_C::STATIC_PlayOpenAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayOpenAnime");

	Uwgt_S3HelpWindow_C_PlayOpenAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.OnLoaded_6E1564824F630812B0409FA66A36D2DC
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::STATIC_OnLoaded_6E1564824F630812B0409FA66A36D2DC(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.OnLoaded_6E1564824F630812B0409FA66A36D2DC");

	Uwgt_S3HelpWindow_C_OnLoaded_6E1564824F630812B0409FA66A36D2DC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Construct
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void Uwgt_S3HelpWindow_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Construct");

	Uwgt_S3HelpWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Tick
// (Net, Exec, Native, NetResponse, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Tick");

	Uwgt_S3HelpWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void Uwgt_S3HelpWindow_C::STATIC_BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3HelpWindow_C_BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void Uwgt_S3HelpWindow_C::STATIC_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3HelpWindow_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.SetTexture
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)

void Uwgt_S3HelpWindow_C::STATIC_SetTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.SetTexture");

	Uwgt_S3HelpWindow_C_SetTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.ExecuteUbergraph_wgt_S3HelpWindow
// (NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3HelpWindow_C::STATIC_ExecuteUbergraph_wgt_S3HelpWindow(int EntryPoint)
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
