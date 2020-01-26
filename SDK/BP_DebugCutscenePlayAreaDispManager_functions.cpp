
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

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsRequestedEndDisp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DebugCutscenePlayAreaDispManager_C::IsRequestedEndDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsRequestedEndDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_IsRequestedEndDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsDisp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DebugCutscenePlayAreaDispManager_C::IsDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_IsDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.RequestEndDisp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugCutscenePlayAreaDispManager_C::RequestEndDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.RequestEndDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_RequestEndDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.EndDisp
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_DebugCutscenePlayAreaDispManager_C::EndDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.EndDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_EndDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.DispCutsceneArea
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DebugCutscenePlayAreaDispManager_C::DispCutsceneArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.DispCutsceneArea");

	ABP_DebugCutscenePlayAreaDispManager_C_DispCutsceneArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsCurrentLevelUnloadable
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DebugCutscenePlayAreaDispManager_C::IsCurrentLevelUnloadable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsCurrentLevelUnloadable");

	ABP_DebugCutscenePlayAreaDispManager_C_IsCurrentLevelUnloadable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.AddCutsceneDispInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_DbgCutscenePlayInfo InPlayInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DebugCutscenePlayAreaDispManager_C::GetLoadLevelName(const struct FST_DbgCutscenePlayInfo& InPlayInfo, struct FName* LevelName)
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
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_DbgCutscenePlayInfo InPlayInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DebugCutscenePlayAreaDispManager_C::IsAddedDispInfo(const struct FST_DbgCutscenePlayInfo& InPlayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsAddedDispInfo");

	ABP_DebugCutscenePlayAreaDispManager_C_IsAddedDispInfo_Params params;
	params.InPlayInfo = InPlayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.GetDebugPlayInfoList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DebugCutscenePlayAreaDispManager_C::GetDebugPlayInfoList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.GetDebugPlayInfoList");

	ABP_DebugCutscenePlayAreaDispManager_C_GetDebugPlayInfoList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.StartDisp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugCutscenePlayAreaDispManager_C::StartDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.StartDisp");

	ABP_DebugCutscenePlayAreaDispManager_C_StartDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugCutscenePlayAreaDispManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.UserConstructionScript");

	ABP_DebugCutscenePlayAreaDispManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DebugCutscenePlayAreaDispManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveBeginPlay");

	ABP_DebugCutscenePlayAreaDispManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugCutscenePlayAreaDispManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveTick");

	ABP_DebugCutscenePlayAreaDispManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.InitializeDispInfo
// (BlueprintCallable, BlueprintEvent)

void ABP_DebugCutscenePlayAreaDispManager_C::InitializeDispInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.InitializeDispInfo");

	ABP_DebugCutscenePlayAreaDispManager_C_InitializeDispInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ExecuteUbergraph_BP_DebugCutscenePlayAreaDispManager
// (HasDefaults)
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
