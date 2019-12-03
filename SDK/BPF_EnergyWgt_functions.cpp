
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

// Function BPF_EnergyWgt.BPF_EnergyWgt_C.GetAdventureBarColorEnum
// (NetRequest, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHealthOrbColor>   AsEnum                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_EnergyWgt_C::STATIC_GetAdventureBarColorEnum(class UObject* __WorldContext, TEnumAsByte<EHealthOrbColor>* AsEnum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_EnergyWgt.BPF_EnergyWgt_C.GetAdventureBarColorEnum");

	UBPF_EnergyWgt_C_GetAdventureBarColorEnum_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsEnum != nullptr)
		*AsEnum = params.AsEnum;
}


// Function BPF_EnergyWgt.BPF_EnergyWgt_C.GetAdventureBarColor
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            AsColor                        (Parm, OutParm, IsPlainOldData)

void UBPF_EnergyWgt_C::STATIC_GetAdventureBarColor(class UObject* __WorldContext, struct FLinearColor* AsColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_EnergyWgt.BPF_EnergyWgt_C.GetAdventureBarColor");

	UBPF_EnergyWgt_C_GetAdventureBarColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsColor != nullptr)
		*AsColor = params.AsColor;
}


// Function BPF_EnergyWgt.BPF_EnergyWgt_C.GetFormattedEnergyStrings
// (Native, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HP                             (Parm, OutParm, ZeroConstructor)
// struct FString                 MaxHP                          (Parm, OutParm, ZeroConstructor)

void UBPF_EnergyWgt_C::GetFormattedEnergyStrings(class UObject* __WorldContext, struct FString* HP, struct FString* MaxHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_EnergyWgt.BPF_EnergyWgt_C.GetFormattedEnergyStrings");

	UBPF_EnergyWgt_C_GetFormattedEnergyStrings_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HP != nullptr)
		*HP = params.HP;
	if (MaxHP != nullptr)
		*MaxHP = params.MaxHP;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
