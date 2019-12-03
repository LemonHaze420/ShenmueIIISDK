
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

// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.GetIconIndex
// (Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            IconIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Clothing_OneLine_C::GetIconIndex(int* IconIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.GetIconIndex");

	UBPW_UI_DressMode_Clothing_OneLine_C_GetIconIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconIndex != nullptr)
		*IconIndex = params.IconIndex;
}


// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.SetIconIndex
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            IconIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Parts                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EClothPartsType                PartsType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Clothing_OneLine_C::STATIC_SetIconIndex(int IconIndex, struct FName* Parts, EClothPartsType* PartsType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.SetIconIndex");

	UBPW_UI_DressMode_Clothing_OneLine_C_SetIconIndex_Params params;
	params.IconIndex = IconIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parts != nullptr)
		*Parts = params.Parts;
	if (PartsType != nullptr)
		*PartsType = params.PartsType;
}


// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.GetText_1
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_UI_DressMode_Clothing_OneLine_C::STATIC_GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.GetText_1");

	UBPW_UI_DressMode_Clothing_OneLine_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.SetText
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_DressMode_Clothing_OneLine_C::STATIC_SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.SetText");

	UBPW_UI_DressMode_Clothing_OneLine_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.InitIconButton
// (Net, NetReliable, Exec, Event, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFocus                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PartsName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3ClothPartsArray      ClothPartsArray                (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_DressMode_Clothing_OneLine_C::InitIconButton(int ItemId, bool IsFocus, const struct FName& PartsName, const struct FS3ClothPartsArray& ClothPartsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.InitIconButton");

	UBPW_UI_DressMode_Clothing_OneLine_C_InitIconButton_Params params;
	params.ItemId = ItemId;
	params.IsFocus = IsFocus;
	params.PartsName = PartsName;
	params.ClothPartsArray = ClothPartsArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.Construct
// (Net, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_DressMode_Clothing_OneLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.Construct");

	UBPW_UI_DressMode_Clothing_OneLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.ExecuteUbergraph_BPW_UI_DressMode_Clothing_OneLine
// (Net, NetRequest, Native, Event, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Clothing_OneLine_C::ExecuteUbergraph_BPW_UI_DressMode_Clothing_OneLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.ExecuteUbergraph_BPW_UI_DressMode_Clothing_OneLine");

	UBPW_UI_DressMode_Clothing_OneLine_C_ExecuteUbergraph_BPW_UI_DressMode_Clothing_OneLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
