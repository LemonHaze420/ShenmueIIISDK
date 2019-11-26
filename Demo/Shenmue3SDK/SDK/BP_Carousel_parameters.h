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

// Function BP_Carousel.BP_Carousel_C.isBusy
struct UBP_Carousel_C_isBusy_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Carousel.BP_Carousel_C.GetDirectionFromString
struct UBP_Carousel_C_GetDirectionFromString_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECarouselRotate>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Carousel.BP_Carousel_C.RotateExec
struct UBP_Carousel_C_RotateExec_Params
{
};

// Function BP_Carousel.BP_Carousel_C.RequestRotate
struct UBP_Carousel_C_RequestRotate_Params
{
	TEnumAsByte<ECarouselRotate>                       Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Carousel.BP_Carousel_C.CreateActorList
struct UBP_Carousel_C_CreateActorList_Params
{
};

// Function BP_Carousel.BP_Carousel_C.ReceiveBeginPlay
struct UBP_Carousel_C_ReceiveBeginPlay_Params
{
};

// Function BP_Carousel.BP_Carousel_C.ReceiveTick
struct UBP_Carousel_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Carousel.BP_Carousel_C.ExecuteUbergraph_BP_Carousel
struct UBP_Carousel_C_ExecuteUbergraph_BP_Carousel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
