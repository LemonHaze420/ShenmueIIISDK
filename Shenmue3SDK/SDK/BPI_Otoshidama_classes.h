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

// BlueprintGeneratedClass BPI_Otoshidama.BPI_Otoshidama_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Otoshidama_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Otoshidama.BPI_Otoshidama_C");
		return ptr;
	}


	void EnabledPlayerOnDecide();
	void SetChooseCameraTransform();
	void GetRewardFeed(ES3RewardType* Type);
	void SetEnabledPlayerEvent(bool Enabled);
	void GetCamera(class UCameraComponent** newParam);
	void GetBetZoomTarget(class USceneComponent** newParam);
	void GetZoomTarget(class USceneComponent** newParam);
	void BindTalkEndEvent();
	void CreateNailEvent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
