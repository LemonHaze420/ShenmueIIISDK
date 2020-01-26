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

// BlueprintGeneratedClass BP_Chobu_AjitoBarricade.BP_Chobu_AjitoBarricade_C
// 0x0068 (0x0390 - 0x0328)
class ABP_Chobu_AjitoBarricade_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0328(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chobu_AjitoBarricade.BP_Chobu_AjitoBarricade_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
