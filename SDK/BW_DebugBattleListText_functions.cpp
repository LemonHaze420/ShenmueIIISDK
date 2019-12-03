
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

// Function BW_DebugBattleListText.BW_DebugBattleListText_C.SetText
// (Native, Event, NetResponse, Static, MulticastDelegate, NetClient, Const)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBW_DebugBattleListText_C::STATIC_SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListText.BW_DebugBattleListText_C.SetText");

	UBW_DebugBattleListText_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListText.BW_DebugBattleListText_C.PreConstruct
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListText_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListText.BW_DebugBattleListText_C.PreConstruct");

	UBW_DebugBattleListText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListText.BW_DebugBattleListText_C.ExecuteUbergraph_BW_DebugBattleListText
// (Net, NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListText_C::STATIC_ExecuteUbergraph_BW_DebugBattleListText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListText.BW_DebugBattleListText_C.ExecuteUbergraph_BW_DebugBattleListText");

	UBW_DebugBattleListText_C_ExecuteUbergraph_BW_DebugBattleListText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
