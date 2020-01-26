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

// BlueprintGeneratedClass BPFL_S3TalkEvent.BPFL_S3TalkEvent_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_S3TalkEvent_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_S3TalkEvent.BPFL_S3TalkEvent_C");
		return ptr;
	}


	void STATIC_GetEventStartIndex(class UObject* __WorldContext, int* Index);
	void STATIC_InRange(int InValue, const struct FInt32Range& intRange, class UObject* __WorldContext, bool* isInRange);
	void STATIC_SetBsEnable(const struct FName& TargetCharaId, bool Enable, class UObject* __WorldContext);
	void STATIC_SetBsCount(const struct FName& TargetCharaId, int EventCount, class UObject* __WorldContext);
	void STATIC_IsCheckTalkSitMotion(class AActor* SitActor, class AActor* TargetActor, bool bOutputLog, class UObject* __WorldContext, bool* bPlaySit);
	void STATIC_GetTalkStartIndex(class UObject* __WorldContext, int* Index);
	void STATIC_HintTalkStart(class AActor* TalkTargetNPC, class UTalkScript* TalkScript, class AActor* CurrentTargetActor, class UObject* __WorldContext, bool* Error);
	void STATIC_AC_StartFromScript(class UTalkScript* TalkScript, class UObject* __WorldContext);
	void STATIC_TryTalkStartByActor(class AActor* TargetActor, class UObject* __WorldContext, bool* Result);
	void STATIC_IsLineSight(class ACharacter* Player, class ACharacter* NPC, class UObject* __WorldContext, bool* Result);
	void STATIC_IsEjectFromTalkCamera(class UObject* __WorldContext, bool* newParam);
	void STATIC_PossessTalkCamera(class UObject* __WorldContext, bool* Result);
	void STATIC_EjectFromTalkCamera(class UObject* __WorldContext, bool* Result);
	void STATIC_RunTalkEvent(class AActor* NpcActors, bool isBS, class UTalkScript* TalkScript, class UBPC_S3_TalkComponent_C* TalkComponent, ENPCTalkState TalkState, class UObject* __WorldContext, bool* bSuccess);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
