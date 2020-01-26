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

// BlueprintGeneratedClass BP_GamePadShoulderSetAsset.BP_GamePadShoulderSetAsset_C
// 0x0020 (0x0050 - 0x0030)
class UBP_GamePadShoulderSetAsset_C : public UPrimaryDataAsset
{
public:
	class UTexture2D*                                  L1;                                                       // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  R1;                                                       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  L2;                                                       // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  R2;                                                       // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GamePadShoulderSetAsset.BP_GamePadShoulderSetAsset_C");
		return ptr;
	}


	class UTexture2D* GetImage(TEnumAsByte<EGamepadShoulder> Button);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
