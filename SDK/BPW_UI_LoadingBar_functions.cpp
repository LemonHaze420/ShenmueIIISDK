
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

// Function BPW_UI_LoadingBar.BPW_UI_LoadingBar_C.Construct
// (NetReliable, Event, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void UBPW_UI_LoadingBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_LoadingBar.BPW_UI_LoadingBar_C.Construct");

	UBPW_UI_LoadingBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_LoadingBar.BPW_UI_LoadingBar_C.Tick
// (NetRequest, Exec, Native, Event, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_LoadingBar_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_LoadingBar.BPW_UI_LoadingBar_C.Tick");

	UBPW_UI_LoadingBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_LoadingBar.BPW_UI_LoadingBar_C.ExecuteUbergraph_BPW_UI_LoadingBar
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_LoadingBar_C::STATIC_ExecuteUbergraph_BPW_UI_LoadingBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_LoadingBar.BPW_UI_LoadingBar_C.ExecuteUbergraph_BPW_UI_LoadingBar");

	UBPW_UI_LoadingBar_C_ExecuteUbergraph_BPW_UI_LoadingBar_Params params;
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
