
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

// Function wgt_S3Memopad_textContent_NonRuby.wgt_S3Memopad_textContent_NonRuby_C.UpdateDisplay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_RubyInfo*           RubyInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           MemoId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_NonRuby_C::UpdateDisplay(struct FString* Body, struct FST_RubyInfo* RubyInfo, int* MemoId, bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_NonRuby.wgt_S3Memopad_textContent_NonRuby_C.UpdateDisplay");

	Uwgt_S3Memopad_textContent_NonRuby_C_UpdateDisplay_Params params;
	params.Body = Body;
	params.RubyInfo = RubyInfo;
	params.MemoId = MemoId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function wgt_S3Memopad_textContent_NonRuby.wgt_S3Memopad_textContent_NonRuby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3Memopad_textContent_NonRuby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_NonRuby.wgt_S3Memopad_textContent_NonRuby_C.Construct");

	Uwgt_S3Memopad_textContent_NonRuby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3Memopad_textContent_NonRuby.wgt_S3Memopad_textContent_NonRuby_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3Memopad_textContent_NonRuby_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_NonRuby.wgt_S3Memopad_textContent_NonRuby_C.Destruct");

	Uwgt_S3Memopad_textContent_NonRuby_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3Memopad_textContent_NonRuby.wgt_S3Memopad_textContent_NonRuby_C.ExecuteUbergraph_wgt_S3Memopad_textContent_NonRuby
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContent_NonRuby_C::ExecuteUbergraph_wgt_S3Memopad_textContent_NonRuby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContent_NonRuby.wgt_S3Memopad_textContent_NonRuby_C.ExecuteUbergraph_wgt_S3Memopad_textContent_NonRuby");

	Uwgt_S3Memopad_textContent_NonRuby_C_ExecuteUbergraph_wgt_S3Memopad_textContent_NonRuby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
