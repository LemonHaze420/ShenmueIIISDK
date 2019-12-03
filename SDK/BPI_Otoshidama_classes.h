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


	void STATIC_EnabledPlayerOnDecide();
	void STATIC_SetChooseCameraTransform();
	void STATIC_GetRewardFeed(ES3RewardType* Type);
	void STATIC_SetEnabledPlayerEvent(bool Enabled);
	void STATIC_GetCamera(class UCameraComponent** newParam);
	void STATIC_GetBetZoomTarget(class USceneComponent** newParam);
	void STATIC_GetZoomTarget(class USceneComponent** newParam);
	void STATIC_BindTalkEndEvent();
	void STATIC_CreateNailEvent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
