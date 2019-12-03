
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

// Function BP_SplinePath.BP_SplinePath_C.GetNextLocation
// (NetReliable, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          CurrentLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RequestedOffsetInUU            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeValueOnSplineComponent     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SplinePath_C::GetNextLocation(float CurrentLocation, float RequestedOffsetInUU, float* TimeValueOnSplineComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinePath.BP_SplinePath_C.GetNextLocation");

	ABP_SplinePath_C_GetNextLocation_Params params;
	params.CurrentLocation = CurrentLocation;
	params.RequestedOffsetInUU = RequestedOffsetInUU;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeValueOnSplineComponent != nullptr)
		*TimeValueOnSplineComponent = params.TimeValueOnSplineComponent;
}


// Function BP_SplinePath.BP_SplinePath_C.UserConstructionScript
// (NetReliable, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, NetValidate)

void ABP_SplinePath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SplinePath.BP_SplinePath_C.UserConstructionScript");

	ABP_SplinePath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
