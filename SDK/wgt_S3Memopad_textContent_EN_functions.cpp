
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

// Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.CheckWriteUnderLine
// (NetRequest, Exec, Native, Event, NetResponse, Static, Public, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            MemoId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WriteUnderLine                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_EN_C::STATIC_CheckWriteUnderLine(int MemoId, bool* WriteUnderLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.CheckWriteUnderLine");

	Uwgt_S3Memopad_textContent_EN_C_CheckWriteUnderLine_Params params;
	params.MemoId = MemoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WriteUnderLine != nullptr)
		*WriteUnderLine = params.WriteUnderLine;
}


// Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.UpdateDisplay
// (Native, NetResponse, Static, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_RubyInfo            RubyInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            MemoId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_EN_C::STATIC_UpdateDisplay(const struct FString& Body, const struct FST_RubyInfo& RubyInfo, int MemoId, bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.UpdateDisplay");

	Uwgt_S3Memopad_textContent_EN_C_UpdateDisplay_Params params;
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


// Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.GetRubySize
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_EN_C::STATIC_GetRubySize(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.GetRubySize");

	Uwgt_S3Memopad_textContent_EN_C_GetRubySize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.Construct
// (Exec, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3Memopad_textContent_EN_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.Construct");

	Uwgt_S3Memopad_textContent_EN_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.Destruct
// (Net, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3Memopad_textContent_EN_C::STATIC_Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.Destruct");

	Uwgt_S3Memopad_textContent_EN_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.ExecuteUbergraph_wgt_S3Memopad_textContent_EN
// (Net, NetRequest, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_EN_C::STATIC_ExecuteUbergraph_wgt_S3Memopad_textContent_EN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_EN.wgt_S3Memopad_textContent_EN_C.ExecuteUbergraph_wgt_S3Memopad_textContent_EN");

	Uwgt_S3Memopad_textContent_EN_C_ExecuteUbergraph_wgt_S3Memopad_textContent_EN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
