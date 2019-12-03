
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

// Function BPW_SaveLoadData.BPW_SaveLoadData_C.CheckChinaName
// (NetRequest, Static, Public, Protected, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)

void UBPW_SaveLoadData_C::STATIC_CheckChinaName(const struct FString& inString, struct FString* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadData.BPW_SaveLoadData_C.CheckChinaName");

	UBPW_SaveLoadData_C_CheckChinaName_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function BPW_SaveLoadData.BPW_SaveLoadData_C.GetIconData
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 AreaId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_SaveLoadData_C::STATIC_GetIconData(const struct FString& AreaId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadData.BPW_SaveLoadData_C.GetIconData");

	UBPW_SaveLoadData_C_GetIconData_Params params;
	params.AreaId = AreaId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadData.BPW_SaveLoadData_C.IsFocus
// (Native, Event, Public, Private, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// bool                           Focus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadData_C::IsFocus(bool Focus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadData.BPW_SaveLoadData_C.IsFocus");

	UBPW_SaveLoadData_C_IsFocus_Params params;
	params.Focus = Focus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadData.BPW_SaveLoadData_C.SetData
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FDateTime               SaveDate                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDateTime               GameDate                       (BlueprintVisible, BlueprintReadOnly, Parm)
// ES3Where                       Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DataSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AreaId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FS3BattleStatsSaveData  BattleData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BetMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadData_C::STATIC_SetData(const struct FString& Name, const struct FDateTime& SaveDate, const struct FDateTime& GameDate, ES3Where Location, int Index, bool Success, float DataSize, int Step, const struct FString& AreaId, const struct FS3BattleStatsSaveData& BattleData, int Money, int BetMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadData.BPW_SaveLoadData_C.SetData");

	UBPW_SaveLoadData_C_SetData_Params params;
	params.Name = Name;
	params.SaveDate = SaveDate;
	params.GameDate = GameDate;
	params.Location = Location;
	params.Index = Index;
	params.Success = Success;
	params.DataSize = DataSize;
	params.Step = Step;
	params.AreaId = AreaId;
	params.BattleData = BattleData;
	params.Money = Money;
	params.BetMoney = BetMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadData.BPW_SaveLoadData_C.OnLoaded_27F679DB4249387B3159F79A44E9A691
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadData_C::OnLoaded_27F679DB4249387B3159F79A44E9A691(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadData.BPW_SaveLoadData_C.OnLoaded_27F679DB4249387B3159F79A44E9A691");

	UBPW_SaveLoadData_C_OnLoaded_27F679DB4249387B3159F79A44E9A691_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadData.BPW_SaveLoadData_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (NetReliable, Native, NetMulticast, Private, Protected, NetServer, NetClient, BlueprintPure)

void UBPW_SaveLoadData_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadData.BPW_SaveLoadData_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");

	UBPW_SaveLoadData_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadData.BPW_SaveLoadData_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (Net, Native, NetMulticast, Private, Protected, NetServer, NetClient, BlueprintPure)

void UBPW_SaveLoadData_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadData.BPW_SaveLoadData_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UBPW_SaveLoadData_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadData.BPW_SaveLoadData_C.SetSaveIcon
// (Net, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FString                 AreaId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_SaveLoadData_C::SetSaveIcon(const struct FString& AreaId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadData.BPW_SaveLoadData_C.SetSaveIcon");

	UBPW_SaveLoadData_C_SetSaveIcon_Params params;
	params.AreaId = AreaId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadData.BPW_SaveLoadData_C.ExecuteUbergraph_BPW_SaveLoadData
// (NetReliable, NetRequest, Native, Private, Protected, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadData_C::ExecuteUbergraph_BPW_SaveLoadData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadData.BPW_SaveLoadData_C.ExecuteUbergraph_BPW_SaveLoadData");

	UBPW_SaveLoadData_C_ExecuteUbergraph_BPW_SaveLoadData_Params params;
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
