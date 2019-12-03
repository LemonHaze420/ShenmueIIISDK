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

// BlueprintGeneratedClass BPC_ShopTalk.BPC_ShopTalk_C
// 0x000B (0x02C0 - 0x02B5)
class UBPC_ShopTalk_C : public UBPC_S3_TalkComponent_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ShopTalk.BPC_ShopTalk_C");
		return ptr;
	}


	void STATIC_GetStartTalkActionType(bool bCanTalk, struct FS3DetectActionParam* Params);
	void GetActionType(bool Sight, TArray<struct FS3DetectActionParam>* Params);
	void STATIC_DecideDetectAction(ES3ActionIconType ActionType);
	void STATIC_ExecuteUbergraph_BPC_ShopTalk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
