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

// BlueprintGeneratedClass BP_AnimMarker_Snapshot.BP_AnimMarker_Snapshot_C
// 0x0000 (0x0038 - 0x0038)
class UBP_AnimMarker_Snapshot_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimMarker_Snapshot.BP_AnimMarker_Snapshot_C");
		return ptr;
	}


	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
