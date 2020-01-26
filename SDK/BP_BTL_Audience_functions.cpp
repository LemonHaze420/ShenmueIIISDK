
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

// Function BP_BTL_Audience.BP_BTL_Audience_C.CalcCenter
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_BTL_Audience_C::CalcCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.CalcCenter");

	ABP_BTL_Audience_C_CalcCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.PlayRandomCenterReaction
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USoundAtomCue*>   Sounds                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_BTL_Audience_C::PlayRandomCenterReaction(TArray<class USoundAtomCue*>* Sounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.PlayRandomCenterReaction");

	ABP_BTL_Audience_C_PlayRandomCenterReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sounds != nullptr)
		*Sounds = params.Sounds;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.PlayReaction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USoundAtomCue*>   Sounds                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_BTL_Audience_C::PlayReaction(TArray<class USoundAtomCue*>* Sounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.PlayReaction");

	ABP_BTL_Audience_C_PlayReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sounds != nullptr)
		*Sounds = params.Sounds;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.IsActive
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BTL_Audience_C::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.IsActive");

	ABP_BTL_Audience_C_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.PlaySurroundSoundReactions
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USoundAtomCue*>   Sounds                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_BTL_Audience_C::PlaySurroundSoundReactions(TArray<class USoundAtomCue*>* Sounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.PlaySurroundSoundReactions");

	ABP_BTL_Audience_C_PlaySurroundSoundReactions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sounds != nullptr)
		*Sounds = params.Sounds;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BTL_Audience_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.SetActive");

	ABP_BTL_Audience_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.ReactToHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BTL_Audience_C::ReactToHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.ReactToHit");

	ABP_BTL_Audience_C_ReactToHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.ReactToKO
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BTL_Audience_C::ReactToKO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.ReactToKO");

	ABP_BTL_Audience_C_ReactToKO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BTL_Audience_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.UserConstructionScript");

	ABP_BTL_Audience_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.StartCooldownHit
// (BlueprintCallable, BlueprintEvent)

void ABP_BTL_Audience_C::StartCooldownHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.StartCooldownHit");

	ABP_BTL_Audience_C_StartCooldownHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.StartCooldownKO
// (BlueprintCallable, BlueprintEvent)

void ABP_BTL_Audience_C::StartCooldownKO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.StartCooldownKO");

	ABP_BTL_Audience_C_StartCooldownKO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BTL_Audience.BP_BTL_Audience_C.ExecuteUbergraph_BP_BTL_Audience
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BTL_Audience_C::ExecuteUbergraph_BP_BTL_Audience(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Audience.BP_BTL_Audience_C.ExecuteUbergraph_BP_BTL_Audience");

	ABP_BTL_Audience_C_ExecuteUbergraph_BP_BTL_Audience_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
