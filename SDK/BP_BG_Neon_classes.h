#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BG_Neon.BP_BG_Neon_C
// 0x0040 (0x0368 - 0x0328)
class ABP_BG_Neon_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0330(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BG_Neon.BP_BG_Neon_C");
		return ptr;
	}


	void UserConstructionScript();
	void 򠪦􆖐񍳔_();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
