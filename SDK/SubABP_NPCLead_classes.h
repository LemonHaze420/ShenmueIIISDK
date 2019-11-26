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

// AnimBlueprintGeneratedClass SubABP_NPCLead.SubABP_NPCLead_C
// 0x000C (0x3720 - 0x3714)
class USubABP_NPCLead_C : public USubABP_CharacterBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x3714(0x0004) MISSED OFFSET
	class ABP_NPC_Lead_C*                              LeadNPC;                                                  // 0x3718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SubABP_NPCLead.SubABP_NPCLead_C");
		return ptr;
	}


	bool IsEnableLookAt();
	void InitFaceMotages(bool* Succsess);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
