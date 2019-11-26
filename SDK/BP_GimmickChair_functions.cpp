
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

// Function BP_GimmickChair.BP_GimmickChair_C.GetChairForm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EChairForm                     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EChairForm ABP_GimmickChair_C::GetChairForm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.GetChairForm");

	ABP_GimmickChair_C_GetChairForm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GimmickChair.BP_GimmickChair_C.CalcStartRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                GoalRotate                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_GimmickChair_C::CalcStartRotation(int Index, const struct FRotator& GoalRotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.CalcStartRotation");

	ABP_GimmickChair_C_CalcStartRotation_Params params;
	params.Index = Index;
	params.GoalRotate = GoalRotate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GimmickChair.BP_GimmickChair_C.GetNearStartPointDist
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            poiIdx                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            stIdx                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_GimmickChair_C::GetNearStartPointDist(const struct FTransform& Point, int* poiIdx, int* stIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.GetNearStartPointDist");

	ABP_GimmickChair_C_GetNearStartPointDist_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (poiIdx != nullptr)
		*poiIdx = params.poiIdx;
	if (stIdx != nullptr)
		*stIdx = params.stIdx;

	return params.ReturnValue;
}


// Function BP_GimmickChair.BP_GimmickChair_C.CalcZLocation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GimmickChair_C::CalcZLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.CalcZLocation");

	ABP_GimmickChair_C_CalcZLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.IsCharacterSitting
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3Character*            Character                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_GimmickChair_C::IsCharacterSitting(class AS3Character* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.IsCharacterSitting");

	ABP_GimmickChair_C_IsCharacterSitting_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GimmickChair.BP_GimmickChair_C.ModeChangeRequest
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS3ChairResultStruct    Result                         (Parm, OutParm)
// EChairOccupied                 Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character*            Character                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            poiIdx                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            stIdx                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          moveDist                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_GimmickChair_C::ModeChangeRequest(EChairOccupied Mode, class AS3Character* Character, const struct FVector& pos, int poiIdx, int stIdx, float moveDist, struct FS3ChairResultStruct* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.ModeChangeRequest");

	ABP_GimmickChair_C_ModeChangeRequest_Params params;
	params.Mode = Mode;
	params.Character = Character;
	params.pos = pos;
	params.poiIdx = poiIdx;
	params.stIdx = stIdx;
	params.moveDist = moveDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function BP_GimmickChair.BP_GimmickChair_C.CreatePointData
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FS3ChairPointStruct     S3ChairPointStruct             (Parm, OutParm)

void ABP_GimmickChair_C::CreatePointData(const struct FVector& Point, struct FS3ChairPointStruct* S3ChairPointStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.CreatePointData");

	ABP_GimmickChair_C_CreatePointData_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (S3ChairPointStruct != nullptr)
		*S3ChairPointStruct = params.S3ChairPointStruct;
}


// Function BP_GimmickChair.BP_GimmickChair_C.GetOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EChairOccupied                 Occupied                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::GetOccupied(int Index, EChairOccupied* Occupied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.GetOccupied");

	ABP_GimmickChair_C_GetOccupied_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Occupied != nullptr)
		*Occupied = params.Occupied;
}


// Function BP_GimmickChair.BP_GimmickChair_C.SetOccupied
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EChairOccupied                 Occupied                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character*            Target_Chara                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::SetOccupied(int Index, const struct FName& CharaName, EChairOccupied Occupied, class AS3Character* Target_Chara)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.SetOccupied");

	ABP_GimmickChair_C_SetOccupied_Params params;
	params.Index = Index;
	params.CharaName = CharaName;
	params.Occupied = Occupied;
	params.Target_Chara = Target_Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.Reserve
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character*            Target_Chara                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::Reserve(const struct FVector& Location, const struct FName& CharaName, class AS3Character* Target_Chara, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.Reserve");

	ABP_GimmickChair_C_Reserve_Params params;
	params.Location = Location;
	params.CharaName = CharaName;
	params.Target_Chara = Target_Chara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_GimmickChair.BP_GimmickChair_C.SitDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3Character_C*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::SitDown(class ABP_S3Character_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.SitDown");

	ABP_GimmickChair_C_SitDown_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.CalcChairWidth
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GimmickChair_C::CalcChairWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.CalcChairWidth");

	ABP_GimmickChair_C_CalcChairWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.CalcPointOffset
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void ABP_GimmickChair_C::CalcPointOffset(int Index, struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.CalcPointOffset");

	ABP_GimmickChair_C_CalcPointOffset_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function BP_GimmickChair.BP_GimmickChair_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GimmickChair_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.UserConstructionScript");

	ABP_GimmickChair_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GimmickChair_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.ReceiveBeginPlay");

	ABP_GimmickChair_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.ReceiveTick");

	ABP_GimmickChair_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.ExecuteUbergraph_BP_GimmickChair
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::ExecuteUbergraph_BP_GimmickChair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.ExecuteUbergraph_BP_GimmickChair");

	ABP_GimmickChair_C_ExecuteUbergraph_BP_GimmickChair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
