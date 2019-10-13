
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_DojoNamePlate.BP_DojoNamePlate_C.GetCurrentDojo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDojoPlace>        Place                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FlagIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DojoNamePlate_C::GetCurrentDojo(TEnumAsByte<EDojoPlace>* Place, int* FlagIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DojoNamePlate.BP_DojoNamePlate_C.GetCurrentDojo");

	ABP_DojoNamePlate_C_GetCurrentDojo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Place != nullptr)
		*Place = params.Place;
	if (FlagIndex != nullptr)
		*FlagIndex = params.FlagIndex;
}


// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ChangePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DojoRank                    Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DojoNamePlate_C::ChangePosition(ES3DojoRank Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DojoNamePlate.BP_DojoNamePlate_C.ChangePosition");

	ABP_DojoNamePlate_C_ChangePosition_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DojoNamePlate.BP_DojoNamePlate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DojoNamePlate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DojoNamePlate.BP_DojoNamePlate_C.UserConstructionScript");

	ABP_DojoNamePlate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DojoNamePlate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DojoNamePlate.BP_DojoNamePlate_C.ReceiveBeginPlay");

	ABP_DojoNamePlate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ChangeFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DojoNamePlate_C::ChangeFlag(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DojoNamePlate.BP_DojoNamePlate_C.ChangeFlag");

	ABP_DojoNamePlate_C_ChangeFlag_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DojoNamePlate_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DojoNamePlate.BP_DojoNamePlate_C.ReceiveEndPlay");

	ABP_DojoNamePlate_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ExecuteUbergraph_BP_DojoNamePlate
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DojoNamePlate_C::ExecuteUbergraph_BP_DojoNamePlate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DojoNamePlate.BP_DojoNamePlate_C.ExecuteUbergraph_BP_DojoNamePlate");

	ABP_DojoNamePlate_C_ExecuteUbergraph_BP_DojoNamePlate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
