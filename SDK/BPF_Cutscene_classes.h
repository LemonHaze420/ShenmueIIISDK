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

// BlueprintGeneratedClass BPF_Cutscene.BPF_Cutscene_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Cutscene_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Cutscene.BPF_Cutscene_C");
		return ptr;
	}


	void getS3CutsceneTimeScheduleManager(class UObject* __WorldContext, class ABP_CutsceneTimeScheduleManager_C** newParam);
	void getS3CutsceneManager(class UObject* __WorldContext, class ABP_CutsceneManager_C** CutsceneManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
