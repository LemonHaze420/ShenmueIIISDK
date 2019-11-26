
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

// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.SetTriangleSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_ST_ArrowMask_C::SetTriangleSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.SetTriangleSize");

	UWBP_ST_ArrowMask_C_SetTriangleSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.AddTrianglePos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Add                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_ST_ArrowMask_C::AddTrianglePos(const struct FVector2D& Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.AddTrianglePos");

	UWBP_ST_ArrowMask_C_AddTrianglePos_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ST_ArrowMask_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.PreConstruct");

	UWBP_ST_ArrowMask_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ST_ArrowMask_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.Construct");

	UWBP_ST_ArrowMask_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.ExecuteUbergraph_WBP_ST_ArrowMask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ST_ArrowMask_C::ExecuteUbergraph_WBP_ST_ArrowMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.ExecuteUbergraph_WBP_ST_ArrowMask");

	UWBP_ST_ArrowMask_C_ExecuteUbergraph_WBP_ST_ArrowMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
