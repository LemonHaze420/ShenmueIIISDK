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

// BlueprintGeneratedClass BP_State_LookAtPlayer_Event.BP_State_LookAtPlayer_Event_C
// 0x0020 (0x0068 - 0x0048)
class UBP_State_LookAtPlayer_Event_C : public UBP_State_LookAtPlayer_C
{
public:
	class AActor*                                      CacheTargetActor;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCacheTargetLocationMode;                                 // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCacheEnableComp;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCacheEnableEyes;                                         // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCacheNeck;                                               // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCacheBody;                                               // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCacheSkipRendered;                                       // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	float                                              CacheRotationInterpSpeed;                                 // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CacheTargetLocation;                                      // 0x005C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtPlayer_Event.BP_State_LookAtPlayer_Event_C");
		return ptr;
	}


	void StateExit(float* Delta, bool* bProcessing);
	void StateEnter(float* Delta, bool* bProcessing);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
