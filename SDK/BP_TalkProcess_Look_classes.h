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

// BlueprintGeneratedClass BP_TalkProcess_Look.BP_TalkProcess_Look_C
// 0x0020 (0x0058 - 0x0038)
class UBP_TalkProcess_Look_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	float                                              ElapsedTime;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class ULookTask*                                   LookTask;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPC_LookAtFSM_C*                            LookAtComponent;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_Look.BP_TalkProcess_Look_C");
		return ptr;
	}


	void Activate();
	void Update(float DeltaTime);
	void ExecuteUbergraph_BP_TalkProcess_Look(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
