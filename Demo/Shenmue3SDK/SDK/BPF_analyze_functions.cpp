
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

// Function BPF_analyze.BPF_analyze_C.isCharacterHidden
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3Character*            S3Character                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_analyze_C::STATIC_isCharacterHidden(class AS3Character* S3Character, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.isCharacterHidden");

	UBPF_analyze_C_isCharacterHidden_Params params;
	params.S3Character = S3Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.isAnyNPCFadeInProgress
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_analyze_C::STATIC_isAnyNPCFadeInProgress(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.isAnyNPCFadeInProgress");

	UBPF_analyze_C_isAnyNPCFadeInProgress_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.isCharacterFadeInProgress
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3Character*            S3Character                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_analyze_C::STATIC_isCharacterFadeInProgress(class AS3Character* S3Character, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.isCharacterFadeInProgress");

	UBPF_analyze_C_isCharacterFadeInProgress_Params params;
	params.S3Character = S3Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.isCharacterFullyVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3Character*            S3Character                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_analyze_C::STATIC_isCharacterFullyVisible(class AS3Character* S3Character, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.isCharacterFullyVisible");

	UBPF_analyze_C_isCharacterFullyVisible_Params params;
	params.S3Character = S3Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.isCharacterFadeInComplete
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3Character*            S3Character                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_analyze_C::STATIC_isCharacterFadeInComplete(class AS3Character* S3Character, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.isCharacterFadeInComplete");

	UBPF_analyze_C_isCharacterFadeInComplete_Params params;
	params.S3Character = S3Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.IsOverlappingAdventurePlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class UCapsuleComponent*       PlayerCapsule                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

bool UBPF_analyze_C::STATIC_IsOverlappingAdventurePlayer(class UPrimitiveComponent* Trigger, class UObject* __WorldContext, class UCapsuleComponent** PlayerCapsule)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.IsOverlappingAdventurePlayer");

	UBPF_analyze_C_IsOverlappingAdventurePlayer_Params params;
	params.Trigger = Trigger;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerCapsule != nullptr)
		*PlayerCapsule = params.PlayerCapsule;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.IsOverlappingPlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class UCapsuleComponent*       PlayerCapsule                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

bool UBPF_analyze_C::STATIC_IsOverlappingPlayer(class UPrimitiveComponent* Trigger, class UObject* __WorldContext, class UCapsuleComponent** PlayerCapsule)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.IsOverlappingPlayer");

	UBPF_analyze_C_IsOverlappingPlayer_Params params;
	params.Trigger = Trigger;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerCapsule != nullptr)
		*PlayerCapsule = params.PlayerCapsule;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.IsAdventurePlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_analyze_C::STATIC_IsAdventurePlayer(class AActor* OtherActor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.IsAdventurePlayer");

	UBPF_analyze_C_IsAdventurePlayer_Params params;
	params.OtherActor = OtherActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.IsAdventurePlayerCollision
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_analyze_C::STATIC_IsAdventurePlayerCollision(class UActorComponent* Component, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.IsAdventurePlayerCollision");

	UBPF_analyze_C_IsAdventurePlayerCollision_Params params;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.getCharacterFromCollision
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character*            Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_analyze_C::STATIC_getCharacterFromCollision(class UActorComponent* Component, class UObject* __WorldContext, class AS3Character** Character, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.getCharacterFromCollision");

	UBPF_analyze_C_getCharacterFromCollision_Params params;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BPF_analyze.BPF_analyze_C.IsPlayerCollision
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_analyze_C::STATIC_IsPlayerCollision(class UActorComponent* Component, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.IsPlayerCollision");

	UBPF_analyze_C_IsPlayerCollision_Params params;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.isPlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_analyze_C::STATIC_isPlayer(class AActor* OtherActor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.isPlayer");

	UBPF_analyze_C_isPlayer_Params params;
	params.OtherActor = OtherActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_analyze.BPF_analyze_C.isPawnCamera
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_analyze_C::STATIC_isPawnCamera(class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.isPawnCamera");

	UBPF_analyze_C_isPawnCamera_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPF_analyze.BPF_analyze_C.castActor2primitiveMesh
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void UBPF_analyze_C::STATIC_castActor2primitiveMesh(class AActor* Actor, class UObject* __WorldContext, class UPrimitiveComponent** Mesh, TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_analyze.BPF_analyze_C.castActor2primitiveMesh");

	UBPF_analyze_C_castActor2primitiveMesh_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (Materials != nullptr)
		*Materials = params.Materials;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
