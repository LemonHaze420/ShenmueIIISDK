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

// BlueprintGeneratedClass BP_NavLink_Stairs.BP_NavLink_Stairs_C
// 0x0010 (0x0430 - 0x0420)
class ABP_NavLink_Stairs_C : public AS3NavLink_Stairs
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	bool                                               CreateDebugCollision;                                     // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              DebugWidth;                                               // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavLink_Stairs.BP_NavLink_Stairs_C");
		return ptr;
	}


	void GetStairsGimmickInfo(class AActor** StairsGimmick, struct FTransform* ActorTransform, struct FTransform* RelativeTransform, struct FVector* StepDimensions, int* Steps, int* Widths);
	void STATIC_UpdateStairsInfo();
	void UpdateDebugStairs();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	void ExecuteUbergraph_BP_NavLink_Stairs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
