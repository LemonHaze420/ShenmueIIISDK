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

// BlueprintGeneratedClass BPC_PlayerShove.BPC_PlayerShove_C
// 0x001C (0x010C - 0x00F0)
class UBPC_PlayerShove_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ABP_S3_Character_Adventure_C*                Owner;                                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableBeingShoved;                                       // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableExpandedShove;                                     // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	float                                              ExtraShoveDistance;                                       // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraShoveSpeed;                                          // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_PlayerShove.BPC_PlayerShove_C");
		return ptr;
	}


	void Update(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_PlayerShove(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
