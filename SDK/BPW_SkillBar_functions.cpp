
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

// Function BPW_SkillBar.BPW_SkillBar_C.SetTextOutlineSize
// (NetRequest, Event, NetResponse, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::STATIC_SetTextOutlineSize(int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.SetTextOutlineSize");

	UBPW_SkillBar_C_SetTextOutlineSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.SetOutlineSize
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTextBlock*              Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Outline_Size                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::STATIC_SetOutlineSize(class UTextBlock* Target, int Outline_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.SetOutlineSize");

	UBPW_SkillBar_C_SetOutlineSize_Params params;
	params.Target = Target;
	params.Outline_Size = Outline_Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.SetGaugeRatio
// (Native, Event, NetResponse, Private, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::SetGaugeRatio(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.SetGaugeRatio");

	UBPW_SkillBar_C_SetGaugeRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.LerpLevelUpDisplay
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          N                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::STATIC_LerpLevelUpDisplay(float N)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.LerpLevelUpDisplay");

	UBPW_SkillBar_C_LerpLevelUpDisplay_Params params;
	params.N = N;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.SetLevelUpData
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_SparringResultLevelUpData LevelUpData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_SkillBar_C::STATIC_SetLevelUpData(const struct FST_SparringResultLevelUpData& LevelUpData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.SetLevelUpData");

	UBPW_SkillBar_C_SetLevelUpData_Params params;
	params.LevelUpData = LevelUpData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.ShowLevel
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NextLevelRatio                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::ShowLevel(int Level, float NextLevelRatio, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.ShowLevel");

	UBPW_SkillBar_C_ShowLevel_Params params;
	params.Level = Level;
	params.NextLevelRatio = NextLevelRatio;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.Construct
// (Net, NetReliable, NetRequest, Exec, Native, Event, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPW_SkillBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.Construct");

	UBPW_SkillBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.PreConstruct
// (Exec, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.PreConstruct");

	UBPW_SkillBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.ExecuteUbergraph_BPW_SkillBar
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::ExecuteUbergraph_BPW_SkillBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.ExecuteUbergraph_BPW_SkillBar");

	UBPW_SkillBar_C_ExecuteUbergraph_BPW_SkillBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.OnAnimLevelUp__DelegateSignature
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_SkillBar_C::OnAnimLevelUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.OnAnimLevelUp__DelegateSignature");

	UBPW_SkillBar_C_OnAnimLevelUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
