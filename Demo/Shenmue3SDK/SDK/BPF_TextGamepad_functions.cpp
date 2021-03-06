
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

// Function BPF_TextGamepad.BPF_TextGamepad_C.GetPlaftormGamepadShoulderText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EGamepadShoulder>  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPF_TextGamepad_C::STATIC_GetPlaftormGamepadShoulderText(TEnumAsByte<EGamepadShoulder> Button, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_TextGamepad.BPF_TextGamepad_C.GetPlaftormGamepadShoulderText");

	UBPF_TextGamepad_C_GetPlaftormGamepadShoulderText_Params params;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_TextGamepad.BPF_TextGamepad_C.GetGamepadShoulderText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EGamepadShoulder>  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPF_TextGamepad_C::STATIC_GetGamepadShoulderText(TEnumAsByte<EGamepadShoulder> Button, ES3Platform Platform, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_TextGamepad.BPF_TextGamepad_C.GetGamepadShoulderText");

	UBPF_TextGamepad_C_GetGamepadShoulderText_Params params;
	params.Button = Button;
	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
