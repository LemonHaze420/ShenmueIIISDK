
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

// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASL_Hakkason_Search_Tou_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ReceiveBeginPlay");

	ASL_Hakkason_Search_Tou_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Search_Tou_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ReceiveTick");

	ASL_Hakkason_Search_Tou_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.OnFlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Search_Tou_C::OnFlagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.OnFlagChange");

	ASL_Hakkason_Search_Tou_C_OnFlagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ChangeToFree
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_Search_Tou_C::ChangeToFree()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ChangeToFree");

	ASL_Hakkason_Search_Tou_C_ChangeToFree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ExecuteUbergraph_SL_Hakkason_Search_Tou
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Search_Tou_C::ExecuteUbergraph_SL_Hakkason_Search_Tou(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ExecuteUbergraph_SL_Hakkason_Search_Tou");

	ASL_Hakkason_Search_Tou_C_ExecuteUbergraph_SL_Hakkason_Search_Tou_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
