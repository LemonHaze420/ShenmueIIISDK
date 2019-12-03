
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

// Function BW_DebugMenu.BW_DebugMenu_C.GetCurrentSubMenu
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBW_DebugMenu_C::STATIC_GetCurrentSubMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.GetCurrentSubMenu");

	UBW_DebugMenu_C_GetCurrentSubMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BuildAchievementMenu
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_BuildAchievementMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BuildAchievementMenu");

	UBW_DebugMenu_C_BuildAchievementMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BuildMenu
// (NetRequest, Event, Static, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMenu_C::STATIC_BuildMenu(class UObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BuildMenu");

	UBW_DebugMenu_C_BuildMenu_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.IsInputPage
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMenu_C::IsInputPage(bool* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.IsInputPage");

	UBW_DebugMenu_C_IsInputPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BuildBattleMenu
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::BuildBattleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BuildBattleMenu");

	UBW_DebugMenu_C_BuildBattleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BuildAutoConversationMenu
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_BuildAutoConversationMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BuildAutoConversationMenu");

	UBW_DebugMenu_C_BuildAutoConversationMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.UpdCategoryCursor
// (Net, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_UpdCategoryCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.UpdCategoryCursor");

	UBW_DebugMenu_C_UpdCategoryCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.SetMode
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMenu_C::STATIC_SetMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.SetMode");

	UBW_DebugMenu_C_SetMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BuildTeleportToNPCMenu
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_BuildTeleportToNPCMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BuildTeleportToNPCMenu");

	UBW_DebugMenu_C_BuildTeleportToNPCMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BuildCutsceneMenu
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_BuildCutsceneMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BuildCutsceneMenu");

	UBW_DebugMenu_C_BuildCutsceneMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.SetDbgSubFlags
// (Exec, Native, Event, NetResponse, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_SetDbgSubFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.SetDbgSubFlags");

	UBW_DebugMenu_C_SetDbgSubFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BuildWatchMenu
// (NetReliable, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_BuildWatchMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BuildWatchMenu");

	UBW_DebugMenu_C_BuildWatchMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.OnTeleportClick
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ContextObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMenu_C::STATIC_OnTeleportClick(class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.OnTeleportClick");

	UBW_DebugMenu_C_OnTeleportClick_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BuildTeleportMenu
// (NetReliable, NetRequest, Event, Static, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_BuildTeleportMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BuildTeleportMenu");

	UBW_DebugMenu_C_BuildTeleportMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.SetFocus
// (NetRequest, NetResponse, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.SetFocus");

	UBW_DebugMenu_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.OnKeyDown
// (Net, Exec, Native, Static, NetMulticast, Private, Protected, Delegate, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugMenu_C::STATIC_OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.OnKeyDown");

	UBW_DebugMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BuildDebugInputMenu
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UBW_DebugMenu_C::STATIC_BuildDebugInputMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BuildDebugInputMenu");

	UBW_DebugMenu_C_BuildDebugInputMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.OnPreviewKeyDown
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugMenu_C::STATIC_OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.OnPreviewKeyDown");

	UBW_DebugMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugMenu.BW_DebugMenu_C.UpdateMode
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_UpdateMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.UpdateMode");

	UBW_DebugMenu_C_UpdateMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.NextMode
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::NextMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.NextMode");

	UBW_DebugMenu_C_NextMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.PrevMode
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::STATIC_PrevMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.PrevMode");

	UBW_DebugMenu_C_PrevMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.GetModeLabel
// (NetRequest, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugMenu_C::STATIC_GetModeLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.GetModeLabel");

	UBW_DebugMenu_C_GetModeLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugMenu.BW_DebugMenu_C.Construct
// (Net, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.Construct");

	UBW_DebugMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.Tick
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.Tick");

	UBW_DebugMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BndEvt__PrevModeButton_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::BndEvt__PrevModeButton_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BndEvt__PrevModeButton_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugMenu_C_BndEvt__PrevModeButton_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BndEvt__NextModeButton_K2Node_ComponentBoundEvent_148_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::BndEvt__NextModeButton_K2Node_ComponentBoundEvent_148_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BndEvt__NextModeButton_K2Node_ComponentBoundEvent_148_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugMenu_C_BndEvt__NextModeButton_K2Node_ComponentBoundEvent_148_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.Destruct
// (Net, NetReliable, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.Destruct");

	UBW_DebugMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.CloseDebugMenu
// (Net, NetReliable, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::CloseDebugMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.CloseDebugMenu");

	UBW_DebugMenu_C_CloseDebugMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.BndEvt__BW_DebugItemViewer_K2Node_ComponentBoundEvent_0_OnClickedDispatcher__DelegateSignature
// (NetReliable, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::BndEvt__BW_DebugItemViewer_K2Node_ComponentBoundEvent_0_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.BndEvt__BW_DebugItemViewer_K2Node_ComponentBoundEvent_0_OnClickedDispatcher__DelegateSignature");

	UBW_DebugMenu_C_BndEvt__BW_DebugItemViewer_K2Node_ComponentBoundEvent_0_OnClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.OnCategoryClick
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBW_DebugMenuCategoryButton_C* Clicked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugMenu_C::STATIC_OnCategoryClick(class UBW_DebugMenuCategoryButton_C* Clicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.OnCategoryClick");

	UBW_DebugMenu_C_OnCategoryClick_Params params;
	params.Clicked = Clicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.RemoveAllWidgets
// (Net, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::RemoveAllWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.RemoveAllWidgets");

	UBW_DebugMenu_C_RemoveAllWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.ToggleFPS
// (Net, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::ToggleFPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.ToggleFPS");

	UBW_DebugMenu_C_ToggleFPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.StartDebugCamera
// (Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugMenu_C::StartDebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.StartDebugCamera");

	UBW_DebugMenu_C_StartDebugCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMenu.BW_DebugMenu_C.ExecuteUbergraph_BW_DebugMenu
// (Net, NetResponse, MulticastDelegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMenu_C::ExecuteUbergraph_BW_DebugMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMenu.BW_DebugMenu_C.ExecuteUbergraph_BW_DebugMenu");

	UBW_DebugMenu_C_ExecuteUbergraph_BW_DebugMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
