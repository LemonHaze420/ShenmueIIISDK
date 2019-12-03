
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

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.GetAreaId
// (Net, NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class US3SaveGame*             SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AreaId                         (Parm, OutParm, ZeroConstructor)

void UBPW_SaveLoadWindow_C::STATIC_GetAreaId(class US3SaveGame* SaveGame, struct FString* AreaId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.GetAreaId");

	UBPW_SaveLoadWindow_C_GetAreaId_Params params;
	params.SaveGame = SaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AreaId != nullptr)
		*AreaId = params.AreaId;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.LoadAllData
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, BlueprintCallable)

void UBPW_SaveLoadWindow_C::LoadAllData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.LoadAllData");

	UBPW_SaveLoadWindow_C_LoadAllData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.OverrideData
// (NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport)

void UBPW_SaveLoadWindow_C::OverrideData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.OverrideData");

	UBPW_SaveLoadWindow_C_OverrideData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Get New Date Time
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDateTime               New_Date_Time                  (Parm, OutParm)

void UBPW_SaveLoadWindow_C::Get_New_Date_Time(int* Index, struct FDateTime* New_Date_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Get New Date Time");

	UBPW_SaveLoadWindow_C_Get_New_Date_Time_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (New_Date_Time != nullptr)
		*New_Date_Time = params.New_Date_Time;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Select
// (Exec, Native, NetResponse, Delegate, HasDefaults, NetClient, BlueprintPure)

void UBPW_SaveLoadWindow_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Select");

	UBPW_SaveLoadWindow_C_Select_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Scroll
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// float                          Scroll                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::STATIC_Scroll(float Scroll)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Scroll");

	UBPW_SaveLoadWindow_C_Scroll_Params params;
	params.Scroll = Scroll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Finish
// (Net, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintPure)

void UBPW_SaveLoadWindow_C::STATIC_Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Finish");

	UBPW_SaveLoadWindow_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Decide
// (NetRequest, Public, Protected, HasDefaults, BlueprintEvent)

void UBPW_SaveLoadWindow_C::Decide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Decide");

	UBPW_SaveLoadWindow_C_Decide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.PushCursor
// (NetReliable, NetRequest, Exec, Event, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FKey                    B                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_SaveLoadWindow_C::STATIC_PushCursor(const struct FKey& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.PushCursor");

	UBPW_SaveLoadWindow_C_PushCursor_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.FocusData
// (Native, NetResponse, Delegate, HasDefaults, NetClient, BlueprintPure)

void UBPW_SaveLoadWindow_C::FocusData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.FocusData");

	UBPW_SaveLoadWindow_C_FocusData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.MakeDataWidget
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UBPW_SaveLoadWindow_C::STATIC_MakeDataWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.MakeDataWidget");

	UBPW_SaveLoadWindow_C_MakeDataWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.AddLoadData
// (NetReliable, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3SaveGame*             Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::STATIC_AddLoadData(bool Success, class US3SaveGame* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.AddLoadData");

	UBPW_SaveLoadWindow_C_AddLoadData_Params params;
	params.Success = Success;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.OnPreviewKeyDown
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBPW_SaveLoadWindow_C::STATIC_OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.OnPreviewKeyDown");

	UBPW_SaveLoadWindow_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.DownPush
// (Net, Native, Static, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void UBPW_SaveLoadWindow_C::STATIC_DownPush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.DownPush");

	UBPW_SaveLoadWindow_C_DownPush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.UpPush
// (Native, Static, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void UBPW_SaveLoadWindow_C::STATIC_UpPush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.UpPush");

	UBPW_SaveLoadWindow_C_UpPush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.RightButton
// (Native, Static, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void UBPW_SaveLoadWindow_C::STATIC_RightButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.RightButton");

	UBPW_SaveLoadWindow_C_RightButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.DownButton
// (Net, NetReliable, NetRequest, Exec, Static, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void UBPW_SaveLoadWindow_C::STATIC_DownButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.DownButton");

	UBPW_SaveLoadWindow_C_DownButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ScrollDealy
// (Net, NetReliable, NetRequest, Exec, Static, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void UBPW_SaveLoadWindow_C::STATIC_ScrollDealy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ScrollDealy");

	UBPW_SaveLoadWindow_C_ScrollDealy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Construct
// (NetReliable, NetRequest, Exec, Static, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void UBPW_SaveLoadWindow_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Construct");

	UBPW_SaveLoadWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.WheleMouse
// (NetRequest, Native, Static, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::STATIC_WheleMouse(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.WheleMouse");

	UBPW_SaveLoadWindow_C_WheleMouse_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Tick
// (NetRequest, Native, Event, Static, MulticastDelegate, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Tick");

	UBPW_SaveLoadWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.CloseDialog
// (Net, NetReliable, Native, Static, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::STATIC_CloseDialog(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.CloseDialog");

	UBPW_SaveLoadWindow_C_CloseDialog_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.SelectSaveLoad
// (NetReliable, Native, Static, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::STATIC_SelectSaveLoad(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.SelectSaveLoad");

	UBPW_SaveLoadWindow_C_SelectSaveLoad_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.CancelSaveLoad
// (Net, Native, Static, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::STATIC_CancelSaveLoad(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.CancelSaveLoad");

	UBPW_SaveLoadWindow_C_CancelSaveLoad_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.FinishSave
// (Net, Native, Static, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::STATIC_FinishSave(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.FinishSave");

	UBPW_SaveLoadWindow_C_FinishSave_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ExecuteUbergraph_BPW_SaveLoadWindow
// (Static, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::STATIC_ExecuteUbergraph_BPW_SaveLoadWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ExecuteUbergraph_BPW_SaveLoadWindow");

	UBPW_SaveLoadWindow_C_ExecuteUbergraph_BPW_SaveLoadWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ED_Finish__DelegateSignature
// (NetRequest, Exec, Native, Event, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)

void UBPW_SaveLoadWindow_C::ED_Finish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ED_Finish__DelegateSignature");

	UBPW_SaveLoadWindow_C_ED_Finish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ED_SelectMouse__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::ED_SelectMouse__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ED_SelectMouse__DelegateSignature");

	UBPW_SaveLoadWindow_C_ED_SelectMouse__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ED_ForcusMous__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveLoadWindow_C::ED_ForcusMous__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ED_ForcusMous__DelegateSignature");

	UBPW_SaveLoadWindow_C_ED_ForcusMous__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
