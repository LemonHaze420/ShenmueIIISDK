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

// BlueprintGeneratedClass AI_AutoTalkCamera.AI_AutoTalkCamera_C
// 0x0010 (0x0448 - 0x0438)
class AAI_AutoTalkCamera_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class UBlackboardComponent*                        BlackBoard_Ref;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AI_AutoTalkCamera.AI_AutoTalkCamera_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_AI_AutoTalkCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
