
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

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetNextAvailableWaitPointIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartSearch                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ANPC_SplineMoveActor_C::GetNextAvailableWaitPointIndex(int StartSearch)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetNextAvailableWaitPointIndex");

	ANPC_SplineMoveActor_C_GetNextAvailableWaitPointIndex_Params params;
	params.StartSearch = StartSearch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetFirstAvailableWaitPointIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ANPC_SplineMoveActor_C::GetFirstAvailableWaitPointIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetFirstAvailableWaitPointIndex");

	ANPC_SplineMoveActor_C_GetFirstAvailableWaitPointIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetStartLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ANPC_SplineMoveActor_C::GetStartLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetStartLocationAndRotation");

	ANPC_SplineMoveActor_C_GetStartLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.TryStartWaitPointEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_SplineMoveActor_C::TryStartWaitPointEvent(int Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.TryStartWaitPointEvent");

	ANPC_SplineMoveActor_C_TryStartWaitPointEvent_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetWaitPointActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_NPCLeadWaitPointEvent_C* Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_SplineMoveActor_C::GetWaitPointActor(int Index, class ABP_NPCLeadWaitPointEvent_C** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetWaitPointActor");

	ANPC_SplineMoveActor_C_GetWaitPointActor_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetWidthAtSplineDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_SplineMoveActor_C::GetWidthAtSplineDistance(float Distance, float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetWidthAtSplineDistance");

	ANPC_SplineMoveActor_C_GetWidthAtSplineDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetWaitPointSplineDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Next                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_SplineMoveActor_C::GetWaitPointSplineDistance(int PointIndex, float* Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetWaitPointSplineDistance");

	ANPC_SplineMoveActor_C_GetWaitPointSplineDistance_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Next != nullptr)
		*Next = params.Next;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetLocationAtDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InDistance                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)

void ANPC_SplineMoveActor_C::GetLocationAtDistance(float InDistance, struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetLocationAtDistance");

	ANPC_SplineMoveActor_C_GetLocationAtDistance_Params params;
	params.InDistance = InDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.FindDistanceClosestToLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          OutDistance                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_SplineMoveActor_C::FindDistanceClosestToLocation(const struct FVector& InLocation, float* OutDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.FindDistanceClosestToLocation");

	ANPC_SplineMoveActor_C_FindDistanceClosestToLocation_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDistance != nullptr)
		*OutDistance = params.OutDistance;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetNearLength
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NearPos                        (Parm, OutParm, IsPlainOldData)
// float                          NearLength                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_SplineMoveActor_C::GetNearLength(const struct FVector& pos, struct FVector* NearPos, float* NearLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetNearLength");

	ANPC_SplineMoveActor_C_GetNearLength_Params params;
	params.pos = pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearPos != nullptr)
		*NearPos = params.NearPos;
	if (NearLength != nullptr)
		*NearLength = params.NearLength;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.InitSplinePoint
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_SplineMoveActor_C::InitSplinePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.InitSplinePoint");

	ANPC_SplineMoveActor_C_InitSplinePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetCurrentLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NowLength                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// float                          MaxLength                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RotZ                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_SplineMoveActor_C::GetCurrentLocationAndRotation(float NowLength, struct FVector* Location, float* MaxLength, float* RotZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetCurrentLocationAndRotation");

	ANPC_SplineMoveActor_C_GetCurrentLocationAndRotation_Params params;
	params.NowLength = NowLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (MaxLength != nullptr)
		*MaxLength = params.MaxLength;
	if (RotZ != nullptr)
		*RotZ = params.RotZ;
}


// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANPC_SplineMoveActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.UserConstructionScript");

	ANPC_SplineMoveActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
