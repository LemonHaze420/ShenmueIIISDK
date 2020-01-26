
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

// Function BPF_S3UILocLabel.BPF_S3UILocLabel_C.BPF_GetLocalizedUIString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocLabel                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPF_S3UILocLabel_C::STATIC_BPF_GetLocalizedUIString(const struct FName& LocLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3UILocLabel.BPF_S3UILocLabel_C.BPF_GetLocalizedUIString");

	UBPF_S3UILocLabel_C_BPF_GetLocalizedUIString_Params params;
	params.LocLabel = LocLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_S3UILocLabel.BPF_S3UILocLabel_C.BPF_GetLocalizedUIText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_S3UILocLabel        LocLabel                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPF_S3UILocLabel_C::STATIC_BPF_GetLocalizedUIText(bool IsDesignTime, const struct FST_S3UILocLabel& LocLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3UILocLabel.BPF_S3UILocLabel_C.BPF_GetLocalizedUIText");

	UBPF_S3UILocLabel_C_BPF_GetLocalizedUIText_Params params;
	params.IsDesignTime = IsDesignTime;
	params.LocLabel = LocLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_S3UILocLabel.BPF_S3UILocLabel_C.BPF_InitLocalizedTextWidget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FST_S3UILocLabel        LocLabel                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_S3UILocLabel_C::STATIC_BPF_InitLocalizedTextWidget(bool IsDesignTime, class UTextBlock* Widget, const struct FST_S3UILocLabel& LocLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3UILocLabel.BPF_S3UILocLabel_C.BPF_InitLocalizedTextWidget");

	UBPF_S3UILocLabel_C_BPF_InitLocalizedTextWidget_Params params;
	params.IsDesignTime = IsDesignTime;
	params.Widget = Widget;
	params.LocLabel = LocLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
