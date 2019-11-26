
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

// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.CheckSkip
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3GamemodeBase_C::CheckSkip(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.CheckSkip");

	ABP_S3GamemodeBase_C_CheckSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.SpawnDefaultPawnFor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StartSpot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ABP_S3GamemodeBase_C::SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.SpawnDefaultPawnFor");

	ABP_S3GamemodeBase_C_SpawnDefaultPawnFor_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3GamemodeBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.UserConstructionScript");

	ABP_S3GamemodeBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3GamemodeBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.ReceiveBeginPlay");

	ABP_S3GamemodeBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.ExecuteUbergraph_BP_S3GamemodeBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3GamemodeBase_C::ExecuteUbergraph_BP_S3GamemodeBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.ExecuteUbergraph_BP_S3GamemodeBase");

	ABP_S3GamemodeBase_C_ExecuteUbergraph_BP_S3GamemodeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
