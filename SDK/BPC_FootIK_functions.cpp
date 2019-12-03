
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

// Function BPC_FootIK.BPC_FootIK_C.InterpSinkingDistance
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SinkingDistance                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIK_C::STATIC_InterpSinkingDistance(float Target, float* SinkingDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.InterpSinkingDistance");

	UBPC_FootIK_C_InterpSinkingDistance_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SinkingDistance != nullptr)
		*SinkingDistance = params.SinkingDistance;
}


// Function BPC_FootIK.BPC_FootIK_C.UpdateRightFootRotaion
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           HitLeft                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_FootIK_C::UpdateRightFootRotaion(bool HitLeft, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.UpdateRightFootRotaion");

	UBPC_FootIK_C_UpdateRightFootRotaion_Params params;
	params.HitLeft = HitLeft;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIK.BPC_FootIK_C.UpdateLeftFootRotaion
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           HitLeft                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_FootIK_C::UpdateLeftFootRotaion(bool HitLeft, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.UpdateLeftFootRotaion");

	UBPC_FootIK_C_UpdateLeftFootRotaion_Params params;
	params.HitLeft = HitLeft;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIK.BPC_FootIK_C.GetFootRotaion
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LeftFootRotaionX               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LeftFootRotaionY               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightFootRotaionX              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightFootRotaionY              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIK_C::GetFootRotaion(float* LeftFootRotaionX, float* LeftFootRotaionY, float* RightFootRotaionX, float* RightFootRotaionY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.GetFootRotaion");

	UBPC_FootIK_C_GetFootRotaion_Params params;

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


// Function BPC_FootIK.BPC_FootIK_C.TryGetSinkingDistance
// (NetReliable, Exec, Native, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FName                   FootSocketName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartLocationZ                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndLocationZ                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SinkingDistance                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, IsPlainOldData)

void UBPC_FootIK_C::STATIC_TryGetSinkingDistance(const struct FName& FootSocketName, float StartLocationZ, float EndLocationZ, bool* bHit, float* SinkingDistance, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.TryGetSinkingDistance");

	UBPC_FootIK_C_TryGetSinkingDistance_Params params;
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


// Function BPC_FootIK.BPC_FootIK_C.TraceFromLocation
// (Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bHit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, IsPlainOldData)

void UBPC_FootIK_C::TraceFromLocation(const struct FVector& StartLocation, const struct FVector& EndLocation, bool* bHit, struct FVector* Location, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.TraceFromLocation");

	UBPC_FootIK_C_TraceFromLocation_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHit != nullptr)
		*bHit = params.bHit;
	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;
}


// Function BPC_FootIK.BPC_FootIK_C.TryGetFootSinkingOffset
// (Exec, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LocationX                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartLocationZ                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndLocationZ                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SinkingOffsetZ                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIK_C::TryGetFootSinkingOffset(float LocationX, float LocationY, float StartLocationZ, float EndLocationZ, bool* bHit, float* SinkingOffsetZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.TryGetFootSinkingOffset");

	UBPC_FootIK_C_TryGetFootSinkingOffset_Params params;
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


// Function BPC_FootIK.BPC_FootIK_C.UpdateActorLocalOffsetZ
// (Net, NetRequest, Native, NetResponse, NetMulticast, Private, HasOutParms, Const)
// Parameters:
// bool                           bHitFootLeft                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHitFootRight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIK_C::UpdateActorLocalOffsetZ(bool* bHitFootLeft, bool* bHitFootRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.UpdateActorLocalOffsetZ");

	UBPC_FootIK_C_UpdateActorLocalOffsetZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHitFootLeft != nullptr)
		*bHitFootLeft = params.bHitFootLeft;
	if (bHitFootRight != nullptr)
		*bHitFootRight = params.bHitFootRight;
}


// Function BPC_FootIK.BPC_FootIK_C.UpdateFootIKOffset
// (Net, NetReliable, Static, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHitFootLeft                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHitFootRight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIK_C::STATIC_UpdateFootIKOffset(bool bHitFootLeft, bool bHitFootRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.UpdateFootIKOffset");

	UBPC_FootIK_C_UpdateFootIKOffset_Params params;
	params.bHitFootLeft = bHitFootLeft;
	params.bHitFootRight = bHitFootRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIK.BPC_FootIK_C.GetFootOffset
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          LeftFootOffsetZ                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RightFootOffsetZ               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIK_C::STATIC_GetFootOffset(float* LeftFootOffsetZ, float* RightFootOffsetZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.GetFootOffset");

	UBPC_FootIK_C_GetFootOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftFootOffsetZ != nullptr)
		*LeftFootOffsetZ = params.LeftFootOffsetZ;
	if (RightFootOffsetZ != nullptr)
		*RightFootOffsetZ = params.RightFootOffsetZ;
}


// Function BPC_FootIK.BPC_FootIK_C.Update
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_FootIK_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.Update");

	UBPC_FootIK_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIK.BPC_FootIK_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_FootIK_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.ReceiveBeginPlay");

	UBPC_FootIK_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIK.BPC_FootIK_C.ExecuteUbergraph_BPC_FootIK
// (Net, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIK_C::STATIC_ExecuteUbergraph_BPC_FootIK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.ExecuteUbergraph_BPC_FootIK");

	UBPC_FootIK_C_ExecuteUbergraph_BPC_FootIK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FootIK.BPC_FootIK_C.OnFootIanding__DelegateSignature
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// float                          SinkingDistance_Z              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FootIK_C::STATIC_OnFootIanding__DelegateSignature(float SinkingDistance_Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FootIK.BPC_FootIK_C.OnFootIanding__DelegateSignature");

	UBPC_FootIK_C_OnFootIanding__DelegateSignature_Params params;
	params.SinkingDistance_Z = SinkingDistance_Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
