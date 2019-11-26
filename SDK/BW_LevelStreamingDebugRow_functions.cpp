
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_LevelStreamingDebugRow_C::Get_LoadTimeWidget_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LoadTimeWidget_Text");

	UBW_LevelStreamingDebugRow_C_Get_LoadTimeWidget_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_VisibilityTime_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_LevelStreamingDebugRow_C::Get_VisibilityTime_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_VisibilityTime_Text");

	UBW_LevelStreamingDebugRow_C_Get_VisibilityTime_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LevelName_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
