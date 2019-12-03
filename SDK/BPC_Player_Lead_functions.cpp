
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

// Function BPC_Player_Lead.BPC_Player_Lead_C.GetFollower
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3Character*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AS3Character* UBPC_Player_Lead_C::STATIC_GetFollower()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.GetFollower");

	UBPC_Player_Lead_C_GetFollower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.UnpairFollower
// (Event, NetServer, NetClient, Const)

void UBPC_Player_Lead_C::UnpairFollower()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.UnpairFollower");

	UBPC_Player_Lead_C_UnpairFollower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.PairFollower
// (Net, Exec, Native, NetResponse, Static, NetMulticast, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AS3Character*            Follower                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::STATIC_PairFollower(class AS3Character* Follower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.PairFollower");

	UBPC_Player_Lead_C_PairFollower_Params params;
	params.Follower = Follower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.AutoFollowSpline
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AS3SplineMoveActor*      SplineActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::AutoFollowSpline(class AS3SplineMoveActor* SplineActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.AutoFollowSpline");

	UBPC_Player_Lead_C_AutoFollowSpline_Params params;
	params.SplineActor = SplineActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.GetSpline
// (Net, NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// class AS3SplineMoveActor*      SplineActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::STATIC_GetSpline(class AS3SplineMoveActor** SplineActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.GetSpline");

	UBPC_Player_Lead_C_GetSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplineActor != nullptr)
		*SplineActor = params.SplineActor;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.AllowBackwardsFollow
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::STATIC_AllowBackwardsFollow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.AllowBackwardsFollow");

	UBPC_Player_Lead_C_AllowBackwardsFollow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.GetMaxFollowSpeed
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// float                          OriginalMax                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WantsToMatch                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Matched                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::GetMaxFollowSpeed(float OriginalMax, bool WantsToMatch, float* Matched)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.GetMaxFollowSpeed");

	UBPC_Player_Lead_C_GetMaxFollowSpeed_Params params;
	params.OriginalMax = OriginalMax;
	params.WantsToMatch = WantsToMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Matched != nullptr)
		*Matched = params.Matched;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.SetAutoMove
// (Net, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::STATIC_SetAutoMove(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.SetAutoMove");

	UBPC_Player_Lead_C_SetAutoMove_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.PairLeader
// (NetReliable, Event, NetServer, NetClient, Const)
// Parameters:
// class AS3SplineMoveActor*      FollowSpline                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::PairLeader(class AS3SplineMoveActor* FollowSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.PairLeader");

	UBPC_Player_Lead_C_PairLeader_Params params;
	params.FollowSpline = FollowSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.UnpairLeader
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_Player_Lead_C::STATIC_UnpairLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.UnpairLeader");

	UBPC_Player_Lead_C_UnpairLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.DeleteInvalidRefs
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, Const)

void UBPC_Player_Lead_C::DeleteInvalidRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.DeleteInvalidRefs");

	UBPC_Player_Lead_C_DeleteInvalidRefs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.GetMatchedSpeed
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          OriginalSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Matched                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::STATIC_GetMatchedSpeed(float OriginalSpeed, float* Matched)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.GetMatchedSpeed");

	UBPC_Player_Lead_C_GetMatchedSpeed_Params params;
	params.OriginalSpeed = OriginalSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Matched != nullptr)
		*Matched = params.Matched;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.CanBeFollowed
// (NetReliable, Native, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// bool                           bFollowable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::CanBeFollowed(bool* bFollowable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.CanBeFollowed");

	UBPC_Player_Lead_C_CanBeFollowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFollowable != nullptr)
		*bFollowable = params.bFollowable;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.ValidateData
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_Player_Lead_C::STATIC_ValidateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.ValidateData");

	UBPC_Player_Lead_C_ValidateData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.ReceiveBeginPlay
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_Player_Lead_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.ReceiveBeginPlay");

	UBPC_Player_Lead_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.ReceiveTick
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.ReceiveTick");

	UBPC_Player_Lead_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.Input_Move
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_Player_Lead_C::STATIC_Input_Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.Input_Move");

	UBPC_Player_Lead_C_Input_Move_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Player_Lead.BPC_Player_Lead_C.ExecuteUbergraph_BPC_Player_Lead
// (NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Player_Lead_C::ExecuteUbergraph_BPC_Player_Lead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Player_Lead.BPC_Player_Lead_C.ExecuteUbergraph_BPC_Player_Lead");

	UBPC_Player_Lead_C_ExecuteUbergraph_BPC_Player_Lead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
