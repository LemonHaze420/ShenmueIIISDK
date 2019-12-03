
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

// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.CheckWriteUnderLine
// (Net, NetReliable, Exec, Event, NetMulticast, Public, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            MemoId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WriteUnderLine                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_Row8_C::CheckWriteUnderLine(int MemoId, bool* WriteUnderLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.CheckWriteUnderLine");

	Uwgt_S3Memopad_textContent_Row8_C_CheckWriteUnderLine_Params params;
	params.MemoId = MemoId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WriteUnderLine != nullptr)
		*WriteUnderLine = params.WriteUnderLine;
}


// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.UpdateDisplay
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_RubyInfo            RubyInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            MemoId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_Row8_C::STATIC_UpdateDisplay(const struct FString& Body, const struct FST_RubyInfo& RubyInfo, int MemoId, bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.UpdateDisplay");

	Uwgt_S3Memopad_textContent_Row8_C_UpdateDisplay_Params params;
	params.Body = Body;
	params.RubyInfo = RubyInfo;
	params.MemoId = MemoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.GetRubySize
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_Row8_C::STATIC_GetRubySize(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.GetRubySize");

	Uwgt_S3Memopad_textContent_Row8_C_GetRubySize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.Construct
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3Memopad_textContent_Row8_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.Construct");

	Uwgt_S3Memopad_textContent_Row8_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.Destruct
// (NetRequest, Exec, Native, Event, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3Memopad_textContent_Row8_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.Destruct");

	Uwgt_S3Memopad_textContent_Row8_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.ExecuteUbergraph_wgt_S3Memopad_textContent_Row8
// (Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_Row8_C::STATIC_ExecuteUbergraph_wgt_S3Memopad_textContent_Row8(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.ExecuteUbergraph_wgt_S3Memopad_textContent_Row8");

	Uwgt_S3Memopad_textContent_Row8_C_ExecuteUbergraph_wgt_S3Memopad_textContent_Row8_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
