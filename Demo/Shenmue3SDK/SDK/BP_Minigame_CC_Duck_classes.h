#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Minigame_CC_Duck.BP_Minigame_CC_Duck_C
// 0x0000 (0x0830 - 0x0830)
class ABP_Minigame_CC_Duck_C : public ABP_MiniGame_CC_Chicken_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Minigame_CC_Duck.BP_Minigame_CC_Duck_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
