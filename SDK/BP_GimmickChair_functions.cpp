
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
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// EChairForm                     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EChairForm ABP_GimmickChair_C::GetChairForm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.GetChairForm");

	ABP_GimmickChair_C_GetChairForm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GimmickChair.BP_GimmickChair_C.CalcStartRotation
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, NetValidate)
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
// (NetReliable, NetResponse, NetMulticast, Private, Delegate, DLLImport, Const)
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
// (Private, Delegate, BlueprintPure, NetValidate)

void ABP_GimmickChair_C::CalcZLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.CalcZLocation");

	ABP_GimmickChair_C_CalcZLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.IsCharacterSitting
// (Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AS3Character*            Character                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_GimmickChair_C::IsCharacterSitting(class AS3Character* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.IsCharacterSitting");

	ABP_GimmickChair_C_IsCharacterSitting_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GimmickChair.BP_GimmickChair_C.ModeChangeRequest
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, NetValidate)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function BP_GimmickChair.BP_GimmickChair_C.CreatePointData
// (NetRequest, MulticastDelegate, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
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
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EChairOccupied                 Occupied                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::GetOccupied(int Index, EChairOccupied* Occupied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.GetOccupied");

	ABP_GimmickChair_C_GetOccupied_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Occupied != nullptr)
		*Occupied = params.Occupied;
}


// Function BP_GimmickChair.BP_GimmickChair_C.SetOccupied
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EChairOccupied                 Occupied                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character*            Target_Chara                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::STATIC_SetOccupied(int Index, const struct FName& CharaName, EChairOccupied Occupied, class AS3Character* Target_Chara)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.SetOccupied");

	ABP_GimmickChair_C_SetOccupied_Params params;
	params.Index = Index;
	params.CharaName = CharaName;
	params.Occupied = Occupied;
	params.Target_Chara = Target_Chara;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.Reserve
// (Net, NetMulticast, Public, Private, Protected, HasDefaults, BlueprintEvent, BlueprintPure, NetValidate)
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
// (NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// class ABP_S3Character_C*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::STATIC_SitDown(class ABP_S3Character_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.SitDown");

	ABP_GimmickChair_C_SitDown_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.CalcChairWidth
// (NetRequest, Event, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_GimmickChair_C::CalcChairWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.CalcChairWidth");

	ABP_GimmickChair_C_CalcChairWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.CalcPointOffset
// (Native, Private, Delegate, BlueprintPure, NetValidate)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void ABP_GimmickChair_C::CalcPointOffset(int Index, struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.CalcPointOffset");

	ABP_GimmickChair_C_CalcPointOffset_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function BP_GimmickChair.BP_GimmickChair_C.UserConstructionScript
// (Net, NetRequest, Exec, Event, NetMulticast, Private, NetServer, HasDefaults, BlueprintPure, NetValidate)

void ABP_GimmickChair_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.UserConstructionScript");

	ABP_GimmickChair_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_GimmickChair_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.ReceiveBeginPlay");

	ABP_GimmickChair_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.ReceiveTick
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GimmickChair_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.ReceiveTick");

	ABP_GimmickChair_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GimmickChair.BP_GimmickChair_C.ExecuteUbergraph_BP_GimmickChair
// (Exec, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
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
