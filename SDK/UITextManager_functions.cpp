
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

// Function UITextManager.UITextManager_C.GetLocalTxt
// (Net, NetReliable, NetRequest, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void AUITextManager_C::GetLocalTxt(const struct FString& Name, struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UITextManager.UITextManager_C.GetLocalTxt");

	AUITextManager_C_GetLocalTxt_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function UITextManager.UITextManager_C.GetLocalizedText
// (Exec, Native, Event, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<EUIText_Enum>      ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void AUITextManager_C::GetLocalizedText(TEnumAsByte<EUIText_Enum> ID, struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UITextManager.UITextManager_C.GetLocalizedText");

	AUITextManager_C_GetLocalizedText_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function UITextManager.UITextManager_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void AUITextManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function UITextManager.UITextManager_C.UserConstructionScript");

	AUITextManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UITextManager.UITextManager_C.ReceiveBeginPlay
// (Exec, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void AUITextManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UITextManager.UITextManager_C.ReceiveBeginPlay");

	AUITextManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UITextManager.UITextManager_C.ExecuteUbergraph_UITextManager
// (Net, Exec, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUITextManager_C::STATIC_ExecuteUbergraph_UITextManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UITextManager.UITextManager_C.ExecuteUbergraph_UITextManager");

	AUITextManager_C_ExecuteUbergraph_UITextManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
