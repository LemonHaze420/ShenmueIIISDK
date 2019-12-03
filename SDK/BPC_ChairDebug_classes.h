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

// BlueprintGeneratedClass BPC_ChairDebug.BPC_ChairDebug_C
// 0x0014 (0x0104 - 0x00F0)
class UBPC_ChairDebug_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ABP_GimmickChair_C*                          Chair;                                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DRAW_DISTANCE;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ChairDebug.BPC_ChairDebug_C");
		return ptr;
	}


	struct FString STATIC_AppendBaseText(const struct FString& String);
	void STATIC_DrawDebugText();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_BPC_ChairDebug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
