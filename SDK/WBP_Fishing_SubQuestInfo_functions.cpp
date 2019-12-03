
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

// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.SetNumValue
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_SubQuestInfo_C::STATIC_SetNumValue(class UTextBlock* Text, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.SetNumValue");

	UWBP_Fishing_SubQuestInfo_C_SetNumValue_Params params;
	params.Text = Text;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.UpdateInfo
// (Net, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void UWBP_Fishing_SubQuestInfo_C::UpdateInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.UpdateInfo");

	UWBP_Fishing_SubQuestInfo_C_UpdateInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.SetCurrentInfo
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FString                 CurrentTopText                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            RivalFlagIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CurrentTopUnit                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 RyoLocalizeName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            RyoNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_SubQuestInfo_C::SetCurrentInfo(const struct FString& CurrentTopText, int RivalFlagIndex, const struct FString& CurrentTopUnit, const struct FString& RyoLocalizeName, int RyoNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.SetCurrentInfo");

	UWBP_Fishing_SubQuestInfo_C_SetCurrentInfo_Params params;
	params.CurrentTopText = CurrentTopText;
	params.RivalFlagIndex = RivalFlagIndex;
	params.CurrentTopUnit = CurrentTopUnit;
	params.RyoLocalizeName = RyoLocalizeName;
	params.RyoNum = RyoNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.Construct
// (Exec, Event, NetResponse, Static, NetMulticast, Public, Delegate)

void UWBP_Fishing_SubQuestInfo_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.Construct");

	UWBP_Fishing_SubQuestInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.OnRivalFlagChanged
// (NetRequest, Exec, Event, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_SubQuestInfo_C::OnRivalFlagChanged(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.OnRivalFlagChanged");

	UWBP_Fishing_SubQuestInfo_C_OnRivalFlagChanged_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.ExecuteUbergraph_WBP_Fishing_SubQuestInfo
// (Net, NetRequest, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_SubQuestInfo_C::ExecuteUbergraph_WBP_Fishing_SubQuestInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.ExecuteUbergraph_WBP_Fishing_SubQuestInfo");

	UWBP_Fishing_SubQuestInfo_C_ExecuteUbergraph_WBP_Fishing_SubQuestInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
