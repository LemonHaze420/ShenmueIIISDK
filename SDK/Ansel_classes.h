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


	void StopSession(class UObject* WorldContextObject);
	void StartSession(class UObject* WorldContextObject);
	void SetUIControlVisibility(class UObject* WorldContextObject, TEnumAsByte<EUIControlEffectTarget> UIControlTarget, bool bIsVisible);
	void SetSettleFrames(int NumSettleFrames);
	void SetIsPhotographyAllowed(bool bIsPhotographyAllowed);
	void SetCameraMovementSpeed(float TranslationSpeed);
	void SetCameraConstraintDistance(float MaxCameraDistance);
	void SetCameraConstraintCameraSize(float CameraSize);
	void SetAutoPostprocess(bool bShouldAutoPostprocess);
	void SetAutoPause(bool bShouldAutoPause);
	bool IsPhotographyAvailable();
	bool IsPhotographyAllowed();
	void ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation);
	void ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, float MaxDistance, struct FVector* OutCameraLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
