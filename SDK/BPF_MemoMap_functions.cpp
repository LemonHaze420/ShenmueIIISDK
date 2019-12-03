
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

// Function BPF_MemoMap.BPF_MemoMap_C.IsVisible
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            FlagIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SubFlagIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MemoMap_C::STATIC_IsVisible(int FlagIndex, int SubFlagIndex, class UObject* __WorldContext, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MemoMap.BPF_MemoMap_C.IsVisible");

	UBPF_MemoMap_C_IsVisible_Params params;
	params.FlagIndex = FlagIndex;
	params.SubFlagIndex = SubFlagIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
}


// Function BPF_MemoMap.BPF_MemoMap_C.SetVisibility
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SubFlagIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_MemoMap_C::STATIC_SetVisibility(class UWidget* TextBlock, int Index, int SubFlagIndex, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MemoMap.BPF_MemoMap_C.SetVisibility");

	UBPF_MemoMap_C_SetVisibility_Params params;
	params.TextBlock = TextBlock;
	params.Index = Index;
	params.SubFlagIndex = SubFlagIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_MemoMap.BPF_MemoMap_C.GetText
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPF_MemoMap_C::GetText(const struct FName& Label, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MemoMap.BPF_MemoMap_C.GetText");

	UBPF_MemoMap_C_GetText_Params params;
	params.Label = Label;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
