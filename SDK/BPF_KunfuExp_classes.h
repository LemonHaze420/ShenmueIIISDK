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

// BlueprintGeneratedClass BPF_KunfuExp.BPF_KunfuExp_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_KunfuExp_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_KunfuExp.BPF_KunfuExp_C");
		return ptr;
	}


	class US3DerivedPlayerLevel* BPF_GetPlayerStat_Vitality(class UObject* __WorldContext);
	class US3PlayerExpCollection* BPF_GetPlayerStats_Kunfu(class UObject* __WorldContext);
	void BPF_AddKunFuLevel(const struct FName& Key, int AddLPevel, class UObject* __WorldContext);
	void BPF_GetKunFuLevel(const struct FName& Key, class UObject* __WorldContext, int* OutLevel, float* OutNextRatio);
	void STATIC_BPF_GetKunFuLevelRange(const struct FName& Key, class UObject* __WorldContext, int* Min, int* Max);
	void STATIC_BPF_SetKunFuLevel(const struct FName& Key, int Level, class UObject* __WorldContext);
	void STATIC_BPF_SetKunfuRatio(const struct FName& Type, float Ratio, class UObject* __WorldContext);
	void STATIC_BPF_AddKunfuRatio(const struct FName& Type, float Ratio, class UObject* __WorldContext);
	void BPF_SetKunfuPoints(const struct FName& Type, float Value, class UObject* __WorldContext);
	void STATIC_BPF_AddKunfuPoints(const struct FName& Type, float Amt, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
