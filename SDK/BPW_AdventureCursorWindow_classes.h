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

// WidgetBlueprintGeneratedClass BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C
// 0x0030 (0x0238 - 0x0208)
class UBPW_AdventureCursorWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UBPW_AdventureCursor_C*                      BPW_AdventureCursor;                                      // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBPW_VirtualJotstickCircle_C*                BPW_VirtualJotstickCircle;                                // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bEnableMouse;                                             // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bVirtualJoystickOn;                                       // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0222(0x0002) MISSED OFFSET
	float                                              TimeSinceInput;                                           // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartFadeOutTime;                                         // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LastMouseLocation;                                        // 0x0230(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_AdventureCursorWindow.BPW_AdventureCursorWindow_C");
		return ptr;
	}


	void DisableSoftwareCursor();
	void OnMouseUp();
	void OnMouseDown();
	void UpdateSoftwareCursor(struct FVector2D* MouseScreenSpace, struct FVector2D* VirtualAxii, bool* JoystickOn, bool* SetMousePosition);
	bool CanTrapMouse();
	struct FVector2D ConstrainViewportMousePosition(const struct FVector2D& Location);
	void EnableVirtualJoystick(bool Enable);
	void SetMouseCursorProperties(bool EnableWalkMode);
	void GetConstrainRect(struct FVector2D* Min, struct FVector2D* Max);
	struct FEventReply ConstrainAbsoluteMousePosition(const struct FVector2D& Location, struct FEventReply* EventReply);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_BPW_AdventureCursorWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
