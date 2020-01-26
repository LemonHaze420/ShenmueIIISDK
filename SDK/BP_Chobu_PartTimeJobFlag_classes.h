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

// BlueprintGeneratedClass BP_Chobu_PartTimeJobFlag.BP_Chobu_PartTimeJobFlag_C
// 0x0018 (0x0340 - 0x0328)
class ABP_Chobu_PartTimeJobFlag_C : public AActor
{
public:
	class UBP_HideInStep_Template_C*                   BP_HideInStep_Template;                                   // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chobu_PartTimeJobFlag.BP_Chobu_PartTimeJobFlag_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
