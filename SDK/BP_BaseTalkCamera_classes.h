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

// BlueprintGeneratedClass BP_BaseTalkCamera.BP_BaseTalkCamera_C
// 0x0018 (0x0340 - 0x0328)
class ABP_BaseTalkCamera_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               isDrawDebug;                                              // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	int                                                AvailablePriority;                                        // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseTalkCamera.BP_BaseTalkCamera_C");
		return ptr;
	}


	void GetCamera(class UCameraComponent** Camera);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BaseTalkCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
