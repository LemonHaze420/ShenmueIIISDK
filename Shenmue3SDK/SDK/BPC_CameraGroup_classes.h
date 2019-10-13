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

// BlueprintGeneratedClass BPC_CameraGroup.BPC_CameraGroup_C
// 0x0038 (0x0128 - 0x00F0)
class UBPC_CameraGroup_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	TArray<struct FST_CameraGroup>                     CameraGroup;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              CollisionAvoidanceCameras;                                // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AllCameras;                                               // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CameraGroup.BPC_CameraGroup_C");
		return ptr;
	}


	void GetAllCameras(TArray<class UClass*>* AllCameras);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_CameraGroup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
