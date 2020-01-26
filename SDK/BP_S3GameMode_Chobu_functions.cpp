
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.CheckSunLightCastShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_Chobu_C::CheckSunLightCastShadow(ES3PlayerBehavior ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.CheckSunLightCastShadow");

	ABP_S3GameMode_Chobu_C_CheckSunLightCastShadow_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.CheckCasinoShip
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_Chobu_C::CheckCasinoShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.CheckCasinoShip");

	ABP_S3GameMode_Chobu_C_CheckCasinoShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_Chobu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.UserConstructionScript");

	ABP_S3GameMode_Chobu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.InitializeShip
// (BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_Chobu_C::InitializeShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.InitializeShip");

	ABP_S3GameMode_Chobu_C_InitializeShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.FinalizeShip
// (BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_Chobu_C::FinalizeShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.FinalizeShip");

	ABP_S3GameMode_Chobu_C_FinalizeShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ChangeFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_Chobu_C::ChangeFlag(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ChangeFlag");

	ABP_S3GameMode_Chobu_C_ChangeFlag_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.JumpShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              JumpTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   EyecatchLabel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_Chobu_C::JumpShip(const struct FTransform& JumpTransform, const struct FName& EyecatchLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.JumpShip");

	ABP_S3GameMode_Chobu_C_JumpShip_Params params;
	params.JumpTransform = JumpTransform;
	params.EyecatchLabel = EyecatchLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.FinishJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_Chobu_C::FinishJump(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.FinishJump");

	ABP_S3GameMode_Chobu_C_FinishJump_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3GameMode_Chobu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ReceiveBeginPlay");

	ABP_S3GameMode_Chobu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_Chobu_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ReceiveEndPlay");

	ABP_S3GameMode_Chobu_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ChangeStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_Chobu_C::ChangeStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ChangeStep");

	ABP_S3GameMode_Chobu_C_ChangeStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ChangePlayerBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_Chobu_C::ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ChangePlayerBehavior");

	ABP_S3GameMode_Chobu_C_ChangePlayerBehavior_Params params;
	params.NewId = NewId;
	params.OldId = OldId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.StartChobu
// (BlueprintCallable, BlueprintEvent)

void ABP_S3GameMode_Chobu_C::StartChobu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.StartChobu");

	ABP_S3GameMode_Chobu_C_StartChobu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ExecuteUbergraph_BP_S3GameMode_Chobu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GameMode_Chobu_C::ExecuteUbergraph_BP_S3GameMode_Chobu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ExecuteUbergraph_BP_S3GameMode_Chobu");

	ABP_S3GameMode_Chobu_C_ExecuteUbergraph_BP_S3GameMode_Chobu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
