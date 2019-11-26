
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CaptureCameraAndLight_C::GameDataUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.GameDataUpdate");

	ABP_CaptureCameraAndLight_C_GameDataUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.UpdateLightPosAndRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CaptureCameraAndLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.UserConstructionScript");

	ABP_CaptureCameraAndLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CaptureCameraAndLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ReceiveBeginPlay");

	ABP_CaptureCameraAndLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureCameraAndLight_C::Update(int ItemNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.Update");

	ABP_CaptureCameraAndLight_C_Update_Params params;
	params.ItemNo = ItemNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ExecuteUbergraph_BP_CaptureCameraAndLight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureCameraAndLight_C::ExecuteUbergraph_BP_CaptureCameraAndLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureCameraAndLight.BP_CaptureCameraAndLight_C.ExecuteUbergraph_BP_CaptureCameraAndLight");

	ABP_CaptureCameraAndLight_C_ExecuteUbergraph_BP_CaptureCameraAndLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
