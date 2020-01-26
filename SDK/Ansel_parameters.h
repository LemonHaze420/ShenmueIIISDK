#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Ansel.AnselFunctionLibrary.StopSession
struct UAnselFunctionLibrary_StopSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.StartSession
struct UAnselFunctionLibrary_StartSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.SetUIControlVisibility
struct UAnselFunctionLibrary_SetUIControlVisibility_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUIControlEffectTarget>                UIControlTarget;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVisible;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.SetSettleFrames
struct UAnselFunctionLibrary_SetSettleFrames_Params
{
	int                                                NumSettleFrames;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed
struct UAnselFunctionLibrary_SetIsPhotographyAllowed_Params
{
	bool                                               bIsPhotographyAllowed;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed
struct UAnselFunctionLibrary_SetCameraMovementSpeed_Params
{
	float                                              TranslationSpeed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance
struct UAnselFunctionLibrary_SetCameraConstraintDistance_Params
{
	float                                              MaxCameraDistance;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize
struct UAnselFunctionLibrary_SetCameraConstraintCameraSize_Params
{
	float                                              CameraSize;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.SetAutoPostprocess
struct UAnselFunctionLibrary_SetAutoPostprocess_Params
{
	bool                                               bShouldAutoPostprocess;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.SetAutoPause
struct UAnselFunctionLibrary_SetAutoPause_Params
{
	bool                                               bShouldAutoPause;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable
struct UAnselFunctionLibrary_IsPhotographyAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed
struct UAnselFunctionLibrary_IsPhotographyAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry
struct UAnselFunctionLibrary_ConstrainCameraByGeometry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewCameraLocation;                                        // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     PreviousCameraLocation;                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     OriginalCameraLocation;                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     OutCameraLocation;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance
struct UAnselFunctionLibrary_ConstrainCameraByDistance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewCameraLocation;                                        // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     PreviousCameraLocation;                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     OriginalCameraLocation;                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     OutCameraLocation;                                        // (Parm, OutParm, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
