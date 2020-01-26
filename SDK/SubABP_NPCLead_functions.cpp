
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SubABP_NPCLead.SubABP_NPCLead_C.IsEnableLookAt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USubABP_NPCLead_C::IsEnableLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_NPCLead.SubABP_NPCLead_C.IsEnableLookAt");

	USubABP_NPCLead_C_IsEnableLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubABP_NPCLead.SubABP_NPCLead_C.InitFaceMotages
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succsess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USubABP_NPCLead_C::InitFaceMotages(bool* Succsess)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubABP_NPCLead.SubABP_NPCLead_C.InitFaceMotages");

	USubABP_NPCLead_C_InitFaceMotages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succsess != nullptr)
		*Succsess = params.Succsess;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
