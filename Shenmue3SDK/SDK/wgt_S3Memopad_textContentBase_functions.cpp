
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

// Function wgt_S3Memopad_textContentBase.wgt_S3Memopad_textContentBase_C.UpdateDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_RubyInfo            RubyInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            MemoId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3Memopad_textContentBase_C::UpdateDisplay(const struct FString& Body, const struct FST_RubyInfo& RubyInfo, int MemoId, bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3Memopad_textContentBase.wgt_S3Memopad_textContentBase_C.UpdateDisplay");

	Uwgt_S3Memopad_textContentBase_C_UpdateDisplay_Params params;
	params.Body = Body;
	params.RubyInfo = RubyInfo;
	params.MemoId = MemoId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
