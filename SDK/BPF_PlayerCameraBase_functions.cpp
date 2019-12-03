
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

// Function BPF_PlayerCameraBase.BPF_PlayerCameraBase_C.getS3PlayerCameraManagerBase
// (Net, Exec, Native, Event, NetResponse, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3PlayerCameraManagerBase_C* BP_S3PlayerCameraManagerBase   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_PlayerCameraBase_C::getS3PlayerCameraManagerBase(class UObject* __WorldContext, class ABP_S3PlayerCameraManagerBase_C** BP_S3PlayerCameraManagerBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_PlayerCameraBase.BPF_PlayerCameraBase_C.getS3PlayerCameraManagerBase");

	UBPF_PlayerCameraBase_C_getS3PlayerCameraManagerBase_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_S3PlayerCameraManagerBase != nullptr)
		*BP_S3PlayerCameraManagerBase = params.BP_S3PlayerCameraManagerBase;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
