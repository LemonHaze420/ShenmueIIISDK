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

// BlueprintGeneratedClass BP_S3BackerAttentionManagerBase.BP_S3BackerAttentionManagerBase_C
// 0x0081 (0x0434 - 0x03B3)
class ABP_S3BackerAttentionManagerBase_C : public ABP_S3AttentionManager_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x03B3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData01[0x74];                                      // 0x03C0(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BackerAttentionManagerBase.BP_S3BackerAttentionManagerBase_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
