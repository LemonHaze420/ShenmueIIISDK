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

// BlueprintGeneratedClass BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C
// 0x0028 (0x0058 - 0x0030)
class UBP_GamePadFaceButtonSetAsset_C : public UPrimaryDataAsset
{
public:
	class UTexture2D*                                  Down;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Right;                                                    // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Left;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Up;                                                       // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Neutral;                                                  // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C");
		return ptr;
	}


	TArray<class UTexture2D*> GetArray();
	void GetImageByPadIndex(ES3PadButtonIndex Index, class UTexture2D** Texture);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
