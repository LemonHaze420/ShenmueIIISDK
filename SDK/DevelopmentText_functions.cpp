
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

// Function DevelopmentText.DevelopmentText_C.UpdateDevelopText
// (Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UDevelopmentText_C::UpdateDevelopText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.UpdateDevelopText");

	UDevelopmentText_C_UpdateDevelopText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DevelopmentText.DevelopmentText_C.UpdateGameTime
// (NetRequest, Exec, Native, NetMulticast, Protected, NetServer, NetClient, Const)

void UDevelopmentText_C::UpdateGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.UpdateGameTime");

	UDevelopmentText_C_UpdateGameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DevelopmentText.DevelopmentText_C.UpdateACName
// (Exec, Event, Static, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)

void UDevelopmentText_C::STATIC_UpdateACName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.UpdateACName");

	UDevelopmentText_C_UpdateACName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DevelopmentText.DevelopmentText_C.GetDevelopText
// (NetReliable, Exec, Native, Event, NetResponse, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDevelopmentText_C::GetDevelopText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.GetDevelopText");

	UDevelopmentText_C_GetDevelopText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DevelopmentText.DevelopmentText_C.GetDevelopTextVisibility
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UDevelopmentText_C::STATIC_GetDevelopTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.GetDevelopTextVisibility");

	UDevelopmentText_C_GetDevelopTextVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DevelopmentText.DevelopmentText_C.Construct
// (NetReliable, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void UDevelopmentText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.Construct");

	UDevelopmentText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DevelopmentText.DevelopmentText_C.Tick
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDevelopmentText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
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
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDevelopmentText_C::STATIC_ExecuteUbergraph_DevelopmentText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DevelopmentText.DevelopmentText_C.ExecuteUbergraph_DevelopmentText");

	UDevelopmentText_C_ExecuteUbergraph_DevelopmentText_Params params;
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
