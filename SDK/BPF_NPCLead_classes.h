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

// BlueprintGeneratedClass BPF_NPCLead.BPF_NPCLead_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_NPCLead_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_NPCLead.BPF_NPCLead_C");
		return ptr;
	}


	void STATIC_GetNPCLeadCharacter(class UObject* __WorldContext, class ABP_NPC_Lead_C** newParam);
	void DestroyNPCLeadActor(class UObject* __WorldContext);
	void STATIC_SpawnNPCLeadActor(const struct FVector& SpawnPos, float SpawnRot, class ANPC_SplineMoveActor_C* SplineActor, class UObject* __WorldContext);
	void STATIC_GetNPCLeadManager(class UObject* __WorldContext, class ABP_NPCLeadManager_C** newParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
