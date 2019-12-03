
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

// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugOnStartCutscenePlayer
// (NetReliable, Exec, Native, Event, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_DBG_Cutscene_C::DebugOnStartCutscenePlayer(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugOnStartCutscenePlayer");

	ASL_Hakkason_DBG_Cutscene_C_DebugOnStartCutscenePlayer_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugOnCutsceneEnd
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_DBG_Cutscene_C::DebugOnCutsceneEnd(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugOnCutsceneEnd");

	ASL_Hakkason_DBG_Cutscene_C_DebugOnCutsceneEnd_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.Old_DebugPlayCutscene
// (NetReliable, Exec, Native, Event, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_DBG_Cutscene_C::Old_DebugPlayCutscene(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.Old_DebugPlayCutscene");

	ASL_Hakkason_DBG_Cutscene_C_Old_DebugPlayCutscene_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.Old_DebugOnStartCutscenePlayer
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::Old_DebugOnStartCutscenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.Old_DebugOnStartCutscenePlayer");

	ASL_Hakkason_DBG_Cutscene_C_Old_DebugOnStartCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.Old_DebugOnCutsceneEnd
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::Old_DebugOnCutsceneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.Old_DebugOnCutsceneEnd");

	ASL_Hakkason_DBG_Cutscene_C_Old_DebugOnCutsceneEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.ReceiveBeginPlay
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.ReceiveBeginPlay");

	ASL_Hakkason_DBG_Cutscene_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.InitDebugCutscene
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::InitDebugCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.InitDebugCutscene");

	ASL_Hakkason_DBG_Cutscene_C_InitDebugCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0008v
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0008v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0008v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0008v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0035v
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0035v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0035v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0035v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0034v
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0034v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0034v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0034v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0019v
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0019v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0019v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0019v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0017v
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0017v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0017v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0017v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0016v
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0016v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0016v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0016v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0015v
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0015v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0015v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0015v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0013v
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0013v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0013v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0013v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0012v
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0012v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0012v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0012v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0010v
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0010v()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0010v");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0010v_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0055
// (Net, NetResponse, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0055()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0055");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0055_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0054
// (NetResponse, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0054()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0054");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0054_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0039
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0039()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0039");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0039_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_s0001_Mov
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBegin_s0001_Mov()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_s0001_Mov");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_s0001_Mov_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0044
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBegin_M03_S0044()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0044");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_M03_S0044_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0043
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBegin_M03_S0043()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0043");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_M03_S0043_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0003
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0003()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0003");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0003_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0053
// (NetResponse, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0053()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0053");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0053_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0042
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0042()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0042");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0042_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0041_3
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0041_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0041_3");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0041_3_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0041
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0041()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0041");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0041_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginCutscene_s9000
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginCutscene_s9000()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginCutscene_s9000");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginCutscene_s9000_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0006
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBeginM03_S0006()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBeginM03_S0006");

	ASL_Hakkason_DBG_Cutscene_C_DebugBeginM03_S0006_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0004
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::STATIC_DebugBegin_M03_S0004()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0004");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_M03_S0004_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0001
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBegin_M03_S0001()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0001");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_M03_S0001_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0002
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBegin_M03_S0002()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0002");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_M03_S0002_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0040
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBegin_M03_S0040()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0040");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_M03_S0040_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0046
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBegin_M03_S0046()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0046");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_M03_S0046_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0052
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBegin_M03_S0052()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0052");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_M03_S0052_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0005
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASL_Hakkason_DBG_Cutscene_C::DebugBegin_M03_S0005()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.DebugBegin_M03_S0005");

	ASL_Hakkason_DBG_Cutscene_C_DebugBegin_M03_S0005_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.ExecuteUbergraph_SL_Hakkason_DBG_Cutscene
// (NetReliable, Exec, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_DBG_Cutscene_C::STATIC_ExecuteUbergraph_SL_Hakkason_DBG_Cutscene(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C.ExecuteUbergraph_SL_Hakkason_DBG_Cutscene");

	ASL_Hakkason_DBG_Cutscene_C_ExecuteUbergraph_SL_Hakkason_DBG_Cutscene_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
