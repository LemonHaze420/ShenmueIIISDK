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

// BlueprintGeneratedClass BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C
// 0x0008 (0x03B8 - 0x03B0)
class UBPC_MiniGameInGameLight_C : public USpotLightComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C");
		return ptr;
	}


	void SetEnabled(bool Enabled);
	void STATIC_ReceiveBeginPlay();
	void OnStart(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnEnd(class ABP_MiniGameBase_C* SelfMiniGame);
	void STATIC_ExecuteUbergraph_BPC_MiniGameInGameLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
