
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

// Function BTL_Launch_NPC.BTL_Launch_NPC_C.GetDataFromAsset
// (Exec, Native, Static, NetMulticast, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBTL_NPCDataAsset*       Asset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTL_Launch_NPC_C::STATIC_GetDataFromAsset(class UBTL_NPCDataAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_Launch_NPC.BTL_Launch_NPC_C.GetDataFromAsset");

	UBTL_Launch_NPC_C_GetDataFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTL_Launch_NPC.BTL_Launch_NPC_C.SetDefaultAsNeccessary
// (Native, Event, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTL_NPCDataAsset*       DefaultDataAsset               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTL_Launch_NPC_C::SetDefaultAsNeccessary(class UBTL_NPCDataAsset* DefaultDataAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_Launch_NPC.BTL_Launch_NPC_C.SetDefaultAsNeccessary");

	UBTL_Launch_NPC_C_SetDefaultAsNeccessary_Params params;
	params.DefaultDataAsset = DefaultDataAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTL_Launch_NPC.BTL_Launch_NPC_C.SetHardDataAsset
// (Net, NetReliable, NetRequest, Event, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTL_NPCDataAsset*       Asset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTL_Launch_NPC_C::STATIC_SetHardDataAsset(class UBTL_NPCDataAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_Launch_NPC.BTL_Launch_NPC_C.SetHardDataAsset");

	UBTL_Launch_NPC_C_SetHardDataAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTL_Launch_NPC.BTL_Launch_NPC_C.FinishedLoading__DelegateSignature
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBTL_Launch_NPC_C::FinishedLoading__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_Launch_NPC.BTL_Launch_NPC_C.FinishedLoading__DelegateSignature");

	UBTL_Launch_NPC_C_FinishedLoading__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
