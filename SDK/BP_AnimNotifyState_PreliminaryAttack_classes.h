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

// BlueprintGeneratedClass BP_AnimNotifyState_PreliminaryAttack.BP_AnimNotifyState_PreliminaryAttack_C
// 0x0000 (0x0031 - 0x0031)
class UBP_AnimNotifyState_PreliminaryAttack_C : public UBP_AnimNotifyState_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_PreliminaryAttack.BP_AnimNotifyState_PreliminaryAttack_C");
		return ptr;
	}


	struct FString GetNotifyName();
	void GetNotifyID(struct FName* NotifyID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
