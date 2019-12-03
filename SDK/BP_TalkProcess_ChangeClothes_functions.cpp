
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

// Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.GetTargetCharacters
// (Net, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AS3Character*>    Characters                     (Parm, OutParm, ZeroConstructor)

void UBP_TalkProcess_ChangeClothes_C::STATIC_GetTargetCharacters(const struct FName& CharaName, TArray<class AS3Character*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.GetTargetCharacters");

	UBP_TalkProcess_ChangeClothes_C_GetTargetCharacters_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.Activate
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_ChangeClothes_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.Activate");

	UBP_TalkProcess_ChangeClothes_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.Finish
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ChangeClothes_C::STATIC_Finish(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.Finish");

	UBP_TalkProcess_ChangeClothes_C_Finish_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.ExecuteUbergraph_BP_TalkProcess_ChangeClothes
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ChangeClothes_C::STATIC_ExecuteUbergraph_BP_TalkProcess_ChangeClothes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C.ExecuteUbergraph_BP_TalkProcess_ChangeClothes");

	UBP_TalkProcess_ChangeClothes_C_ExecuteUbergraph_BP_TalkProcess_ChangeClothes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
