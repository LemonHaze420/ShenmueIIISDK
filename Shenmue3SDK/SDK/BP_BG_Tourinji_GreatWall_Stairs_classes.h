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

// BlueprintGeneratedClass BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C
// 0x0043 (0x04BC - 0x0479)
class ABP_BG_Tourinji_GreatWall_Stairs_C : public ABP_BG_ProceduralStairs_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	int                                                Number_of_Steps___1_;                                     // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMesh*>                         Step;                                                     // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Step_Height;                                              // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Step_Depth;                                               // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Step_Scale_Height;                                        // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Step_Scale_Depth;                                         // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Random_Step_Offset;                                       // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               Random_Seed;                                              // 0x04A4(0x0008) (Edit, BlueprintVisible)
	int                                                MaxModelVariations;                                       // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverwriteMaterial;                                        // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Step_Width;                                               // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BG_Tourinji_GreatWall_Stairs.BP_BG_Tourinji_GreatWall_Stairs_C");
		return ptr;
	}


	void CalculateBaseRelativeTransform(struct FTransform* OutTransform);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
