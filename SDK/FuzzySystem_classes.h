#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class FuzzySystem.FuzzyTerm
// 0x0000 (0x0028 - 0x0028)
class UFuzzyTerm : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzyTerm");
		return ptr;
	}

};


// Class FuzzySystem.FuzzyFairly
// 0x0008 (0x0030 - 0x0028)
class UFuzzyFairly : public UFuzzyTerm
{
public:
	class UFuzzyMembershipFunction*                    FMF;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzyFairly");
		return ptr;
	}

};


// Class FuzzySystem.FuzzyOR
// 0x0010 (0x0038 - 0x0028)
class UFuzzyOR : public UFuzzyTerm
{
public:
	TArray<class UFuzzyTerm*>                          Terms;                                                    // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzyOR");
		return ptr;
	}

};


// Class FuzzySystem.FuzzyAND
// 0x0010 (0x0038 - 0x0028)
class UFuzzyAND : public UFuzzyTerm
{
public:
	TArray<class UFuzzyTerm*>                          Terms;                                                    // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzyAND");
		return ptr;
	}

};


// Class FuzzySystem.FuzzyRule
// 0x0010 (0x0038 - 0x0028)
class UFuzzyRule : public UObject
{
public:
	class UFuzzyTerm*                                  Antecedent;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFuzzyTerm*                                  Consequence;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzyRule");
		return ptr;
	}

};


// Class FuzzySystem.FuzzySystemFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFuzzySystemFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzySystemFunctionLibrary");
		return ptr;
	}


	class UFuzzyOR* FuzzyCreateRule_OR4(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2, class UFuzzyTerm* Term3, class UFuzzyTerm* Term4);
	class UFuzzyOR* FuzzyCreateRule_OR3(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2, class UFuzzyTerm* Term3);
	class UFuzzyOR* FuzzyCreateRule_OR2(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2);
	class UFuzzyAND* FuzzyCreateRule_AND4(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2, class UFuzzyTerm* Term3, class UFuzzyTerm* Term4);
	class UFuzzyAND* FuzzyCreateRule_AND3(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2, class UFuzzyTerm* Term3);
	class UFuzzyAND* FuzzyCreateRule_AND2(class UObject* Outer, class UFuzzyTerm* Term1, class UFuzzyTerm* Term2);
	class UFuzzyVery* FuzzyCreateHedges_Very(class UObject* Outer, class UFuzzyMembershipFunction* FMF);
	class UFuzzyFairly* FuzzyCreateHedges_Fairly(class UObject* Outer, class UFuzzyMembershipFunction* FMF);
};


// Class FuzzySystem.FuzzyVariable
// 0x0058 (0x0080 - 0x0028)
class UFuzzyVariable : public UObject
{
public:
	TMap<struct FName, class UFuzzyMembershipFunction*> MemberSets;                                               // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzyVariable");
		return ptr;
	}


	void AddMembershipFunction(const struct FName& Key, class UCurveFloat* MembershipCurve, class UFuzzyVariable** OutFLV, class UFuzzyMembershipFunction** AddFMF);
};


// Class FuzzySystem.FuzzyVery
// 0x0008 (0x0030 - 0x0028)
class UFuzzyVery : public UFuzzyTerm
{
public:
	class UFuzzyMembershipFunction*                    FMF;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzyVery");
		return ptr;
	}

};


// Class FuzzySystem.FuzzySystemComponent
// 0x0068 (0x0158 - 0x00F0)
class UFuzzySystemComponent : public UActorComponent
{
public:
	TMap<struct FName, class UFuzzyVariable*>          VariablesMap;                                             // 0x00F0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UFuzzyRule*>                          Rules;                                                    // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NumSamples;                                               // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzySystemComponent");
		return ptr;
	}


	void ResetRule();
	void Fuzzify(const struct FName& NameOfFLV, float Value);
	float DeFuzzify(const struct FName& NameOfFLV, EDefuzzifyMethod Method);
	class UFuzzyVariable* CreateFLV(const struct FName& NameOfFLV);
	void AllResetFuzzify();
	class UFuzzySystemComponent* AddRule(class UFuzzyTerm* Antecedent, class UFuzzyTerm* Consequence);
	void AddMembershipFunctionFLV(const struct FName& NameOfFLV, const struct FName& Key, class UCurveFloat* MembershipCurve, class UFuzzyVariable** OutFLV, class UFuzzyMembershipFunction** AddFMF);
};


// Class FuzzySystem.FuzzyMembershipFunction
// 0x0010 (0x0038 - 0x0028)
class UFuzzyMembershipFunction : public UFuzzyTerm
{
public:
	class UCurveFloat*                                 MembershipCurve;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FuzzySystem.FuzzyMembershipFunction");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
