
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

// Function SL_Hakkason_Search_Yo.SL_Hakkason_Search_Yo_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void ASL_Hakkason_Search_Yo_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Search_Yo.SL_Hakkason_Search_Yo_C.ReceiveBeginPlay");

	ASL_Hakkason_Search_Yo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Search_Yo.SL_Hakkason_Search_Yo_C.Start_SearchYo
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void ASL_Hakkason_Search_Yo_C::Start_SearchYo()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Search_Yo.SL_Hakkason_Search_Yo_C.Start_SearchYo");

	ASL_Hakkason_Search_Yo_C_Start_SearchYo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Search_Yo.SL_Hakkason_Search_Yo_C.ExecuteUbergraph_SL_Hakkason_Search_Yo
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, HasDefaults, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Search_Yo_C::STATIC_ExecuteUbergraph_SL_Hakkason_Search_Yo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Search_Yo.SL_Hakkason_Search_Yo_C.ExecuteUbergraph_SL_Hakkason_Search_Yo");

	ASL_Hakkason_Search_Yo_C_ExecuteUbergraph_SL_Hakkason_Search_Yo_Params params;
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
