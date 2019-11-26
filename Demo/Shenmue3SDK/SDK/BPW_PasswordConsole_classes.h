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

// WidgetBlueprintGeneratedClass BPW_PasswordConsole.BPW_PasswordConsole_C
// 0x000F (0x02D8 - 0x02C9)
class UBPW_PasswordConsole_C : public UBPW_PasswordConsoleBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PasswordConsole.BPW_PasswordConsole_C");
		return ptr;
	}


	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_BPW_PasswordConsole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
