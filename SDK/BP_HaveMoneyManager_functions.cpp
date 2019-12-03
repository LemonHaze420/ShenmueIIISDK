
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

// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.RemoveWidget
// (NetRequest, Exec, Native, Event, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_HaveMoneyManager_C::STATIC_RemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.RemoveWidget");

	ABP_HaveMoneyManager_C_RemoveWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.SubMoney
// (Exec, Native, Static, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SubMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AfterHaveMoney                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HaveMoneyManager_C::STATIC_SubMoney(int SubMoney, int* AfterHaveMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.SubMoney");

	ABP_HaveMoneyManager_C_SubMoney_Params params;
	params.SubMoney = SubMoney;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AfterHaveMoney != nullptr)
		*AfterHaveMoney = params.AfterHaveMoney;
}


// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.AddMoney
// (Event, NetResponse, Static, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AddMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AfterHaveMoney                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HaveMoneyManager_C::STATIC_AddMoney(int AddMoney, int* AfterHaveMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.AddMoney");

	ABP_HaveMoneyManager_C_AddMoney_Params params;
	params.AddMoney = AddMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AfterHaveMoney != nullptr)
		*AfterHaveMoney = params.AfterHaveMoney;
}


// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.UserConstructionScript
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_HaveMoneyManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.UserConstructionScript");

	ABP_HaveMoneyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.ReceiveBeginPlay
// (Net, NetReliable, Event, NetResponse, Static, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_HaveMoneyManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.ReceiveBeginPlay");

	ABP_HaveMoneyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.ExecuteUbergraph_BP_HaveMoneyManager
// (Net, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HaveMoneyManager_C::STATIC_ExecuteUbergraph_BP_HaveMoneyManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.ExecuteUbergraph_BP_HaveMoneyManager");

	ABP_HaveMoneyManager_C_ExecuteUbergraph_BP_HaveMoneyManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
