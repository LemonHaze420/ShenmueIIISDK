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

// AnimBlueprintGeneratedClass ABP_FishingBacker.ABP_FishingBacker_C
// 0x000C (0x5EC8 - 0x5EBC)
class UABP_FishingBacker_C : public UABP_Fishing_re_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x5EBC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x5EC0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FishingBacker.ABP_FishingBacker_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_FishingBacker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
