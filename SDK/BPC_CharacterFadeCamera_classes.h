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

// BlueprintGeneratedClass BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C
// 0x001C (0x010C - 0x00F0)
class UBPC_CharacterFadeCamera_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	float                                              NearDistance;                                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFadeOut;                                                 // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	class ACharacter*                                  OwnerCharacter;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FarDistance;                                              // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C");
		return ptr;
	}


	void IsFarCharacter(bool* Far);
	void IsNearCharacter(bool* bNear);
	void ReceiveBeginPlay();
	void EnabledFadeCheck();
	void DisabledFadeCheck();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPC_CharacterFadeCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
