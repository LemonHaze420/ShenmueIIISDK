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

// BlueprintGeneratedClass BP_WorldTelManager.BP_WorldTelManager_C
// 0x0059 (0x0381 - 0x0328)
class ABP_WorldTelManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class Uwgt_AddressPage_0_C*                        AddressBookPageWidgetF;                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bEnableInput;                                             // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class Uwgt_AddressPage_1_C*                        AddressBookPageWidgetR;                                   // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector2D                                   SelectPos;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseManager;                                               // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	TArray<class ABP_CreateMemoTexture_C*>             CreateMemoTextures;                                       // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_CreateMemoTexture_C*                     NewVar_1;                                                 // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_AddressBook_C*                           AddressBook;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_WoldTelState>                       WoldTelState;                                             // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldTelManager.BP_WorldTelManager_C");
		return ptr;
	}


	bool CheckCursorMove(const struct FVector2D& BeforPos);
	void SetAddressBook(class ABP_AddressBook_C* AddressBook);
	void SetData(class ABP_CreateMemoTexture_C* newParam);
	void GetUseManager(bool* UseManager);
	void SetUseManager(bool UseManager);
	void SetAddressBookPageWidgetR(class Uwgt_AddressPage_1_C* AddressBookPageWidgetR);
	void SetEnableInput(bool bEnableInput);
	void SetAddressBookPageWidgetF(class Uwgt_AddressPage_0_C* AddressBookPageWidgetF);
	void UserConstructionScript();
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void ChangeSelection(const struct FVector2D& Delta);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void SetSelectionWithSound(const struct FVector2D& NewPos);
	void InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_2(float AxisValue);
	void ExecuteUbergraph_BP_WorldTelManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
