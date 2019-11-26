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

// BlueprintGeneratedClass BPF_ImageGamePad.BPF_ImageGamePad_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_ImageGamePad_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_ImageGamePad.BPF_ImageGamePad_C");
		return ptr;
	}


	class UTexture2D* STATIC_GetPlatformDpadImage_ByIndex(TEnumAsByte<EDpadButtonImageStyle> Style, ES3PadButtonIndex Index, class UObject* __WorldContext);
	void STATIC_GetInputDeviceImageSet(ES3InputDeviceModel DeviceType, class UObject* __WorldContext, class UBP_GamePadImageSetAsset_C** SET);
	class UTexture2D* STATIC_GetPlatformFullDpadImage(class UObject* __WorldContext);
	class UTexture2D* STATIC_GetCancelButtonImage(TEnumAsByte<EFaceButtonImageStyle> Style, class UObject* __WorldContext);
	class UTexture2D* STATIC_GetConfirmButtonImage(TEnumAsByte<EFaceButtonImageStyle> Style, class UObject* __WorldContext);
	class UTexture2D* STATIC_GetPlatformShoulderImage(TEnumAsByte<EShoulderButtonStyle> Style, TEnumAsByte<EGamepadShoulder> Button, class UObject* __WorldContext);
	class UBP_GamePadShoulderSetAsset_C* STATIC_GetShoulderSetAsset(TEnumAsByte<EShoulderButtonStyle> Style, ES3Platform Platform, class UObject* __WorldContext);
	class UTexture2D* STATIC_GetShoulderImage(TEnumAsByte<EShoulderButtonStyle> Style, TEnumAsByte<EGamepadShoulder> Button, ES3Platform Platform, class UObject* __WorldContext);
	void STATIC_GetGamePadImageSet(ES3Platform Platform, class UObject* __WorldContext, class UBP_GamePadImageSetAsset_C** SET);
	void STATIC_GetPlatformFaceButtonImage_ByIndex(TEnumAsByte<EFaceButtonImageStyle> Style, ES3PadButtonIndex Index, class UObject* __WorldContext, class UTexture2D** Texture);
	void STATIC_GetFaceButtonImage_ByIndex(TEnumAsByte<EFaceButtonImageStyle> Style, ES3Platform Platform, ES3PadButtonIndex Index, class UObject* __WorldContext, class UTexture2D** Texture);
	void STATIC_GetDpadButtonSetAsset(TEnumAsByte<EDpadButtonImageStyle> Style, ES3Platform Platform, class UObject* __WorldContext, class UBP_GamePadFaceButtonSetAsset_C** SET);
	void STATIC_GetFaceButtonSetAsset(TEnumAsByte<EFaceButtonImageStyle> Style, ES3Platform Platform, class UObject* __WorldContext, class UBP_GamePadFaceButtonSetAsset_C** SET);
	void STATIC_GetPopPlatformButtonImage(bool Absolute, class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** ButtonB, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank);
	void STATIC_GetDefaultPlatformButtonImage(bool Absolute, class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** ButtonB, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank);
	void STATIC_GetPlatformFaceButtonImage(TEnumAsByte<EFaceButtonImageStyle> Style, bool Absolute, class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** Button_B, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank);
	void STATIC_GetFaceButtonImage(TEnumAsByte<EFaceButtonImageStyle> Style, ES3Platform Platform, class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** Button_B, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank);
	void STATIC_GetPlatformDpadImage(class UObject* __WorldContext, class UTexture2D** DpadUP, class UTexture2D** dpadDOWN, class UTexture2D** dpadRIGHT, class UTexture2D** dpadLEFT, class UTexture2D** DpadNEUTRAL);
	void STATIC_GetDpadImage(ES3Platform Platform, class UObject* __WorldContext, class UTexture2D** DpadUP, class UTexture2D** dpadDOWN, class UTexture2D** dpadRIGHT, class UTexture2D** dpadLEFT, class UTexture2D** DpadNEUTRAL);
	void STATIC_GetQTEPlatformButtonImage(class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** ButtonB, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
