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

// BlueprintGeneratedClass BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C
// 0x0070 (0x00A0 - 0x0030)
class UBP_PlayerStairMotionDataAsset_C : public UPrimaryDataAsset
{
public:
	class UAnimMontage*                                WalkLoopUp;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WalkLoopDown;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RunLoopUp;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RunLoopDown;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WalkStartUpR;                                             // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WalkStartUpL;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WalkStartDownL;                                           // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WalkStartDownR;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WalkEndUpR;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WalkEndUpL;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WalkEndDownR;                                             // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WalkEndDownL;                                             // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Turn180R;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Turn180L;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerStairMotionDataAsset.BP_PlayerStairMotionDataAsset_C");
		return ptr;
	}


	float GetLoopStartPoint(class UAnimMontage* Montage, TEnumAsByte<EM_LeftOrRight> Foot);
	class UAnimMontage* GetStopMotion(bool DirUp, bool Right);
	class UAnimMontage* GetStartMotion(bool DirUp, bool Right);
	void GetLoopMotion(bool DirUp, bool Run, class UAnimMontage** Montage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
