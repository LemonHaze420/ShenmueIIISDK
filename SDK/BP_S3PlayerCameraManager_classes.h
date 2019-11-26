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

// BlueprintGeneratedClass BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C
// 0x000D (0x2919 - 0x290C)
class ABP_S3PlayerCameraManager_C : public ABP_S3PlayerCameraManagerBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x290C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2910(0x0008) (Transient, DuplicateTransient)
	bool                                               bDebugEnableFaceFocus;                                    // 0x2918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3PlayerCameraManager.BP_S3PlayerCameraManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_S3PlayerCameraManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
