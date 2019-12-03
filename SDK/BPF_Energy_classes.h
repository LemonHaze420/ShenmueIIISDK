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

// BlueprintGeneratedClass BPF_Energy.BPF_Energy_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Energy_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Energy.BPF_Energy_C");
		return ptr;
	}


	void BPF_GetPlayerEnergyRegenMax_Ratio_(class UObject* __WorldContext, float* OutEnergy);
	void STATIC_BPF_ReducePlayerEnergy_Orbs_(float Orbs, class UObject* __WorldContext);
	void STATIC_BPF_DrainEnergyByDeltaTime(float DeltaTime, float ParAmount, float ParTime, class UObject* __WorldContext);
	float STATIC_BPF_GetPlayerEnergyDrainMinPoints(class UObject* __WorldContext);
	float STATIC_BPF_GetPlayerMaxEnergyPoints(class UObject* __WorldContext);
	void BPF_SetPlayerEnergy_Ratio_(float Ratio, class UObject* __WorldContext);
	void BPF_SetPlayerEnergy_Points_(float Amount, class UObject* __WorldContext);
	float STATIC_BPF_GetPlayerEnergyMultiplier(class UObject* __WorldContext);
	bool BPF_IsEnergySystemValid(class UObject* __WorldContext);
	void BPF_GetPlayerEnergyRegenRate(class UObject* __WorldContext);
	void STATIC_BPF_GetPlayerEnergyPoints(class UObject* __WorldContext, float* Points);
	void STATIC_BPF_GetPlayerEnergyRegenMax_Points_(class UObject* __WorldContext, float* OutEnergy);
	void BPF_SetPlayerEnergyToMax(class UObject* __WorldContext);
	void BPF_GetPlayerEnergyRange_Ratio_(class UObject* __WorldContext, struct FVector2D* Range);
	void STATIC_BPF_ReducePlayerEnergy(float Amount, class UObject* __WorldContext);
	void STATIC_BPF_GetPlayerEnergyRange_Points_(class UObject* __WorldContext, struct FVector2D* Range);
	void BPF_AddPlayerEnergy_float_(float Amt, class UObject* __WorldContext);
	void STATIC_BPF_GetPlayerEnergyRatio(class UObject* __WorldContext, float* Ratio);
	bool STATIC_BPF_IsPlayerEnergyMax(class UObject* __WorldContext);
	void BPF_AddPlayerEnergy_Int_(int Amt, class UObject* __WorldContext);
	void STATIC_BPF_GetPlayerBaseMaxEnergy(class UObject* __WorldContext, float* Max);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
