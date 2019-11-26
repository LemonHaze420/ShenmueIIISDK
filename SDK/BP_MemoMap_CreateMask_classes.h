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

// BlueprintGeneratedClass BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C
// 0x0010 (0x0338 - 0x0328)
class ABP_MemoMap_CreateMask_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C");
		return ptr;
	}


	void DebugOpenCheck(bool* IsOpen);
	void MakeMask(class UPanelWidget* InputPin, ES3Where Place);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MemoMap_CreateMask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
