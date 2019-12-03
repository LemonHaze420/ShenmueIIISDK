
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

// Function BPF_ImageActionSelect.BPF_ImageActionSelect_C.GetSelectFrameBase
// (Net, NetRequest, Event, Static, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_S3ActionSelect_frameType> frameType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UTexture*>        Textures                       (Parm, OutParm, ZeroConstructor)

void UBPF_ImageActionSelect_C::STATIC_GetSelectFrameBase(TEnumAsByte<EN_S3ActionSelect_frameType> frameType, class UObject* __WorldContext, TArray<class UTexture*>* Textures)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageActionSelect.BPF_ImageActionSelect_C.GetSelectFrameBase");

	UBPF_ImageActionSelect_C_GetSelectFrameBase_Params params;
	params.frameType = frameType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Textures != nullptr)
		*Textures = params.Textures;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
