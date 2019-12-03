
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

// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_OR4
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term1                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term2                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term3                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term4                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyOR*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFuzzyOR* UFuzzySystemFunctionLibrary::FuzzyCreateRule_OR4(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2, class UFuzzyTerm* Term3, class UFuzzyTerm* Term4)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_OR4");

	UFuzzySystemFunctionLibrary_FuzzyCreateRule_OR4_Params params;
	params.Outer = Outer;
	params.Term1 = Term1;
	params.Term2 = Term2;
	params.Term3 = Term3;
	params.Term4 = Term4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_OR3
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term1                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term2                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term3                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyOR*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFuzzyOR* UFuzzySystemFunctionLibrary::FuzzyCreateRule_OR3(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2, class UFuzzyTerm* Term3)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_OR3");

	UFuzzySystemFunctionLibrary_FuzzyCreateRule_OR3_Params params;
	params.Outer = Outer;
	params.Term1 = Term1;
	params.Term2 = Term2;
	params.Term3 = Term3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_OR2
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term1                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term2                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyOR*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFuzzyOR* UFuzzySystemFunctionLibrary::FuzzyCreateRule_OR2(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_OR2");

	UFuzzySystemFunctionLibrary_FuzzyCreateRule_OR2_Params params;
	params.Outer = Outer;
	params.Term1 = Term1;
	params.Term2 = Term2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_AND4
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term1                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term2                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term3                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term4                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyAND*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFuzzyAND* UFuzzySystemFunctionLibrary::FuzzyCreateRule_AND4(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2, class UFuzzyTerm* Term3, class UFuzzyTerm* Term4)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_AND4");

	UFuzzySystemFunctionLibrary_FuzzyCreateRule_AND4_Params params;
	params.Outer = Outer;
	params.Term1 = Term1;
	params.Term2 = Term2;
	params.Term3 = Term3;
	params.Term4 = Term4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_AND3
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term1                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term2                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term3                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyAND*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFuzzyAND* UFuzzySystemFunctionLibrary::FuzzyCreateRule_AND3(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2, class UFuzzyTerm* Term3)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_AND3");

	UFuzzySystemFunctionLibrary_FuzzyCreateRule_AND3_Params params;
	params.Outer = Outer;
	params.Term1 = Term1;
	params.Term2 = Term2;
	params.Term3 = Term3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_AND2
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term1                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Term2                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyAND*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFuzzyAND* UFuzzySystemFunctionLibrary::FuzzyCreateRule_AND2(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_AND2");

	UFuzzySystemFunctionLibrary_FuzzyCreateRule_AND2_Params params;
	params.Outer = Outer;
	params.Term1 = Term1;
	params.Term2 = Term2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateHedges_Very
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyMembershipFunction* FMF                            (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyVery*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFuzzyVery* UFuzzySystemFunctionLibrary::FuzzyCreateHedges_Very(class UObject* Outer, class UFuzzyMembershipFunction* FMF)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateHedges_Very");

	UFuzzySystemFunctionLibrary_FuzzyCreateHedges_Very_Params params;
	params.Outer = Outer;
	params.FMF = FMF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateHedges_Fairly
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyMembershipFunction* FMF                            (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyFairly*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFuzzyFairly* UFuzzySystemFunctionLibrary::FuzzyCreateHedges_Fairly(class UObject* Outer, class UFuzzyMembershipFunction* FMF)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateHedges_Fairly");

	UFuzzySystemFunctionLibrary_FuzzyCreateHedges_Fairly_Params params;
	params.Outer = Outer;
	params.FMF = FMF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzyVariable.AddMembershipFunction
// ()
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             MembershipCurve                (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyVariable*          OutFLV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UFuzzyMembershipFunction* AddFMF                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFuzzyVariable::AddMembershipFunction(const struct FName& Key, class UCurveFloat* MembershipCurve, class UFuzzyVariable** OutFLV, class UFuzzyMembershipFunction** AddFMF)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzyVariable.AddMembershipFunction");

	UFuzzyVariable_AddMembershipFunction_Params params;
	params.Key = Key;
	params.MembershipCurve = MembershipCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFLV != nullptr)
		*OutFLV = params.OutFLV;
	if (AddFMF != nullptr)
		*AddFMF = params.AddFMF;
}


// Function FuzzySystem.FuzzySystemComponent.ResetRule
// ()

void UFuzzySystemComponent::ResetRule()
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemComponent.ResetRule");

	UFuzzySystemComponent_ResetRule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FuzzySystem.FuzzySystemComponent.Fuzzify
// ()
// Parameters:
// struct FName                   NameOfFLV                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UFuzzySystemComponent::Fuzzify(const struct FName& NameOfFLV, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemComponent.Fuzzify");

	UFuzzySystemComponent_Fuzzify_Params params;
	params.NameOfFLV = NameOfFLV;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FuzzySystem.FuzzySystemComponent.DeFuzzify
// ()
// Parameters:
// struct FName                   NameOfFLV                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EDefuzzifyMethod               Method                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFuzzySystemComponent::DeFuzzify(const struct FName& NameOfFLV, EDefuzzifyMethod Method)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemComponent.DeFuzzify");

	UFuzzySystemComponent_DeFuzzify_Params params;
	params.NameOfFLV = NameOfFLV;
	params.Method = Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemComponent.CreateFLV
// ()
// Parameters:
// struct FName                   NameOfFLV                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyVariable*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFuzzyVariable* UFuzzySystemComponent::CreateFLV(const struct FName& NameOfFLV)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemComponent.CreateFLV");

	UFuzzySystemComponent_CreateFLV_Params params;
	params.NameOfFLV = NameOfFLV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemComponent.AllResetFuzzify
// ()

void UFuzzySystemComponent::AllResetFuzzify()
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemComponent.AllResetFuzzify");

	UFuzzySystemComponent_AllResetFuzzify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FuzzySystem.FuzzySystemComponent.AddRule
// ()
// Parameters:
// class UFuzzyTerm*              Antecedent                     (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyTerm*              Consequence                    (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzySystemComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFuzzySystemComponent* UFuzzySystemComponent::AddRule(class UFuzzyTerm* Antecedent, class UFuzzyTerm* Consequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemComponent.AddRule");

	UFuzzySystemComponent_AddRule_Params params;
	params.Antecedent = Antecedent;
	params.Consequence = Consequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FuzzySystem.FuzzySystemComponent.AddMembershipFunctionFLV
// ()
// Parameters:
// struct FName                   NameOfFLV                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Key                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             MembershipCurve                (Parm, ZeroConstructor, IsPlainOldData)
// class UFuzzyVariable*          OutFLV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UFuzzyMembershipFunction* AddFMF                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFuzzySystemComponent::AddMembershipFunctionFLV(const struct FName& NameOfFLV, const struct FName& Key, class UCurveFloat* MembershipCurve, class UFuzzyVariable** OutFLV, class UFuzzyMembershipFunction** AddFMF)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuzzySystem.FuzzySystemComponent.AddMembershipFunctionFLV");

	UFuzzySystemComponent_AddMembershipFunctionFLV_Params params;
	params.NameOfFLV = NameOfFLV;
	params.Key = Key;
	params.MembershipCurve = MembershipCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFLV != nullptr)
		*OutFLV = params.OutFLV;
	if (AddFMF != nullptr)
		*AddFMF = params.AddFMF;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
