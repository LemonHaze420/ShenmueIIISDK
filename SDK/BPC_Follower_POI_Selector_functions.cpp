
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

// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.InRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Follower_POI_C*      POI                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInRange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Follower_POI_Selector_C::InRange(class ABP_Follower_POI_C* POI, bool* bInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.InRange");

	UBPC_Follower_POI_Selector_C_InRange_Params params;
	params.POI = POI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInRange != nullptr)
		*bInRange = params.bInRange;
}


// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.ScorePOI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Follower_POI_C*      POI                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TestLeaderLoS                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Follower_POI_Selector_C::ScorePOI(class ABP_Follower_POI_C* POI, bool TestLeaderLoS, float* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.ScorePOI");

	UBPC_Follower_POI_Selector_C_ScorePOI_Params params;
	params.POI = POI;
	params.TestLeaderLoS = TestLeaderLoS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.IsNavStraightLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3Character*            Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Follower_POI_C*      POI                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsStraight                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Follower_POI_Selector_C::IsNavStraightLine(class AS3Character* Character, class ABP_Follower_POI_C* POI, bool* bIsStraight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.IsNavStraightLine");

	UBPC_Follower_POI_Selector_C_IsNavStraightLine_Params params;
	params.Character = Character;
	params.POI = POI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsStraight != nullptr)
		*bIsStraight = params.bIsStraight;
}


// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.UpdateHistory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Follower_POI_C*      Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Follower_POI_Selector_C::UpdateHistory(class ABP_Follower_POI_C* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.UpdateHistory");

	UBPC_Follower_POI_Selector_C_UpdateHistory_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.SearchForPOI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIgnoreTimer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestLeaderLOS                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Follower_POI_C*      POI                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bRanQuery                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_Follower_POI_Selector_C::SearchForPOI(bool bIgnoreTimer, bool bTestLeaderLOS, class ABP_Follower_POI_C** POI, bool* bRanQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.SearchForPOI");

	UBPC_Follower_POI_Selector_C_SearchForPOI_Params params;
	params.bIgnoreTimer = bIgnoreTimer;
	params.bTestLeaderLOS = bTestLeaderLOS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (POI != nullptr)
		*POI = params.POI;
	if (bRanQuery != nullptr)
		*bRanQuery = params.bRanQuery;
}


// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Follower_POI_Selector_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.ReceiveTick");

	UBPC_Follower_POI_Selector_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.ExecuteUbergraph_BPC_Follower_POI_Selector
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_Follower_POI_Selector_C::ExecuteUbergraph_BPC_Follower_POI_Selector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C.ExecuteUbergraph_BPC_Follower_POI_Selector");

	UBPC_Follower_POI_Selector_C_ExecuteUbergraph_BPC_Follower_POI_Selector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
