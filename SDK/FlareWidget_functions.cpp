
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

// Function FlareWidget.FlareWidget_C.ForceVisiblityOff
// (Public, BlueprintCallable, BlueprintEvent)

void UFlareWidget_C::ForceVisiblityOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.ForceVisiblityOff");

	UFlareWidget_C_ForceVisiblityOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlareWidget.FlareWidget_C.Get_FlareImage_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UFlareWidget_C::Get_FlareImage_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.Get_FlareImage_Brush_1");

	UFlareWidget_C_Get_FlareImage_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FlareWidget.FlareWidget_C.OcclusionOpacityUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFlareWidget_C::OcclusionOpacityUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.OcclusionOpacityUpdate");

	UFlareWidget_C_OcclusionOpacityUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlareWidget.FlareWidget_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OffsetAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ParentLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Opacity_Edge_Fade_X            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity_Edge_Fade_Y            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Fade_Distance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScaleCenterSize                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ScaleOuterSize                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ScalingInfluence               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Enable_Scaling                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Screen_Position_Offset         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Enable_Orbit_Rotation          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Initial_Rotation_Offset        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Fadeout_EnableShrink           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fadeout_EnableOpacity          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut_FlareLocation          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableLocationOpacity          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocOpacityCenter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocOpacityEdge                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               LocOpacityInfluence            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          RotationAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           AdditiveFlag                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlareWidget_C::Initialize(float OffsetAmount, const struct FVector& ParentLocation, float Opacity_Edge_Fade_X, float Opacity_Edge_Fade_Y, float Fade_Distance, const struct FVector2D& ScaleCenterSize, const struct FVector2D& ScaleOuterSize, const struct FVector2D& ScalingInfluence, bool Enable_Scaling, const struct FVector2D& Screen_Position_Offset, bool Enable_Orbit_Rotation, float Initial_Rotation_Offset, const struct FVector2D& Size, bool Fadeout_EnableShrink, bool Fadeout_EnableOpacity, bool FadeOut_FlareLocation, bool EnableLocationOpacity, float LocOpacityCenter, float LocOpacityEdge, const struct FVector2D& LocOpacityInfluence, float RotationAmount, const struct FLinearColor& Color, bool AdditiveFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.Initialize");

	UFlareWidget_C_Initialize_Params params;
	params.OffsetAmount = OffsetAmount;
	params.ParentLocation = ParentLocation;
	params.Opacity_Edge_Fade_X = Opacity_Edge_Fade_X;
	params.Opacity_Edge_Fade_Y = Opacity_Edge_Fade_Y;
	params.Fade_Distance = Fade_Distance;
	params.ScaleCenterSize = ScaleCenterSize;
	params.ScaleOuterSize = ScaleOuterSize;
	params.ScalingInfluence = ScalingInfluence;
	params.Enable_Scaling = Enable_Scaling;
	params.Screen_Position_Offset = Screen_Position_Offset;
	params.Enable_Orbit_Rotation = Enable_Orbit_Rotation;
	params.Initial_Rotation_Offset = Initial_Rotation_Offset;
	params.Size = Size;
	params.Fadeout_EnableShrink = Fadeout_EnableShrink;
	params.Fadeout_EnableOpacity = Fadeout_EnableOpacity;
	params.FadeOut_FlareLocation = FadeOut_FlareLocation;
	params.EnableLocationOpacity = EnableLocationOpacity;
	params.LocOpacityCenter = LocOpacityCenter;
	params.LocOpacityEdge = LocOpacityEdge;
	params.LocOpacityInfluence = LocOpacityInfluence;
	params.RotationAmount = RotationAmount;
	params.Color = Color;
	params.AdditiveFlag = AdditiveFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlareWidget.FlareWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlareWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.Tick");

	UFlareWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlareWidget.FlareWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFlareWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.Construct");

	UFlareWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlareWidget.FlareWidget_C.ChangePlayerBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlareWidget_C::ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.ChangePlayerBehavior");

	UFlareWidget_C_ChangePlayerBehavior_Params params;
	params.NewId = NewId;
	params.OldId = OldId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlareWidget.FlareWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFlareWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.Destruct");

	UFlareWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlareWidget.FlareWidget_C.ExecuteUbergraph_FlareWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlareWidget_C::ExecuteUbergraph_FlareWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.ExecuteUbergraph_FlareWidget");

	UFlareWidget_C_ExecuteUbergraph_FlareWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlareWidget.FlareWidget_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFlareWidget_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlareWidget.FlareWidget_C.NewEventDispatcher_0__DelegateSignature");

	UFlareWidget_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
