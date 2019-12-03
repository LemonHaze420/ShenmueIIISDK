
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

// Function BPF_Random.BPF_Random_C.BPF_RandomIndexNoRepeat
// (NetReliable, NetRequest, Native, Event, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ArrayNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NoRepeat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBPF_Random_C::BPF_RandomIndexNoRepeat(int ArrayNum, int NoRepeat, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Random.BPF_Random_C.BPF_RandomIndexNoRepeat");

	UBPF_Random_C_BPF_RandomIndexNoRepeat_Params params;
	params.ArrayNum = ArrayNum;
	params.NoRepeat = NoRepeat;
	params.__WorldContext = __WorldContext;

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
