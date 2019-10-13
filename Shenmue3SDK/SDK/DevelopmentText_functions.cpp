
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

// Function DevelopmentText.DevelopmentText_C.UpdateDevelopText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDevelopmentText_C::UpdateDevelopText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.UpdateDevelopText");

	UDevelopmentText_C_UpdateDevelopText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DevelopmentText.DevelopmentText_C.UpdateGameTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDevelopmentText_C::UpdateGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.UpdateGameTime");

	UDevelopmentText_C_UpdateGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DevelopmentText.DevelopmentText_C.UpdateACName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDevelopmentText_C::UpdateACName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.UpdateACName");

	UDevelopmentText_C_UpdateACName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DevelopmentText.DevelopmentText_C.GetDevelopText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDevelopmentText_C::GetDevelopText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.GetDevelopText");

	UDevelopmentText_C_GetDevelopText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DevelopmentText.DevelopmentText_C.GetDevelopTextVisibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UDevelopmentText_C::GetDevelopTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.GetDevelopTextVisibility");

	UDevelopmentText_C_GetDevelopTextVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DevelopmentText.DevelopmentText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDevelopmentText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.Construct");

	UDevelopmentText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DevelopmentText.DevelopmentText_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDevelopmentText_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.Tick");

	UDevelopmentText_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DevelopmentText.DevelopmentText_C.ExecuteUbergraph_DevelopmentText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDevelopmentText_C::ExecuteUbergraph_DevelopmentText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.ExecuteUbergraph_DevelopmentText");

	UDevelopmentText_C_ExecuteUbergraph_DevelopmentText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
