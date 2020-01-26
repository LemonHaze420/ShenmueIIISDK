
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

// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.RemoveWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HaveMoneyManager_C::RemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.RemoveWidget");

	ABP_HaveMoneyManager_C_RemoveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.SubMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AfterHaveMoney                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HaveMoneyManager_C::SubMoney(int SubMoney, int* AfterHaveMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.SubMoney");

	ABP_HaveMoneyManager_C_SubMoney_Params params;
	params.SubMoney = SubMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AfterHaveMoney != nullptr)
		*AfterHaveMoney = params.AfterHaveMoney;
}


// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.AddMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AfterHaveMoney                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HaveMoneyManager_C::AddMoney(int AddMoney, int* AfterHaveMoney)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HaveMoneyManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.UserConstructionScript");

	ABP_HaveMoneyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HaveMoneyManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.ReceiveBeginPlay");

	ABP_HaveMoneyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HaveMoneyManager.BP_HaveMoneyManager_C.ExecuteUbergraph_BP_HaveMoneyManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HaveMoneyManager_C::ExecuteUbergraph_BP_HaveMoneyManager(int EntryPoint)
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
