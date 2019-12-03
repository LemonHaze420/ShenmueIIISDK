
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

// Function BPF_BattleCommandLibrary.BPF_BattleCommandLibrary_C.ChangeBattleCommandLibrary
// (NetRequest, Native, NetResponse, NetMulticast, Private, Delegate, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_BattleCommandLibrary_C::ChangeBattleCommandLibrary(class UClass* Class, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleCommandLibrary.BPF_BattleCommandLibrary_C.ChangeBattleCommandLibrary");

	UBPF_BattleCommandLibrary_C_ChangeBattleCommandLibrary_Params params;
	params.Class = Class;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_BattleCommandLibrary.BPF_BattleCommandLibrary_C.GetS3BattleCommandLibrary
// (Net, Exec, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTL_CommandLibrary_C*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_CommandLibrary_C* UBPF_BattleCommandLibrary_C::STATIC_GetS3BattleCommandLibrary(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleCommandLibrary.BPF_BattleCommandLibrary_C.GetS3BattleCommandLibrary");

	UBPF_BattleCommandLibrary_C_GetS3BattleCommandLibrary_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
