#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_Character.BPF_Character_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Character_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Character.BPF_Character_C");
		return ptr;
	}


	void STATIC_TeleportForceAnim(class ACharacter* Character, const struct FVector& DestLocation, const struct FRotator& DestRotation, float ForceAnimTime, class UObject* __WorldContext);
	void STATIC_CalcFootprint(class UFootprintComponent_C* FootprintComponent, class USkeletalMeshComponent* MeshComponent, TEnumAsByte<ENEFootType> Type, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
