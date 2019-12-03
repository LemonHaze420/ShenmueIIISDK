
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

// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayUnbeliAnim
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_Sunken_C::STATIC_PlayUnbeliAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayUnbeliAnim");

	UWBP_MiniGame_Sunken_C_PlayUnbeliAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayExcellentAnim
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_Sunken_C::STATIC_PlayExcellentAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayExcellentAnim");

	UWBP_MiniGame_Sunken_C_PlayExcellentAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.SetLocalizeText
// (Native, Static, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ExcellentText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   UnbelievableText               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MiniGame_Sunken_C::STATIC_SetLocalizeText(const struct FText& ExcellentText, const struct FText& UnbelievableText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.SetLocalizeText");

	UWBP_MiniGame_Sunken_C_SetLocalizeText_Params params;
	params.ExcellentText = ExcellentText;
	params.UnbelievableText = UnbelievableText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Construct
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UWBP_MiniGame_Sunken_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Construct");

	UWBP_MiniGame_Sunken_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Tick
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Sunken_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Tick");

	UWBP_MiniGame_Sunken_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.ExecuteUbergraph_WBP_MiniGame_Sunken
// (NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Sunken_C::STATIC_ExecuteUbergraph_WBP_MiniGame_Sunken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.ExecuteUbergraph_WBP_MiniGame_Sunken");

	UWBP_MiniGame_Sunken_C_ExecuteUbergraph_WBP_MiniGame_Sunken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
