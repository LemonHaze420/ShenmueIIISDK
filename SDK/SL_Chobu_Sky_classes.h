#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SL_Chobu_Sky.SL_Hakkason_Sky_C
// 0x0020 (0x0350 - 0x0330)
class ASL_Hakkason_Sky_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class ABP_S3SkyManager_C*                          SkyManager;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_RainController_C*                        BP_RainTester_2_ExecuteUbergraph_SL_Chobu_Sky_RefProperty;// 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class AUltra_Dynamic_Sky_BP_C*                     UDS_UltraDynamicSky_ExecuteUbergraph_SL_Chobu_Sky_RefProperty;// 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Chobu_Sky.SL_Hakkason_Sky_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_SL_Chobu_Sky(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
