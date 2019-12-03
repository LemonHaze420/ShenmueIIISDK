
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

// Function BPC_TalkReaction.BPC_TalkReaction_C.GetSubAnimCharacterBase
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, Const)

void UBPC_TalkReaction_C::STATIC_OwnerStopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.OwnerStopAnimation");

	UBPC_TalkReaction_C_OwnerStopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1
// (Net, NetReliable, Native, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkReaction_C::STATIC_OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1");

	UBPC_TalkReaction_C_OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Protected, NetServer)

void UBPC_TalkReaction_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveBeginPlay");

	UBPC_TalkReaction_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.PlayReactionAnimation
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveEndPlay
// (Net, NetRequest, Exec, Native, Event, NetResponse, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkReaction_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveEndPlay");

	UBPC_TalkReaction_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkReaction.BPC_TalkReaction_C.ExecuteUbergraph_BPC_TalkReaction
// (Exec, Native, NetMulticast, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkReaction_C::ExecuteUbergraph_BPC_TalkReaction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkReaction.BPC_TalkReaction_C.ExecuteUbergraph_BPC_TalkReaction");

	UBPC_TalkReaction_C_ExecuteUbergraph_BPC_TalkReaction_Params params;
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
