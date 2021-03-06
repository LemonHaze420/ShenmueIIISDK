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

// BlueprintGeneratedClass BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C
// 0x0010 (0x03B8 - 0x03A8)
class ABP_SpawnableSequenceActor_C : public ABTL_SequenceActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlaySequenece(bool bRestart);
	void PlayLoopingSequenece(bool bRestart, int NumLoops);
	void StopSequenece();
	void ExecuteUbergraph_BP_SpawnableSequenceActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
