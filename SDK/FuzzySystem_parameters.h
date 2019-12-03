#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_OR4
struct UFuzzySystemFunctionLibrary_FuzzyCreateRule_OR4_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term4;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyOR*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_OR3
struct UFuzzySystemFunctionLibrary_FuzzyCreateRule_OR3_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyOR*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_OR2
struct UFuzzySystemFunctionLibrary_FuzzyCreateRule_OR2_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyOR*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_AND4
struct UFuzzySystemFunctionLibrary_FuzzyCreateRule_AND4_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term4;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyAND*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_AND3
struct UFuzzySystemFunctionLibrary_FuzzyCreateRule_AND3_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyAND*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateRule_AND2
struct UFuzzySystemFunctionLibrary_FuzzyCreateRule_AND2_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Term2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyAND*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateHedges_Very
struct UFuzzySystemFunctionLibrary_FuzzyCreateHedges_Very_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyMembershipFunction*                    FMF;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyVery*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemFunctionLibrary.FuzzyCreateHedges_Fairly
struct UFuzzySystemFunctionLibrary_FuzzyCreateHedges_Fairly_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyMembershipFunction*                    FMF;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyFairly*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzyVariable.AddMembershipFunction
struct UFuzzyVariable_AddMembershipFunction_Params
{
	struct FName                                       Key;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MembershipCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyVariable*                              OutFLV;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFuzzyMembershipFunction*                    AddFMF;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemComponent.ResetRule
struct UFuzzySystemComponent_ResetRule_Params
{
};

// Function FuzzySystem.FuzzySystemComponent.Fuzzify
struct UFuzzySystemComponent_Fuzzify_Params
{
	struct FName                                       NameOfFLV;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemComponent.DeFuzzify
struct UFuzzySystemComponent_DeFuzzify_Params
{
	struct FName                                       NameOfFLV;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EDefuzzifyMethod                                   Method;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemComponent.CreateFLV
struct UFuzzySystemComponent_CreateFLV_Params
{
	struct FName                                       NameOfFLV;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyVariable*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemComponent.AllResetFuzzify
struct UFuzzySystemComponent_AllResetFuzzify_Params
{
};

// Function FuzzySystem.FuzzySystemComponent.AddRule
struct UFuzzySystemComponent_AddRule_Params
{
	class UFuzzyTerm*                                  Antecedent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Consequence;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzySystemComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FuzzySystem.FuzzySystemComponent.AddMembershipFunctionFLV
struct UFuzzySystemComponent_AddMembershipFunctionFLV_Params
{
	struct FName                                       NameOfFLV;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MembershipCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzyVariable*                              OutFLV;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFuzzyMembershipFunction*                    AddFMF;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
