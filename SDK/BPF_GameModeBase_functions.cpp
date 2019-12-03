
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

// Function BPF_GameModeBase.BPF_GameModeBase_C.getS3GamemodeBase
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3GamemodeBase_C*    BP_S3GamemodeBase              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_GameModeBase_C::getS3GamemodeBase(class UObject* __WorldContext, class ABP_S3GamemodeBase_C** BP_S3GamemodeBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_GameModeBase.BPF_GameModeBase_C.getS3GamemodeBase");

	UBPF_GameModeBase_C_getS3GamemodeBase_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_S3GamemodeBase != nullptr)
		*BP_S3GamemodeBase = params.BP_S3GamemodeBase;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
