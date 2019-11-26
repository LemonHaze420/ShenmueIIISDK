
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::SetTextOutlineSize(int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.SetTextOutlineSize");

	UBPW_SkillBar_C_SetTextOutlineSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.SetOutlineSize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Outline_Size                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::SetOutlineSize(class UTextBlock* Target, int Outline_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.SetOutlineSize");

	UBPW_SkillBar_C_SetOutlineSize_Params params;
	params.Target = Target;
	params.Outline_Size = Outline_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.SetGaugeRatio
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::SetGaugeRatio(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.SetGaugeRatio");

	UBPW_SkillBar_C_SetGaugeRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.LerpLevelUpDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          N                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::LerpLevelUpDisplay(float N)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.LerpLevelUpDisplay");

	UBPW_SkillBar_C_LerpLevelUpDisplay_Params params;
	params.N = N;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.SetLevelUpData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SparringResultLevelUpData LevelUpData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_SkillBar_C::SetLevelUpData(const struct FST_SparringResultLevelUpData& LevelUpData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.SetLevelUpData");

	UBPW_SkillBar_C_SetLevelUpData_Params params;
	params.LevelUpData = LevelUpData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.ShowLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_SkillBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.Construct");

	UBPW_SkillBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SkillBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SkillBar.BPW_SkillBar_C.PreConstruct");

	UBPW_SkillBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SkillBar.BPW_SkillBar_C.ExecuteUbergraph_BPW_SkillBar
// (HasDefaults)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

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
