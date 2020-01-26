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

// BlueprintGeneratedClass BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C
// 0x0000 (0x00F0 - 0x00F0)
class UBPC_MiniGame_KungFuProgress_C : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C");
		return ptr;
	}


	float MakeExperienceMultiplier(TEnumAsByte<E_MiniGame_KungFuType> Type, float Ramp);
	void SetKungFuProgress(TEnumAsByte<E_MiniGame_KungFuType> Type, int flag);
	void GetKungFuProgress(TEnumAsByte<E_MiniGame_KungFuType> Type, int* ProgressNum);
	void AddKungFuProgress(TEnumAsByte<E_MiniGame_KungFuType> Type, float ScoreRatio);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
