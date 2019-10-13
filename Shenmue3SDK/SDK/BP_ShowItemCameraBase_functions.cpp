
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

// Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShowItemCameraBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.UserConstructionScript");

	ABP_ShowItemCameraBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShowItemCameraBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.ReceiveBeginPlay");

	ABP_ShowItemCameraBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.ExecuteUbergraph_BP_ShowItemCameraBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShowItemCameraBase_C::ExecuteUbergraph_BP_ShowItemCameraBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCameraBase.BP_ShowItemCameraBase_C.ExecuteUbergraph_BP_ShowItemCameraBase");

	ABP_ShowItemCameraBase_C_ExecuteUbergraph_BP_ShowItemCameraBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
