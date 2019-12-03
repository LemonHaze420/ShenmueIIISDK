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

// BlueprintGeneratedClass BP_AddressBook.BP_AddressBook_C
// 0x0025 (0x0759 - 0x0734)
class ABP_AddressBook_C : public ABP_S3Memopad_book_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (Transient, DuplicateTransient)
	class UChildActorComponent*                        BP_Cursor;                                                // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              _______2_cv_loc_z_263E67B64926CB0BCCC6D3A5BB7A7374;       // 0x0748(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______2__Direction_263E67B64926CB0BCCC6D3A5BB7A7374;     // 0x074C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          UnknownVar01;                                          // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ButtonExec;                                               // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AddressBook.BP_AddressBook_C");
		return ptr;
	}


	void StartSelectAnim(float* AnimTime);
	void STATIC_HiddenCursor(bool Hidden);
	void PushButton(const struct FVector2D& CursorPosition);
	void STATIC_AddressBook_NextPage(bool IsNext, bool* Success);
	void STATIC_UserConstructionScript();
	void UnknownFunc01();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_Destroy();
	void STATIC_SetCaptureMempPAdPart();
	void OpenBook();
	void STATIC_PushNewPage(bool IsR2);
	void STATIC_NextPage(bool bRight, bool IsLast);
	void STATIC_NextPageContinueTurning(bool bRight);
	void ExecuteUbergraph_BP_AddressBook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
