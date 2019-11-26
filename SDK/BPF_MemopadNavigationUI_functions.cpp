
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

// Function BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C.BPF_UpdateMemopadShoulderUIGlow2
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInteractable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_MemopadNavigationUI_C::STATIC_BPF_UpdateMemopadShoulderUIGlow2(class UMaterialInstanceDynamic* Material, float Alpha, bool bInteractable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C.BPF_UpdateMemopadShoulderUIGlow2");

	UBPF_MemopadNavigationUI_C_BPF_UpdateMemopadShoulderUIGlow2_Params params;
	params.Material = Material;
	params.Alpha = Alpha;
	params.bInteractable = bInteractable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C.BPF_UpdateMemopadShoulderUIGlow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  AlphaSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bInteractable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_MemopadNavigationUI_C::STATIC_BPF_UpdateMemopadShoulderUIGlow(class UMaterialInstanceDynamic* Material, class UImage* AlphaSource, bool bInteractable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C.BPF_UpdateMemopadShoulderUIGlow");

	UBPF_MemopadNavigationUI_C_BPF_UpdateMemopadShoulderUIGlow_Params params;
	params.Material = Material;
	params.AlphaSource = AlphaSource;
	params.bInteractable = bInteractable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C.BPF_InitMemopadShoulderUI
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* RightMaterial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* LeftMaterial                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_MemopadNavigationUI_C::STATIC_BPF_InitMemopadShoulderUI(class UImage* Right, class UImage* Left, class UObject* __WorldContext, class UMaterialInstanceDynamic** RightMaterial, class UMaterialInstanceDynamic** LeftMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_MemopadNavigationUI.BPF_MemopadNavigationUI_C.BPF_InitMemopadShoulderUI");

	UBPF_MemopadNavigationUI_C_BPF_InitMemopadShoulderUI_Params params;
	params.Right = Right;
	params.Left = Left;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightMaterial != nullptr)
		*RightMaterial = params.RightMaterial;
	if (LeftMaterial != nullptr)
		*LeftMaterial = params.LeftMaterial;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
