
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

// Function BPF_Character.BPF_Character_C.GetACCharacters
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABP_S3_ACCharacter_C*> Character                      (Parm, OutParm, ZeroConstructor)

void UBPF_Character_C::STATIC_GetACCharacters(class UObject* __WorldContext, TArray<class ABP_S3_ACCharacter_C*>* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Character.BPF_Character_C.GetACCharacters");

	UBPF_Character_C_GetACCharacters_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BPF_Character.BPF_Character_C.TeleportForceAnim
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                DestRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ForceAnimTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Character_C::STATIC_TeleportForceAnim(class ACharacter* Character, const struct FVector& DestLocation, const struct FRotator& DestRotation, float ForceAnimTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Character.BPF_Character_C.TeleportForceAnim");

	UBPF_Character_C_TeleportForceAnim_Params params;
	params.Character = Character;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;
	params.ForceAnimTime = ForceAnimTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Character.BPF_Character_C.CalcFootprint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFootprintComponent_C*   FootprintComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ENEFootType>       Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Character_C::STATIC_CalcFootprint(class UFootprintComponent_C* FootprintComponent, class USkeletalMeshComponent* MeshComponent, TEnumAsByte<ENEFootType> Type, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Character.BPF_Character_C.CalcFootprint");

	UBPF_Character_C_CalcFootprint_Params params;
	params.FootprintComponent = FootprintComponent;
	params.MeshComponent = MeshComponent;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
