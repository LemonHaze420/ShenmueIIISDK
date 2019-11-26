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

// BlueprintGeneratedClass BP_Book_003.BP_Book_003_C
// 0x0098 (0x03C0 - 0x0328)
class ABP_Book_003_C : public AActor
{
public:
	class UStaticMeshComponent*                        SM_Book_Text_Page_002_001;                                // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Book_Text_Page_001_001;                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_book_001;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Text_Color_Multiplier;                                    // 0x0348(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Left_Page;                                                // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Right_Page;                                               // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_Books_001>                        Pick_Book_Style;                                          // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	int                                                Pick_Book_Decorations;                                    // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_Books_002>                        Pick_Decoration_Metal;                                    // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	float                                              Center_Hue_Shift;                                         // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Center_Add_Color;                                         // 0x0370(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Center_Multiply_Color;                                    // 0x0380(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Sides_Hue_Shift;                                          // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Sides_Add_Color;                                          // 0x0394(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Sides_Multiply_Color;                                     // 0x03A4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Roughness_Multiplier;                                     // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Specular;                                                 // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Normal_intensity;                                         // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Book_003.BP_Book_003_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
