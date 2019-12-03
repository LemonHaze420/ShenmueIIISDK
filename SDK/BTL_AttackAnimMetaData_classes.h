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

// BlueprintGeneratedClass BTL_AttackAnimMetaData.BTL_AttackAnimMetaData_C
// 0x0001 (0x0029 - 0x0028)
class UBTL_AttackAnimMetaData_C : public UAnimMetaData
{
public:
	bool                                               bFreeAim;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTL_AttackAnimMetaData.BTL_AttackAnimMetaData_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
