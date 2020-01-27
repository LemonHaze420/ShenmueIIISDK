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

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.RoundInAbsolute
struct UBPF_MiniMapMath_C_RoundInAbsolute_Params
{
	struct FVector2D                                   Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RPoint;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.IsPointInCircle
struct UBPF_MiniMapMath_C_IsPointInCircle_Params
{
	struct FVector2D                                   Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   CircleCenter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              CircleRadius;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetPointOnCircle
struct UBPF_MiniMapMath_C_GetPointOnCircle_Params
{
	struct FVector2D                                   Circle_Position;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Circle_Radius;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Point;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Math_CircleLineIntersection
struct UBPF_MiniMapMath_C_Math_CircleLineIntersection_Params
{
	struct FVector2D                                   Line_Start;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Line_End;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Circle_Position;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Circle_Radius;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsIntersecting;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IntersectionPoint;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Math_LineLineIntersection
struct UBPF_MiniMapMath_C_Math_LineLineIntersection_Params
{
	struct FVector2D                                   Line_1_Start;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Line_1_End;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Line_2_Start;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Line_2_End;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IntersectionPoint;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               DoLinesIntersect;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               DoSegmentsIntersect;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D < Vector2D (AND)
struct UBPF_MiniMapMath_C_Vector2D___Vector2D__AND_LessThan_Params
{
	struct FVector2D                                   In_1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   In_2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.IsPointInRectangle
struct UBPF_MiniMapMath_C_IsPointInRectangle_Params
{
	struct FVector2D                                   Rect_Top_Left;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   RectBottomRight;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D > Vector2D (AND)
struct UBPF_MiniMapMath_C_Vector2D___Vector2D__AND_GreaterThan_Params
{
	struct FVector2D                                   In_1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   In_2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetLandscapeEdges
struct UBPF_MiniMapMath_C_GetLandscapeEdges_Params
{
	class ALandscape*                                  LandscapeInput;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BottomLeft;                                               // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   TopRight;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              GoundHeight;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D Abs
struct UBPF_MiniMapMath_C_Vector2D_Abs_Params
{
	struct FVector2D                                   In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.MapRange Vector2D
struct UBPF_MiniMapMath_C_MapRange_Vector2D_Params
{
	float                                              In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size_1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Size2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D < Vector2D (OR)
struct UBPF_MiniMapMath_C_Vector2D___Vector2D__OR_LessThan_Params
{
	struct FVector2D                                   In_1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   In_2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};
// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D > Vector2D (OR)
struct UBPF_MiniMapMath_C_Vector2D___Vector2D__OR_GreaterThan_Params
{
	struct FVector2D                                   In_1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   In_2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject* __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};
// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D * Vector2D
struct UBPF_MiniMapMath_C_Vector2D_Mult_Vector2D_Params
{
	struct FVector2D                                   In_1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   In_2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.RoundVector2D
struct UBPF_MiniMapMath_C_RoundVector2D_Params
{
	struct FVector2D                                   In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.SwapVector2D
struct UBPF_MiniMapMath_C_SwapVector2D_Params
{
	struct FVector2D                                   In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C. Vector 2D
struct UBPF_MiniMapMath_C__Vector_2D_Params
{
	struct FVector2D                                   _1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   _2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Vector;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetWorldSize
struct UBPF_MiniMapMath_C_GetWorldSize_Params
{
	class ALandscape*                                  Landscape;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BottomLeft;                                               // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   TopRight;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   HalfSize;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              GroundHeight;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetMiddleVector
struct UBPF_MiniMapMath_C_GetMiddleVector_Params
{
	struct FVector2D                                   _1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   _2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Mid;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetMiddleFloat
struct UBPF_MiniMapMath_C_GetMiddleFloat_Params
{
	float                                              _1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              _2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Mid;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
