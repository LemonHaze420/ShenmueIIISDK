
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

// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.ShowCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMenuCategoryButton_C::ShowCursor(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.ShowCursor");

	UBW_DebugMenuCategoryButton_C_ShowCursor_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugMenuCategoryButton_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.GetText_1");

	UBW_DebugMenuCategoryButton_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugMenuCategoryButton_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.OnMouseButtonDown_1");

	UBW_DebugMenuCategoryButton_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMenuCategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.PreConstruct");

	UBW_DebugMenuCategoryButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.ExecuteUbergraph_BW_DebugMenuCategoryButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMenuCategoryButton_C::ExecuteUbergraph_BW_DebugMenuCategoryButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.ExecuteUbergraph_BW_DebugMenuCategoryButton");

	UBW_DebugMenuCategoryButton_C_ExecuteUbergraph_BW_DebugMenuCategoryButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBW_DebugMenuCategoryButton_C* Clicked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugMenuCategoryButton_C::OnClick__DelegateSignature(class UBW_DebugMenuCategoryButton_C* Clicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenuCategoryButton.BW_DebugMenuCategoryButton_C.OnClick__DelegateSignature");

	UBW_DebugMenuCategoryButton_C_OnClick__DelegateSignature_Params params;
	params.Clicked = Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
