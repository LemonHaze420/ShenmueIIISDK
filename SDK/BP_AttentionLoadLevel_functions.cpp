
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

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.CheckDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 AttentionPos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NearPos                        (Parm, OutParm, IsPlainOldData)

void ABP_AttentionLoadLevel_C::GetNearAttentionPos(const struct FVector& AttentionPos, struct FVector* NearPos)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::SetEnabledControl(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.SetEnabledControl");

	ABP_AttentionLoadLevel_C_SetEnabledControl_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AttentionLoadLevel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.UserConstructionScript");

	ABP_AttentionLoadLevel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedStartFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_AttentionLoadLevel_C::OnFinishedStartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedStartFadeOut");

	ABP_AttentionLoadLevel_C_OnFinishedStartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLoadLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::OnFinishedLoadLevel(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLoadLevel");

	ABP_AttentionLoadLevel_C_OnFinishedLoadLevel_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnStartAttention
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AttentionPos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_AttentionLoadLevel_C::OnStartAttention(const struct FVector& AttentionPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnStartAttention");

	ABP_AttentionLoadLevel_C_OnStartAttention_Params params;
	params.AttentionPos = AttentionPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLevelUnloadEndGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::OnFinishedLevelUnloadEndGame(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLevelUnloadEndGame");

	ABP_AttentionLoadLevel_C_OnFinishedLevelUnloadEndGame_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnEndAttention
// (BlueprintCallable, BlueprintEvent)

void ABP_AttentionLoadLevel_C::OnEndAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnEndAttention");

	ABP_AttentionLoadLevel_C_OnEndAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.SetDummyActorVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::SetDummyActorVisible(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.SetDummyActorVisible");

	ABP_AttentionLoadLevel_C_SetDummyActorVisible_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnExitAttention
// (BlueprintCallable, BlueprintEvent)

void ABP_AttentionLoadLevel_C::OnExitAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnExitAttention");

	ABP_AttentionLoadLevel_C_OnExitAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.ForceStartAttention
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AttentionPos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_AttentionLoadLevel_C::ForceStartAttention(const struct FVector& AttentionPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.ForceStartAttention");

	ABP_AttentionLoadLevel_C_ForceStartAttention_Params params;
	params.AttentionPos = AttentionPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.ExecuteUbergraph_BP_AttentionLoadLevel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionLoadLevel_C::ExecuteUbergraph_BP_AttentionLoadLevel(int EntryPoint)
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
