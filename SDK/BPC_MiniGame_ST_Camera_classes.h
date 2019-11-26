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

// BlueprintGeneratedClass BPC_MiniGame_ST_Camera.BPC_MiniGame_ST_Camera_C
// 0x000B (0x015C - 0x0151)
class UBPC_MiniGame_ST_Camera_C : public UBPC_MiniGameFollowTargetCamera_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              FollowArmAngle;                                           // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowArmInterpSpeed;                                     // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGame_ST_Camera.BPC_MiniGame_ST_Camera_C");
		return ptr;
	}


	void UpdateFollowArmCamera(float Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
