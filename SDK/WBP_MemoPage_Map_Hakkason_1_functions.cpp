
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_MemoPage_Map_Hakkason_1.WBP_MemoPage_Map_Hakkason_0_C.SetNewPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               NewPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_MemoPage_Map_Hakkason_0_C::SetNewPosition(class UTextBlock* Text, const struct FVector2D& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoPage_Map_Hakkason_1.WBP_MemoPage_Map_Hakkason_0_C.SetNewPosition");

	UWBP_MemoPage_Map_Hakkason_0_C_SetNewPosition_Params params;
	params.Text = Text;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MemoPage_Map_Hakkason_1.WBP_MemoPage_Map_Hakkason_0_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MemoPage_Map_Hakkason_0_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoPage_Map_Hakkason_1.WBP_MemoPage_Map_Hakkason_0_C.Construct");

	UWBP_MemoPage_Map_Hakkason_0_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MemoPage_Map_Hakkason_1.WBP_MemoPage_Map_Hakkason_0_C.ExecuteUbergraph_WBP_MemoPage_Map_Hakkason_1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MemoPage_Map_Hakkason_0_C::ExecuteUbergraph_WBP_MemoPage_Map_Hakkason_1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MemoPage_Map_Hakkason_1.WBP_MemoPage_Map_Hakkason_0_C.ExecuteUbergraph_WBP_MemoPage_Map_Hakkason_1");

	UWBP_MemoPage_Map_Hakkason_0_C_ExecuteUbergraph_WBP_MemoPage_Map_Hakkason_1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
