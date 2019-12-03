
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

// Function BPC_FootIKNPC.BPC_FootIKNPC_C.GetSinkingDistance
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SinkingDistance                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIKNPC_C::STATIC_GetSinkingDistance(float* SinkingDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.GetSinkingDistance");

	UBPC_FootIKNPC_C_GetSinkingDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SinkingDistance != nullptr)
		*SinkingDistance = params.SinkingDistance;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.InterpSinkingDistance
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SinkingDistance                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIKNPC_C::InterpSinkingDistance(float Target, float* SinkingDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.InterpSinkingDistance");

	UBPC_FootIKNPC_C_InterpSinkingDistance_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SinkingDistance != nullptr)
		*SinkingDistance = params.SinkingDistance;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.UpdateRightFootRotaion
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           HitLeft                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_FootIKNPC_C::STATIC_UpdateRightFootRotaion(bool HitLeft, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.UpdateRightFootRotaion");

	UBPC_FootIKNPC_C_UpdateRightFootRotaion_Params params;
	params.HitLeft = HitLeft;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.UpdateLeftFootRotaion
// (NetReliable, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           HitLeft                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_FootIKNPC_C::UpdateLeftFootRotaion(bool HitLeft, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.UpdateLeftFootRotaion");

	UBPC_FootIKNPC_C_UpdateLeftFootRotaion_Params params;
	params.HitLeft = HitLeft;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.GetFootRotaion
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LeftFootRotaionX               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LeftFootRotaionY               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightFootRotaionX              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightFootRotaionY              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIKNPC_C::STATIC_GetFootRotaion(float* LeftFootRotaionX, float* LeftFootRotaionY, float* RightFootRotaionX, float* RightFootRotaionY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.GetFootRotaion");

	UBPC_FootIKNPC_C_GetFootRotaion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftFootRotaionX != nullptr)
		*LeftFootRotaionX = params.LeftFootRotaionX;
	if (LeftFootRotaionY != nullptr)
		*LeftFootRotaionY = params.LeftFootRotaionY;
	if (RightFootRotaionX != nullptr)
		*RightFootRotaionX = params.RightFootRotaionX;
	if (RightFootRotaionY != nullptr)
		*RightFootRotaionY = params.RightFootRotaionY;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.TryGetSinkingDistance
// (Exec, Native, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FName                   FootSocketName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartLocationZ                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndLocationZ                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SinkingDistance                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, IsPlainOldData)

void UBPC_FootIKNPC_C::TryGetSinkingDistance(const struct FName& FootSocketName, float StartLocationZ, float EndLocationZ, bool* bHit, float* SinkingDistance, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.TryGetSinkingDistance");

	UBPC_FootIKNPC_C_TryGetSinkingDistance_Params params;
	params.FootSocketName = FootSocketName;
	params.StartLocationZ = StartLocationZ;
	params.EndLocationZ = EndLocationZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHit != nullptr)
		*bHit = params.bHit;
	if (SinkingDistance != nullptr)
		*SinkingDistance = params.SinkingDistance;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.TraceFromLocation
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bHit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, IsPlainOldData)

void UBPC_FootIKNPC_C::TraceFromLocation(const struct FVector& StartLocation, const struct FVector& EndLocation, bool* bHit, struct FVector* Location, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.TraceFromLocation");

	UBPC_FootIKNPC_C_TraceFromLocation_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHit != nullptr)
		*bHit = params.bHit;
	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.TryGetFootSinkingOffset
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LocationX                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartLocationZ                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndLocationZ                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SinkingOffsetZ                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIKNPC_C::STATIC_TryGetFootSinkingOffset(float LocationX, float LocationY, float StartLocationZ, float EndLocationZ, bool* bHit, float* SinkingOffsetZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.TryGetFootSinkingOffset");

	UBPC_FootIKNPC_C_TryGetFootSinkingOffset_Params params;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.StartLocationZ = StartLocationZ;
	params.EndLocationZ = EndLocationZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHit != nullptr)
		*bHit = params.bHit;
	if (SinkingOffsetZ != nullptr)
		*SinkingOffsetZ = params.SinkingOffsetZ;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.UpdateMeshLocalOffsetZ
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bHitFootLeft                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHitFootRight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIKNPC_C::UpdateMeshLocalOffsetZ(bool* bHitFootLeft, bool* bHitFootRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.UpdateMeshLocalOffsetZ");

	UBPC_FootIKNPC_C_UpdateMeshLocalOffsetZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHitFootLeft != nullptr)
		*bHitFootLeft = params.bHitFootLeft;
	if (bHitFootRight != nullptr)
		*bHitFootRight = params.bHitFootRight;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.UpdateFootIKOffset
// (NetRequest, Exec, Event, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHitFootLeft                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHitFootRight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIKNPC_C::UpdateFootIKOffset(bool bHitFootLeft, bool bHitFootRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.UpdateFootIKOffset");

	UBPC_FootIKNPC_C_UpdateFootIKOffset_Params params;
	params.bHitFootLeft = bHitFootLeft;
	params.bHitFootRight = bHitFootRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.GetFootOffset
// (Net, NetReliable, Exec, Event, NetMulticast, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LeftFootOffsetZ                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightFootOffsetZ               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIKNPC_C::GetFootOffset(float* LeftFootOffsetZ, float* RightFootOffsetZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.GetFootOffset");

	UBPC_FootIKNPC_C_GetFootOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftFootOffsetZ != nullptr)
		*LeftFootOffsetZ = params.LeftFootOffsetZ;
	if (RightFootOffsetZ != nullptr)
		*RightFootOffsetZ = params.RightFootOffsetZ;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.Update
// (Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_FootIKNPC_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.Update");

	UBPC_FootIKNPC_C_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_FootIKNPC_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.ReceiveBeginPlay");

	UBPC_FootIKNPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.ExecuteUbergraph_BPC_FootIKNPC
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIKNPC_C::STATIC_ExecuteUbergraph_BPC_FootIKNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.ExecuteUbergraph_BPC_FootIKNPC");

	UBPC_FootIKNPC_C_ExecuteUbergraph_BPC_FootIKNPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIKNPC.BPC_FootIKNPC_C.OnFootIanding__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SinkingDistance_Z              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIKNPC_C::STATIC_OnFootIanding__DelegateSignature(float SinkingDistance_Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIKNPC.BPC_FootIKNPC_C.OnFootIanding__DelegateSignature");

	UBPC_FootIKNPC_C_OnFootIanding__DelegateSignature_Params params;
	params.SinkingDistance_Z = SinkingDistance_Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
