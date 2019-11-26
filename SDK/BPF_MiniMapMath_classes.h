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

// BlueprintGeneratedClass BPF_MiniMapMath.BPF_MiniMapMath_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_MiniMapMath_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_MiniMapMath.BPF_MiniMapMath_C");
		return ptr;
	}


	void STATIC_RoundInAbsolute(const struct FVector2D& Point, const struct FGeometry& Geometry, class UObject* __WorldContext, struct FVector2D* RPoint);
	void STATIC_IsPointInCircle(const struct FVector2D& Point, const struct FVector2D& CircleCenter, float CircleRadius, class UObject* __WorldContext, bool* _);
	void STATIC_GetPointOnCircle(const struct FVector2D& Circle_Position, float Circle_Radius, float Angle, class UObject* __WorldContext, struct FVector2D* Point);
	void STATIC_Math_CircleLineIntersection(const struct FVector2D& Line_Start, const struct FVector2D& Line_End, const struct FVector2D& Circle_Position, float Circle_Radius, class UObject* __WorldContext, bool* IsIntersecting, struct FVector2D* IntersectionPoint);
	void STATIC_Math_LineLineIntersection(const struct FVector2D& Line_1_Start, const struct FVector2D& Line_1_End, const struct FVector2D& Line_2_Start, const struct FVector2D& Line_2_End, class UObject* __WorldContext, struct FVector2D* IntersectionPoint, bool* DoLinesIntersect, bool* DoSegmentsIntersect);
	void STATIC_Vector2D___Vector2D__AND_GreaterThan(const struct FVector2D& In_1, const struct FVector2D& In_2, class UObject* __WorldContext, bool* _);
	void STATIC_IsPointInRectangle(const struct FVector2D& Rect_Top_Left, const struct FVector2D& RectBottomRight, const struct FVector2D& Point, class UObject* __WorldContext, bool* _);
	void STATIC_Vector2D___Vector2D__AND_LessThan(const struct FVector2D& In_1, const struct FVector2D& In_2, class UObject* __WorldContext, bool* _);
	void STATIC_GetLandscapeEdges(class ALandscape* LandscapeInput, class UObject* __WorldContext, struct FVector2D* BottomLeft, struct FVector2D* TopRight, float* GoundHeight);
	void STATIC_Vector2D_Abs(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out);
	void STATIC_MapRange_Vector2D(float In, const struct FVector2D& Size_1, const struct FVector2D& Size2, class UObject* __WorldContext, struct FVector2D* Out);
	void STATIC_Vector2D___Vector2D__OR_(const struct FVector2D& In_1, const struct FVector2D& In_2, class UObject* __WorldContext, bool* Out);
	void STATIC_Vector2D_Mult_Vector2D(const struct FVector2D& In_1, const struct FVector2D& In_2, class UObject* __WorldContext, struct FVector2D* Out);
	void STATIC_RoundVector2D(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out);
	void STATIC_SwapVector2D(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out);
	void STATIC__Vector_2D(const struct FVector2D& _1, const struct FVector2D& _2, class UObject* __WorldContext, struct FVector2D* Vector);
	void STATIC_GetWorldSize(class ALandscape* Landscape, class UObject* __WorldContext, struct FVector2D* BottomLeft, struct FVector2D* TopRight, struct FVector2D* Center, struct FVector2D* HalfSize, float* GroundHeight);
	void STATIC_GetMiddleVector(const struct FVector2D& _1, const struct FVector2D& _2, class UObject* __WorldContext, struct FVector2D* Mid);
	void STATIC_GetMiddleFloat(float _1, float _2, class UObject* __WorldContext, float* Mid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
