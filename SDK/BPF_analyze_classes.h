#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_analyze.BPF_analyze_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_analyze_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_analyze.BPF_analyze_C");
		return ptr;
	}


	float STATIC_EstimateGroundHeight(class ACharacter* Pawn, const struct FVector& Location, float MaxAbove, float MaxBelow, float Radius, class UObject* __WorldContext);
	bool STATIC_isCharacterHidden(class AS3Character* S3Character, class UObject* __WorldContext);
	bool STATIC_isAnyNPCFadeInProgress(class UObject* __WorldContext);
	bool STATIC_isCharacterFadeInProgress(class AS3Character* S3Character, class UObject* __WorldContext);
	bool STATIC_isCharacterFullyVisible(class AS3Character* S3Character, class UObject* __WorldContext);
	bool STATIC_isCharacterFadeInComplete(class AS3Character* S3Character, class UObject* __WorldContext);
	bool STATIC_IsOverlappingAdventurePlayer(class UPrimitiveComponent* Trigger, class UObject* __WorldContext, class UCapsuleComponent** PlayerCapsule);
	bool STATIC_IsOverlappingPlayer(class UPrimitiveComponent* Trigger, class UObject* __WorldContext, class UCapsuleComponent** PlayerCapsule);
	bool STATIC_IsAdventurePlayer(class AActor* OtherActor, class UObject* __WorldContext);
	bool STATIC_IsAdventurePlayerCollision(class UActorComponent* Component, class UObject* __WorldContext);
	void STATIC_getCharacterFromCollision(class UActorComponent* Component, class UObject* __WorldContext, class AS3Character** Character, bool* IsValid);
	bool STATIC_IsPlayerCollision(class UActorComponent* Component, class UObject* __WorldContext);
	bool STATIC_isPlayer(class AActor* OtherActor, class UObject* __WorldContext);
	void STATIC_isPawnCamera(class UObject* __WorldContext, bool* Result);
	void STATIC_castActor2primitiveMesh(class AActor* Actor, class UObject* __WorldContext, class UPrimitiveComponent** Mesh, TArray<class UMaterialInterface*>* Materials);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
