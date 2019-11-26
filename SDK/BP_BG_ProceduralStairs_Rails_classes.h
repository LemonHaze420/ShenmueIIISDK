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

// BlueprintGeneratedClass BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C
// 0x0064 (0x04DD - 0x0479)
class ABP_BG_ProceduralStairs_Rails_C : public ABP_BG_ProceduralStairs_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	struct FRandomStream                               Random_Seed;                                              // 0x047C(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Step;                                                     // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Rail;                                                     // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Pole;                                                     // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RandomizePitch;                                           // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	float                                              RandomYOffset;                                            // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfRails;                                            // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Add_Rail_Left;                                            // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Add_Rail_Right;                                           // 0x04AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlaneConstraintAxisSetting                        MeshForward;                                              // 0x04AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RandomizeYaw;                                             // 0x04AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshScale;                                                // 0x04B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AdjustSpacingY;                                           // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RailSkipSteps;                                            // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RailDistanceFromEdge;                                     // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RailZOffset;                                              // 0x04C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PoleZOffset;                                              // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AddMeshRotation;                                          // 0x04D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               MeshBoundsHotfix;                                         // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C");
		return ptr;
	}


	void SpawnRailsAndPoles(bool SpawnRight, bool SpawnLeft, bool PoleOnly, struct FBox* StepBounds);
	void SpawnRailAndPole(bool RightSide, bool PoleOnly, struct FBox* StepBounds);
	void GetScaledMeshBoundingBox(class UStaticMesh* Mesh, struct FBox* OutBounds);
	void GenerateRandomMeshRotation(struct FRotator* Random);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
