
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.SetMainImageSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_ST_ArrowMaskGradation_C::SetMainImageSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.SetMainImageSize");

	UWBP_ST_ArrowMaskGradation_C_SetMainImageSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.AddMainImagePos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Add                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_ST_ArrowMaskGradation_C::AddMainImagePos(const struct FVector2D& Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.AddMainImagePos");

	UWBP_ST_ArrowMaskGradation_C_AddMainImagePos_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ST_ArrowMaskGradation_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.PreConstruct");

	UWBP_ST_ArrowMaskGradation_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.ExecuteUbergraph_WBP_ST_ArrowMaskGradation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ST_ArrowMaskGradation_C::ExecuteUbergraph_WBP_ST_ArrowMaskGradation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.ExecuteUbergraph_WBP_ST_ArrowMaskGradation");

	UWBP_ST_ArrowMaskGradation_C_ExecuteUbergraph_WBP_ST_ArrowMaskGradation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
