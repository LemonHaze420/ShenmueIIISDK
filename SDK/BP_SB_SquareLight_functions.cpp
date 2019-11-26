
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

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.UpdateLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SB_SquareLight_C::UpdateLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.UpdateLight");

	ABP_SB_SquareLight_C_UpdateLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_SquareLight_C::SetColor(const struct FLinearColor& Color, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.SetColor");

	ABP_SB_SquareLight_C_SetColor_Params params;
	params.Color = Color;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_SquareLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.UserConstructionScript");

	ABP_SB_SquareLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__FinishedFunc
// (BlueprintEvent)

void ABP_SB_SquareLight_C::Timeline_Flash__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__FinishedFunc");

	ABP_SB_SquareLight_C_Timeline_Flash__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__UpdateFunc
// (BlueprintEvent)

void ABP_SB_SquareLight_C::Timeline_Flash__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__UpdateFunc");

	ABP_SB_SquareLight_C_Timeline_Flash__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__LightOff__EventFunc
// (BlueprintEvent)

void ABP_SB_SquareLight_C::Timeline_Flash__LightOff__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__LightOff__EventFunc");

	ABP_SB_SquareLight_C_Timeline_Flash__LightOff__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__LightOn__EventFunc
// (BlueprintEvent)

void ABP_SB_SquareLight_C::Timeline_Flash__LightOn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__LightOn__EventFunc");

	ABP_SB_SquareLight_C_Timeline_Flash__LightOn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SB_SquareLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.ReceiveBeginPlay");

	ABP_SB_SquareLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Flash
// (BlueprintCallable, BlueprintEvent)

void ABP_SB_SquareLight_C::Flash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.Flash");

	ABP_SB_SquareLight_C_Flash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.AllLightOn
// (BlueprintCallable, BlueprintEvent)

void ABP_SB_SquareLight_C::AllLightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.AllLightOn");

	ABP_SB_SquareLight_C_AllLightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.AllLightOff
// (BlueprintCallable, BlueprintEvent)

void ABP_SB_SquareLight_C::AllLightOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.AllLightOff");

	ABP_SB_SquareLight_C_AllLightOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.TargetLightOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_SquareLight_C::TargetLightOff(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.TargetLightOff");

	ABP_SB_SquareLight_C_TargetLightOff_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_SquareLight.BP_SB_SquareLight_C.ExecuteUbergraph_BP_SB_SquareLight
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_SquareLight_C::ExecuteUbergraph_BP_SB_SquareLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_SquareLight.BP_SB_SquareLight_C.ExecuteUbergraph_BP_SB_SquareLight");

	ABP_SB_SquareLight_C_ExecuteUbergraph_BP_SB_SquareLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
