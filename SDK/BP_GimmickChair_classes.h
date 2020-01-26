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

// BlueprintGeneratedClass BP_GimmickChair.BP_GimmickChair_C
// 0x0088 (0x0400 - 0x0378)
class ABP_GimmickChair_C : public AS3GimmickChair
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0380(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GimmickChair.BP_GimmickChair_C");
		return ptr;
	}


	EChairForm GetChairForm();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
