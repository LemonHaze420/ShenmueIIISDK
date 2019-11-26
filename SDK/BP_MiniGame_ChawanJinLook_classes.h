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

// BlueprintGeneratedClass BP_MiniGame_ChawanJinLook.BP_MiniGame_ChawanJinLook_C
// 0x0177 (0x0620 - 0x04A9)
class ABP_MiniGame_ChawanJinLook_C : public ABP_ACTrigger_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData01[0x168];                                     // 0x04B8(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_ChawanJinLook.BP_MiniGame_ChawanJinLook_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
