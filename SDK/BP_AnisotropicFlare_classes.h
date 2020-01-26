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

// BlueprintGeneratedClass BP_AnisotropicFlare.BP_AnisotropicFlare_C
// 0x002C (0x0354 - 0x0328)
class ABP_AnisotropicFlare_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0330(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnisotropicFlare.BP_AnisotropicFlare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
