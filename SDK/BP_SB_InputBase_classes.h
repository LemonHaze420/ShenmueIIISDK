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

// BlueprintGeneratedClass BP_SB_InputBase.BP_SB_InputBase_C
// 0x0006 (0x0348 - 0x0342)
class ABP_SB_InputBase_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0342(0x0002) MISSED OFFSET
	float                                              AxisValue;                                                // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SB_InputBase.BP_SB_InputBase_C");
		return ptr;
	}


	void IsInputAxisValue(bool* bInput);
	void IsChangeAxisValue(bool* bChange);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
