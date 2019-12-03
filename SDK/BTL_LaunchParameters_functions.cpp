
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

// Function BTL_LaunchParameters.BTL_LaunchParameters_C.GetNPCNum
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_LaunchParameters_C::STATIC_GetNPCNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_LaunchParameters.BTL_LaunchParameters_C.GetNPCNum");

	UBTL_LaunchParameters_C_GetNPCNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
