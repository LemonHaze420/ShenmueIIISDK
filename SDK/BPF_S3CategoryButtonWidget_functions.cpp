
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

// Function BPF_S3CategoryButtonWidget.BPF_S3CategoryButtonWidget_C.BPF_SetButtonTextures
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTexture*                LightTex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                DarkTex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                GlowTex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_S3CategoryButtonWidget_C::STATIC_BPF_SetButtonTextures(class UImage* Image, class UTexture* LightTex, class UTexture* DarkTex, class UTexture* GlowTex, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3CategoryButtonWidget.BPF_S3CategoryButtonWidget_C.BPF_SetButtonTextures");

	UBPF_S3CategoryButtonWidget_C_BPF_SetButtonTextures_Params params;
	params.Image = Image;
	params.LightTex = LightTex;
	params.DarkTex = DarkTex;
	params.GlowTex = GlowTex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_S3CategoryButtonWidget.BPF_S3CategoryButtonWidget_C.BPF_SetButtonSelected
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_S3CategoryButtonWidget_C::STATIC_BPF_SetButtonSelected(class UImage* Image, class UTextBlock* Text, bool bSelected, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3CategoryButtonWidget.BPF_S3CategoryButtonWidget_C.BPF_SetButtonSelected");

	UBPF_S3CategoryButtonWidget_C_BPF_SetButtonSelected_Params params;
	params.Image = Image;
	params.Text = Text;
	params.bSelected = bSelected;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_S3CategoryButtonWidget.BPF_S3CategoryButtonWidget_C.BPF_EnableButtonCursor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_S3CategoryButtonWidget_C::STATIC_BPF_EnableButtonCursor(class UImage* Image, class UTextBlock* Text, bool bEnabled, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3CategoryButtonWidget.BPF_S3CategoryButtonWidget_C.BPF_EnableButtonCursor");

	UBPF_S3CategoryButtonWidget_C_BPF_EnableButtonCursor_Params params;
	params.Image = Image;
	params.Text = Text;
	params.bEnabled = bEnabled;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
