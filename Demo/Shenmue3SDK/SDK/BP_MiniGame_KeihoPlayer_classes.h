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

// BlueprintGeneratedClass BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C
// 0x0030 (0x0780 - 0x0750)
class ABP_MiniGame_KeihoPlayer_C : public AS3MiniGameCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           FootCalfRCollision;                                       // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           FootRCollision;                                           // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           FootCalfLCollision;                                       // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           FootLCollision;                                           // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ChickenRunCollision;                                      // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C");
		return ptr;
	}


	void SetEnabled(bool Enabled);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MiniGame_KeihoPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
