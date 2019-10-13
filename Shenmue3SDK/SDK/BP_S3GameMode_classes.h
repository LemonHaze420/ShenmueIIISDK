#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_S3GameMode.BP_S3GameMode_C
// 0x0010 (0x0770 - 0x0760)
class ABP_S3GameMode_C : public ABP_S3GamemodeBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0760(0x0008) (Transient, DuplicateTransient)
	class UBP_S3GameInstance_C*                        GameInstance;                                             // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3GameMode.BP_S3GameMode_C");
		return ptr;
	}


	void CheckSkip(bool* dummy);
	void RestoreExtendAttention();
	void ExtendAttention(class UClass* AttentionControllerClass);
	void RetryGame();
	void InitWeather();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CheckTimeManager();
	void SetSkyManager(class AS3SkyManager** InSkyManager);
	void ExecuteUbergraph_BP_S3GameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
