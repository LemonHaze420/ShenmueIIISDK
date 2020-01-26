
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

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.TryGetItemSocketLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_ItemAttacher_C::TryGetItemSocketLocation(const struct FName& InputPin, struct FVector* Location, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.TryGetItemSocketLocation");

	UBPC_ItemAttacher_C_TryGetItemSocketLocation_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPC_ItemAttacher.BPC_ItemAttacher_C.IsItemSpawned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_ItemAttacher_C::IsItemSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.IsItemSpawned");

	UBPC_ItemAttacher_C_IsItemSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_ItemAttacher.BPC_ItemAttacher_C.GetItemActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_PlayerTalkItem_C*    ItemBP                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_ItemAttacher_C::GetItemActor(class ABP_PlayerTalkItem_C** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.GetItemActor");

	UBPC_ItemAttacher_C_GetItemActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemBP != nullptr)
		*ItemBP = params.ItemBP;
}


// Function BPC_ItemAttacher.BPC_ItemAttacher_C.DestroyItem
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_ItemAttacher_C::DestroyItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.DestroyItem");

	UBPC_ItemAttacher_C_DestroyItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ItemAttacher.BPC_ItemAttacher_C.SpawnItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowToOther                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ItemAttacher_C::SpawnItem(const struct FName& ItemName, bool ShowToOther)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.SpawnItem");

	UBPC_ItemAttacher_C_SpawnItem_Params params;
	params.ItemName = ItemName;
	params.ShowToOther = ShowToOther;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ItemAttacher.BPC_ItemAttacher_C.SetupItemMaterial
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_ItemAttacher_C::SetupItemMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.SetupItemMaterial");

	UBPC_ItemAttacher_C_SetupItemMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ItemAttacher.BPC_ItemAttacher_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_ItemAttacher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.ReceiveBeginPlay");

	UBPC_ItemAttacher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ItemAttacher.BPC_ItemAttacher_C.HiddenItem
// (BlueprintCallable, BlueprintEvent)

void UBPC_ItemAttacher_C::HiddenItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.HiddenItem");

	UBPC_ItemAttacher_C_HiddenItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ItemAttacher.BPC_ItemAttacher_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ItemAttacher_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.ReceiveEndPlay");

	UBPC_ItemAttacher_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ItemAttacher.BPC_ItemAttacher_C.ExecuteUbergraph_BPC_ItemAttacher
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ItemAttacher_C::ExecuteUbergraph_BPC_ItemAttacher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ItemAttacher.BPC_ItemAttacher_C.ExecuteUbergraph_BPC_ItemAttacher");

	UBPC_ItemAttacher_C_ExecuteUbergraph_BPC_ItemAttacher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
