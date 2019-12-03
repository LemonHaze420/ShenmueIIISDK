
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

// Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.Reset
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, BlueprintCallable)

void UBPC_MIniGame_ST_GameScore_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.Reset");

	UBPC_MIniGame_ST_GameScore_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.IncrementSuccessCount
// (NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport)

void UBPC_MIniGame_ST_GameScore_C::IncrementSuccessCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.IncrementSuccessCount");

	UBPC_MIniGame_ST_GameScore_C_IncrementSuccessCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.AddPoint
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Total                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MIniGame_ST_GameScore_C::STATIC_AddPoint(int Add, int* Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.AddPoint");

	UBPC_MIniGame_ST_GameScore_C_AddPoint_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Total != nullptr)
		*Total = params.Total;
}


// Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.ExecuteUbergraph_BPC_MIniGame_ST_GameScore
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MIniGame_ST_GameScore_C::STATIC_ExecuteUbergraph_BPC_MIniGame_ST_GameScore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.ExecuteUbergraph_BPC_MIniGame_ST_GameScore");

	UBPC_MIniGame_ST_GameScore_C_ExecuteUbergraph_BPC_MIniGame_ST_GameScore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
