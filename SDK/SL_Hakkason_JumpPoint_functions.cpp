
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

// Function SL_Hakkason_JumpPoint.SL_Hakkason_JumpPoint_C.ExecuteUbergraph_SL_Hakkason_JumpPoint
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_JumpPoint_C::STATIC_ExecuteUbergraph_SL_Hakkason_JumpPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_JumpPoint.SL_Hakkason_JumpPoint_C.ExecuteUbergraph_SL_Hakkason_JumpPoint");

	ASL_Hakkason_JumpPoint_C_ExecuteUbergraph_SL_Hakkason_JumpPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
