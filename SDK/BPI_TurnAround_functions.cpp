
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

// Function BPI_TurnAround.BPI_TurnAround_C.GetTurnAroundComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_TurnAround_C*       Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_TurnAround_C::GetTurnAroundComponent(class UBPC_TurnAround_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TurnAround.BPI_TurnAround_C.GetTurnAroundComponent");

	UBPI_TurnAround_C_GetTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BPI_TurnAround.BPI_TurnAround_C.RemoveTurnAroundComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_TurnAround_C::RemoveTurnAroundComponent(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TurnAround.BPI_TurnAround_C.RemoveTurnAroundComponent");

	UBPI_TurnAround_C_RemoveTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BPI_TurnAround.BPI_TurnAround_C.AddTurnAroundComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_TurnAround_C*       Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_TurnAround_C::AddTurnAroundComponent(class UBPC_TurnAround_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TurnAround.BPI_TurnAround_C.AddTurnAroundComponent");

	UBPI_TurnAround_C_AddTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
