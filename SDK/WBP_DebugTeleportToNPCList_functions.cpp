
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

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.GetMeshName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MeshName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugTeleportToNPCList_C::GetMeshName(const struct FName& CharaName, struct FName* MeshName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.GetMeshName");

	UWBP_DebugTeleportToNPCList_C_GetMeshName_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeshName != nullptr)
		*MeshName = params.MeshName;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.FindNPC_fromMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   CharaId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugTeleportToNPCList_C::FindNPC_fromMesh(const struct FString& Text, struct FName* CharaId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.FindNPC_fromMesh");

	UWBP_DebugTeleportToNPCList_C_FindNPC_fromMesh_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaId != nullptr)
		*CharaId = params.CharaId;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.UpdateFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugTeleportToNPCList_C::UpdateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.UpdateFocus");

	UWBP_DebugTeleportToNPCList_C_UpdateFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.SetFocusToItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugTeleportToNPCList_C::SetFocusToItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.SetFocusToItem");

	UWBP_DebugTeleportToNPCList_C_SetFocusToItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DebugTeleportToNPCList_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.OnPreviewKeyDown");

	UWBP_DebugTeleportToNPCList_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BuildTeleportToNPCList
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugTeleportToNPCList_C::BuildTeleportToNPCList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BuildTeleportToNPCList");

	UWBP_DebugTeleportToNPCList_C_BuildTeleportToNPCList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DebugTeleportToNPCList_C::BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_DebugTeleportToNPCList_C_BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DebugTeleportToNPCList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.Construct");

	UWBP_DebugTeleportToNPCList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DebugTeleportToNPCList_C::BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");

	UWBP_DebugTeleportToNPCList_C_BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.ExecuteUbergraph_WBP_DebugTeleportToNPCList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugTeleportToNPCList_C::ExecuteUbergraph_WBP_DebugTeleportToNPCList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.ExecuteUbergraph_WBP_DebugTeleportToNPCList");

	UWBP_DebugTeleportToNPCList_C_ExecuteUbergraph_WBP_DebugTeleportToNPCList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
