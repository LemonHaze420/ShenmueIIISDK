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

// BlueprintGeneratedClass BP_GimmickChair.BP_GimmickChair_C
// 0x0088 (0x0400 - 0x0378)
class ABP_GimmickChair_C : public AS3GimmickChair
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class UNavModifierComponent*                       NavModifier;                                              // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Point4;                                                   // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Point3;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Point2;                                                   // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Point1;                                                   // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	EChairForm                                         ChairType;                                                // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	int                                                PointNum;                                                 // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PointHeight;                                              // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoChairWidth;                                           // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	float                                              ChairWidth;                                               // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrontOffset;                                              // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WIDTH_MIN;                                                // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              START_DISTANCE;                                           // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartColliRadius;                                         // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartColliHalfHeight;                                     // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoZLocation;                                            // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugData;                                            // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	float                                              BASE_HEIGHT;                                              // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPC_ChairDebug_C*                           ChairDebug;                                               // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               DrawDebugStatus;                                          // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	TArray<class UBillboardComponent*>                 BillboardTbl;                                             // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PENALITY_DISTANCE;                                        // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SideOffset;                                               // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GimmickChair.BP_GimmickChair_C");
		return ptr;
	}


	EChairForm GetChairForm();
	struct FRotator CalcStartRotation(int Index, const struct FRotator& GoalRotate);
	float GetNearStartPointDist(const struct FTransform& Point, int* poiIdx, int* stIdx);
	void CalcZLocation();
	bool IsCharacterSitting(class AS3Character* Character);
	bool ModeChangeRequest(EChairOccupied Mode, class AS3Character* Character, const struct FVector& pos, int poiIdx, int stIdx, float moveDist, struct FS3ChairResultStruct* Result);
	void CreatePointData(const struct FVector& Point, struct FS3ChairPointStruct* S3ChairPointStruct);
	void GetOccupied(int Index, EChairOccupied* Occupied);
	void SetOccupied(int Index, const struct FName& CharaName, EChairOccupied Occupied, class AS3Character* Target_Chara);
	void Reserve(const struct FVector& Location, const struct FName& CharaName, class AS3Character* Target_Chara, int* Index);
	void SitDown(class ABP_S3Character_C* Character);
	void CalcChairWidth();
	void CalcPointOffset(int Index, struct FVector* Offset);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_GimmickChair(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
