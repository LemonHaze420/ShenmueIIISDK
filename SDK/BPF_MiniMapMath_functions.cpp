
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_MiniMapMath.BPF_MiniMapMath_C.RoundInAbsolute
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               RPoint                         (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_RoundInAbsolute(const struct FVector2D& Point, const struct FGeometry& Geometry, class UObject* __WorldContext, struct FVector2D* RPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.RoundInAbsolute");

	UBPF_MiniMapMath_C_RoundInAbsolute_Params params;
	params.Point = Point;
	params.Geometry = Geometry;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RPoint != nullptr)
		*RPoint = params.RPoint;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.IsPointInCircle
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               CircleCenter                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          CircleRadius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_IsPointInCircle(const struct FVector2D& Point, const struct FVector2D& CircleCenter, float CircleRadius, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.IsPointInCircle");

	UBPF_MiniMapMath_C_IsPointInCircle_Params params;
	params.Point = Point;
	params.CircleCenter = CircleCenter;
	params.CircleRadius = CircleRadius;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetPointOnCircle
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Circle_Position                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Circle_Radius                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Point                          (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_GetPointOnCircle(const struct FVector2D& Circle_Position, float Circle_Radius, float Angle, class UObject* __WorldContext, struct FVector2D* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetPointOnCircle");

	UBPF_MiniMapMath_C_GetPointOnCircle_Params params;
	params.Circle_Position = Circle_Position;
	params.Circle_Radius = Circle_Radius;
	params.Angle = Angle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Math_CircleLineIntersection
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Line_Start                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Line_End                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Circle_Position                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Circle_Radius                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsIntersecting                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               IntersectionPoint              (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_Math_CircleLineIntersection(const struct FVector2D& Line_Start, const struct FVector2D& Line_End, const struct FVector2D& Circle_Position, float Circle_Radius, class UObject* __WorldContext, bool* IsIntersecting, struct FVector2D* IntersectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.Math_CircleLineIntersection");

	UBPF_MiniMapMath_C_Math_CircleLineIntersection_Params params;
	params.Line_Start = Line_Start;
	params.Line_End = Line_End;
	params.Circle_Position = Circle_Position;
	params.Circle_Radius = Circle_Radius;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIntersecting != nullptr)
		*IsIntersecting = params.IsIntersecting;
	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Math_LineLineIntersection
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Line_1_Start                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Line_1_End                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Line_2_Start                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Line_2_End                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               IntersectionPoint              (Parm, OutParm, IsPlainOldData)
// bool                           DoLinesIntersect               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           DoSegmentsIntersect            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_Math_LineLineIntersection(const struct FVector2D& Line_1_Start, const struct FVector2D& Line_1_End, const struct FVector2D& Line_2_Start, const struct FVector2D& Line_2_End, class UObject* __WorldContext, struct FVector2D* IntersectionPoint, bool* DoLinesIntersect, bool* DoSegmentsIntersect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.Math_LineLineIntersection");

	UBPF_MiniMapMath_C_Math_LineLineIntersection_Params params;
	params.Line_1_Start = Line_1_Start;
	params.Line_1_End = Line_1_End;
	params.Line_2_Start = Line_2_Start;
	params.Line_2_End = Line_2_End;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;
	if (DoLinesIntersect != nullptr)
		*DoLinesIntersect = params.DoLinesIntersect;
	if (DoSegmentsIntersect != nullptr)
		*DoSegmentsIntersect = params.DoSegmentsIntersect;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D < Vector2D (AND)
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               In_1                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               In_2                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_Vector2D___Vector2D__AND_(const struct FVector2D& In_1, const struct FVector2D& In_2, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D < Vector2D (AND)");

	UBPF_MiniMapMath_C_Vector2D___Vector2D__AND__Params params;
	params.In_1 = In_1;
	params.In_2 = In_2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.IsPointInRectangle
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Rect_Top_Left                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               RectBottomRight                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_IsPointInRectangle(const struct FVector2D& Rect_Top_Left, const struct FVector2D& RectBottomRight, const struct FVector2D& Point, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.IsPointInRectangle");

	UBPF_MiniMapMath_C_IsPointInRectangle_Params params;
	params.Rect_Top_Left = Rect_Top_Left;
	params.RectBottomRight = RectBottomRight;
	params.Point = Point;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D > Vector2D (AND)
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               In_1                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               In_2                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_Vector2D___Vector2D__AND_(const struct FVector2D& In_1, const struct FVector2D& In_2, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D > Vector2D (AND)");

	UBPF_MiniMapMath_C_Vector2D___Vector2D__AND__Params params;
	params.In_1 = In_1;
	params.In_2 = In_2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetLandscapeEdges
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ALandscape*              LandscapeInput                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               BottomLeft                     (Parm, OutParm, IsPlainOldData)
// struct FVector2D               TopRight                       (Parm, OutParm, IsPlainOldData)
// float                          GoundHeight                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_GetLandscapeEdges(class ALandscape* LandscapeInput, class UObject* __WorldContext, struct FVector2D* BottomLeft, struct FVector2D* TopRight, float* GoundHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetLandscapeEdges");

	UBPF_MiniMapMath_C_GetLandscapeEdges_Params params;
	params.LandscapeInput = LandscapeInput;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BottomLeft != nullptr)
		*BottomLeft = params.BottomLeft;
	if (TopRight != nullptr)
		*TopRight = params.TopRight;
	if (GoundHeight != nullptr)
		*GoundHeight = params.GoundHeight;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D Abs
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               In                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Out                            (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_Vector2D_Abs(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D Abs");

	UBPF_MiniMapMath_C_Vector2D_Abs_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.MapRange Vector2D
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Size_1                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Size2                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Out                            (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_MapRange_Vector2D(float In, const struct FVector2D& Size_1, const struct FVector2D& Size2, class UObject* __WorldContext, struct FVector2D* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.MapRange Vector2D");

	UBPF_MiniMapMath_C_MapRange_Vector2D_Params params;
	params.In = In;
	params.Size_1 = Size_1;
	params.Size2 = Size2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D < Vector2D (OR)
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               In_1                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               In_2                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_Vector2D___Vector2D__OR_(const struct FVector2D& In_1, const struct FVector2D& In_2, class UObject* __WorldContext, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D < Vector2D (OR)");

	UBPF_MiniMapMath_C_Vector2D___Vector2D__OR__Params params;
	params.In_1 = In_1;
	params.In_2 = In_2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D * Vector2D
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               In_1                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               In_2                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Out                            (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_Vector2D_*_Vector2D(const struct FVector2D& In_1, const struct FVector2D& In_2, class UObject* __WorldContext, struct FVector2D* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.Vector2D * Vector2D");

	UBPF_MiniMapMath_C_Vector2D_*_Vector2D_Params params;
	params.In_1 = In_1;
	params.In_2 = In_2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.RoundVector2D
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               In                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Out                            (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_RoundVector2D(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.RoundVector2D");

	UBPF_MiniMapMath_C_RoundVector2D_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.SwapVector2D
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               In                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Out                            (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_SwapVector2D(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.SwapVector2D");

	UBPF_MiniMapMath_C_SwapVector2D_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C. Vector 2D
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               _1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               _2                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Vector                         (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC__Vector_2D(const struct FVector2D& _1, const struct FVector2D& _2, class UObject* __WorldContext, struct FVector2D* Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C. Vector 2D");

	UBPF_MiniMapMath_C__Vector_2D_Params params;
	params._1 = _1;
	params._2 = _2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetWorldSize
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ALandscape*              Landscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               BottomLeft                     (Parm, OutParm, IsPlainOldData)
// struct FVector2D               TopRight                       (Parm, OutParm, IsPlainOldData)
// struct FVector2D               Center                         (Parm, OutParm, IsPlainOldData)
// struct FVector2D               HalfSize                       (Parm, OutParm, IsPlainOldData)
// float                          GroundHeight                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_GetWorldSize(class ALandscape* Landscape, class UObject* __WorldContext, struct FVector2D* BottomLeft, struct FVector2D* TopRight, struct FVector2D* Center, struct FVector2D* HalfSize, float* GroundHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetWorldSize");

	UBPF_MiniMapMath_C_GetWorldSize_Params params;
	params.Landscape = Landscape;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BottomLeft != nullptr)
		*BottomLeft = params.BottomLeft;
	if (TopRight != nullptr)
		*TopRight = params.TopRight;
	if (Center != nullptr)
		*Center = params.Center;
	if (HalfSize != nullptr)
		*HalfSize = params.HalfSize;
	if (GroundHeight != nullptr)
		*GroundHeight = params.GroundHeight;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetMiddleVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               _1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               _2                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Mid                            (Parm, OutParm, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_GetMiddleVector(const struct FVector2D& _1, const struct FVector2D& _2, class UObject* __WorldContext, struct FVector2D* Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetMiddleVector");

	UBPF_MiniMapMath_C_GetMiddleVector_Params params;
	params._1 = _1;
	params._2 = _2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mid != nullptr)
		*Mid = params.Mid;
}


// Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetMiddleFloat
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          _1                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          _2                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Mid                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MiniMapMath_C::STATIC_GetMiddleFloat(float _1, float _2, class UObject* __WorldContext, float* Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MiniMapMath.BPF_MiniMapMath_C.GetMiddleFloat");

	UBPF_MiniMapMath_C_GetMiddleFloat_Params params;
	params._1 = _1;
	params._2 = _2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mid != nullptr)
		*Mid = params.Mid;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
