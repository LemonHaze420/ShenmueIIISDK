
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_NPCManager.BP_NPCManager_C.IsDebugDisableNPC
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPCManager_C::IsDebugDisableNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.IsDebugDisableNPC");

	ABP_NPCManager_C_IsDebugDisableNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPCManager.BP_NPCManager_C.InitializeNPC
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3Character*            Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3NPCDefinition*        NPCDef                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCManager_C::InitializeNPC(class AS3Character* Character, class US3NPCDefinition* NPCDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.InitializeNPC");

	ABP_NPCManager_C_InitializeNPC_Params params;
	params.Character = Character;
	params.NPCDef = NPCDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCManager.BP_NPCManager_C.SetUpTagCharaComponent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ScheduleNPC_C*       TargetNPC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3NPCDefinition*        NPCDef                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCManager_C::SetUpTagCharaComponent(class ABP_ScheduleNPC_C* TargetNPC, class US3NPCDefinition* NPCDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SetUpTagCharaComponent");

	ABP_NPCManager_C_SetUpTagCharaComponent_Params params;
	params.TargetNPC = TargetNPC;
	params.NPCDef = NPCDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCManager.BP_NPCManager_C.SetUpTalkComponents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ScheduleNPC_C*       TargetNPC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3NPCDefinition*        NPCDef                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCManager_C::SetUpTalkComponents(class ABP_ScheduleNPC_C* TargetNPC, class US3NPCDefinition* NPCDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.SetUpTalkComponents");

	ABP_NPCManager_C_SetUpTalkComponents_Params params;
	params.TargetNPC = TargetNPC;
	params.NPCDef = NPCDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCManager.BP_NPCManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.UserConstructionScript");

	ABP_NPCManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCManager.BP_NPCManager_C.BlueprintInitializeNPC
// (Event, Public, BlueprintEvent)
// Parameters:
// class AS3Character**           NewNPC                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3NPCController**       NewAI                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3NPCDefinition**       NPCDef                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCManager_C::BlueprintInitializeNPC(class AS3Character** NewNPC, class AS3NPCController** NewAI, class US3NPCDefinition** NPCDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.BlueprintInitializeNPC");

	ABP_NPCManager_C_BlueprintInitializeNPC_Params params;
	params.NewNPC = NewNPC;
	params.NewAI = NewAI;
	params.NPCDef = NPCDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCManager.BP_NPCManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.ReceiveTick");

	ABP_NPCManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCManager.BP_NPCManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPCManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.ReceiveBeginPlay");

	ABP_NPCManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCManager.BP_NPCManager_C.ExecuteUbergraph_BP_NPCManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCManager_C::ExecuteUbergraph_BP_NPCManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCManager.BP_NPCManager_C.ExecuteUbergraph_BP_NPCManager");

	ABP_NPCManager_C_ExecuteUbergraph_BP_NPCManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
