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

// BlueprintGeneratedClass BPIF_AutoTalkCamera.BPIF_AutoTalkCamera_C
// 0x0000 (0x0028 - 0x0028)
class UBPIF_AutoTalkCamera_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIF_AutoTalkCamera.BPIF_AutoTalkCamera_C");
		return ptr;
	}


	void ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
