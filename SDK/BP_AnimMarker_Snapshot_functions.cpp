
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

// Function BP_AnimMarker_Snapshot.BP_AnimMarker_Snapshot_C.GetNotifyName
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimMarker_Snapshot_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimMarker_Snapshot.BP_AnimMarker_Snapshot_C.GetNotifyName");

	UBP_AnimMarker_Snapshot_C_GetNotifyName_Params params;

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
