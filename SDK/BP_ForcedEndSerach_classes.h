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

// BlueprintGeneratedClass BP_ForcedEndSerach.BP_ForcedEndSerach_C
// 0x0011 (0x0339 - 0x0328)
class ABP_ForcedEndSerach_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Disp_WaitingMessage;                                      // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ForcedEndSerach.BP_ForcedEndSerach_C");
		return ptr;
	}


	void UserConstructionScript();
	void EvtFreeState();
	void ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_ForcedEndSerach(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
