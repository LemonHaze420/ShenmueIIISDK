
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
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MeshName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugTeleportToNPCList_C::GetMeshName(const struct FName& CharaName, struct FName* MeshName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.GetMeshName");

	UWBP_DebugTeleportToNPCList_C_GetMeshName_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeshName != nullptr)
		*MeshName = params.MeshName;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.FindNPC_fromMesh
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, Delegate, BlueprintEvent, BlueprintPure)
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
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UWBP_DebugTeleportToNPCList_C::UpdateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.UpdateFocus");

	UWBP_DebugTeleportToNPCList_C_UpdateFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.SetFocusToItem
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugTeleportToNPCList_C::SetFocusToItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.SetFocusToItem");

	UWBP_DebugTeleportToNPCList_C_SetFocusToItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.OnPreviewKeyDown
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Delegate)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BuildTeleportToNPCList
// (Net, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_DebugTeleportToNPCList_C::BuildTeleportToNPCList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BuildTeleportToNPCList");

	UWBP_DebugTeleportToNPCList_C_BuildTeleportToNPCList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DebugTeleportToNPCList_C::BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_DebugTeleportToNPCList_C_BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.Construct
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_DebugTeleportToNPCList_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.Construct");

	UWBP_DebugTeleportToNPCList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_DebugTeleportToNPCList_C::STATIC_BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");

	UWBP_DebugTeleportToNPCList_C_BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.ExecuteUbergraph_WBP_DebugTeleportToNPCList
// (Net, NetReliable, Native, NetResponse, MulticastDelegate, Delegate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugTeleportToNPCList_C::ExecuteUbergraph_WBP_DebugTeleportToNPCList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.ExecuteUbergraph_WBP_DebugTeleportToNPCList");

	UWBP_DebugTeleportToNPCList_C_ExecuteUbergraph_WBP_DebugTeleportToNPCList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
