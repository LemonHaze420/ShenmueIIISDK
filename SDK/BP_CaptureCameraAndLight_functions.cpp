
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

// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.Init
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            ItemNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SaveData_ViewItem_C* GameData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureCameraAndLight_C::Init(int ItemNumber, class UBP_SaveData_ViewItem_C* GameData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.Init");

	ABP_CaptureCameraAndLight_C_Init_Params params;
	params.ItemNumber = ItemNumber;
	params.GameData = GameData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.GameDataUpdate
// (Net, NetRequest, Native, Static, NetMulticast, Private, Protected, Delegate, NetServer, Const)

void ABP_CaptureCameraAndLight_C::STATIC_GameDataUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.GameDataUpdate");

	ABP_CaptureCameraAndLight_C_GameDataUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.UpdateLightPosAndRot
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          PosX                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosY                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          posZ                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LightNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureCameraAndLight_C::UpdateLightPosAndRot(float PosX, float PosY, float posZ, int LightNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.UpdateLightPosAndRot");

	ABP_CaptureCameraAndLight_C_UpdateLightPosAndRot_Params params;
	params.PosX = PosX;
	params.PosY = PosY;
	params.posZ = posZ;
	params.LightNumber = LightNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CaptureCameraAndLight_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.UserConstructionScript");

	ABP_CaptureCameraAndLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ReceiveBeginPlay
// (NetRequest, Exec, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_CaptureCameraAndLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ReceiveBeginPlay");

	ABP_CaptureCameraAndLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.Update
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            ItemNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureCameraAndLight_C::STATIC_Update(int ItemNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.Update");

	ABP_CaptureCameraAndLight_C_Update_Params params;
	params.ItemNo = ItemNo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ExecuteUbergraph_BP_CaptureCameraAndLight
// (NetReliable, Native, Static, NetMulticast, Public, Private, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureCameraAndLight_C::STATIC_ExecuteUbergraph_BP_CaptureCameraAndLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ExecuteUbergraph_BP_CaptureCameraAndLight");

	ABP_CaptureCameraAndLight_C_ExecuteUbergraph_BP_CaptureCameraAndLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
