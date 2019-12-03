
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

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRegenMax(Ratio)
// (Native, Event, NetResponse, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutEnergy                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::BPF_GetPlayerEnergyRegenMax_Ratio_(class UObject* __WorldContext, float* OutEnergy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRegenMax(Ratio)");

	UBPF_Energy_C_BPF_GetPlayerEnergyRegenMax_Ratio__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEnergy != nullptr)
		*OutEnergy = params.OutEnergy;
}


// Function BPF_Energy.BPF_Energy_C.BPF_ReducePlayerEnergy(Orbs)
// (Net, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// float                          Orbs                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::STATIC_BPF_ReducePlayerEnergy_Orbs_(float Orbs, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_ReducePlayerEnergy(Orbs)");

	UBPF_Energy_C_BPF_ReducePlayerEnergy_Orbs__Params params;
	params.Orbs = Orbs;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Energy.BPF_Energy_C.BPF_DrainEnergyByDeltaTime
// (Exec, NetResponse, Static, MulticastDelegate, Protected, DLLImport, BlueprintPure)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ParAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ParTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::STATIC_BPF_DrainEnergyByDeltaTime(float DeltaTime, float ParAmount, float ParTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_DrainEnergyByDeltaTime");

	UBPF_Energy_C_BPF_DrainEnergyByDeltaTime_Params params;
	params.DeltaTime = DeltaTime;
	params.ParAmount = ParAmount;
	params.ParTime = ParTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyDrainMinPoints
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPF_Energy_C::STATIC_BPF_GetPlayerEnergyDrainMinPoints(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyDrainMinPoints");

	UBPF_Energy_C_BPF_GetPlayerEnergyDrainMinPoints_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerMaxEnergyPoints
// (NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPF_Energy_C::STATIC_BPF_GetPlayerMaxEnergyPoints(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerMaxEnergyPoints");

	UBPF_Energy_C_BPF_GetPlayerMaxEnergyPoints_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Energy.BPF_Energy_C.BPF_SetPlayerEnergy(Ratio)
// (NetReliable, NetRequest, NetResponse, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::BPF_SetPlayerEnergy_Ratio_(float Ratio, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_SetPlayerEnergy(Ratio)");

	UBPF_Energy_C_BPF_SetPlayerEnergy_Ratio__Params params;
	params.Ratio = Ratio;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Energy.BPF_Energy_C.BPF_SetPlayerEnergy(Points)
// (NetRequest, Exec, Event, MulticastDelegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::BPF_SetPlayerEnergy_Points_(float Amount, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_SetPlayerEnergy(Points)");

	UBPF_Energy_C_BPF_SetPlayerEnergy_Points__Params params;
	params.Amount = Amount;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyMultiplier
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPF_Energy_C::STATIC_BPF_GetPlayerEnergyMultiplier(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyMultiplier");

	UBPF_Energy_C_BPF_GetPlayerEnergyMultiplier_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Energy.BPF_Energy_C.BPF_IsEnergySystemValid
// (NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_Energy_C::BPF_IsEnergySystemValid(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_IsEnergySystemValid");

	UBPF_Energy_C_BPF_IsEnergySystemValid_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRegenRate
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Delegate, NetServer, NetClient)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::BPF_GetPlayerEnergyRegenRate(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRegenRate");

	UBPF_Energy_C_BPF_GetPlayerEnergyRegenRate_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyPoints
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Points                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::STATIC_BPF_GetPlayerEnergyPoints(class UObject* __WorldContext, float* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyPoints");

	UBPF_Energy_C_BPF_GetPlayerEnergyPoints_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRegenMax(Points)
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Protected, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutEnergy                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::STATIC_BPF_GetPlayerEnergyRegenMax_Points_(class UObject* __WorldContext, float* OutEnergy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRegenMax(Points)");

	UBPF_Energy_C_BPF_GetPlayerEnergyRegenMax_Points__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEnergy != nullptr)
		*OutEnergy = params.OutEnergy;
}


// Function BPF_Energy.BPF_Energy_C.BPF_SetPlayerEnergyToMax
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::BPF_SetPlayerEnergyToMax(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_SetPlayerEnergyToMax");

	UBPF_Energy_C_BPF_SetPlayerEnergyToMax_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRange(Ratio)
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Protected, NetServer, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Range                          (Parm, OutParm, IsPlainOldData)

void UBPF_Energy_C::BPF_GetPlayerEnergyRange_Ratio_(class UObject* __WorldContext, struct FVector2D* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRange(Ratio)");

	UBPF_Energy_C_BPF_GetPlayerEnergyRange_Ratio__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function BPF_Energy.BPF_Energy_C.BPF_ReducePlayerEnergy
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::STATIC_BPF_ReducePlayerEnergy(float Amount, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_ReducePlayerEnergy");

	UBPF_Energy_C_BPF_ReducePlayerEnergy_Params params;
	params.Amount = Amount;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRange(Points)
// (Event, Static, Public, Protected, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Range                          (Parm, OutParm, IsPlainOldData)

void UBPF_Energy_C::STATIC_BPF_GetPlayerEnergyRange_Points_(class UObject* __WorldContext, struct FVector2D* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRange(Points)");

	UBPF_Energy_C_BPF_GetPlayerEnergyRange_Points__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function BPF_Energy.BPF_Energy_C.BPF_AddPlayerEnergy(float)
// (Event, NetResponse, NetMulticast, Protected, NetServer, NetClient, DLLImport)
// Parameters:
// float                          Amt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::BPF_AddPlayerEnergy_float_(float Amt, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_AddPlayerEnergy(float)");

	UBPF_Energy_C_BPF_AddPlayerEnergy_float__Params params;
	params.Amt = Amt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRatio
// (Net, NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::STATIC_BPF_GetPlayerEnergyRatio(class UObject* __WorldContext, float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRatio");

	UBPF_Energy_C_BPF_GetPlayerEnergyRatio_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function BPF_Energy.BPF_Energy_C.BPF_IsPlayerEnergyMax
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_Energy_C::STATIC_BPF_IsPlayerEnergyMax(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_IsPlayerEnergyMax");

	UBPF_Energy_C_BPF_IsPlayerEnergyMax_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Energy.BPF_Energy_C.BPF_AddPlayerEnergy(Int)
// (NetReliable, Exec, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// int                            Amt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::BPF_AddPlayerEnergy_Int_(int Amt, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_AddPlayerEnergy(Int)");

	UBPF_Energy_C_BPF_AddPlayerEnergy_Int__Params params;
	params.Amt = Amt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerBaseMaxEnergy
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Energy_C::STATIC_BPF_GetPlayerBaseMaxEnergy(class UObject* __WorldContext, float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerBaseMaxEnergy");

	UBPF_Energy_C_BPF_GetPlayerBaseMaxEnergy_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max != nullptr)
		*Max = params.Max;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
