
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

// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.Normalize_AccurateTime
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAccurateTime           In                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAccurateTime           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAccurateTime UBTL_FunctionLibrary_C::STATIC_Normalize_AccurateTime(const struct FAccurateTime& In, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.Normalize_AccurateTime");

	UBTL_FunctionLibrary_C_Normalize_AccurateTime_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.Add_AccurateTime
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAccurateTime           A                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAccurateTime           B                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAccurateTime           Result                         (Parm, OutParm)

void UBTL_FunctionLibrary_C::STATIC_Add_AccurateTime(const struct FAccurateTime& A, const struct FAccurateTime& B, class UObject* __WorldContext, struct FAccurateTime* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.Add_AccurateTime");

	UBTL_FunctionLibrary_C_Add_AccurateTime_Params params;
	params.A = A;
	params.B = B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetSecondsPassed
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAccurateTime           SinceTime                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Seconds                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_FunctionLibrary_C::STATIC_GetSecondsPassed(const struct FAccurateTime& SinceTime, class UObject* __WorldContext, float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetSecondsPassed");

	UBTL_FunctionLibrary_C_GetSecondsPassed_Params params;
	params.SinceTime = SinceTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetAccurateRealtimeStruct
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAccurateTime           AccurateTime                   (Parm, OutParm)

void UBTL_FunctionLibrary_C::STATIC_GetAccurateRealtimeStruct(class UObject* __WorldContext, struct FAccurateTime* AccurateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetAccurateRealtimeStruct");

	UBTL_FunctionLibrary_C_GetAccurateRealtimeStruct_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AccurateTime != nullptr)
		*AccurateTime = params.AccurateTime;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.AttackCollisionEnumToMainBoneTag
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EBattleAttackCollision> Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_FunctionLibrary_C::STATIC_AttackCollisionEnumToMainBoneTag(TEnumAsByte<EBattleAttackCollision> Enum, class UObject* __WorldContext, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.AttackCollisionEnumToMainBoneTag");

	UBTL_FunctionLibrary_C_AttackCollisionEnumToMainBoneTag_Params params;
	params.Enum = Enum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetBattleDataTableList
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTL_FunctionLibrary_C::STATIC_GetBattleDataTableList(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetBattleDataTableList");

	UBTL_FunctionLibrary_C_GetBattleDataTableList_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.AccurateTimeToFloat
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAccurateTime           InTime                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Seconds                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_FunctionLibrary_C::STATIC_AccurateTimeToFloat(const struct FAccurateTime& InTime, class UObject* __WorldContext, float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.AccurateTimeToFloat");

	UBTL_FunctionLibrary_C_AccurateTimeToFloat_Params params;
	params.InTime = InTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.SubtractAccurateTime
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAccurateTime           Time                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAccurateTime           SubtractTime                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAccurateTime           Result                         (Parm, OutParm)

void UBTL_FunctionLibrary_C::STATIC_SubtractAccurateTime(const struct FAccurateTime& Time, const struct FAccurateTime& SubtractTime, class UObject* __WorldContext, struct FAccurateTime* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.SubtractAccurateTime");

	UBTL_FunctionLibrary_C_SubtractAccurateTime_Params params;
	params.Time = Time;
	params.SubtractTime = SubtractTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.AttackCollisionEnumToBoneGroupTag
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EBattleAttackCollision> Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_FunctionLibrary_C::STATIC_AttackCollisionEnumToBoneGroupTag(TEnumAsByte<EBattleAttackCollision> Enum, class UObject* __WorldContext, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.AttackCollisionEnumToBoneGroupTag");

	UBTL_FunctionLibrary_C_AttackCollisionEnumToBoneGroupTag_Params params;
	params.Enum = Enum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetCurrentAMSectionPercent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CheckPos                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_FunctionLibrary_C::STATIC_GetCurrentAMSectionPercent(class UAnimInstance* AnimInstance, float CheckPos, class UObject* __WorldContext, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetCurrentAMSectionPercent");

	UBTL_FunctionLibrary_C_GetCurrentAMSectionPercent_Params params;
	params.AnimInstance = AnimInstance;
	params.CheckPos = CheckPos;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetCurrentAMSectionPositiion
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NowPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_FunctionLibrary_C::STATIC_GetCurrentAMSectionPositiion(class UAnimInstance* AnimInstance, class UObject* __WorldContext, float* NowPosition, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetCurrentAMSectionPositiion");

	UBTL_FunctionLibrary_C_GetCurrentAMSectionPositiion_Params params;
	params.AnimInstance = AnimInstance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NowPosition != nullptr)
		*NowPosition = params.NowPosition;
	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.CheckPlaneLineAndPointLR
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLinePos                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndLinePos                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PointPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          retDir                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_FunctionLibrary_C::STATIC_CheckPlaneLineAndPointLR(const struct FVector& StartLinePos, const struct FVector& EndLinePos, const struct FVector& PointPos, class UObject* __WorldContext, float* retDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.CheckPlaneLineAndPointLR");

	UBTL_FunctionLibrary_C_CheckPlaneLineAndPointLR_Params params;
	params.StartLinePos = StartLinePos;
	params.EndLinePos = EndLinePos;
	params.PointPos = PointPos;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retDir != nullptr)
		*retDir = params.retDir;
}


// Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetCharacterFootLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UBTL_FunctionLibrary_C::STATIC_GetCharacterFootLocation(class AActor* Character, class UObject* __WorldContext, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_FunctionLibrary.BTL_FunctionLibrary_C.GetCharacterFootLocation");

	UBTL_FunctionLibrary_C_GetCharacterFootLocation_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
