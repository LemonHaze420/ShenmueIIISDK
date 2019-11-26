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

// BlueprintGeneratedClass AnimNotifyContainer.AnimNotifyContainer_C
// 0x00B8 (0x0248 - 0x0190)
class UAnimNotifyContainer_C : public UBTL_AnimNotifyContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0198(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyContainer.AnimNotifyContainer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
