
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

// Function BW_DebugScriptList.BW_DebugScriptList_C.FindFirstScript
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_DebugScriptList_C::FindFirstScript(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.FindFirstScript");

	UBW_DebugScriptList_C_FindFirstScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.GetNPCCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ScheduleNPC_C*       NPC                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_DebugScriptList_C::GetNPCCharacter(class ABP_ScheduleNPC_C** NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.GetNPCCharacter");

	UBW_DebugScriptList_C_GetNPCCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NPC != nullptr)
		*NPC = params.NPC;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.GetCheatManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBP_CheatManager_C*      CheatManager                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_DebugScriptList_C::GetCheatManager(class UBP_CheatManager_C** CheatManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.GetCheatManager");

	UBW_DebugScriptList_C_GetCheatManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheatManager != nullptr)
		*CheatManager = params.CheatManager;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.SelectScript
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ScriptName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBW_DebugScriptList_C::SelectScript(const struct FString& ScriptName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.SelectScript");

	UBW_DebugScriptList_C_SelectScript_Params params;
	params.ScriptName = ScriptName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.CanTalk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class US3NPCDefinition*        Definition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_DebugScriptList_C::CanTalk(class US3NPCDefinition* Definition, bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.CanTalk");

	UBW_DebugScriptList_C_CanTalk_Params params;
	params.Definition = Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.UpdateScriptList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBW_DebugScriptList_C::UpdateScriptList(const struct FString& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.UpdateScriptList");

	UBW_DebugScriptList_C_UpdateScriptList_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.MakeNPC_List
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugScriptList_C::MakeNPC_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.MakeNPC_List");

	UBW_DebugScriptList_C_MakeNPC_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.On_NPC_List_GenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBW_DebugScriptList_C::On_NPC_List_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.On_NPC_List_GenerateWidget_1");

	UBW_DebugScriptList_C_On_NPC_List_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.OnLoaded_DF6DB0F24FB757ADD0DEB9B481A12BEF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugScriptList_C::OnLoaded_DF6DB0F24FB757ADD0DEB9B481A12BEF(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.OnLoaded_DF6DB0F24FB757ADD0DEB9B481A12BEF");

	UBW_DebugScriptList_C_OnLoaded_DF6DB0F24FB757ADD0DEB9B481A12BEF_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugScriptList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.Construct");

	UBW_DebugScriptList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__NPC_List_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugScriptList_C::BndEvt__NPC_List_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__NPC_List_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UBW_DebugScriptList_C_BndEvt__NPC_List_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugScriptList_C::BndEvt__S3Button_0_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature");

	UBW_DebugScriptList_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__ScriptList_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugScriptList_C::BndEvt__ScriptList_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__ScriptList_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature");

	UBW_DebugScriptList_C_BndEvt__ScriptList_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.EndTalk
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugScriptList_C::EndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.EndTalk");

	UBW_DebugScriptList_C_EndTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__FirstButton_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugScriptList_C::BndEvt__FirstButton_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__FirstButton_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugScriptList_C_BndEvt__FirstButton_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugScriptList_C::BndEvt__S3Button_0_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugScriptList_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugScriptList.BW_DebugScriptList_C.ExecuteUbergraph_BW_DebugScriptList
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugScriptList_C::ExecuteUbergraph_BW_DebugScriptList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugScriptList.BW_DebugScriptList_C.ExecuteUbergraph_BW_DebugScriptList");

	UBW_DebugScriptList_C_ExecuteUbergraph_BW_DebugScriptList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
