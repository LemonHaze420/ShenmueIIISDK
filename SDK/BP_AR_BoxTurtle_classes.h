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

// BlueprintGeneratedClass BP_AR_BoxTurtle.BP_AR_BoxTurtle_C
// 0x001C (0x0488 - 0x046C)
class ABP_AR_BoxTurtle_C : public ABP_AR_Animal_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	TArray<class USkeletalMesh*>                       animal_mesh;                                              // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AR_BoxTurtle.BP_AR_BoxTurtle_C");
		return ptr;
	}


	void UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_UpdateWalkRate();
	void STATIC_Reset();
	void STATIC_SetMotion(TEnumAsByte<E_AR_Motion_Type> mot_type);
	void STATIC_ChangeShape(int Index);
	void STATIC_Event_PlaySECry();
	void STATIC_Event_PlaySEWalk();
	void STATIC_SetWalkRate(float Rate);
	void STATIC_SetAnimNotRaceStartPos(float Start);
	void STATIC_SetAnimInRaceFlag(bool InRace);
	void ExecuteUbergraph_BP_AR_BoxTurtle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
