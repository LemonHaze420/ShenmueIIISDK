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

// BlueprintGeneratedClass BP_MiniGame_SmartBall_SimpleBase.BP_MiniGame_SmartBall_SimpleBase_C
// 0x0014 (0x08FC - 0x08E8)
class ABP_MiniGame_SmartBall_SimpleBase_C : public ABP_MiniGame_SmartBallBingoBase_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x08E8(0x0010) UNKNOWN PROPERTY: ArrayProperty BP_MiniGame_SmartBall_SimpleBase.BP_MiniGame_SmartBall_SimpleBase_C.MaterialList
	int                                                BingoTypeNum;                                             // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_SmartBall_SimpleBase.BP_MiniGame_SmartBall_SimpleBase_C");
		return ptr;
	}


	void InitializeBingoType(int InputPin);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
