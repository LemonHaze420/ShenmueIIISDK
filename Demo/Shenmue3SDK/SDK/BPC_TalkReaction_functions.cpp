
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

// Function BPC_TalkReaction.BPC_TalkReaction_C.GetSubAnimCharacterBase
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USubABP_CharacterBase_C* AsSub_ABP_Character_Base       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkReaction_C::GetSubAnimCharacterBase(class USubABP_CharacterBase_C** AsSub_ABP_Character_Base)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.GetSubAnimCharacterBase");

	UBPC_TalkReaction_C_GetSubAnimCharacterBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsSub_ABP_Character_Base != nullptr)
		*AsSub_ABP_Character_Base = params.AsSub_ABP_Character_Base;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.OwnerStopAnimation
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_TalkReaction_C::OwnerStopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.OwnerStopAnimation");

	UBPC_TalkReaction_C_OwnerStopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkReaction_C::OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1");

	UBPC_TalkReaction_C_OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_TalkReaction_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveBeginPlay");

	UBPC_TalkReaction_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.PlayReactionAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReactionId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendWeights                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnFlag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkReaction_C::PlayReactionAnimation(int ReactionId, float PlayRate, float BlendWeights, int ReturnFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.PlayReactionAnimation");

	UBPC_TalkReaction_C_PlayReactionAnimation_Params params;
	params.ReactionId = ReactionId;
	params.PlayRate = PlayRate;
	params.BlendWeights = BlendWeights;
	params.ReturnFlag = ReturnFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkReaction_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveEndPlay");

	UBPC_TalkReaction_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.ExecuteUbergraph_BPC_TalkReaction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkReaction_C::ExecuteUbergraph_BPC_TalkReaction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.ExecuteUbergraph_BPC_TalkReaction");

	UBPC_TalkReaction_C_ExecuteUbergraph_BPC_TalkReaction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
