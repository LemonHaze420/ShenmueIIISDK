
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

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsRequestedEndDisp
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DebugCutscenePlayAreaDispManager_C::STATIC_IsRequestedEndDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsRequestedEndDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_IsRequestedEndDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsDisp
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DebugCutscenePlayAreaDispManager_C::STATIC_IsDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_IsDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.RequestEndDisp
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_DebugCutscenePlayAreaDispManager_C::STATIC_RequestEndDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.RequestEndDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_RequestEndDisp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.EndDisp
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void ABP_DebugCutscenePlayAreaDispManager_C::STATIC_EndDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.EndDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_EndDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.DispCutsceneArea
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_DebugCutscenePlayAreaDispManager_C::DispCutsceneArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.DispCutsceneArea");

	ABP_DebugCutscenePlayAreaDispManager_C_DispCutsceneArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsCurrentLevelUnloadable
// (Net, NetRequest, Event, Static, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DebugCutscenePlayAreaDispManager_C::STATIC_IsCurrentLevelUnloadable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsCurrentLevelUnloadable");

	ABP_DebugCutscenePlayAreaDispManager_C_IsCurrentLevelUnloadable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.AddCutsceneDispInfo
// (Net, Exec, NetResponse, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_DbgCutscenePlayInfo InInfo                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugCutscenePlayAreaDispManager_C::AddCutsceneDispInfo(const struct FST_DbgCutscenePlayInfo& InInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.AddCutsceneDispInfo");

	ABP_DebugCutscenePlayAreaDispManager_C_AddCutsceneDispInfo_Params params;
	params.InInfo = InInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.GetLoadLevelName
// (Net, Static, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FST_DbgCutscenePlayInfo InPlayInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DebugCutscenePlayAreaDispManager_C::STATIC_GetLoadLevelName(const struct FST_DbgCutscenePlayInfo& InPlayInfo, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.GetLoadLevelName");

	ABP_DebugCutscenePlayAreaDispManager_C_GetLoadLevelName_Params params;
	params.InPlayInfo = InPlayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsAddedDispInfo
// (Exec, Native, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FST_DbgCutscenePlayInfo InPlayInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DebugCutscenePlayAreaDispManager_C::STATIC_IsAddedDispInfo(const struct FST_DbgCutscenePlayInfo& InPlayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsAddedDispInfo");

	ABP_DebugCutscenePlayAreaDispManager_C_IsAddedDispInfo_Params params;
	params.InPlayInfo = InPlayInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.GetDebugPlayInfoList
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_DebugCutscenePlayAreaDispManager_C::GetDebugPlayInfoList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.GetDebugPlayInfoList");

	ABP_DebugCutscenePlayAreaDispManager_C_GetDebugPlayInfoList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.StartDisp
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_DebugCutscenePlayAreaDispManager_C::STATIC_StartDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.StartDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_StartDisp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.UserConstructionScript
// (Net, Exec, Native, Event, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_DebugCutscenePlayAreaDispManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.UserConstructionScript");

	ABP_DebugCutscenePlayAreaDispManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveBeginPlay
// (Native, Event, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_DebugCutscenePlayAreaDispManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveBeginPlay");

	ABP_DebugCutscenePlayAreaDispManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveTick
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugCutscenePlayAreaDispManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveTick");

	ABP_DebugCutscenePlayAreaDispManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.InitializeDispInfo
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_DebugCutscenePlayAreaDispManager_C::STATIC_InitializeDispInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.InitializeDispInfo");

	ABP_DebugCutscenePlayAreaDispManager_C_InitializeDispInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ExecuteUbergraph_BP_DebugCutscenePlayAreaDispManager
// (NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugCutscenePlayAreaDispManager_C::ExecuteUbergraph_BP_DebugCutscenePlayAreaDispManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ExecuteUbergraph_BP_DebugCutscenePlayAreaDispManager");

	ABP_DebugCutscenePlayAreaDispManager_C_ExecuteUbergraph_BP_DebugCutscenePlayAreaDispManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
