
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

// Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.Construct
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBW_LevelStreamingDebug_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.Construct");

	UBW_LevelStreamingDebug_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.Tick
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_LevelStreamingDebug_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.Tick");

	UBW_LevelStreamingDebug_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.UpdateLevelData
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBW_LevelStreamingDebug_C::UpdateLevelData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.UpdateLevelData");

	UBW_LevelStreamingDebug_C_UpdateLevelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.ExecuteUbergraph_BW_LevelStreamingDebug
// (NetReliable, NetRequest, Event, Static, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_LevelStreamingDebug_C::STATIC_ExecuteUbergraph_BW_LevelStreamingDebug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.ExecuteUbergraph_BW_LevelStreamingDebug");

	UBW_LevelStreamingDebug_C_ExecuteUbergraph_BW_LevelStreamingDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
