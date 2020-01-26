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

// BlueprintGeneratedClass BP_NPCManager.BP_NPCManager_C
// 0x000A (0x06DA - 0x06D0)
class ABP_NPCManager_C : public AS3NPCManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x06D8(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPCManager.BP_NPCManager_C");
		return ptr;
	}


	bool IsDebugDisableNPC();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
