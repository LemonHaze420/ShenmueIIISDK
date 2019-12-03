#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_LookAt.BPF_LookAt_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_LookAt_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_LookAt.BPF_LookAt_C");
		return ptr;
	}


	class UBPC_LookAtFSM_C* TryGetLookAtFSMComponent(class AActor* TargetActor, class UObject* __WorldContext);
	void STATIC_IsWithinASpecifiedAngle180(const struct FVector& TargetLocation, class AActor* SelfActor, float Angle, class UObject* __WorldContext, bool* bIsWithin, struct FRotator* LookAtRotation, float* TargetAngle);
	void STATIC_LookAtSetup_Initialize(class UBPC_LookAt_C* LookAt, class UObject* __WorldContext);
	void STATIC_LookAtSetup_ParamaterDefault(class UBPC_LookAt_C* LookAt, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
