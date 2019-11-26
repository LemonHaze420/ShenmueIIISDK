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

// BlueprintGeneratedClass BP_BG_Chobu_StoneTrimStairs_Rails.BP_BG_Chobu_StoneTrimStairs_Rails_C
// 0x0057 (0x04D0 - 0x0479)
class ABP_BG_Chobu_StoneTrimStairs_Rails_C : public ABP_BG_ProceduralStairs_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	int                                                Number_of_Steps___1_;                                     // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Number_of_Widths___1_;                                    // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Step;                                                     // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Step_Height;                                              // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Step_Depth;                                               // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Step_Scale_Height;                                        // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Step_Scale_Depth;                                         // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Step_Scale_Width;                                         // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Random_Step_Offset;                                       // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               Random_Seed;                                              // 0x04A8(0x0008) (Edit, BlueprintVisible)
	int                                                Number_Of_Rails;                                          // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Add_Rail_Left;                                            // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Add_Rail_Right;                                           // 0x04B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04B6(0x0002) MISSED OFFSET
	float                                              Rail_Distance_from_Center;                                // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Step_Width;                                               // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 Pole;                                                     // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 Rail;                                                     // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BG_Chobu_StoneTrimStairs_Rails.BP_BG_Chobu_StoneTrimStairs_Rails_C");
		return ptr;
	}


	void CalculateBaseRelativeTransform(struct FTransform* OutTransform);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
