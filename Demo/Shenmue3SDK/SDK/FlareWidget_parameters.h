#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FlareWidget.FlareWidget_C.ForceVisiblityOff
struct UFlareWidget_C_ForceVisiblityOff_Params
{
};

// Function FlareWidget.FlareWidget_C.Get_FlareImage_Brush_1
struct UFlareWidget_C_Get_FlareImage_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FlareWidget.FlareWidget_C.OcclusionOpacityUpdate
struct UFlareWidget_C_OcclusionOpacityUpdate_Params
{
};

// Function FlareWidget.FlareWidget_C.Initialize
struct UFlareWidget_C_Initialize_Params
{
	float                                              OffsetAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParentLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Opacity_Edge_Fade_X;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity_Edge_Fade_Y;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fade_Distance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScaleCenterSize;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ScaleOuterSize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ScalingInfluence;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Enable_Scaling;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Screen_Position_Offset;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Enable_Orbit_Rotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Initial_Rotation_Offset;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Fadeout_EnableShrink;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fadeout_EnableOpacity;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut_FlareLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableLocationOpacity;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocOpacityCenter;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocOpacityEdge;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LocOpacityInfluence;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              RotationAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               AdditiveFlag;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlareWidget.FlareWidget_C.Tick
struct UFlareWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlareWidget.FlareWidget_C.Construct
struct UFlareWidget_C_Construct_Params
{
};

// Function FlareWidget.FlareWidget_C.ChangePlayerBehavior
struct UFlareWidget_C_ChangePlayerBehavior_Params
{
	ES3PlayerBehavior                                  NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PlayerBehavior                                  OldId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlareWidget.FlareWidget_C.Destruct
struct UFlareWidget_C_Destruct_Params
{
};

// Function FlareWidget.FlareWidget_C.ExecuteUbergraph_FlareWidget
struct UFlareWidget_C_ExecuteUbergraph_FlareWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlareWidget.FlareWidget_C.NewEventDispatcher_0__DelegateSignature
struct UFlareWidget_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
