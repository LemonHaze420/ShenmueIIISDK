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

// BlueprintGeneratedClass BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C
// 0x0010 (0x0100 - 0x00F0)
class UBPC_MiniGameBetSeet_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UTextureRenderTarget2D*                      RefRenderTarget;                                          // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C");
		return ptr;
	}


	void GetRenderTarget(class UTextureRenderTarget2D** RefRenderTarget);
	void InitializeRenderTarget(int Width, int Height);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_MiniGameBetSeet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
