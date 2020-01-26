
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

// Function BP_GimmickChair.BP_GimmickChair_C.GetChairForm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EChairForm                     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EChairForm ABP_GimmickChair_C::GetChairForm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GimmickChair.BP_GimmickChair_C.GetChairForm");

	ABP_GimmickChair_C_GetChairForm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
