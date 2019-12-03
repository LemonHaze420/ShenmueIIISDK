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

// BlueprintGeneratedClass BTD_CheckSelfActorClass.BTD_CheckSelfActorClass_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTD_CheckSelfActorClass_C : public UBTDecorator_BlueprintBase
{
public:
	class UClass*                                      ActorClass;                                               // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_CheckSelfActorClass.BTD_CheckSelfActorClass_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor* OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
