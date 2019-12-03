
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

// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LoadTimeWidget_Text
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_LevelStreamingDebugRow_C::STATIC_Get_LoadTimeWidget_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LoadTimeWidget_Text");

	UBW_LevelStreamingDebugRow_C_Get_LoadTimeWidget_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_VisibilityTime_Text
// (NetReliable, Exec, NetResponse, Static, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_LevelStreamingDebugRow_C::STATIC_Get_VisibilityTime_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_VisibilityTime_Text");

	UBW_LevelStreamingDebugRow_C_Get_VisibilityTime_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LevelName_Text
// (Net, NetReliable, Event, NetResponse, Public, NetServer)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_LevelStreamingDebugRow_C::Get_LevelName_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LevelName_Text");

	UBW_LevelStreamingDebugRow_C_Get_LevelName_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LevelName_ColorAndOpacity
// (Net, NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBW_LevelStreamingDebugRow_C::Get_LevelName_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LevelName_ColorAndOpacity");

	UBW_LevelStreamingDebugRow_C_Get_LevelName_ColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
