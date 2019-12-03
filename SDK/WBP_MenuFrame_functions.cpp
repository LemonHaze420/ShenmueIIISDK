
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

// Function WBP_MenuFrame.WBP_MenuFrame_C.InitBGTint
// (NetRequest, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_MenuFrame_C::InitBGTint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrame.WBP_MenuFrame_C.InitBGTint");

	UWBP_MenuFrame_C_InitBGTint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuFrame.WBP_MenuFrame_C.PreConstruct
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuFrame_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrame.WBP_MenuFrame_C.PreConstruct");

	UWBP_MenuFrame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuFrame.WBP_MenuFrame_C.ExecuteUbergraph_WBP_MenuFrame
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuFrame_C::STATIC_ExecuteUbergraph_WBP_MenuFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrame.WBP_MenuFrame_C.ExecuteUbergraph_WBP_MenuFrame");

	UWBP_MenuFrame_C_ExecuteUbergraph_WBP_MenuFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
