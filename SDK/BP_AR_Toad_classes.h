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

// BlueprintGeneratedClass BP_AR_Toad.BP_AR_Toad_C
// 0x0025 (0x0491 - 0x046C)
class ABP_AR_Toad_C : public ABP_AR_Animal_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	TArray<class UMaterial*>                           Material;                                                 // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               is_double_jump;                                           // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_jump;                                                  // 0x0489(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_height_add;                                            // 0x048A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x048B(0x0001) MISSED OFFSET
	float                                              init_z;                                                   // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_go_walk;                                               // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AR_Toad.BP_AR_Toad_C");
		return ptr;
	}


	void IsUsingSpecialData(bool* UseSpecial);
	void PlayerBetAction(bool* dummy);
	void GetJumpDistance(float* Distance);
	void getSettingInfo(float* motion_rate, float* jump_height, float* jump_distance);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdateWalkRate();
	void Reset();
	void SetMotion(TEnumAsByte<E_AR_Motion_Type> mot_type);
	void ChangeShape(int Index);
	void MoveUpdate();
	void IdleEnd();
	void MoveAnimEnd();
	void SetSideRate();
	void MoveZero();
	void MaxJump();
	void ResetLocation();
	void Jump_Start();
	void walk_Start();
	void WalkStEnd();
	void Event_PlaySEWalk();
	void Event_PlaySECry();
	void CheerAnimalBoost();
	void DoubleJump();
	void SetAnimNotRaceStartPos(float Start);
	void ExecuteUbergraph_BP_AR_Toad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
