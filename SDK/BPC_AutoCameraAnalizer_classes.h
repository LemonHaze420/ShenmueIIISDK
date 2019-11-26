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

// BlueprintGeneratedClass BPC_AutoCameraAnalizer.BPC_AutoCameraAnalizer_C
// 0x0058 (0x0148 - 0x00F0)
class UBPC_AutoCameraAnalizer_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	TArray<class UClass*>                              AllCameraClass;                                           // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_AutoCameraAnalizedInfo>          AnalizedInfo;                                             // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ignoreGroupName;                                          // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_AutoCameraAnalizedInfo>          AllCameraAnalizedInfo;                                    // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              IgnoredCameraClass;                                       // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AutoCameraAnalizer.BPC_AutoCameraAnalizer_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_AutoCameraAnalizer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
