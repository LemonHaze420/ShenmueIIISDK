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

// BlueprintGeneratedClass BTL_FunctionLibrary.BTL_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBTL_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTL_FunctionLibrary.BTL_FunctionLibrary_C");
		return ptr;
	}


	struct FAccurateTime STATIC_Normalize_AccurateTime(const struct FAccurateTime& In, class UObject* __WorldContext);
	void STATIC_Add_AccurateTime(const struct FAccurateTime& A, const struct FAccurateTime& B, class UObject* __WorldContext, struct FAccurateTime* Result);
	void STATIC_GetSecondsPassed(const struct FAccurateTime& SinceTime, class UObject* __WorldContext, float* Seconds);
	void STATIC_GetAccurateRealtimeStruct(class UObject* __WorldContext, struct FAccurateTime* AccurateTime);
	void STATIC_AttackCollisionEnumToMainBoneTag(TEnumAsByte<EBattleAttackCollision> Enum, class UObject* __WorldContext, struct FName* Name);
	void STATIC_GetBattleDataTableList(class UObject* __WorldContext);
	void STATIC_AccurateTimeToFloat(const struct FAccurateTime& InTime, class UObject* __WorldContext, float* Seconds);
	void STATIC_SubtractAccurateTime(const struct FAccurateTime& Time, const struct FAccurateTime& SubtractTime, class UObject* __WorldContext, struct FAccurateTime* Result);
	void STATIC_AttackCollisionEnumToBoneGroupTag(TEnumAsByte<EBattleAttackCollision> Enum, class UObject* __WorldContext, struct FName* Name);
	void STATIC_GetCurrentAMSectionPercent(class UAnimInstance* AnimInstance, float CheckPos, class UObject* __WorldContext, float* Percent);
	void STATIC_GetCurrentAMSectionPositiion(class UAnimInstance* AnimInstance, class UObject* __WorldContext, float* NowPosition, float* Percent);
	void STATIC_CheckPlaneLineAndPointLR(const struct FVector& StartLinePos, const struct FVector& EndLinePos, const struct FVector& PointPos, class UObject* __WorldContext, float* retDir);
	void STATIC_GetCharacterFootLocation(class AActor* Character, class UObject* __WorldContext, struct FVector* Location);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
