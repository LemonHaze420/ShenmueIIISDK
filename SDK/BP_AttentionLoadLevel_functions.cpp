
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

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.CheckDirection
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::CheckDirection(const struct FVector& HitLocation, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.CheckDirection");

	ABP_AttentionLoadLevel_C_CheckDirection_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.GetNearAttentionPos
// (Exec, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, Const)
// Parameters:
// struct FVector                 AttentionPos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NearPos                        (Parm, OutParm, IsPlainOldData)

void ABP_AttentionLoadLevel_C::STATIC_GetNearAttentionPos(const struct FVector& AttentionPos, struct FVector* NearPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.GetNearAttentionPos");

	ABP_AttentionLoadLevel_C_GetNearAttentionPos_Params params;
	params.AttentionPos = AttentionPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearPos != nullptr)
		*NearPos = params.NearPos;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.SetEnabledControl
// (Net, Exec, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::STATIC_SetEnabledControl(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.SetEnabledControl");

	ABP_AttentionLoadLevel_C_SetEnabledControl_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.UserConstructionScript
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_AttentionLoadLevel_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.UserConstructionScript");

	ABP_AttentionLoadLevel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedStartFadeOut
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_AttentionLoadLevel_C::STATIC_OnFinishedStartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedStartFadeOut");

	ABP_AttentionLoadLevel_C_OnFinishedStartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLoadLevel
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::STATIC_OnFinishedLoadLevel(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLoadLevel");

	ABP_AttentionLoadLevel_C_OnFinishedLoadLevel_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnStartAttention
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 AttentionPos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_AttentionLoadLevel_C::STATIC_OnStartAttention(const struct FVector& AttentionPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnStartAttention");

	ABP_AttentionLoadLevel_C_OnStartAttention_Params params;
	params.AttentionPos = AttentionPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLevelUnloadEndGame
// (Net, NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::STATIC_OnFinishedLevelUnloadEndGame(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLevelUnloadEndGame");

	ABP_AttentionLoadLevel_C_OnFinishedLevelUnloadEndGame_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnEndAttention
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_AttentionLoadLevel_C::STATIC_OnEndAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnEndAttention");

	ABP_AttentionLoadLevel_C_OnEndAttention_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.SetDummyActorVisible
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::STATIC_SetDummyActorVisible(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.SetDummyActorVisible");

	ABP_AttentionLoadLevel_C_SetDummyActorVisible_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnExitAttention
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_AttentionLoadLevel_C::STATIC_OnExitAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnExitAttention");

	ABP_AttentionLoadLevel_C_OnExitAttention_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.ForceStartAttention
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 AttentionPos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_AttentionLoadLevel_C::STATIC_ForceStartAttention(const struct FVector& AttentionPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.ForceStartAttention");

	ABP_AttentionLoadLevel_C_ForceStartAttention_Params params;
	params.AttentionPos = AttentionPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.ExecuteUbergraph_BP_AttentionLoadLevel
// (NetReliable, Static, NetMulticast, MulticastDelegate, NetServer)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::STATIC_ExecuteUbergraph_BP_AttentionLoadLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.ExecuteUbergraph_BP_AttentionLoadLevel");

	ABP_AttentionLoadLevel_C_ExecuteUbergraph_BP_AttentionLoadLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
