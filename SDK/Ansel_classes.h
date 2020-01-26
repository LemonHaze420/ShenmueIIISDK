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

// Class Ansel.AnselFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnselFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Ansel.AnselFunctionLibrary");
		return ptr;
	}


	void STATIC_StopSession(class UObject* WorldContextObject);
	void STATIC_StartSession(class UObject* WorldContextObject);
	void STATIC_SetUIControlVisibility(class UObject* WorldContextObject, TEnumAsByte<EUIControlEffectTarget> UIControlTarget, bool bIsVisible);
	void STATIC_SetSettleFrames(int NumSettleFrames);
	void STATIC_SetIsPhotographyAllowed(bool bIsPhotographyAllowed);
	void STATIC_SetCameraMovementSpeed(float TranslationSpeed);
	void STATIC_SetCameraConstraintDistance(float MaxCameraDistance);
	void STATIC_SetCameraConstraintCameraSize(float CameraSize);
	void STATIC_SetAutoPostprocess(bool bShouldAutoPostprocess);
	void STATIC_SetAutoPause(bool bShouldAutoPause);
	bool STATIC_IsPhotographyAvailable();
	bool STATIC_IsPhotographyAllowed();
	void STATIC_ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation);
	void STATIC_ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, float MaxDistance, struct FVector* OutCameraLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
