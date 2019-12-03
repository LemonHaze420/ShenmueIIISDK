
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

// Function BPF_Shop.BPF_Shop_C.SellMagnification_SkillBook
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, Public, Delegate)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnification_Skillbook        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Shop_C::SellMagnification_SkillBook(class UObject* __WorldContext, float* Magnification_Skillbook)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Shop.BPF_Shop_C.SellMagnification_SkillBook");

	UBPF_Shop_C_SellMagnification_SkillBook_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Magnification_Skillbook != nullptr)
		*Magnification_Skillbook = params.Magnification_Skillbook;
}


// Function BPF_Shop.BPF_Shop_C.SellMagnification
// (Exec, Native, Event, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SellMagnification              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Shop_C::SellMagnification(class UObject* __WorldContext, float* SellMagnification)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Shop.BPF_Shop_C.SellMagnification");

	UBPF_Shop_C_SellMagnification_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SellMagnification != nullptr)
		*SellMagnification = params.SellMagnification;
}


// Function BPF_Shop.BPF_Shop_C.GetS3ShopDataManager
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_ShopDataManager_C*   BP_ShopDataManager             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Shop_C::GetS3ShopDataManager(class UObject* __WorldContext, class ABP_ShopDataManager_C** BP_ShopDataManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Shop.BPF_Shop_C.GetS3ShopDataManager");

	UBPF_Shop_C_GetS3ShopDataManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_ShopDataManager != nullptr)
		*BP_ShopDataManager = params.BP_ShopDataManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
