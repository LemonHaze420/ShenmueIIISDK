
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

// Function BW_DebugMiniGame.BW_DebugMiniGame_C.OpenAllForkliftJobs
// (Exec, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugMiniGame_C::OpenAllForkliftJobs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.OpenAllForkliftJobs");

	UBW_DebugMiniGame_C_OpenAllForkliftJobs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.AddVitalityLevel
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMiniGame_C::AddVitalityLevel(int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.AddVitalityLevel");

	UBW_DebugMiniGame_C_AddVitalityLevel_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.ResetFocus
// (Net, NetRequest, Exec, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_ResetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.ResetFocus");

	UBW_DebugMiniGame_C_ResetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.DisplayCategoryLevel
// (Exec, Event, NetMulticast, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_KungFuType> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBW_DebugBattleListStat_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugMiniGame_C::DisplayCategoryLevel(TEnumAsByte<E_MiniGame_KungFuType> Category, class UBW_DebugBattleListStat_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.DisplayCategoryLevel");

	UBW_DebugMiniGame_C_DisplayCategoryLevel_Params params;
	params.Category = Category;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.AddKunFuLevel
// (NetReliable, Static, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGame_KungFuType> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AddNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMiniGame_C::STATIC_AddKunFuLevel(TEnumAsByte<E_MiniGame_KungFuType> Category, int AddNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.AddKunFuLevel");

	UBW_DebugMiniGame_C_AddKunFuLevel_Params params;
	params.Category = Category;
	params.AddNum = AddNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_0_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_6_OnPlus__DelegateSignature
// (Net, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_6_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_6_OnPlus__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_6_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_7_OnMinus__DelegateSignature
// (Net, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_7_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_7_OnMinus__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_7_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_8_OnMax__DelegateSignature
// (Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_8_OnMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_8_OnMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_C_1_K2Node_ComponentBoundEvent_8_OnMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature
// (Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.Tick
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMiniGame_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.Tick");

	UBW_DebugMiniGame_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__TotalLevel_K2Node_ComponentBoundEvent_9_OnPlus__DelegateSignature
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_9_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__TotalLevel_K2Node_ComponentBoundEvent_9_OnPlus__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_9_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__TotalLevel_K2Node_ComponentBoundEvent_10_OnMinus__DelegateSignature
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_10_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__TotalLevel_K2Node_ComponentBoundEvent_10_OnMinus__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_10_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__TotalLevel_K2Node_ComponentBoundEvent_11_OnMax__DelegateSignature
// (Net, NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_11_OnMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__TotalLevel_K2Node_ComponentBoundEvent_11_OnMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__TotalLevel_K2Node_ComponentBoundEvent_11_OnMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_792_OnPlusMin__DelegateSignature
// (Net, NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_792_OnPlusMin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_792_OnPlusMin__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_792_OnPlusMin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_814_OnMinusMin__DelegateSignature
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_814_OnMinusMin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_814_OnMinusMin__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_814_OnMinusMin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_834_OnPlusMax__DelegateSignature
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_834_OnPlusMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_834_OnPlusMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_834_OnPlusMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_852_OnMinusMax__DelegateSignature
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_852_OnMinusMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_852_OnMinusMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__UedeMinRate_K2Node_ComponentBoundEvent_852_OnMinusMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_868_OnPlusMin__DelegateSignature
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_868_OnPlusMin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_868_OnPlusMin__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_868_OnPlusMin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_894_OnMinusMin__DelegateSignature
// (Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_894_OnMinusMin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_894_OnMinusMin__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_894_OnMinusMin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_918_OnPlusMax__DelegateSignature
// (Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_918_OnPlusMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_918_OnPlusMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_918_OnPlusMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_940_OnMinusMax__DelegateSignature
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_940_OnMinusMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_940_OnMinusMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__KachoMinRate_K2Node_ComponentBoundEvent_940_OnMinusMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_960_OnPlusMin__DelegateSignature
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_960_OnPlusMin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_960_OnPlusMin__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_960_OnPlusMin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_990_OnMinusMin__DelegateSignature
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_990_OnMinusMin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_990_OnMinusMin__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_990_OnMinusMin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1018_OnPlusMax__DelegateSignature
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1018_OnPlusMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1018_OnPlusMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1018_OnPlusMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1044_OnMinusMax__DelegateSignature
// (Net, NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1044_OnMinusMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1044_OnMinusMax__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__KachoFortuneMinRate_K2Node_ComponentBoundEvent_1044_OnMinusMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.PreConstruct
// (Exec, Native, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMiniGame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.PreConstruct");

	UBW_DebugMiniGame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__AllOpenForkliftContainerButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugMiniGame_C::STATIC_BndEvt__AllOpenForkliftContainerButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.BndEvt__AllOpenForkliftContainerButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugMiniGame_C_BndEvt__AllOpenForkliftContainerButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGame.BW_DebugMiniGame_C.ExecuteUbergraph_BW_DebugMiniGame
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMiniGame_C::ExecuteUbergraph_BW_DebugMiniGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGame.BW_DebugMiniGame_C.ExecuteUbergraph_BW_DebugMiniGame");

	UBW_DebugMiniGame_C_ExecuteUbergraph_BW_DebugMiniGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
