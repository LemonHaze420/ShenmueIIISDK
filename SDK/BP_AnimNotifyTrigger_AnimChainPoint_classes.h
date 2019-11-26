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

// BlueprintGeneratedClass BP_AnimNotifyTrigger_AnimChainPoint.BP_AnimNotifyTrigger_AnimChainPoint_C
// 0x0000 (0x0039 - 0x0039)
class UBP_AnimNotifyTrigger_AnimChainPoint_C : public UBP_AnimNotifyTrigger_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyTrigger_AnimChainPoint.BP_AnimNotifyTrigger_AnimChainPoint_C");
		return ptr;
	}


	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
