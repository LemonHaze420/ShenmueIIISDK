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

// BlueprintGeneratedClass BP_AttentionPointYataiSign.BP_AttentionPointYataiSign_C
// 0x0000 (0x0360 - 0x0360)
class ABP_AttentionPointYataiSign_C : public ABP_AttentionPoint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AttentionPointYataiSign.BP_AttentionPointYataiSign_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
