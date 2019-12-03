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

// Class Shenmue3.TalkEventTaskBase
// 0x0038 (0x0060 - 0x0028)
class UTalkEventTaskBase : public UObject
{
public:
	int                                                Index;                                                    // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ExcelIndex;                                               // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x11];                                      // 0x0030(0x0011) MISSED OFFSET
	bool                                               bFinishedTask;                                            // 0x0041(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isCanSkipTask;                                            // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
	struct FString                                     ExternalScriptName;                                       // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UTalkEventProcessBase*                       TalkProcess;                                              // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.TalkEventTaskBase");
		return ptr;
	}


	bool Update(float DeltaTime);
	bool IsStopForceDebugSkip(class AS3TalkEventManagerBase* mng);
	struct FString GetLogMessage();
	struct FString GetCommandName();
	void Finish();
	void FinalizeTask();
};


// Class Shenmue3.AcCameraTask
// 0x0028 (0x0088 - 0x0060)
class UAcCameraTask : public UTalkEventTaskBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.AcCameraTask.SequenserName

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.AcCameraTask");
		return ptr;
	}

};


// Class Shenmue3.AcTask
// 0x0000 (0x0060 - 0x0060)
class UAcTask : public UTalkEventTaskBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.AcTask");
		return ptr;
	}

};


// Class Shenmue3.BattleTask
// 0x0040 (0x00A0 - 0x0060)
class UBattleTask : public UTalkEventTaskBase
{
public:
	struct FString                                     BattleId;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     WinLabelName;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                WinLabelIndex;                                            // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     LoseLabelName;                                            // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                LoseLabelIndex;                                           // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NextLabelIndex;                                           // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.BattleTask");
		return ptr;
	}


	void SetWinLabelIndex();
	void SetLoseLabelIndex();
};


// Class Shenmue3.BetTask
// 0x0050 (0x00B0 - 0x0060)
class UBetTask : public UTalkEventTaskBase
{
public:
	int                                                JumpLabelIndexBet;                                        // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                JumpLabelIndexCancel;                                     // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                JumpLabelIndexEnoughMoney;                                // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     JumpLabelBet;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     JumpLabelCancel;                                          // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     JumpLabelEnoughMoney;                                     // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                OverrideBet;                                              // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                OverrideMaxPlayCount;                                     // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.BetTask");
		return ptr;
	}


	void NextSelectEnoughMoney();
	void NextSelectCancel();
	void NextSelectBet();
};


// Class Shenmue3.BreakTask
// 0x0000 (0x0060 - 0x0060)
class UBreakTask : public UTalkEventTaskBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.BreakTask");
		return ptr;
	}

};


// Class Shenmue3.BuyKihudaTask
// 0x0030 (0x0090 - 0x0060)
class UBuyKihudaTask : public UTalkEventTaskBase
{
public:
	struct FString                                     StickerBuyLabelName;                                      // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                StickerBuyLabelIndex;                                     // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     StickerCancelLabelName;                                   // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                StickerCancelLabelIndex;                                  // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NextLabelIndex;                                           // 0x008C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.BuyKihudaTask");
		return ptr;
	}


	void SetNextCancelLabel();
	void SetNextBuyLabel();
};


// Class Shenmue3.AcEndTask
// 0x0000 (0x0060 - 0x0060)
class UAcEndTask : public UTalkEventTaskBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.AcEndTask");
		return ptr;
	}

};


// Class Shenmue3.CallScriptTask
// 0x0010 (0x0070 - 0x0060)
class UCallScriptTask : public UTalkEventTaskBase
{
public:
	struct FString                                     AssetPath;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CallScriptTask");
		return ptr;
	}


	struct FString GetScriptName();
};


// Class Shenmue3.CameraGroupTask
// 0x0020 (0x0080 - 0x0060)
class UCameraGroupTask : public UTalkEventTaskBase
{
public:
	struct FString                                     Group;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FString>                             TargetCharacterIDs;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CameraGroupTask");
		return ptr;
	}

};


// Class Shenmue3.CameraTask
// 0x0020 (0x0080 - 0x0060)
class UCameraTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CameraName;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FString>                             TargetCharacterIDs;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CameraTask");
		return ptr;
	}

};


// Class Shenmue3.CameraActorTask
// 0x0010 (0x0070 - 0x0060)
class UCameraActorTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetCharacterID;                                        // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CameraActorTask");
		return ptr;
	}

};


// Class Shenmue3.TalkTask
// 0x0048 (0x00A8 - 0x0060)
class UTalkTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TalkCharacterId;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     LockTargetCharacterId;                                    // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     EmoteType;                                                // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bCameraChangeFlag;                                        // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNoVoiceFlag;                                             // 0x0091(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	struct FString                                     MessageLabel;                                             // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.TalkTask");
		return ptr;
	}

};


// Class Shenmue3.ByeTask
// 0x0000 (0x00A8 - 0x00A8)
class UByeTask : public UTalkTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ByeTask");
		return ptr;
	}

};


// Class Shenmue3.CanMiniGameFlagTask
// 0x0018 (0x0078 - 0x0060)
class UCanMiniGameFlagTask : public UTalkEventTaskBase
{
public:
	bool                                               bCanFlag;                                                 // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FString                                     TargetCharacterID;                                        // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CanMiniGameFlagTask");
		return ptr;
	}

};


// Class Shenmue3.BattleResultTask
// 0x0008 (0x0068 - 0x0060)
class UBattleResultTask : public UTalkEventTaskBase
{
public:
	int                                                Result;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.BattleResultTask");
		return ptr;
	}

};


// Class Shenmue3.ChangeClothesTask
// 0x0010 (0x0070 - 0x0060)
class UChangeClothesTask : public UTalkEventTaskBase
{
public:
	struct FName                                       CharacterID;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ClothesId;                                                // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ChangeClothesTask");
		return ptr;
	}

};


// Class Shenmue3.ChangeFocusTask
// 0x0020 (0x0080 - 0x0060)
class UChangeFocusTask : public UTalkEventTaskBase
{
public:
	TArray<struct FString>                             TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              Time;                                                     // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DelayTime;                                                // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ChangeFocusTask");
		return ptr;
	}

};


// Class Shenmue3.CharacterTurnTask
// 0x0028 (0x0088 - 0x0060)
class UCharacterTurnTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TurnCharacterId;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     LookAtCharacterId;                                        // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              DelayTime;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RotationTime;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CharacterTurnTask");
		return ptr;
	}

};


// Class Shenmue3.CharaGroupTask
// 0x0010 (0x0070 - 0x0060)
class UCharaGroupTask : public UTalkEventTaskBase
{
public:
	TArray<struct FString>                             JoinThisTalkActorIDs;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CharaGroupTask");
		return ptr;
	}

};


// Class Shenmue3.ChooseMiniGameTask
// 0x0038 (0x0098 - 0x0060)
class UChooseMiniGameTask : public UTalkEventTaskBase
{
public:
	struct FString                                     ChooseLabelName;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                ChooseLabelIndex;                                         // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     CancelLabelName;                                          // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                CancelLabelIndex;                                         // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NextLabelIndex;                                           // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bManualCamera;                                            // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ChooseMiniGameTask");
		return ptr;
	}


	void NextSelectChoose();
	void NextSelectCancel();
};


// Class Shenmue3.ControlCameraTask
// 0x0028 (0x0088 - 0x0060)
class UControlCameraTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CameraName;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                CameraDistance;                                           // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                StartFrame;                                               // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FString>                             TargetCharacterIDs;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ControlCameraTask");
		return ptr;
	}

};


// Class Shenmue3.DevExtendedTask
// 0x0008 (0x0068 - 0x0060)
class UDevExtendedTask : public UTalkEventTaskBase
{
public:
	int                                                NewStep;                                                  // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.DevExtendedTask");
		return ptr;
	}

};


// Class Shenmue3.DialogTask
// 0x0040 (0x00A0 - 0x0060)
class UDialogTask : public UTalkEventTaskBase
{
public:
	struct FString                                     DialogId;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bSelectDecide;                                            // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FString                                     DecideLabel;                                              // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     CancelLabel;                                              // 0x0088(0x0010) (ZeroConstructor)
	int                                                DecideIndex;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CancelIndex;                                              // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.DialogTask");
		return ptr;
	}

};


// Class Shenmue3.EmoteTask
// 0x0028 (0x0088 - 0x0060)
class UEmoteTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CharacterID;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     EmoteType;                                                // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              DelayTime;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.EmoteTask");
		return ptr;
	}

};


// Class Shenmue3.DojoCaptionTask
// 0x0010 (0x0070 - 0x0060)
class UDojoCaptionTask : public UTalkEventTaskBase
{
public:
	struct FName                                       CaptionId;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bStartFlag;                                               // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.DojoCaptionTask");
		return ptr;
	}

};


// Class Shenmue3.EnterMiniGameTask
// 0x0010 (0x0070 - 0x0060)
class UEnterMiniGameTask : public UTalkEventTaskBase
{
public:
	float                                              WaitTime;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                WaitFrame;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.EnterMiniGameTask");
		return ptr;
	}

};


// Class Shenmue3.EnableDetectIcon
// 0x0008 (0x0068 - 0x0060)
class UEnableDetectIcon : public UTalkEventTaskBase
{
public:
	bool                                               isTalk;                                                   // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               isMemo;                                                   // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               isMenu;                                                   // 0x0062(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0063(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.EnableDetectIcon");
		return ptr;
	}

};


// Class Shenmue3.EventMiniGameTask
// 0x0028 (0x0088 - 0x0060)
class UEventMiniGameTask : public UTalkEventTaskBase
{
public:
	TArray<struct FEventJumpLabel>                     EventJumpLabels;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<int>                                        LabelIndex;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.EventMiniGameTask");
		return ptr;
	}


	void SetNextLabelIndex(int NextIndex);
	bool IsSetupLabelIndex(int CheckIndex);
};


// Class Shenmue3.ScriptEventTriggerBase
// 0x0000 (0x0028 - 0x0028)
class UScriptEventTriggerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ScriptEventTriggerBase");
		return ptr;
	}

};


// Class Shenmue3.FlagTrigger
// 0x0010 (0x0038 - 0x0028)
class UFlagTrigger : public UScriptEventTriggerBase
{
public:
	int                                                Index;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MinValue;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.FlagTrigger");
		return ptr;
	}

};


// Class Shenmue3.FadeTask
// 0x0010 (0x0070 - 0x0060)
class UFadeTask : public UTalkEventTaskBase
{
public:
	int                                                FadeType;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                FadeWaitForProcessing;                                    // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                FadeColorNum;                                             // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.FadeTask");
		return ptr;
	}

};


// Class Shenmue3.GameTimeTask
// 0x0008 (0x0068 - 0x0060)
class UGameTimeTask : public UTalkEventTaskBase
{
public:
	float                                              GameTime;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Sign;                                                     // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.GameTimeTask");
		return ptr;
	}

};


// Class Shenmue3.GachaFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGachaFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.GachaFunctionLibrary");
		return ptr;
	}


	void SetGachaDataTable(class UDataTable* GachaItemTable);
	bool PlayGacha(const struct FName& GachaId, struct FS3GachaItem* Out, bool* IsRare);
	void LoadGachaDataTable(const struct FString& GachaItemTableName);
	bool IsLoadGachaDataTable();
};


// Class Shenmue3.GiftMiniGameTask
// 0x0000 (0x0060 - 0x0060)
class UGiftMiniGameTask : public UTalkEventTaskBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.GiftMiniGameTask");
		return ptr;
	}

};


// Class Shenmue3.GotoTask
// 0x0018 (0x0078 - 0x0060)
class UGotoTask : public UTalkEventTaskBase
{
public:
	struct FString                                     labelName;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                GotoIndex;                                                // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.GotoTask");
		return ptr;
	}

};


// Class Shenmue3.HelloTask
// 0x0000 (0x00A8 - 0x00A8)
class UHelloTask : public UTalkTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.HelloTask");
		return ptr;
	}

};


// Class Shenmue3.HelpTask
// 0x0018 (0x0078 - 0x0060)
class UHelpTask : public UTalkEventTaskBase
{
public:
	struct FString                                     HelpId;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bFirstOnly;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.HelpTask");
		return ptr;
	}

};


// Class Shenmue3.HintTalkData
// 0x0050 (0x0078 - 0x0028)
class UHintTalkData : public UObject
{
public:
	TMap<struct FString, struct FST_S3HintTalkData>    Data;                                                     // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.HintTalkData");
		return ptr;
	}

};


// Class Shenmue3.IfTask
// 0x0040 (0x00A0 - 0x0060)
class UIfTask : public UTalkEventTaskBase
{
public:
	struct FString                                     Expression;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     TrueLabelName;                                            // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                TrueLabelIndex;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     FalseLabelName;                                           // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                FalseLabelIndex;                                          // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               Result;                                                   // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.IfTask");
		return ptr;
	}

};


// Class Shenmue3.InfoTask
// 0x0018 (0x0078 - 0x0060)
class UInfoTask : public UTalkEventTaskBase
{
public:
	int                                                FlagNum;                                                  // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.InfoTask");
		return ptr;
	}

};


// Class Shenmue3.Imaginary
// 0x0020 (0x0080 - 0x0060)
class UImaginary : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetID;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ImaginaryCommand;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.Imaginary");
		return ptr;
	}

};


// Class Shenmue3.IsBootTrigger
// 0x0000 (0x0028 - 0x0028)
class UIsBootTrigger : public UScriptEventTriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.IsBootTrigger");
		return ptr;
	}

};


// Class Shenmue3.IsConnectTrigger
// 0x0018 (0x0040 - 0x0028)
class UIsConnectTrigger : public UScriptEventTriggerBase
{
public:
	struct FString                                     TagName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                MinStep;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.IsConnectTrigger");
		return ptr;
	}

};


// Class Shenmue3.InventoryTask
// 0x0010 (0x0070 - 0x0060)
class UInventoryTask : public UTalkEventTaskBase
{
public:
	struct FString                                     UseItemSetId;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.InventoryTask");
		return ptr;
	}

};


// Class Shenmue3.KsLabelTask
// 0x0018 (0x0078 - 0x0060)
class UKsLabelTask : public UTalkEventTaskBase
{
public:
	bool                                               useTimer;                                                 // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              limitTime;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FString>                             messageLabels;                                            // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.KsLabelTask");
		return ptr;
	}

};


// Class Shenmue3.KSLabelNoCancelTask
// 0x0000 (0x0078 - 0x0078)
class UKSLabelNoCancelTask : public UKsLabelTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.KSLabelNoCancelTask");
		return ptr;
	}

};


// Class Shenmue3.HelpPriorityTask
// 0x0018 (0x0078 - 0x0060)
class UHelpPriorityTask : public UTalkEventTaskBase
{
public:
	struct FString                                     HelpId;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bStartFlag;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.HelpPriorityTask");
		return ptr;
	}

};


// Class Shenmue3.ItemTask
// 0x0018 (0x0078 - 0x0060)
class UItemTask : public UTalkEventTaskBase
{
public:
	int                                                FlagNum;                                                  // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ItemTask");
		return ptr;
	}

};


// Class Shenmue3.KsSelectTask
// 0x0030 (0x0090 - 0x0060)
class UKsSelectTask : public UTalkEventTaskBase
{
public:
	TArray<struct FKsJumpLabel>                        jumpLabels;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<int>                                        LabelIndex;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.KsSelectTask");
		return ptr;
	}


	void SetSelectKeywordIndex(int new_index);
};


// Class Shenmue3.KsVisibilityTask
// 0x0018 (0x0078 - 0x0060)
class UKsVisibilityTask : public UTalkEventTaskBase
{
public:
	TArray<struct FString>                             Extention;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bUnknown;                                                 // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.KsVisibilityTask");
		return ptr;
	}

};


// Class Shenmue3.LabelTask
// 0x0010 (0x0070 - 0x0060)
class ULabelTask : public UTalkEventTaskBase
{
public:
	struct FString                                     labelName;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.LabelTask");
		return ptr;
	}

};


// Class Shenmue3.LeadActorExitTask
// 0x0000 (0x0060 - 0x0060)
class ULeadActorExitTask : public UTalkEventTaskBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.LeadActorExitTask");
		return ptr;
	}

};


// Class Shenmue3.LoadLevelTask
// 0x0010 (0x0070 - 0x0060)
class ULoadLevelTask : public UTalkEventTaskBase
{
public:
	struct FString                                     LoadLevelName;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.LoadLevelTask");
		return ptr;
	}

};


// Class Shenmue3.LoadPositionAndRotationTask
// 0x0020 (0x0080 - 0x0060)
class ULoadPositionAndRotationTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     VariableName;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.LoadPositionAndRotationTask");
		return ptr;
	}

};


// Class Shenmue3.LoadPositionTask
// 0x0020 (0x0080 - 0x0060)
class ULoadPositionTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     VariableName;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.LoadPositionTask");
		return ptr;
	}

};


// Class Shenmue3.LoadRotationTask
// 0x0020 (0x0080 - 0x0060)
class ULoadRotationTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     VariableName;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.LoadRotationTask");
		return ptr;
	}

};


// Class Shenmue3.LookAtTask
// 0x0030 (0x0090 - 0x0060)
class ULookAtTask : public UTalkEventTaskBase
{
public:
	struct FString                                     motionActorId;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     lookTargetId;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                motionType;                                               // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                motionProc;                                               // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DelayTime;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.LookAtTask");
		return ptr;
	}

};


// Class Shenmue3.LookTask
// 0x0030 (0x0090 - 0x0060)
class ULookTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CharacterID;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     lookTargetId;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              OffsetYaw;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              OffsetPitch;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DelayTime;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.LookTask");
		return ptr;
	}

};


// Class Shenmue3.TalkScript
// 0x0050 (0x0078 - 0x0028)
class UTalkScript : public UObject
{
public:
	TArray<class UTalkEventTaskBase*>                  EventData;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FString>                             JoinActorIDs;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              NoVoiceWaitTime;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsAcScript;                                               // 0x004C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	int                                                NumMiniGameTasks;                                         // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<class UObject*>                             PreloadAssets;                                            // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.TalkScript.PreloadSoftAssets

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.TalkScript");
		return ptr;
	}


	void Init();
};


// Class Shenmue3.LookSpeedTask
// 0x0008 (0x0098 - 0x0090)
class ULookSpeedTask : public ULookTask
{
public:
	float                                              InterpSpeed;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.LookSpeedTask");
		return ptr;
	}

};


// Class Shenmue3.MainFlowScript
// 0x0010 (0x0088 - 0x0078)
class UMainFlowScript : public UTalkScript
{
public:
	TArray<class UScriptEventTriggerBase*>             TriggerData;                                              // 0x0078(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MainFlowScript");
		return ptr;
	}

};


// Class Shenmue3.MG_CC_AnimalBase
// 0x0030 (0x0770 - 0x0740)
class AMG_CC_AnimalBase : public ACharacter
{
public:
	struct FMG_CC_MoveData                             m_WalkMoveData;                                           // 0x0740(0x000C) (BlueprintVisible)
	struct FMG_CC_MoveData                             m_RunMoveData;                                            // 0x074C(0x000C) (BlueprintVisible)
	float                                              m_MoveDistanceFromCenter;                                 // 0x0758(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_WaitTime;                                               // 0x075C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_MaxNotCatchTime;                                        // 0x0760(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0764(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MG_CC_AnimalBase");
		return ptr;
	}

};


// Class Shenmue3.ExpressionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UExpressionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ExpressionFunctionLibrary");
		return ptr;
	}


	struct FString Replace(const struct FString& InStr, int leftInd, int rightInd, int NewNum);
	bool GetExpressionFromOperator(const struct FString& InStr, int operatorInd, int* lNum, int* rNum, int* lInd, int* rInd);
	bool GetExpressionFromComparison(const struct FString& InStr, int operatorInd, TEnumAsByte<EComparisonKind> comparisonKind, int* lNum, int* rNum, int* lInd, int* rInd, struct FString* lStr, struct FString* rStr);
	bool FindSub(const struct FString& InStr, int* findInd);
	bool FindParenBlock(const struct FString& InStr, int* leftInd, int* rightInd, struct FString* retStr);
	bool FindMul(const struct FString& InStr, int* findInd);
	bool FindMod(const struct FString& InStr, int* findInd);
	int FindFirstOperator(const struct FString& InStr, TEnumAsByte<ESearchDir> SearchDir, struct FString* findOperator);
	bool FindDiv(const struct FString& InStr, int* findInd);
	bool FindComparison(const struct FString& InStr, TEnumAsByte<EComparisonKind> comparisonKind, int* findInd);
	bool FindAdd(const struct FString& InStr, int* findInd);
	struct FString EvaluateAllFlags(const struct FString& InStr);
};


// Class Shenmue3.MG_RCFork_DataAsset
// 0x00B0 (0x00E0 - 0x0030)
class UMG_RCFork_DataAsset : public UDataAsset
{
public:
	struct FMG_RCForkData                              m_rcfork_data;                                            // 0x0030(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMG_RCForkDebugData                         m_rcfork_debug_data;                                      // 0x0090(0x004C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MG_RCFork_DataAsset");
		return ptr;
	}

};


// Class Shenmue3.MG_WMData
// 0x0010 (0x0040 - 0x0030)
class UMG_WMData : public UDataAsset
{
public:
	TArray<struct FMG_WMRoundDataStruct>               m_RoundDataList;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MG_WMData");
		return ptr;
	}


	bool IsEnableMole(int RoundNum, float CurrentTime, int AppearCount, struct FMG_WMDataStruct* ReturnData);
	int GetToatalRoundNum();
	float GetRoundMaxTime(int RoundNum);
	int GetMoleNum(int RoundNum);
};


// Class Shenmue3.MGForkliftRCFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMGForkliftRCFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MGForkliftRCFunctionLibrary");
		return ptr;
	}


	void SetVehicleWheelOffset(class UWheeledVehicleMovementComponent* wheel_vehicle_movement_component, TArray<struct FVector> Offset, int Size);
	struct FMGForkliftRCCowTableRowBase GetRowByNameCowDataTable(class UDataTable* DataTable, const struct FName& pName, bool* Result);
};


// Class Shenmue3.MuteFadeSoundTask
// 0x0008 (0x0068 - 0x0060)
class UMuteFadeSoundTask : public UTalkEventTaskBase
{
public:
	bool                                               bMute;                                                    // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                Target;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MuteFadeSoundTask");
		return ptr;
	}

};


// Class Shenmue3.NPCReactionAnimMetaData
// 0x0018 (0x0040 - 0x0028)
class UNPCReactionAnimMetaData : public UAnimMetaData
{
public:
	TEnumAsByte<EReactionOnTalk>                       ReactionType;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFurimukiOnTalk                                    ManualFurimukiType;                                       // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              PauseTime;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               ChangeAnimation;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoReactFromBehind;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLookUp;                                                  // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.NPCReactionAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.MotionTask
// 0x0058 (0x00B8 - 0x0060)
class UMotionTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CharacterID;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.MotionTask.MontagePath
	struct FString                                     SectionName;                                              // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bUseBlend;                                                // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              BlendTime;                                                // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DelayTime;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MotionTask");
		return ptr;
	}

};


// Class Shenmue3.OpenLevelTask
// 0x0008 (0x0068 - 0x0060)
class UOpenLevelTask : public UTalkEventTaskBase
{
public:
	struct FName                                       OpenLevelName;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.OpenLevelTask");
		return ptr;
	}

};


// Class Shenmue3.OverlapTrigger
// 0x0010 (0x0038 - 0x0028)
class UOverlapTrigger : public UScriptEventTriggerBase
{
public:
	struct FString                                     VolumeName;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.OverlapTrigger");
		return ptr;
	}

};


// Class Shenmue3.PauseScheduleTask
// 0x0010 (0x0070 - 0x0060)
class UPauseScheduleTask : public UTalkEventTaskBase
{
public:
	struct FName                                       CharacterID;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bPause;                                                   // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.PauseScheduleTask");
		return ptr;
	}

};


// Class Shenmue3.MG_ODDataTable
// 0x0000 (0x0028 - 0x0028)
class UMG_ODDataTable : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MG_ODDataTable");
		return ptr;
	}


	void MG_ODOutputTextFile(const struct FString& Filename, const struct FString& outputFolderName, const struct FString& outStr);
	bool GetODDataTableRowFromName(class UScriptStruct* _struct, class UDataTable* _table, const struct FName& _row_name, int* Value);
};


// Class Shenmue3.PlayCutsceneTask
// 0x0010 (0x0070 - 0x0060)
class UPlayCutsceneTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CutsceneName;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.PlayCutsceneTask");
		return ptr;
	}

};


// Class Shenmue3.PostProcessTask
// 0x0030 (0x0090 - 0x0060)
class UPostProcessTask : public UTalkEventTaskBase
{
public:
	bool                                               bEnable;                                                  // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0061(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.PostProcessTask.PostData

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.PostProcessTask");
		return ptr;
	}

};


// Class Shenmue3.RandomTask
// 0x0010 (0x0070 - 0x0060)
class URandomTask : public UTalkEventTaskBase
{
public:
	TArray<struct FRandomLabel>                        RandomLabelData;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.RandomTask");
		return ptr;
	}

};


// Class Shenmue3.PlaySeTask
// 0x0048 (0x00A8 - 0x0060)
class UPlaySeTask : public UTalkEventTaskBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.PlaySeTask.SE_path
	float                                              DelayTime;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     Selector;                                                 // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.PlaySeTask");
		return ptr;
	}

};


// Class Shenmue3.ReactionTask
// 0x0020 (0x0080 - 0x0060)
class UReactionTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CharacterID;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                ReactionId;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ActionVolume;                                             // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ActionSpeedRate;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ReturnFlag;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ReactionTask");
		return ptr;
	}

};


// Class Shenmue3.RemoteEventTask
// 0x0010 (0x0070 - 0x0060)
class URemoteEventTask : public UTalkEventTaskBase
{
public:
	struct FString                                     EventName;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.RemoteEventTask");
		return ptr;
	}

};


// Class Shenmue3.RepeatEndTask
// 0x0008 (0x0068 - 0x0060)
class URepeatEndTask : public UTalkEventTaskBase
{
public:
	int                                                RepeatToIndex;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.RepeatEndTask");
		return ptr;
	}

};


// Class Shenmue3.RepeatTask
// 0x0008 (0x0068 - 0x0060)
class URepeatTask : public UTalkEventTaskBase
{
public:
	int                                                RepeatFromIndex;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.RepeatTask");
		return ptr;
	}

};


// Class Shenmue3.ReqManualCharaLightTask
// 0x0028 (0x0088 - 0x0060)
class UReqManualCharaLightTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CharacterID;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     CharaLightParamaName;                                     // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	ES3CharaLightRequestType                           ProcessingType;                                           // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ReqManualCharaLightTask");
		return ptr;
	}

};


// Class Shenmue3.ResultMiniGameTask
// 0x0040 (0x00A0 - 0x0060)
class UResultMiniGameTask : public UTalkEventTaskBase
{
public:
	struct FString                                     JumpLabelWin;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     JumpLabelLose;                                            // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     JumpLabelDraw;                                            // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                JumpLabelIndexWin;                                        // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                JumpLabelIndexLose;                                       // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                JumpLabelIndexDraw;                                       // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ResultMiniGameTask");
		return ptr;
	}


	void NextSelectWin();
	void NextSelectLose();
	void NextSelectDraw();
};


// Class Shenmue3.S3_BRallyAwardSystem
// 0x0028 (0x0118 - 0x00F0)
class US3_BRallyAwardSystem : public UActorComponent
{
public:
	class UDataTable*                                  AwardFlagTable;                                           // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3_BRallyAwardSystem");
		return ptr;
	}


	void UnlockAward(const struct FName& AwardId, bool bAnnounce);
	void SetAwardCount(const struct FName& AwardId, int Count, bool bUpOnly, bool bAnnounce);
	void LockAward(const struct FName& AwardId);
	void ListUpAwardStatuses(TArray<struct FS3BRallyAwardStatus>* StatusList);
	bool IsEarned(const struct FName& Award, bool bCheckAnnounced);
	bool HasAnnouncement();
	void GetEarnedItems(TArray<int>* Items);
	int GetAwardCount(const struct FName& AwardId);
	TArray<struct FName> GetAnnouncements();
	TArray<struct FS3BRallyAwardAnnouncement> GetAnnouncementQueue();
	void ClearAnnouncement();
};


// Class Shenmue3.ResumeMiniGameTask
// 0x0018 (0x0078 - 0x0060)
class UResumeMiniGameTask : public UTalkEventTaskBase
{
public:
	struct FString                                     ResumeKeydword;                                           // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                LoopLabelIndex;                                           // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ResumeMiniGameTask");
		return ptr;
	}


	void SetLoopLabelIndex(int LoopIndex);
};


// Class Shenmue3.S3GameInstance
// 0x0320 (0x03C0 - 0x00A0)
class US3GameInstance : public UGameInstance
{
public:
	bool                                               BootFlag;                                                 // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              MovieGamma;                                               // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWeatherType                                       GameWeather;                                              // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeatherType                                       GameWeatherSystem;                                        // 0x00A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	struct FVector                                     WindDirection;                                            // 0x00AC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       EndRollPassword;                                          // 0x00B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               CertifiedPasswords;                                       // 0x00C0(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<ES3RewardType>                              InstalledRewards;                                         // 0x00D0(0x0010) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnStepChanged;                                            // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFlagChanged;                                            // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemNumChanged;                                         // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAcquisitionFlagChanged;                                 // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoneyChanged;                                           // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBetMoneyChanged;                                        // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerBehaviorIdChanged;                                // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSoundVolumeChanged;                                     // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeatherChanged;                                         // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onCutsceneStart;                                          // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onCutsceneEnd;                                            // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGraphicPresetChanged;                                   // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	ES3PlayerBehavior                                  PlayerBehavior;                                           // 0x01A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	TArray<ES3PlayerBehavior>                          PlayerBehaviorStack;                                      // 0x01A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEndingFlag;                                              // 0x01B8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01B9(0x0003) MISSED OFFSET
	float                                              TrialTime;                                                // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class US3ProgressManager*                          ProgressManager;                                          // 0x01C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3MemoFlagManager*                          MemoFlagManager;                                          // 0x01C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3ItemManager*                              ItemManager;                                              // 0x01D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3GraphicSettingsManager*                   GraphicSettingsManager;                                   // 0x01D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3StatusManager*                            StatusManager;                                            // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3SystemManager*                            SystemManager;                                            // 0x01E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3TalkScriptManager*                        TalkScriptManager;                                        // 0x01F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3MiniGameProgressManager*                  MiniGameProgressManager;                                  // 0x01F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3AreaJumpBase*                             AreaJumpBase;                                             // 0x0200(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBTL_CommandLibraryBase*                     BattleCommandLibrary;                                     // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	class US3BattleStatsManager*                       BattleStatsManager;                                       // 0x0210(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3InputDeviceManager*                       InputDeviceManager;                                       // 0x0218(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CachedGameModeClass;                                      // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      AchievementManagerClass;                                  // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3AchievementManager*                       AchievementManager;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AssetChunkManagerClass;                                   // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3AssetChunkManager*                        AssetChunkManager;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DownloadableContentManagerClass;                          // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3DownloadableContentManager*               DownloadableContentManager;                               // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LiveStreamingManagerClass;                                // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3LiveStreamingManager*                     LiveStreamingManager;                                     // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SaveLoadManagerClass;                                     // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3SaveLoadManager*                          SaveLoadManager;                                          // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     UseSaveName;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDisableAutoSave;                                         // 0x0288(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FDateTime                                   MapChangeKeepDateTime;                                    // 0x0290(0x0008) (Edit, BlueprintVisible)
	bool                                               bRetryArea;                                               // 0x0298(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FS3RetryRecoveryInfo                        RetryRecoveryInfo;                                        // 0x02A0(0x0060)
	class US3SubmissionConfig*                         SubmissionConfig;                                         // 0x0300(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BattleCommandLibraryClass;                                // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BattleStatsManagerClass;                                  // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             AnselDisableObjects;                                      // 0x0318(0x0010) (ZeroConstructor)
	bool                                               bIsDebugMenuOpen;                                         // 0x0328(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class UClass*                                      LoadingScreenWidgetClass;                                 // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   EyecatchTime;                                             // 0x0338(0x0008) (BlueprintVisible)
	class US3LoadingWidget*                            LoadingScreenWidget;                                      // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0348(0x0010) MISSED OFFSET
	float                                              LoadingScreenProgress;                                    // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x5C];                                      // 0x035C(0x005C) MISSED OFFSET
	int                                                HintTalkDifficulty;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HintTalkPrintDebug;                                       // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GameInstance");
		return ptr;
	}


	void UpdateMainFlowWork(const struct FName& ID, const struct FString& Param);
	void UpdateCulture();
	void UpdateClothParts(bool bRyo, TMap<EClothPartsType, struct FName>* PartsInfo);
	void UpdateACPlayDateTime(const struct FName& ID, const struct FDateTime& NewDateTime);
	void UnlockClothParts(const struct FName& ID);
	void StartCheckRetryFlag();
	void SetYesterdayPlayerState(class AActor* Player);
	void SetWindowParam(ES3WindowType Type, const struct FString& InResolution);
	void SetVSync(bool bEnable);
	void SetVoiceVolume(float NewVolume);
	void SetVoiceLanguage(ES3VoiceLanguage InVoiceLanguage);
	void SetUnleadMemoIds(TArray<int>* Ids);
	void SetTabFlagUnread(TArray<bool> TabUnreadArray);
	void SetSystemFlag(int array_index, int flag);
	void SetSEVolume(float NewVolume);
	void SetRedemptionPoint(int NewPoint);
	void SetReadHelp(const struct FName& ID);
	bool SetProgressIndex(const struct FString& Key, int Index);
	void SetPlayerBehavior(ES3PlayerBehavior InPlayerBehavior);
	void SetMemoTabIndex(int memoTabNum);
	void SetMemoSubEventUnderlineList(TArray<int> SubEventUbderlineList);
	void SetMemoMapMask(int Index, bool IsVisible);
	void SetMemoLatestMotivationIndex(int Index);
	void SetMemoLatestIndex(int Index);
	void SetMemoFlagAndAlready(int MemoId, bool flag, bool Already);
	void SetMemoFlag(int MemoId, bool flag);
	void SetMemoDataUnderline(int MemoNo, bool IsUnderline);
	void SetMemoDataPage(int MemoNo, int page);
	void SetMemoDataIdentifer(int MemoNo, int identifer);
	void SetMemoAlready(int MemoId, bool flag);
	void SetLocale(ES3Locale InLocale);
	void SetLoadMemoDataIdentifer(int MemoNo, int identifer);
	void SetKeyConfigValue(ES3KeyConfigType Type, unsigned char Value);
	void SetItemNum(const struct FString& ItemId, int Num);
	void SetItemCheckFlag(int Index);
	void SetIsJumpYesterdayPrace(bool IsJump);
	void SetIsFirstContactState(const struct FString& NPCID, bool newParam);
	void SetInstalledRewards(TArray<ES3RewardType> Rewards);
	void SetHaveMoney_NoDispatcher(int NewMoney);
	void SetHaveMoney(int NewMoney);
	void SetGraphicQuality(ES3GraphicPreset InQuality);
	void SetFishingInfo(const struct FString& StoreId, const struct FString& RodId);
	void SetEventStep(int Step);
	void SetEventFlag(int Index, int flag);
	void SetEnableVibration(bool bEnabled);
	void SetDisplayGamma(float NewValue);
	void SetDebugEventStep(int Step);
	void SetBootFlag(bool InBootFlag);
	void SetBGMVolume(float NewVolume);
	void SetBetMoney_NoDispatcher(int NewMoney);
	void SetBetMoney(int NewMoney);
	void SetBattleRallyInfo(const struct FS3BattleRallySaveData& Info);
	void SetAcquisitionMap(TMap<struct FName, unsigned char>* InMap, TMap<struct FName, unsigned char>* InAchieveMap);
	void SetAcquisition(const struct FName& UniqueName);
	void ResetRetryFlag();
	void RemovePlayerBehavior(ES3PlayerBehavior InPlayerBehavior);
	void RemoveMemoSubEventOrder(int MemoId);
	void RemoveMainFlowWork(const struct FName& ID);
	void PushPlayerBehavior(ES3PlayerBehavior InPlayerBehavior);
	void PrepareLoadingScreen(ES3LoadingType Type);
	void PopPlayerBehavior();
	void OnEndLoadingScreen(class UWorld* World);
	void OnBeginLoadingScreen(const struct FString& MapName);
	bool IsTrialVersion();
	bool IsSwapDecideButton();
	bool IsReadHelp(const struct FName& ID);
	bool IsPlayedCutscene(const struct FName& ID);
	bool IsMainlandChina();
	bool IsEventStepMaxMin(int Min, int Max);
	bool IsEventStep(int Step);
	bool IsEnableVibration();
	bool IsDebugChangeStep();
	bool IsAcquisitionAchievement(const struct FName& UniqueName);
	bool IsAcquisition(const struct FName& UniqueName);
	void InitTalkScript();
	void InitStatus();
	void InitReward();
	void InitProgress(int Length);
	bool InitMemoFlag(int Length);
	void InitItem(int Length);
	void InitBattleStats();
	struct FRotator GetYesterdayRotation();
	struct FVector GetYesterdayPraceLocation();
	void GetWindParam(struct FVector* NormalVec, struct FRotator* Rot, float* Power);
	void GetWindowParam(ES3WindowType* Type, struct FString* OutResolution);
	void GetWearClothParts(bool bRyo, TMap<EClothPartsType, struct FName>* WearParts);
	bool GetVSync();
	float GetVoiceVolume();
	ES3VoiceLanguage GetVoiceLanguage();
	void GetUnlockedClothParts(bool bRyo, TArray<struct FName>* UnlockedParts);
	TArray<int> GetUnleadMemoIds();
	class US3TalkScriptManager* GetTalkScriptManager();
	TArray<struct FTalkScriptData> GetTalkScriptIndexData();
	TArray<bool> GetTabFlagUnread();
	int GetSystemFlagLength();
	int GetSystemFlag(int array_index);
	float GetSEVolume();
	void GetSaveItemNum(TArray<int>* NumArray);
	void GetSaveEventFlag(TArray<int>* FlagArray);
	TArray<struct FName> GetRewardPasswords();
	int GetRedemptionPoint();
	void GetReadHelpIdAll(TArray<struct FName>* IdArray);
	int GetProgressStep(const struct FString& Key);
	int GetProgressIndex(const struct FString& Key);
	ES3PlayerBehavior GetPlayerBehavior();
	class US3MiniGameProgressManager* GetMiniGameProgressManager();
	int GetMemoUnreadNum();
	TArray<int> GetMemoSubEventOrder();
	TArray<bool> GetMemoMapMask();
	int GetMemoLatestMotivationIndex();
	int GetMemoLatestIndex();
	class US3MemoFlagManager* GetMemoFlagManager();
	int GetMemoFlagLength();
	void GetMemoFlag(int MemoId, bool* flag, bool* Already);
	TArray<struct FMemoData> GetMemoDataArray();
	void GetMainFlowWorkMap(TMap<struct FName, struct FString>* WorkMap);
	struct FString GetMainFlowWork(const struct FName& ID);
	ES3Locale GetLocale();
	unsigned char GetKeyConfigValue(ES3KeyConfigType Type);
	int GetItemNum(const struct FString& ItemId);
	int GetItemLength();
	bool GetItemFlag(const struct FString& ItemId);
	void GetItemCheckFlagArray(TArray<bool>* FlagArray);
	bool GetItemCheckFlag(int Index);
	bool GetIsJumpYesterdayPrace();
	bool GetIsFirstContactState(const struct FString& NPCID);
	void GetInstalledRewards(TArray<ES3RewardType>* Rewards);
	class US3InputDeviceManager* GetInputDeviceManager();
	int GetHaveMoney();
	ES3GraphicPreset GetGraphicQuality();
	void GetFishingInfo(struct FString* StoreId, struct FString* RodId, struct FDateTime* RentalDate);
	int GetEventStep();
	int GetEventFlagLength();
	int GetEventFlag(int Index);
	float GetDisplayGamma();
	ES3DemoType GetDemoType();
	bool GetBootFlag();
	float GetBGMVolume();
	int GetBetMoney();
	class US3BattleStatsManager* GetBattleStatsManager();
	void GetBattleRallyInfo(struct FS3BattleRallySaveData* Info);
	class UBTL_CommandLibraryBase* GetBattleCommandLibrary();
	void GetAcquisitionMap(TMap<struct FName, unsigned char>* OutMap, TMap<struct FName, unsigned char>* OutAchieveMap);
	bool GetACPlayDateTime(const struct FName& ID, struct FDateTime* DateTime);
	void ForceCallOnStepChanged();
	void EnableAnsel(class UObject* Executor);
	void DisableAnsel(class UObject* Executor);
	void ClearPlayerBehaviorStack();
	void ClearGameModeCache();
	void ClearAnselObjects();
	void ChangeBattleCommandLibrary(class UClass* CommandLibraryClass);
	bool AddRewardPassword(const struct FName& Password);
	void AddRedemptionPoint(int AddPoint);
	void AddMemoSubEventOrder(int MemoId);
	void AddItemNum(const struct FString& ItemId, int Num);
	void AddHaveMoney(int AddMoney);
	void AddCutsceneId(const struct FName& ID);
	void AddBetMoney(int AddMoney);
};


// Class Shenmue3.S3AchievementManager
// 0x01D8 (0x0200 - 0x0028)
class US3AchievementManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TMap<ES3AchievementCountType, int>                 AchievementCountMap;                                      // 0x0038(0x0050) (ZeroConstructor)
	bool                                               bInitFinished;                                            // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class UDataTable*                                  BattleAttackTable;                                        // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0098(0x0050) UNKNOWN PROPERTY: SetProperty Shenmue3.S3AchievementManager.BattleSkillItems
	TArray<struct FS3AchievementCrudeDrugInfo>         HakkasonCrudeDrugs;                                       // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS3AchievementCrudeDrugInfo>         ChobuCrudeDrugs;                                          // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  GachaSetTable;                                            // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0110(0x0050) MISSED OFFSET
	TMap<int, struct FS3AchievementGachaSet>           GachaSetMap;                                              // 0x0160(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FS3AchievementMiniGameInfo>          HakkasonMiniGameInfos;                                    // 0x01B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS3AchievementMiniGameInfo>          ChobuMiniGameInfos;                                       // 0x01C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS3AchievementSubQuestInfo>          HakkasonSubQuestFlags;                                    // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS3AchievementSubQuestInfo>          ChobuSubQuestFlags;                                       // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS3AchievementUnlockInfo>            AchievementUnlockInfos;                                   // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AchievementManager");
		return ptr;
	}


	bool WriteAchievement(ES3AchievementType ID);
	void OnMoneyChanged(int NewMoney);
	void OnMiniGameHighScoreChanged(ES3MiniGameCategory Category, const struct FName& ScoreKey);
	void OnItemNumChanged(const struct FName& ItemId, int NewNum, int OldNum);
	void OnEventFlagChanged(int ArrayIndex, int SetFlags);
	void OnBetMoneyChanged(int NewBetMoney);
	void OnAcquisitionFlagChanged(const struct FName& UniqueName);
	bool IsGachaSetComplete(const struct FS3AchievementGachaSet& GachaSet);
	class US3GameInstance* GetGameInstance();
	int GetAchievementCount(ES3AchievementCountType Type);
	void AddAchievementCount(ES3AchievementCountType Type, int AddNum);
};


// Class Shenmue3.S3ActionBoxComponent
// 0x0020 (0x05B0 - 0x0590)
class US3ActionBoxComponent : public UBoxComponent
{
public:
	ETriggerAction                                     TriggerAction;                                            // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	struct FString                                     ActionId;                                                 // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ActionBoxComponent");
		return ptr;
	}

};


// Class Shenmue3.S3_ExclamationComponent
// 0x00A8 (0x0198 - 0x00F0)
class US3_ExclamationComponent : public UActorComponent
{
public:
	struct FString                                     CharacterID;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Category;                                                 // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             CueTypes;                                                 // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bInitializeOnPlay;                                        // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	TMap<struct FString, struct FS3_ExclamationCueList> CueListMap;                                               // 0x0128(0x0050) (ZeroConstructor)
	class USoundAtomCueSheet*                          CueSheet;                                                 // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USoundAtomCue*>                       AllCues;                                                  // 0x0180(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0190(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3_ExclamationComponent");
		return ptr;
	}


	class USoundAtomCue* SearchSpecificCue(const struct FString& CueName);
	void ListCuesByType(const struct FString& Type, TArray<class USoundAtomCue*>* Cues);
	void InitializeCueSheet();
};


// Class Shenmue3.S3PlayerControllerBase
// 0x0010 (0x0688 - 0x0678)
class AS3PlayerControllerBase : public APlayerController
{
public:
	bool                                               bAutoUpdateUIInputDevice;                                 // 0x0678(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	class US3PlayerInput*                              S3PlayerInput;                                            // 0x0680(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerControllerBase");
		return ptr;
	}


	void UpdateKeyBinding();
};


// Class Shenmue3.S3PlayerController
// 0x0098 (0x0720 - 0x0688)
class AS3PlayerController : public AS3PlayerControllerBase
{
public:
	TArray<class US3InteractionComponent*>             InteractionObjects;                                       // 0x0688(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, Transient)
	bool                                               bInteractionKeysOnly;                                     // 0x0698(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0699(0x0037) MISSED OFFSET
	TMap<struct FString, class USoundAtomCueSheet*>    AtomCueSheetMap;                                          // 0x06D0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerController");
		return ptr;
	}


	void UnregisterInteractionComponent(class US3InteractionComponent* Interaction);
	bool UnloadAtomCueSheet(const struct FString& CueSheetId);
	bool UnbindDebugInputDelegate(const struct FText& Name);
	void SetViewTargetWithBoomBlend(class AActor* NewViewTarget, const struct FVector& NewPivot, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, bool InvalidBoomBlend);
	void SetFOVOffset(float NewOffset, float BlendTime);
	void RegisterInteractionComponent(class US3InteractionComponent* NewInteraction);
	int NumberOfWatchItems();
	int NumberOfTeleportDelegates();
	int NumberOfInputDelegates();
	bool LoadAtomCueSheet(const struct FString& CueSheetId, const struct FName& Path);
	bool IsViewportInFocus();
	class US3DebugInputBox* InitDebugInputBox(class US3DebugInputBox* InputBox, int Index, bool bTeleport, struct FText* OutCategory, struct FText* OutName, struct FText* OutDescription);
	class UObject* GetWatchItem(int Index, struct FText* ObjectDisplayName, struct FText* PropertyDisplayName, struct FText* Description, struct FName* PropertyName, TEnumAsByte<ES3WatchPropertyTypes>* PropertyType, struct FString* EnumType);
	class UUserWidget* CreateDebugWidght(class UClass* WidgetClass);
	void ClearDebugTeleportDelegates();
	void ClearDebugInputDelegates();
	void ClearAtomCueSheet();
	void CancelViewTargetWithBlend(class AActor* OnlyIfMatch, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void CancelViewTarget(class AActor* OnlyIfMatch);
	void BindTeleportDelegate(const struct FText& Category, const struct FText& Name, const struct FText& Description, class UObject* ContextObject, const struct FScriptDelegate& Delegate);
	void BindDebugInputDelegate(const struct FText& Category, const struct FText& Name, const struct FText& Description, bool bHotKey, const struct FInputActionKeyMapping& Input, class UObject* ContextObject, const struct FScriptDelegate& Delegate);
	void AddPropertyWatch(const struct FText& ObjectDisplayName, const struct FText& PropertyDisplayName, const struct FText& Description, class UObject* WatchedObject, const struct FName& PropertyName);
};


// Class Shenmue3.S3AdventurePlayerController
// 0x0010 (0x0730 - 0x0720)
class AS3AdventurePlayerController : public AS3PlayerController
{
public:
	TArray<class AActor*>                              DisableControlActors;                                     // 0x0720(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AdventurePlayerController");
		return ptr;
	}


	struct FVector ProjectionXY(const struct FVector& InVec, bool InNormalize);
	bool PC_GetIsInFirstPersonMode();
	struct FVector PC_GetInteractionVector();
	bool IsOwnedByPlayer(class UObject* WorldContextObject, class UActorComponent* InComponent);
	bool IsDisablePadControl();
	struct FVector GetOffsetVectorZ(const struct FVector& InVec, float InOffsetZ);
	struct FVector GetOffsetVectorY(const struct FVector& InVec, float InOffsetY);
	struct FVector GetOffsetVectorX(const struct FVector& InVec, float InOffsetX);
	int GetHighestFloatIndex(TArray<float> InFloatArray);
	class UActorComponent* GetHavingTagChildComponent(class USceneComponent* InSceneComponent, const struct FName& InTag, bool InAllChildren);
	float GetFloatSign(float InValue);
	void EnablePadControl(class AActor* Executor);
	void DisablePadControl(class AActor* Executor);
	struct FVector CalcNormal(const struct FVector& InVec, bool InProjectionXZ);
	struct FVector CalcDirection(const struct FVector& InSrc, const struct FVector& InDst, bool InProjectionXY);
	float CalcAngleDegXY(const struct FVector& InSrcDir, const struct FVector& InDstDir);
};


// Class Shenmue3.S3AIController
// 0x0000 (0x0438 - 0x0438)
class AS3AIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AIController");
		return ptr;
	}

};


// Class Shenmue3.S3AnalyzeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3AnalyzeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AnalyzeFunctionLibrary");
		return ptr;
	}


	bool TryGetSocketLocation(class USceneComponent* Component, const struct FName& Socket, struct FVector* Location);
	bool IsPlayerPawn(class AActor* OtherActor);
	bool IsPlayerCollision(class UActorComponent* Component);
	bool IsOverlappingPlayer(class UPrimitiveComponent* Trigger, class UCapsuleComponent** PlayerCapsule);
	bool IsOverlappingAdventurePlayer(class UPrimitiveComponent* Trigger, class UCapsuleComponent** PlayerCapsule);
	bool IsAdventurePlayerCollision(class UActorComponent* Component);
	bool IsAdventurePlayer(class AActor* OtherActor);
	bool GetS3CharacterFromCollision(class UActorComponent* Component, class AS3Character** Character);
	struct FVector EstimateGroundLocation(class ACharacter* Pawn, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, const struct FVector& Location, float MaxAbove, float MaxBelow, float Radius);
};


// Class Shenmue3.S3AISettings
// 0x0010 (0x0038 - 0x0028)
class US3AISettings : public UObject
{
public:
	struct FVector2D                                   PathSpread;                                               // 0x0028(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   DefaultSpread;                                            // 0x0030(0x0008) (Edit, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AISettings");
		return ptr;
	}

};


// Class Shenmue3.S3AngleFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3AngleFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AngleFunctionLibrary");
		return ptr;
	}


	float MapToCircularRange(float Time, float RangeA, float RangeB, float OutRangeA, float OutRangeB);
	struct FS3AngleRange MakeAngleRangeFromLimits(float LHS, float RHS);
	bool IsWithinCircularRange(float Time, float RangeMin, float RangeMax);
	float GetNormalizedOutsideRange(const struct FS3AngleRange& Range, float Angle);
	float GetCycleDifferenceInDirection(float Prev, float Next, bool Forward);
	float GetCycleDifferenceAbs(float A, float B);
	float GetCloserCyclePosition(float CloseTo, float A, float B);
	float GetAngleOutsideRange(const struct FS3AngleRange& Range, float Angle);
	struct FS3AngleRange ExpandAngleRange(const struct FS3AngleRange& Range, float IncludeAngle);
	float ClampAngleToRange(const struct FS3AngleRange& Range, float Angle);
	bool AngleRangeContains(const struct FS3AngleRange& Range, float Angle);
};


// Class Shenmue3.S3AnimalAIController
// 0x0000 (0x0438 - 0x0438)
class AS3AnimalAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AnimalAIController");
		return ptr;
	}

};


// Class Shenmue3.S3Character
// 0x01A0 (0x08E0 - 0x0740)
class AS3Character : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0740(0x0018) MISSED OFFSET
	ES3CharacterType                                   CharacterType;                                            // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	class UBTL_MeshFaderComponent*                     MeshFader;                                                // 0x0760(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      MeshFaderClass;                                           // 0x0768(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3TagCharaComponent*                        TagCharaComponent;                                        // 0x0770(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	class US3AttentionComponent*                       AttentionComponent;                                       // 0x0778(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class US3ReactionComponent*                        ReactionComponent;                                        // 0x0780(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              RootMotionTranslationScale;                               // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DesiredSpeed;                                             // 0x078C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      VisibleDistanceFactorThesholds;                           // 0x0790(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class US3NPCMovementAnimationSet*                  MovementAnims;                                            // 0x07A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeFaceAnim;                                          // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePhysics;                                              // 0x07A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTalking;                                               // 0x07AA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x07AB(0x0005) MISSED OFFSET
	class US3TalkComponent*                            CurrentTalkComponent;                                     // 0x07B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3TalkComponent*                            TalkComponent_Normal;                                     // 0x07B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3BSComponent*                              TalkComponent_BS;                                         // 0x07C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bExistACCharacter;                                        // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x07C9(0x0007) MISSED OFFSET
	class UProceduralMeshComponent*                    ProceduralTalkCollision;                                  // 0x07D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient, IsPlainOldData)
	float                                              BSStartDistance;                                          // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	class UCapsuleComponent*                           BSCollision;                                              // 0x07E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               bPreviousTalkEnableIK;                                    // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowCanTalkArea;                                         // 0x07E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x07EA(0x0002) MISSED OFFSET
	float                                              CanTalkAngle;                                             // 0x07EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NPCFadeTime;                                              // 0x07F0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoLoadFaceAnimAsset;                                   // 0x07F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	class US3FaceAnimDataAsset*                        FaceMontageData;                                          // 0x07F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFaceAnimChanged;                                        // 0x0800(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	class US3LookAtFSMComponent*                       LookAtFSMComponent;                                       // 0x0810(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient, IsPlainOldData)
	class US3TurnAroundComponent*                      TurnAroundComponent;                                      // 0x0818(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBox                                        ActionBounds;                                             // 0x0820(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              DistanceFromPlayer;                                       // 0x083C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxDistanceFromPlayer;                                    // 0x0840(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsShowLowPriority;                                        // 0x0844(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	float                                              WalkSpeedScale;                                           // 0x0848(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LegLength;                                                // 0x084C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnableFootIK;                                            // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeClothes;                                           // 0x0851(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bClothesChanged;                                          // 0x0852(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIndoor;                                                  // 0x0853(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDetailsLog;                                              // 0x0854(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0855(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData09[0x28];                                      // 0x0855(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3Character.SkeletalMeshNearAsset
	unsigned char                                      UnknownData10[0x18];                                      // 0x0880(0x0018) MISSED OFFSET
	class USkeletalMesh*                               SkeletalMeshNear;                                         // 0x0898(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMeshFar;                                          // 0x08A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData)
	bool                                               bLeftFootOnGround;                                        // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRightFootOnGround;                                       // 0x08A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x08AA(0x0001) MISSED OFFSET
	TEnumAsByte<ES3CharacterGender>                    Gender;                                                   // 0x08AB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	struct FGameplayTag                                CharacterID;                                              // 0x08B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	unsigned char                                      UnknownData13[0x18];                                      // 0x08B8(0x0018) MISSED OFFSET
	bool                                               bStreamingHighPriority;                                   // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0xF];                                       // 0x08D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3Character");
		return ptr;
	}


	void StartCharaFadeOut(class AActor* Executor, float FadeTime);
	void StartCharaFadeIn(class AActor* Executor, float FadeTime);
	void StairsPreSetting(class AActor* StairActor);
	void SetupMesh();
	void SetUpdateTickEnabled(bool bEnable);
	void SetTagCharaName(const struct FName& CharaName);
	void SetSchedulePaused(bool bNewSchedulePaused);
	void SetNPCFadeTimeOnce(float FadeTime);
	void SetFaceAnimData(class US3FaceAnimDataAsset* InFaceMontageData);
	void SetDistanceFromPlayer(float InDistanceFromPlayer, bool bInBattleMode);
	void SetAttachObjectHiddenInGame(bool bNewHidden);
	bool ReturnOutOfWorld();
	void ResetFadeMaterial(class USkeletalMeshComponent* MeshComponent);
	void PauseAvoidance(bool IsPaused);
	void OnStartStairs();
	void OnNPCUninitialized();
	void OnNPCInitialized();
	void OnMeshVisibilityChanged(bool Visible);
	void OnEndStairs();
	void OnDoorAreaOutsideEndOverlap(class AS3GimmickOpenDoor* Door);
	void OnDoorAreaOutsideBeginOverlap(class AS3GimmickOpenDoor* Door);
	void OnDoorAreaEndOverlap(class AS3GimmickOpenDoor* Door);
	void OnDoorAreaBeginOverlap(class AS3GimmickOpenDoor* Door);
	bool IsSchedulePaused();
	bool IsRespawn();
	bool IsPauseAvoidance();
	bool IsMeshFadeOutComplete();
	bool IsMeshFadeInProgress();
	bool IsMeshFadeInComplete();
	bool IsIgnoringPlayerWhenMoving();
	void IgnorePlayerWhenMoving(bool bIgnore);
	void HandleTeleportSucceeded(bool bIsATest);
	struct FName GetTagCharaName();
	class US3TagCharaComponent* GetTagCharaComponent();
	TEnumAsByte<ES3HandednessType> GetProfileHandedness();
	ES3NPCStreamingState GetNPCStreamingState();
	ES3NPCMeshState GetNPCMeshState();
	float GetNPCFadeTime();
	float GetNPCDefaultFadeTime();
	float GetMeshFadeAlpha();
	class AS3GimmickOpenDoor* GetDoorActor();
	struct FName GetClothCharaName();
	void DestroyCameraCollision();
	void DestroyBSCollision();
	bool CreateProceduralTalkCollision(int InSides, float InCanTalkAngle, float InCanTalkRadius, float InHeight);
	void CreateCameraCollision(float Radius, float HalfHeight);
	void CreateBSCollision();
	bool CheckInRangePlayer(float Distance);
	bool CanDisableNPCTick();
	bool CalculateShoveVectorWithBones(class AS3Character* ShovedCharacter, float ExtraDistance, struct FVector* OutShove);
	bool CalculateShoveVector(class AS3Character* ShovedCharacter, float ExtraDistance, struct FVector* OutShove);
	void AccelerateCharaFadeOut(float MaxAlpha);
};


// Class Shenmue3.S3AnimalCharacter
// 0x0000 (0x08E0 - 0x08E0)
class AS3AnimalCharacter : public AS3Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AnimalCharacter");
		return ptr;
	}

};


// Class Shenmue3.MessageWaitTask
// 0x0000 (0x0060 - 0x0060)
class UMessageWaitTask : public UTalkEventTaskBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MessageWaitTask");
		return ptr;
	}

};


// Class Shenmue3.S3AnimationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3AnimationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AnimationFunctionLibrary");
		return ptr;
	}


	class US3FaceAnimDataAsset* LoadFaceAnimation(const struct FName& CharaTag, class USkeletalMeshComponent* SkeletalMeshComp);
};


// Class Shenmue3.S3AnimCutsceneInstance
// 0x0000 (0x03C0 - 0x03C0)
class US3AnimCutsceneInstance : public UCineAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AnimCutsceneInstance");
		return ptr;
	}


	void SetUpdateEnabled(bool bEnabled);
	void SetEyeBlinkEnabled(bool bEnabled);
	void SetClipperEnabled(bool bEnabled);
	bool IsUpdateEnabled();
	bool IsEyeBlinkEnabled();
	bool IsClipperEnabled();
};


// Class Shenmue3.S3AnimInstance
// 0x0000 (0x0360 - 0x0360)
class US3AnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AnimInstance");
		return ptr;
	}


	bool IsReadyTalk();
};


// Class Shenmue3.S3AnimNotify_BlockStateChange
// 0x0000 (0x0030 - 0x0030)
class US3AnimNotify_BlockStateChange : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AnimNotify_BlockStateChange");
		return ptr;
	}

};


// Class Shenmue3.S3AnimNotify_PlayAtomCue
// 0x0000 (0x0038 - 0x0038)
class US3AnimNotify_PlayAtomCue : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AnimNotify_PlayAtomCue");
		return ptr;
	}


	class UAtomComponent* PlaySoundEditor(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, class USoundAttenuation* AttenuationSettings);
};


// Class Shenmue3.S3AppointSystemManager
// 0x0010 (0x0338 - 0x0328)
class AS3AppointSystemManager : public AActor
{
public:
	int                                                ChangeStep;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpPoint;                                                // 0x032C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AppointSystemManager");
		return ptr;
	}

};


// Class Shenmue3.S3AreaJumpBase
// 0x0020 (0x0048 - 0x0028)
class US3AreaJumpBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AreaJumpBase");
		return ptr;
	}


	void SetYesterdayPraceLocationRotation(const struct FVector& PlayerLocation, const struct FRotator& PlayerRotation);
	void SetIsJumpYesterdayPrace(bool IsJump);
	struct FRotator GetYesterdayRotation();
	struct FVector GetYesterdayPraceLocation();
	bool GetIsJumpYesterdayPrace();
};


// Class Shenmue3.S3AreaFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3AreaFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AreaFunctionLibrary");
		return ptr;
	}


	bool IsInValidStreamingArea(class AActor* Actor);
	ES3Where GetLevelEnum(const struct FString& LevelName, bool Detail);
	ES3Where GetCurrentLevelEnum(class UObject* WorldContextObject, bool Detail);
};


// Class Shenmue3.S3AreaManager
// 0x0078 (0x03A0 - 0x0328)
class AS3AreaManager : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnFinishLevelLoaded;                                      // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinishLevelUnloaded;                                    // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class AS3AreaVolume*>                       AreaVolumes;                                              // 0x0348(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	TArray<struct FS3LevelStreamInfo>                  LevelStreamInfoArray;                                     // 0x0360(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0370(0x0008) MISSED OFFSET
	TArray<int>                                        OrderIndexArray;                                          // 0x0378(0x0010) (ZeroConstructor)
	TArray<class ALevelStreamingVolume*>               DisabledStreamingVolumes;                                 // 0x0388(0x0010) (ZeroConstructor)
	class US3AreaLightManagerComponent*                AreaLightManager;                                         // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AreaManager");
		return ptr;
	}


	bool S3UnloadLevels(const struct FName& ID, TArray<struct FName> OverrideLevelNames, bool bAbsolute);
	bool S3LoadLevels(const struct FName& ID, TArray<struct FName> LevelNames, bool bDisableStreamingVolume, bool bVisibleAfterLoad);
	class AS3BuildingStaticMeshActor* IsTargetActorInBuilding(class AActor* Actor, bool bUsePoint, bool* bInBuilding);
	bool IsEnabledStreamingVolume(class ULevelStreaming* Level);
	bool GetNeedLevels(const struct FVector& Point, float SphereRadius, TArray<struct FName>* LevelNames);
	struct FString GetAreaId(const struct FVector& Point, float SphereRadius, bool bDirectValue);
	void EnableStreamingVolume(const struct FName& ID);
	void DisableStreamingVolume(const struct FName& ID);
	bool CanUnloadLevel(class ULevelStreaming* Level, const struct FName& LevelName, bool bForce);
	bool CanLoadLevel(class ULevelStreaming* Level);
	void AddVolume(class AS3AreaVolume* Volume);
};


// Class Shenmue3.S3AreaLightManagerComponent
// 0x00E8 (0x01D8 - 0x00F0)
class US3AreaLightManagerComponent : public UActorComponent
{
public:
	class AS3AreaManager*                              AreaManager;                                              // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AS3SpotLight*>                        SpotLightList;                                            // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AS3PointLight*>                       PointLightList;                                           // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AS3DirectionalLight*>                 DirectionalLightList;                                     // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FAreaSpotLightList>    SpotLightAreaMap;                                         // 0x0128(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FAreaPointLightList>   PointLightAreaMap;                                        // 0x0178(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AreaLightManagerComponent");
		return ptr;
	}


	void GetCertainRangeSpotLightList(const struct FVector& WorldLocation, float SphereRadius, TArray<class AS3SpotLight*>* OutSpotLightList);
	void GetCertainRangePointLightList(const struct FVector& WorldLocation, float SphereRadius, TArray<class AS3PointLight*>* OutPointLightList);
	void GetAreaSpotLightList(const struct FVector& WorldLocation, TArray<class AS3SpotLight*>* OutSpotLightList);
	void GetAreaPointLightList(const struct FVector& WorldLocation, TArray<class AS3PointLight*>* OutPointLightList);
};


// Class Shenmue3.S3AreaVolume
// 0x0038 (0x0398 - 0x0360)
class AS3AreaVolume : public AVolume
{
public:
	bool                                               bRegister;                                                // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FTimerHandle                                RegisterHandle;                                           // 0x0368(0x0008)
	struct FString                                     AreaId;                                                   // 0x0370(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                AreaPriority;                                             // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	TArray<struct FName>                               NeedLevels;                                               // 0x0388(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AreaVolume");
		return ptr;
	}


	void RegisterManager();
};


// Class Shenmue3.S3AssetCullDistanceVolume
// 0x0020 (0x0398 - 0x0378)
class AS3AssetCullDistanceVolume : public ACullDistanceVolume
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0378(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AssetCullDistanceVolume");
		return ptr;
	}


	void OnGraphicPresetChanged();
};


// Class Shenmue3.S3AssetChunkManager
// 0x0040 (0x0068 - 0x0028)
class US3AssetChunkManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	ES3AssetChunkId                                    PendingChunkId;                                           // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ES3Where                                           PendingLocationId;                                        // 0x0041(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                PendingEventStep;                                         // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnInstallCanceled;                                        // 0x0048(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInstallFinished;                                        // 0x0058(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AssetChunkManager");
		return ptr;
	}


	bool ShowInstallDialog();
	void SetPendingLocationId(ES3Where LocationId, int EventStep);
	void SetPendingChunkId(ES3AssetChunkId ChunkId);
	bool IsChunkInstalled(ES3AssetChunkId ChunkId);
	ES3AssetChunkId GetChunkIdFromLocation(ES3Where LocationId);
};


// Class Shenmue3.S3AttentionComponent
// 0x00F0 (0x0680 - 0x0590)
class US3AttentionComponent : public UCapsuleComponent
{
public:
	TArray<class UObject*>                             PreloadAssets;                                            // 0x0590(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A0(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3AttentionComponent.PreloadSoftAssets
	struct FString                                     LookScript;                                               // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EAttentionLookScriptPlayCondition                  LookScriptPlayCondition;                                  // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	struct FString                                     ActionScript;                                             // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EAttentionCameraDirection                          CameraDirection;                                          // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05D9(0x0003) MISSED OFFSET
	float                                              CameraDistance;                                           // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZoomDistance;                                             // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NextTraceDistance;                                        // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FreeMoveEnable;                                           // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ZoomButtonEnable;                                         // 0x05E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TalkableNPC;                                              // 0x05EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawCenterCursor;                                         // 0x05EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideNormal;                                           // 0x05EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                DisableMinStep;                                           // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DisableMaxStep;                                           // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TraceEnable;                                              // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttentionCondition                                ConditionType;                                            // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0602(0x0006) MISSED OFFSET
	struct FString                                     ConditionId;                                              // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ConditionIdMax;                                           // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ConditionScript;                                          // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EventId;                                                  // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ButtonWait;                                               // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOncePlayEvent;                                           // 0x0649(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3RewardType                                      RewardFeed;                                               // 0x064A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x064B(0x0005) MISSED OFFSET
	class UTalkScript*                                 ACEventScript;                                            // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FS3AttentionEventChangeFlagInfo             ChangeFlagInfo;                                           // 0x0658(0x0008) (Edit, BlueprintVisible)
	bool                                               IsFinished;                                               // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledBackerEvent;                                      // 0x0661(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EdgeFlag;                                                 // 0x0662(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0663(0x0005) MISSED OFFSET
	class US3AttentionComponent*                       AdjacentComponent;                                        // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FS3AttentionLinkTargetData>          TargetDataList;                                           // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AttentionComponent");
		return ptr;
	}


	void SetFinishedActionEvent(bool Finished);
	void SetEnabledBackerEvent(bool Enabled);
	bool GetEnabledBackerEvent();
};


// Class Shenmue3.S3AttentionManager
// 0x0010 (0x0338 - 0x0328)
class AS3AttentionManager : public AActor
{
public:
	TArray<class AActor*>                              AttentionActors;                                          // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AttentionManager");
		return ptr;
	}

};


// Class Shenmue3.S3AvoidanceManager
// 0x00A0 (0x0180 - 0x00E0)
class US3AvoidanceManager : public UAvoidanceManager
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00E0(0x0050) MISSED OFFSET
	TMap<int, class US3PathFollowingComponent*>        PathFollowingComponents;                                  // 0x0130(0x0050) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AvoidanceManager");
		return ptr;
	}

};


// Class Shenmue3.PlayBgmTask
// 0x0038 (0x0098 - 0x0060)
class UPlayBgmTask : public UTalkEventTaskBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.PlayBgmTask.BGM_path
	struct FName                                       BGM_ID;                                                   // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bRestartBgm;                                              // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.PlayBgmTask");
		return ptr;
	}

};


// Class Shenmue3.S3BattleRallyDataAsset
// 0x0100 (0x0130 - 0x0030)
class US3BattleRallyDataAsset : public UDataAsset
{
public:
	struct FName                                       CharaName;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3BattleRallyDataAsset.AdventureMesh
	unsigned char                                      UnknownData01[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3BattleRallyDataAsset.BattleMesh
	struct FName                                       LevelName;                                                // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InitialStep;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FS3BLSubFlag>                        InitialFlags;                                             // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               FirstWordsLabels;                                         // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               RewardItems;                                              // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       CourseNameLabel;                                          // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AreaName;                                                 // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              limitTime;                                                // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData04[0x28];                                      // 0x00DC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3BattleRallyDataAsset.IntroScript
	unsigned char                                      UnknownData05[0x28];                                      // 0x0108(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3BattleRallyDataAsset.CompleteScript

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BattleRallyDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3BattleStatsManager
// 0x00A8 (0x00D0 - 0x0028)
class US3BattleStatsManager : public UObject
{
public:
	class US3PlayerExpCollection*                      SkillExp;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class US3PlayerExpCollection*                      KunFuExp;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class US3DerivedPlayerLevel*                       VitalityStat;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class US3DerivedPlayerLevel*                       AttackStat;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class US3DerivedPlayerLevel*                       LevelStat;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3BattleStatsManager.BattleCharacterAsset
	TArray<struct FName>                               DebugSkillItemOrder;                                      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BaseMaxHealth;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinHealth;                                                // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthCurveFactor;                                        // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KunFuHealthMultiplier;                                    // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ManualSkillSetCount;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDynamicStatCalculation;                               // 0x009C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	TArray<struct FS3SkillSet>                         SkillSets;                                                // 0x00A0(0x0010) (ZeroConstructor)
	float                                              Health;                                                   // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedSkillSetIndex;                                    // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DifficultySetting;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealthRatio;                                              // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxHealthRatio;                                           // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttackDamageBonus;                                        // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BattleStatsManager");
		return ptr;
	}


	void SetSkillsForSet(TArray<struct FName> SkillIds, int SkillSetIndex);
	void SetSkill(const struct FName& SkillId, int SkillSetIndex, int SkillIndex);
	void SetLevelBasedStatCalculation();
	void SetHealthRatio(float Value);
	void SetHealth(float Value);
	void SetFixedStatCalculation(float FixedHealthRatio, float FixedAttackBonus);
	void SetDojoRank(const struct FName& Dojo, int Rank);
	void SetDifficultySetting(int NewDifficulty);
	void SetBattleCharacterAsset();
	void SelectSkillSet(int Index);
	bool IsMaxHealth();
	bool IsAutoSkillSetSelected();
	bool InitBlueprint();
	class US3DerivedPlayerLevel* GetVitalityLevelMan();
	class US3PlayerExpCollection* GetSkillExpMan();
	int GetSelectedSkillSetIndex();
	void GetSelectedSkillSet(TArray<struct FName>* Skills);
	class US3DerivedPlayerLevel* GetPlayerLevelMan();
	float GetMaxHealthRatio();
	float GetMaxHealth();
	int GetManualSkillSetCount();
	class US3PlayerExpCollection* GetKunFuExpMan();
	float GetHealthRatio();
	float GetHealth();
	class US3GameInstance* GetGameInstance();
	int GetDojoRankIndex(const struct FName& Dojo);
	int GetDojoRank(const struct FName& Dojo);
	int GetDifficultySetting();
	void GetBattleCharacterAsset();
	float GetBaseMaxHealth();
	class US3DerivedPlayerLevel* GetAttackLevelMan();
	float GetAttackBonus();
	void Debug_SetVitalityLevel(int TargetLevel);
	void Debug_SetPlayerLevel(int TargetLevel);
	void Debug_SetAttackLevel(int TargetLevel);
};


// Class Shenmue3.S3BellTowerGimmick
// 0x0010 (0x0338 - 0x0328)
class AS3BellTowerGimmick : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	bool                                               bSwitchClothRyo;                                          // 0x0330(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0331(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BellTowerGimmick");
		return ptr;
	}


	struct FName GetClothCharaName();
};


// Class Shenmue3.S3BgmArea
// 0x0028 (0x0350 - 0x0328)
class AS3BgmArea : public AActor
{
public:
	bool                                               bAutoActivate;                                            // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInArea;                                                // 0x0329(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x032A(0x0002) MISSED OFFSET
	struct FVector                                     AreaSize;                                                 // 0x032C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class USoundAtomCue*                               SoundAtomCue;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAtomCueSheet*                          SoundAtomCueSheet;                                        // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BgmArea");
		return ptr;
	}


	void OnActorEndOverlapImpl(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnActorBeginOverlapImpl(class AActor* OverlappedActor, class AActor* OtherActor);
	struct FS3BgmAreaSourceInfo GetSourceInfo();
};


// Class Shenmue3.S3AttentionController
// 0x0000 (0x0328 - 0x0328)
class AS3AttentionController : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AttentionController");
		return ptr;
	}

};


// Class Shenmue3.S3BattleRallyManager
// 0x0018 (0x0340 - 0x0328)
class AS3BattleRallyManager : public AActor
{
public:
	bool                                               bActivate;                                                // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRewardResultComplete;                                   // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BattleRallyManager");
		return ptr;
	}


	void ShowRewardResult();
	void ClearInventoryItems();
	bool CheckRewardAnnouncement();
};


// Class Shenmue3.S3BgmPlayer
// 0x0018 (0x0348 - 0x0330)
class AS3BgmPlayer : public AAtomSound
{
public:
	struct FName                                       ID;                                                       // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               AtomCue;                                                  // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBgmPriority                                       Priority;                                                 // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BgmPlayer");
		return ptr;
	}

};


// Class Shenmue3.S3BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BlueprintFunctionLibrary");
		return ptr;
	}


	void ZSortArr_text(TArray<struct FText> arg, bool dsc, bool opt, TArray<struct FText>* resAr, TArray<int>* resId);
	void ZSortArr_string(TArray<struct FString> arg, bool dsc, bool opt, TArray<struct FString>* resAr, TArray<int>* resId);
	void ZSortArr_object(TArray<class UObject*> arg, bool dsc, TArray<class UObject*>* resAr, TArray<int>* resId);
	void ZSortArr_name(TArray<struct FName> arg, bool dsc, TArray<struct FName>* resAr, TArray<int>* resId);
	void ZSortArr_locate(TArray<struct FVector> arg, const struct FVector& Loc, bool dsc, TArray<struct FVector>* resAr, TArray<int>* resId, TArray<float>* resDs);
	void ZSortArr_int(TArray<int> arg, bool dsc, TArray<int>* resAr, TArray<int>* resId);
	void ZSortArr_float(TArray<float> arg, bool dsc, TArray<float>* resAr, TArray<int>* resId);
	void ZSortArr_actorLocate(TArray<class AActor*> arg, class AActor* Loc, bool dsc, TArray<class AActor*>* resAr, TArray<int>* resId, TArray<float>* resDs);
	void ZArrayFindMaxValue_int(TArray<int> arr, int* Index);
	bool UpdateTextureStreamingStatus(class UPrimitiveComponent* Component);
	void UpdateTextureStreaming();
	void UpdateCaptureSceneDeferred(class USceneCaptureComponent2D* Component);
	bool TryReimport(class UObject* Obj, bool bNotification);
	bool TestComponentOverlapComponent(class UPrimitiveComponent* PrimitiveA, class UPrimitiveComponent* PrimitiveB);
	bool StreamOutTextureData(int RequiredMemorySize);
	float SplineConvertInputKeyToDistance(class USplineComponent* spline, float InputKey);
	void SetTextureForceResidentFlag(class USkeletalMeshComponent* Component, bool bForceMiplevelsToBeResident);
	void SetStaticMeshMaterial(class UObject* WorldContextObject, class UStaticMesh* Mesh, class UMaterialInterface* Material, int MaterialIndex);
	bool SetSequenceToMontage(class UAnimMontage* AnimMontage, class UAnimSequenceBase* AnimSequence, const struct FName& Section, const struct FName& SlotName, float Time);
	struct FPostProcessSettings SetPostProcessShadowsGamma(const struct FPostProcessSettings& Settings, const struct FVector4& Value);
	struct FPostProcessSettings SetPostProcessShadowsGain(const struct FPostProcessSettings& Settings, const struct FVector4& Value);
	struct FPostProcessSettings SetPostProcessShadowsContrast(const struct FPostProcessSettings& Settings, const struct FVector4& Value);
	struct FPostProcessSettings SetPostProcessGlobalSaturation(const struct FPostProcessSettings& Settings, const struct FVector4& Value);
	struct FPostProcessSettings SetPostProcessGlobalGamma(const struct FPostProcessSettings& Settings, const struct FVector4& Value);
	struct FPostProcessSettings SetPostProcessGlobalGain(const struct FPostProcessSettings& Settings, const struct FVector4& Value);
	struct FPostProcessSettings SetPostProcessGlobalContrast(const struct FPostProcessSettings& Settings, const struct FVector4& Value);
	void SetMobility(class UPrimitiveComponent* Component, int NewMobility);
	void SetIntParameterValue(class UObject* WatchedObject, const struct FName& PropertyName, int NewValue, bool* bHasParameter);
	bool SetInputPriority(class AActor* Actor, int NewPriority);
	void SetForceMipStreaming(class UPrimitiveComponent* Component, bool bNewStreaming);
	void SetFloatParameterValue(class UObject* WatchedObject, const struct FName& PropertyName, float NewValue, bool* bHasParameter);
	void SetDisableWorldRendering(class UObject* WorldContextObject, bool bDisabled);
	void SetDisableClothSimulation(class USkeletalMeshComponent* Mesh, bool bDisableClothSimulation);
	void SetDisableAnsel(class UObject* WorldContextObject, bool bDisabled);
	void SetDecalFadeScreenSize(class UDecalComponent* DecalComponent, float NewFadeScreenSize);
	void SetCanEverAffectNavigation(class UActorComponent* Component, bool bRelevant);
	void SetByteParameterValue(class UObject* WatchedObject, const struct FName& PropertyName, unsigned char NewValue, bool* bHasParameter);
	void SetBoolParameterValue(class UObject* WatchedObject, const struct FName& PropertyName, bool bNewValue, bool* bHasParameter);
	bool SaveStringToFile(const struct FString& SaveText, const struct FString& Filename);
	void RunShaderTest(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, class UTexture* InputTexture, int HalfWidth, float Sigma, float Radius);
	void ResetMatineeTimeDilation(class UObject* WorldContextObject);
	void RenderMaterialTile(class UObject* WorldContext, class UMaterialInterface* InMaterial, class UTextureRenderTarget2D* InRenderTarget, bool bFrontView);
	void PrintS3Warning(const struct FString& inString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor);
	void PrintS3Error(const struct FString& inString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor);
	void PlaySound(class UObject* WorldContextObject, class USoundAtomCue* Sound);
	void MakeInputActionKeyMapping(const struct FName& ActionName, const struct FKey& Key, bool bShift, bool bCtrl, bool bAlt, bool bCmd, struct FInputActionKeyMapping* Action);
	void MakeAssetId(class UObject* Asset);
	void MakeAssetClassId(class UClass* AssetClass);
	void LoadObject(class UObject* Target, class UClass* ObjectClass, const struct FString& Path, class UObject** OutObject);
	class UObject* LoadAssetSync();
	class UClass* LoadAssetClassSync();
	bool IsStreamingLevelAlwaysLoaded(class UObject* WorldContextObject, const struct FName& LevelName);
	bool IsInUseByLevel(class UObject* Object);
	bool IsInRangeTimeEvent(ES3DayTimeEvent CheckTime, ES3DayTimeEvent StartTime, ES3DayTimeEvent EndTime);
	bool IsInRangeTime(float CheckTime, float StartTime, float EndTime);
	bool IsCurrentAnimState(class UAnimInstance* AnimInstance, const struct FName& MachineName, const struct FName& StateName);
	void GetWalkCycleInfo(float StartMarkerA, float StartMarkerB, float Time, bool* OutPreviousMarkerIsA, float* OutTimeSincePreviousMarker, float* OutTimeToNextMarker);
	float GetVolumeMultiplier(class UAtomComponent* Component);
	float GetTimeForEvent(class UTimelineComponent* Timeline, const struct FScriptDelegate& Event);
	void GetStreamingVolumesForStreamingLevel(class UObject* WorldContextObject, const struct FName& LevelName, TArray<class ALevelStreamingVolume*>* StreamingVolumes);
	void GetStaticSwitchParameterValue(class UObject* WorldContextObject, class UMaterialInterface* Material, const struct FName& ParameterName, bool* bExist, bool* bValue);
	class UAnimSequenceBase* GetSequenceFromMontage(class UAnimMontage* AnimMontage, const struct FName& Section, const struct FName& SlotName, float Time, float* TimeInAnimation);
	void GetResourceSizeDetail(class UObject* Object, int* DedicatedSystemMemoryBytes, int* SharedSystemMemoryBytes, int* DedicatedVideoMemoryBytes, int* SharedVideoMemoryBytes, int* UnknownMemoryBytes);
	int GetResourceSize(class UObject* Object);
	struct FString GetProjectVersion();
	class UObject* GetPlaceLevel(class AActor* Actor);
	float GetMontageWeight(class UAnimInstance* AnimInstance, class UAnimMontage* Montage);
	void GetMontageSectionRange(class UAnimMontage* Montage, const struct FName& Section, float* StartSectionPosition, float* EndSectionPosition);
	void GetMontageAnimMetaData(class UAnimMontage* Montage, TArray<class UAnimMetaData*> OutAnimMetaData);
	void GetLevelSequenceSubtitleLabels(class ULevelSequence* InLevelSequence, const struct FName& EventName, const struct FName& CharacterName, TArray<struct FName>* OutLabels);
	bool GetItemNamesFromEnum(const struct FString& EnumName, TArray<struct FText>* EnumItems);
	int GetIntParameterValue(class UObject* WatchedObject, const struct FName& PropertyName, bool* bHasParameter);
	void GetIntParameterMinMaxFromClass(class UClass* WatchedObjectClass, const struct FName& PropertyName, bool* bHasParameter, bool* bHasMin, int* Min, bool* bHasMax, int* Max);
	void GetIntParameterMinMax(class UObject* WatchedObject, const struct FName& PropertyName, bool* bHasParameter, bool* bHasMin, int* Min, bool* bHasMax, int* Max);
	int GetInputPriority(class AActor* Actor);
	float GetFloatParameterValue(class UObject* WatchedObject, const struct FName& PropertyName, bool* bHasParameter);
	void GetFloatParameterMinMaxFromClass(class UClass* WatchedObjectClass, const struct FName& PropertyName, bool* bHasParameter, bool* bHasMin, float* Min, bool* bHasMax, float* Max);
	void GetFloatParameterMinMax(class UObject* WatchedObject, const struct FName& PropertyName, bool* bHasParameter, bool* bHasMin, float* Min, bool* bHasMax, float* Max);
	float getDistance(const struct FVector& v1, const struct FVector& v2, bool sw);
	struct FString GetCopyrightNotice();
	unsigned char GetByteParameterValue(class UObject* WatchedObject, const struct FName& PropertyName, bool* bHasParameter);
	bool GetBoolParameterValue(class UObject* WatchedObject, const struct FName& PropertyName, bool* bHasParameter);
	bool GetBoneTransformFromSequence(class USkeletalMeshComponent* SkelMesh, class UAnimSequenceBase* AnimSequence, const struct FName& BoneName, float Time, TEnumAsByte<ERelativeTransformSpace> Space, bool bExtractRootMotion, struct FTransform* OutTransform);
	bool GetBoneTransformFromMontage(class USkeletalMeshComponent* SkelMesh, class UAnimMontage* AnimMontage, const struct FName& Section, const struct FName& SlotName, const struct FName& BoneName, float Time, TEnumAsByte<ERelativeTransformSpace> Space, struct FTransform* OutTransform);
	struct FRotator GetBoneRotation(class USkeletalMeshComponent* Mesh, const struct FName& BoneName, TEnumAsByte<EBoneSpaces> Space);
	struct FVector GetBoneLocation(class USkeletalMeshComponent* Mesh, const struct FName& BoneName, TEnumAsByte<EBoneSpaces> Space);
	void GetAttachedActorsOfClass(class AActor* AttachParent, class UClass* ActorClass, TArray<class AActor*>* OutActors);
	class AActor* GetAttachedActorOfClass(class AActor* AttachParent, class UClass* ActorClass);
	struct FVector GetAssetUserDataCharaScale(class USkeletalMesh* Mesh);
	float GetAnimTimeFraction(class UAnimInstance* AnimInstance, const struct FName& MachineName, const struct FName& StateName);
	float GetAnimTime(class UAnimInstance* AnimInstance, const struct FName& MachineName, const struct FName& StateName);
	float GetAnimLength(class UAnimInstance* AnimInstance, const struct FName& MachineName, const struct FName& StateName);
	void GetAllActorsByLevelName(class UObject* WorldContextObject, const struct FName& PackageName, class UClass* ActorClass, TArray<class AActor*>* OutActors);
	void GetActorsOfClassFromArray(TArray<class AActor*> InActors, class UClass* ActorClass, TArray<class AActor*>* OutActors);
	class AActor* GetActorOfClassFromArray(TArray<class AActor*> InActors, class UClass* ActorClass);
	void ForceUpdateSkylightComponents(class UObject* WorldContext);
	void ForceUpdateOverlaps(class USceneComponent* Component);
	void ForceUpdateAnimDynamics(class USkeletalMeshComponent* Mesh, bool bReset, int LoopCount, float LoopDeltaTime);
	void ForceUpdateAnimation(class USkeletalMeshComponent* Mesh, float DeltaTime);
	bool FilterAnalogInputEvent(const struct FAnalogInputEvent& Input, const struct FKey& Filter, float* Value);
	struct FTransform ExtractSequenceRootMotionFromTrackRange(class UAnimSequence* Sequence, float StartTrackPosition, float EndTrackPosition);
	struct FTransform ExtractMontageRootMotionFromTrackRange(class UAnimMontage* Montage, float StartTrackPosition, float EndTrackPosition);
	void DrawBoxNonAsset(const struct FVector2D& Position, const struct FVector2D& Size, const struct FSlateBrush& Brush, const struct FLinearColor& Tint, struct FPaintContext* Context);
	bool DisableStaticSwitchOverride(class UObject* WorldContextObject, class UMaterialInstance* Material, const struct FName& ParameterName);
	struct FTransform CalculateSequenceRootMotionAlignment(class UAnimSequence* Sequence, const struct FTransform& AlignmentTransform, float AlignmentAnimTime, const struct FTransform& RelativeTransform, float CurrentAnimTime, float RootMotionScale);
	struct FTransform CalculateMontageRootMotionAlignment(class UAnimMontage* Montage, const struct FTransform& AlignmentTransform, float AlignmentAnimTime, const struct FTransform& RelativeTransform, float CurrentAnimTime, float RootMotionScale);
};


// Class Shenmue3.S3GameMode
// 0x0300 (0x0720 - 0x0420)
class AS3GameMode : public AS3SequencerGameMode
{
public:
	struct FScriptMulticastDelegate                    OnChangePlayerController;                                 // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnableFlyCam;                                            // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDisableSubtitles;                                   // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLoadSaveData;                                      // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0433(0x0005) MISSED OFFSET
	TArray<class UMaterialInstance*>                   CacheMaterialInstances;                                   // 0x0438(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<EPausePriority>                             PausePriorities;                                          // 0x0448(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              PauseActors;                                              // 0x0458(0x0010) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnBeginPause;                                             // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndPause;                                               // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      AppointSystemManagerClass;                                // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3AppointSystemManager*                     AppointSystemManager;                                     // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AreaManagerClass;                                         // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3AreaManager*                              AreaManager;                                              // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      AttentionControllerClass;                                 // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AS3AttentionController*                      AttentionController;                                      // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BattleSpawnerClass;                                       // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ABTL_BattleSpawner*                          BattleSpawner;                                            // 0x04C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BgmManagerClass;                                          // 0x04C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3BgmManager*                               BgmManager;                                               // 0x04D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class USoundAtomCueSheet*>                  BgmPreloadCues;                                           // 0x04D8(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      SoundManagerClass;                                        // 0x04E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3SoundManager*                             SoundManager;                                             // 0x04F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               VolumeDownCue;                                            // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ClipperManagerClass;                                      // 0x0500(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3Clipper*                                  ClipperManager;                                           // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ClothManagerClass;                                        // 0x0510(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3ClothManager*                             ClothManager;                                             // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CutsceneManagerClass;                                     // 0x0520(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3CutsceneManager*                          CutsceneManager;                                          // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CutsceneTimeScheduleManagerClass;                         // 0x0530(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3CutsceneTimeScheduleManager*              CutsceneTimeScheduleManager;                              // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DoorManagerClass;                                         // 0x0540(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3DoorManager*                              DoorManager;                                              // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EventIconManagerClass;                                    // 0x0550(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3EventIconManager*                         EventIconManager;                                         // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GimmickManagerClass;                                      // 0x0560(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3GimmickManager*                           GimmickManager;                                           // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HintTalkManagerClass;                                     // 0x0570(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3HintTalkManager*                          HintTalkManager;                                          // 0x0578(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemSpawnerManagerClass;                                  // 0x0580(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3ItemSpawnerManager*                       ItemSpawnerManager;                                       // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MainFlowManagerClass;                                     // 0x0590(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MainFlowManager;                                          // 0x0598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MiniGameManagerClass;                                     // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3MiniGameManager*                          MiniGameManager;                                          // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              MiniGamePreloadClasses;                                   // 0x05B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UClass*                                      NPCLeadManagerClass;                                      // 0x05C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3NPCLeadManager*                           NPCLeadManager;                                           // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ShopDataManagerClass;                                     // 0x05D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3ShopDataManagerBase*                      ShopDataManager;                                          // 0x05D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StreetFightManagerClass;                                  // 0x05E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3StreetFightManager*                       StreetFightManager;                                       // 0x05E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AS3SkyManager*                               SkyManager;                                               // 0x05F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AS3CharaLightingManager*                     CharaLightingManager;                                     // 0x05F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TalkEventManagerClass;                                    // 0x0600(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3TalkEventManagerBase*                     TalkEventManager;                                         // 0x0608(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TextDataManagerClass;                                     // 0x0610(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class US3TextDataManagerBase*                      TextDataManager;                                          // 0x0618(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TimeManagerClass;                                         // 0x0620(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3GameTimeManager*                          TimeManager;                                              // 0x0628(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TimeEventManagerClass;                                    // 0x0630(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3GameTimeEventManager*                     TimeEventManager;                                         // 0x0638(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EnergyManagerClass;                                       // 0x0640(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3EnergyManager*                            EnergyManager;                                            // 0x0648(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RewardManagerClass;                                       // 0x0650(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3RewardManager*                            RewardManager;                                            // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  BackerDataTable;                                          // 0x0660(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckRewardItem;                                         // 0x0668(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	class UClass*                                      BattleRallyManagerClass;                                  // 0x0670(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3BattleRallyManager*                       BattleRallyManager;                                       // 0x0678(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DLCDialogManagerClass;                                    // 0x0680(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3DLCDialogManager*                         DLCDialogManager;                                         // 0x0688(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SkipControllerClass;                                      // 0x0690(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3SkipController*                           SkipController;                                           // 0x0698(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x06A0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedLoadLevel;                                      // 0x06B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bLevelChangeFade;                                         // 0x06C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	TArray<class AS3SearchArea*>                       SearchAreaArray;                                          // 0x06C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UDataTable*                                  ItemDataTable;                                            // 0x06D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              GlobalPauseIgnoreClasses;                                 // 0x06E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDisableAnsel;                                            // 0x06F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	class AActor*                                      OverrideSpawnPoint;                                       // 0x06F8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              DisableLSVActors;                                         // 0x0700(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0710(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GameMode");
		return ptr;
	}


	void StartPause(TArray<class UClass*> IgnoreClasses);
	void StartCheckLevelStreaming();
	void StartBattleLevelStreaming(class AActor* Executor, const struct FName& BattleLevel, TArray<struct FName> NeedLevels);
	void SetSkyManager(class AS3SkyManager* InSkyManager);
	bool SetS3Pause(EPausePriority Priority);
	class APlayerController* RecreatePlayerController(class APlayerController* OldPlayerController, class UClass* NewPlayerControllerClass, class AActor* SpawnPoint);
	bool IsS3SystemPause();
	bool IsS3Paused();
	bool IsNPCFadeInProgress();
	bool IsLoadingLevel();
	bool IsLevelStreaming();
	bool GetLevelStreamingDebugData(TArray<struct FS3LevelDebugData>* LevelStreamingData);
	class ABTL_BattleSpawner* GetBattleSpawner();
	class UBTL_CommandLibraryBase* GetBattleCommandLibrary();
	class AS3AreaManager* GetAreaManager();
	class AS3SearchArea* GetActiveSearchArea();
	void EndPause();
	void EndBattleLevelStreaming(class AActor* Executor);
	void EnableAllLevelStreamingVolume(class AActor* Executor);
	void DisableAllLevelStreamingVolume(class AActor* Executor);
	bool ClearS3Pause(EPausePriority Priority);
};


// Class Shenmue3.S3BgmSourceComponent
// 0x0000 (0x00F0 - 0x00F0)
class US3BgmSourceComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BgmSourceComponent");
		return ptr;
	}

};


// Class Shenmue3.S3BgmManager
// 0x0008 (0x0330 - 0x0328)
class AS3BgmManager : public AS3SequencerBgmManager
{
public:
	bool                                               bDisableFadePause;                                        // 0x0328(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BgmManager");
		return ptr;
	}


	bool Stop(const struct FName& ID);
	void SetTalkVolume(bool bReset);
	void SetDisableFadePause(bool bDisable);
	void Restart();
	void PlayFromPlayer(class AS3BgmPlayer* BgmPlayer, float StartTime);
	class AS3BgmPlayer* PlayFromCue(class UObject* Cue, const struct FName& ID, EBgmPriority Priority, bool AutoDestroy, float StartTime);
	void Pause();
	void OnEndTouchArea(class AS3BgmArea* AreaActor);
	void OnBeginTouchArea(class AS3BgmArea* AreaActor);
	void OnAreaBgmChanged(class AS3BgmArea* area);
};


// Class Shenmue3.S3BootGameMode
// 0x0020 (0x0740 - 0x0720)
class AS3BootGameMode : public AS3GameMode
{
public:
	ES3BootState                                       BootState;                                                // 0x0720(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLoginCompleted;                                         // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0738(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BootGameMode");
		return ptr;
	}


	void ShowDialog(TArray<struct FName> Labels, unsigned char Type);
	void LoginPlatform();
};


// Class Shenmue3.S3TalkComponentBase
// 0x0058 (0x0148 - 0x00F0)
class US3TalkComponentBase : public UActorComponent
{
public:
	class AS3Character*                                OwnerCharacter;                                           // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ES3TalkType                                        TalkType;                                                 // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<struct FTalkScriptContainer>                TalkScript;                                               // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
	bool                                               bEnableBySchedule;                                        // 0x0120(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTalkScriptLoaded;                                        // 0x0121(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableScheduleDefault;                                   // 0x0122(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0123(0x0005) MISSED OFFSET
	TArray<struct FS3SubQuestControl>                  SubQuestControls;                                         // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnTalkScriptLoadedDispatcher;                             // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TalkComponentBase");
		return ptr;
	}


	void UnLoadTalkScript();
	void SetSubQuestControlInfo(TArray<struct FS3SubQuestControl> Info);
	bool SetEnableByScript(bool InEnable);
	void SetEnableBySchedule(bool InEnable);
	void ParseTalkScriptData(class US3TalkDataListBase* TalkDataList);
	void LoadTalkScript();
	bool IsInRangeOfTime(int MinTime, int MaxTime);
	bool IsInRangeOfStep(int MinStep, int MaxStep);
	void InitEnableBySchedule();
	bool GetEnableBySchedule();
	bool GetEnable();
	struct FTalkScriptState GetCurrentTalkScript();
	bool CanTalk(bool Sight);
};


// Class Shenmue3.S3BRallyCourseCSPlayer
// 0x0010 (0x0338 - 0x0328)
class AS3BRallyCourseCSPlayer : public AActor
{
public:
	TArray<TEnumAsByte<EObjectTypeQuery>>              CharTraceObjectTypes;                                     // 0x0328(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BRallyCourseCSPlayer");
		return ptr;
	}


	bool TryPlaceCSAlongSpline(class ACharacter* Pawn, class USplineComponent* spline, const struct FBTL_BRallyCourseCutsceneData& CutsceneData, TEnumAsByte<ETraceTypeQuery> TraceChannel, struct FVector* OutLocation, struct FRotator* OutRotator);
	struct FVector EstimateGroundLocation(class ACharacter* ContextPawn, const struct FVector& StartLocation);
};


// Class Shenmue3.S3BRallyTrophyData
// 0x0010 (0x0040 - 0x0030)
class US3BRallyTrophyData : public UDataAsset
{
public:
	TArray<struct FS3BRallyTrophyUnlockData>           TrophyUnlockDatas;                                        // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BRallyTrophyData");
		return ptr;
	}


	void TryUnlockAchievements(class US3AchievementManager* AchievementManager, class UObject* NewlyUnlocked, TArray<class UObject*> AllUnlocked);
};


// Class Shenmue3.S3BSComponent
// 0x0030 (0x0178 - 0x0148)
class US3BSComponent : public US3TalkComponentBase
{
public:
	class US3BSDataList*                               DataList;                                                 // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventCountBySchedule;                                     // 0x0150(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EventCountScheduleDefault;                                // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBSSetEnableScheduleData>            BsEnableScheduleData;                                     // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBSSetCountScheduleData>             BsCountScheduleData;                                      // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BSComponent");
		return ptr;
	}


	bool SetEventCountByScript(int Count);
	void SetEventCountBySchedule(int Count);
	void InitEventCountBySchedule();
	int GetEventCountBySchedule();
	int GetEventCount();
	bool ExistEvent();
};


// Class Shenmue3.S3TalkDataListBase
// 0x0028 (0x0050 - 0x0028)
class US3TalkDataListBase : public UObject
{
public:
	TArray<struct FTalkData>                           TalkDataList;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSetEnableScheduleData>              SetEnableScheduleData;                                    // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Enable;                                                   // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TalkDataListBase");
		return ptr;
	}

};


// Class Shenmue3.S3BSDataList
// 0x0028 (0x0078 - 0x0050)
class US3BSDataList : public US3TalkDataListBase
{
public:
	TArray<struct FBSSetEnableScheduleData>            BsEnableScheduleData;                                     // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FBSSetCountScheduleData>             BsCountScheduleData;                                      // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Count;                                                    // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BSDataList");
		return ptr;
	}

};


// Class Shenmue3.S3BuoyancyComponent
// 0x0000 (0x0240 - 0x0240)
class US3BuoyancyComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BuoyancyComponent");
		return ptr;
	}

};


// Class Shenmue3.S3BuildingStaticMeshActor
// 0x0010 (0x0348 - 0x0338)
class AS3BuildingStaticMeshActor : public AStaticMeshActor
{
public:
	TArray<class UBoxComponent*>                       VolumeArray;                                              // 0x0338(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BuildingStaticMeshActor");
		return ptr;
	}


	void OverlapPlayer(class AActor* Actor, class UPrimitiveComponent* Component, bool bin);
	bool EncompassPoint(class UPrimitiveComponent* Component, const struct FVector& Point);
	bool EncompassAllVolume(const struct FVector& Point);
};


// Class Shenmue3.S3Button
// 0x0000 (0x0420 - 0x0420)
class US3Button : public UButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3Button");
		return ptr;
	}


	void ForceClickAction();
};


// Class Shenmue3.S3CharaAssetUserDataBase
// 0x0000 (0x0028 - 0x0028)
class US3CharaAssetUserDataBase : public UAssetUserData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaAssetUserDataBase");
		return ptr;
	}

};


// Class Shenmue3.S3CameraFadeCollisionActor
// 0x0018 (0x0340 - 0x0328)
class AS3CameraFadeCollisionActor : public AActor
{
public:
	struct FVector2D                                   FadeAccelRange;                                           // 0x0328(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class AS3Character*>                        FadingOutCharacters;                                      // 0x0330(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CameraFadeCollisionActor");
		return ptr;
	}


	void FadeOutCharacter(class AS3Character* Character, float FadeOutTime);
	void FadeInCharacter(class AS3Character* Character, float FadeInTime);
	void FadeInAll();
};


// Class Shenmue3.S3AnimalSkeletalMeshActor
// 0x0000 (0x03B0 - 0x03B0)
class AS3AnimalSkeletalMeshActor : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3AnimalSkeletalMeshActor");
		return ptr;
	}

};


// Class Shenmue3.S3CharacterMovementComponent
// 0x0000 (0x0770 - 0x0770)
class US3CharacterMovementComponent : public UCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharacterMovementComponent");
		return ptr;
	}

};


// Class Shenmue3.S3CharaAttachAssetUserData
// 0x0040 (0x0068 - 0x0028)
class US3CharaAttachAssetUserData : public US3CharaAssetUserDataBase
{
public:
	struct FCharaAttachParam                           AttachParam;                                              // 0x0028(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaAttachAssetUserData");
		return ptr;
	}

};


// Class Shenmue3.MG_CC_AnimalDataAsset
// 0x00A8 (0x00D8 - 0x0030)
class UMG_CC_AnimalDataAsset : public UDataAsset
{
public:
	struct FMG_CC_AnimalData                           m_AnimalData;                                             // 0x0030(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.MG_CC_AnimalDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3CharacterPhasingComponent
// 0x00B8 (0x01A8 - 0x00F0)
class US3CharacterPhasingComponent : public UActorComponent
{
public:
	TMap<class ACharacter*, struct FSimpleRequesterList> ReferenceBasedRequests;                                   // 0x00F0(0x0050) (ZeroConstructor, Transient)
	TMap<class ACharacter*, float>                     TimeBasedRequests;                                        // 0x0140(0x0050) (ZeroConstructor, Transient)
	class US3FadeCharacterCapsule*                     FadeComponent;                                            // 0x0190(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class ACharacter*>                          IgnoringCharacters;                                       // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharacterPhasingComponent");
		return ptr;
	}


	void StopIgnoring_ByReference(class ACharacter* Target, class UObject* Requester);
	void StartIgnoring_ByTime(class ACharacter* Target, float Time);
	void StartIgnoring_ByReference(class ACharacter* Target, class UObject* Requester);
	void OnCharacterFadedOut(class ACharacter* Character);
	void OnCharacterFadedIn(class ACharacter* Character);
	void CancelTimer(class ACharacter* Target);
};


// Class Shenmue3.S3CharacterSensorComponentBase
// 0x0018 (0x0108 - 0x00F0)
class US3CharacterSensorComponentBase : public UActorComponent
{
public:
	float                                              m_fGroundSensorDistance;                                  // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                m_nAvailavbleSensors;                                     // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UCharacterSensorBase*>                m_aCharacterSensors;                                      // 0x00F8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharacterSensorComponentBase");
		return ptr;
	}


	void UpdateSensors();
	void ReleaseSensors();
	void InitializeSensors();
	void CreateSensors();
	void ClearSensors();
};


// Class Shenmue3.CharacterSensorBase
// 0x0008 (0x0030 - 0x0028)
class UCharacterSensorBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CharacterSensorBase");
		return ptr;
	}

};


// Class Shenmue3.CharacterSensorGeneral
// 0x0040 (0x0070 - 0x0030)
class UCharacterSensorGeneral : public UCharacterSensorBase
{
public:
	struct FVector                                     m_vActorPos;                                              // 0x0030(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     m_vActorGroundPos;                                        // 0x003C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     m_vActorForward;                                          // 0x0048(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     m_vActorRight;                                            // 0x0054(0x000C) (Edit, IsPlainOldData)
	float                                              m_fActorSpeed;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_fActorCapsleRadius;                                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_fActorCapsleHalfHeight;                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_fDeltaTime;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CharacterSensorGeneral");
		return ptr;
	}

};


// Class Shenmue3.CharacterSensorGround
// 0x0098 (0x00C8 - 0x0030)
class UCharacterSensorGround : public UCharacterSensorBase
{
public:
	float                                              REGARD_LANDING_HEIGHT;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FHitResult                                  m_DetectedGround;                                         // 0x0038(0x0088) (Edit, IsPlainOldData)
	float                                              m_fGroundHeight;                                          // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_bDetectLanding;                                         // 0x00C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CharacterSensorGround");
		return ptr;
	}

};


// Class Shenmue3.S3CharacterPawn
// 0x0010 (0x0770 - 0x0760)
class AS3CharacterPawn : public ABTL_Character
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0760(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharacterPawn");
		return ptr;
	}


	struct FName GetClothCharaName();
};


// Class Shenmue3.S3CharaLightCameraCutDataAsset
// 0x0050 (0x0080 - 0x0030)
class US3CharaLightCameraCutDataAsset : public UDataAsset
{
public:
	TMap<struct FName, struct FS3CharaLightCameraCut>  CharaLightCameraCutList;                                  // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaLightCameraCutDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3CharaLightingActor
// 0x00B8 (0x03E0 - 0x0328)
class AS3CharaLightingActor : public AActor
{
public:
	class AS3CharaLightingManager*                     CharaLightingManager;                                     // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseLighting;                                             // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3CharaLightingMode                               Mode;                                                     // 0x0331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0332(0x0006) MISSED OFFSET
	class US3CharaSpotLightComponent*                  KeyLightComponent;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3CharaSpotLightComponent*                  FillLightComponent;                                       // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3CharaSpotLightComponent*                  BackLightComponent;                                       // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TargetSceneComponentClass;                                // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetActorSocketName;                                    // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DirectTargetComponent;                                    // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bKeepUpdatingTargetLocation;                              // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              EnableCastShadowsDistance;                                // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	struct FTransform                                  CacheTargetWorldTransform;                                // 0x0380(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x03B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaLightingActor");
		return ptr;
	}


	void UpdateLightingParamater(const struct FS3CharaLightingContainer& Container);
	void UpdateCastShadows(const struct FVector& CameraLocation);
	void SetupLighting();
	void SetLightVisibility(bool bVisibility);
	void ResetCacheTargetLocationFlag();
	void OverrideCacheTargetLocation(const struct FTransform& WorldTransform, const struct FVector& ForwardVector, const struct FVector& UpVector, const struct FVector& RightVector);
	class USceneComponent* GetTargetSceneComponent();
	bool GetTargetActorSocketTransform(struct FTransform* OutTransform);
	class AS3CharaLightingManager* GetCharaLightingManager();
	void DrawLightingDebugLine();
};


// Class Shenmue3.S3CharaHeadScaleAssetUserData
// 0x0010 (0x0038 - 0x0028)
class US3CharaHeadScaleAssetUserData : public UAssetUserData
{
public:
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaHeadScaleAssetUserData");
		return ptr;
	}

};


// Class Shenmue3.S3CharaLightingSequencerActor
// 0x0000 (0x03E0 - 0x03E0)
class AS3CharaLightingSequencerActor : public AS3CharaLightingActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaLightingSequencerActor");
		return ptr;
	}

};


// Class Shenmue3.S3CharaLightingSeqTrack
// 0x0000 (0x03E0 - 0x03E0)
class AS3CharaLightingSeqTrack : public AS3CharaLightingSequencerActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaLightingSeqTrack");
		return ptr;
	}

};


// Class Shenmue3.S3CharaLightingManager
// 0x02C8 (0x05F0 - 0x0328)
class AS3CharaLightingManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0328(0x00A0) MISSED OFFSET
	class UDataTable*                                  LightingParamaterTable;                                   // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IntensityAdjustmentDistance;                              // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityMaxAdjustmentDistance;                           // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FS3CharaLightingEnvironmentParamater        EnvironmentParamater;                                     // 0x03E0(0x0050) (BlueprintVisible)
	TMap<class AActor*, struct FS3CharaLightsInBuildingInfo> LightsInBuildingMap;                                      // 0x0430(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bLightForceUpdate;                                        // 0x0480(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0481(0x001F) MISSED OFFSET
	ES3Where                                           AreaId;                                                   // 0x04A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	struct FName                                       UseAutoLightingGroupID;                                   // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CutsceneCameraObjName;                                    // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	struct FTransform                                  TargetTransform;                                          // 0x04C0(0x0030) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetForwardVector;                                      // 0x04F0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetUpVector;                                           // 0x04FC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetRightVector;                                        // 0x0508(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // 0x0514(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // 0x0520(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bCurrentUpCamera;                                         // 0x052C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCurrentRightCamera;                                      // 0x052D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x052E(0x0002) MISSED OFFSET
	float                                              CurrentCameraHorizontalAngle;                             // 0x0530(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCameraVerticalAngle;                               // 0x0534(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AS3AreaManager*                              AreaManager;                                              // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class US3CharaLightCameraCutDataAsset*             CharaLightCameraCutAsset;                                 // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class AActor*, class AS3CharaLightingActor*>  LightupActors;                                            // 0x0548(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<class AActor*, class AS3BuildingStaticMeshActor*> BuildingCheckTargetActors;                                // 0x0598(0x0050) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData06[0x8];                                       // 0x05E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaLightingManager");
		return ptr;
	}


	bool UpdateManualTargetCharaLight(class AS3CharaLightingActor* CharaLightingActor);
	void UpdateLightingColorInBuilding(struct FS3CharaLightingCurveColorParamater* CurveColorParamater, struct FS3CharaLightingContainer* InContainer);
	void UpdateLightingColorCurve(struct FS3CharaLightingCurveColorParamater* CurveColorParamater, struct FS3CharaLightingContainer* InContainer);
	bool UpdateAllLightupActors();
	void SetupEnvironmentLightParamater(class AActor* TargetActor, bool* bDummy);
	bool SetupCalculationMeshAndCameraVariable(class AActor* Actor);
	void SetCurrentLightingColorCurve(struct FS3CharaLightingCurveColorParamater* CurveColorParamater);
	void ResetLightsInBuilding();
	void RequestManualUpdateTargetCharaLight(const struct FName& TargetTagCharaName, const struct FName& LightParamaterTableName, ES3CharaLightRequestType RequestType);
	bool IsEnabledAllCharaLighting();
	bool IsConditionsCheck(class AActor* Actor, class US3TagCharaComponent* TagCharaComponent, struct FS3CharaLightingContainer* Container);
	void InvertLightingDirection(bool bCameraRightDirection, struct FS3CharaLightingContainer* InContainer);
	class USkeletalMeshComponent* GetTalkTargetActorMesh(class AActor* Actor);
	void GetLightsInBuildingInfo(class AActor* TargetBuilding, struct FS3CharaLightsInBuildingInfo* OutInfo);
	void GetLightParamAfterApplyingLocationAndRotation(const struct FS3CharaLightingParamater& Param, const struct FTransform& WorldTrans, const struct FVector& Forward, const struct FVector& Up, const struct FVector& Right, struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation);
	void GetLightingColorParameter(struct FS3CharaLightingCurveColorParamater* Paramater);
	struct FName GetEditorPreviewTagName();
	struct FString GetEditorCurrentLevelName();
	bool GetCharaLightingContainerByLightGroupId(const struct FName& LightGroupId, TArray<struct FS3CharaLightingContainer>* OutContainers);
	bool GetCameraLocationAndRotation(struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation);
	void GetAllEditorActorsOfClass(class UClass* ActorClass, TArray<class AActor*>* OutActors);
	struct FS3CharaLightingContainer Evaluation(class AActor* TargetLightupActor, const struct FName& LightGroupId);
	void EnabledAllCharaLighting();
	void Editor_UpdateAllCutsceneLightingActors(class ACameraActor* Camera, class UObject* LevelSequence);
	void Editor_ResetVariable();
	void DisabledAllCharaLighting();
	void ClearRequestManualCharaLight(bool bAllReset);
	void AddLightsInBuilding(class AActor* TargetBuilding, class AS3PointLight* Point, class AS3SpotLight* Spot);
};


// Class Shenmue3.S3CharaScaleAssetUserData
// 0x0010 (0x0038 - 0x0028)
class US3CharaScaleAssetUserData : public US3CharaAssetUserDataBase
{
public:
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaScaleAssetUserData");
		return ptr;
	}

};


// Class Shenmue3.S3CharaSkeletalAttachAssetUserData
// 0x0040 (0x0068 - 0x0028)
class US3CharaSkeletalAttachAssetUserData : public US3CharaAssetUserDataBase
{
public:
	struct FCharaSkeletalAttachParam                   AttachParam;                                              // 0x0028(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaSkeletalAttachAssetUserData");
		return ptr;
	}

};


// Class Shenmue3.S3CharaSpotLightComponent
// 0x0030 (0x03E0 - 0x03B0)
class US3CharaSpotLightComponent : public USpotLightComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CharaSpotLightComponent");
		return ptr;
	}

};


// Class Shenmue3.S3CheatManager
// 0x0010 (0x0088 - 0x0078)
class US3CheatManager : public UCheatManager
{
public:
	class US3DebugMenu*                                DebugMenu;                                                // 0x0078(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      DebugCameraControllerYuClass;                             // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CheatManager");
		return ptr;
	}


	void UnlockAchievement(int AchievementID);
	void UnloadStreamLevel(const struct FName& LevelName);
	void ToggleWidget();
	void ToggleMemoryUsage();
	void ToggleDebugCameraYu(bool bCollision);
	void ToggleDebugCameraEx(bool bCollision);
	void TeleportToNPC(const struct FName& Name);
	void StreamOutTextureData(int RequiredMemorySize);
	void SkyLightSwapAndRecapture();
	void SkyLightRecapture();
	void SkyLightBlendFraction(float BlendFraction);
	void ShowNPCStreamingInfo();
	void ShowLightInfo();
	void ShowLightCount();
	void ShowItemSpawnerHints();
	void SetMoney(int Money);
	void SetGraphicQuality(int Quality);
	void SetEventStep(int Step);
	void SetEventFlag(int Index, int flag);
	void SetDemoType(int Index);
	void SetBetMoney(int Money);
	void SetAllItem(int Num);
	void ResetAchievements();
	void RemoveAllWidgets();
	void PreloadBattle();
	void OnShowLightInfoEvent();
	void OnMiniGameWinEvent();
	void OnMiniGameLoseEvent();
	void NpcDebugMode(const struct FName& Mode, const struct FName& Target, int Value);
	void MocapUI();
	void MocapCalibration(int UserId, bool bNPose, bool bSymmetry);
	void MiniGameSuccess();
	void MiniGameFail();
	void LoadAutoSave();
	void LaunchDebugBattle();
	void KillAllNPC();
	int GetVisibleLightCount();
	class AS3PlayerController* GetOuterPlayerController();
	void EnableNPCTriggerOverlaps();
	void DisableWalkOnlyTrigger();
	void DisableNPCTriggerOverlaps();
	void ClearPeakMemoryUsage();
	void CleanupGCArrayPool();
};


// Class Shenmue3.CharacterSensorInput
// 0x0008 (0x0038 - 0x0030)
class UCharacterSensorInput : public UCharacterSensorBase
{
public:
	int                                                m_nInputActionFlags;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.CharacterSensorInput");
		return ptr;
	}

};


// Class Shenmue3.S3Clipper
// 0x00A0 (0x03C8 - 0x0328)
class AS3Clipper : public AActor
{
public:
	class US3ClipperReader*                            ClipperReader;                                            // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	class US3ClipperMultiSampler*                      MultiSampler;                                             // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET
	class UClass*                                      VolumeConvertorClass;                                     // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AS3SoundPlayer*                              SoundPlayer;                                              // 0x0350(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClipperTime;                                              // 0x0358(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ClipperStopFlag;                                          // 0x035C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVoiceFlag;                                               // 0x035D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x035E(0x0002) MISSED OFFSET
	struct FName                                       ClipperCharaName;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FString>                 EmotionStackMap;                                          // 0x0368(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               DebugDisableCharaID;                                      // 0x03B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3Clipper");
		return ptr;
	}


	bool UpdateSample(float Time);
	void SetTalkClipperVoice(const struct FString& TalkClipperString, const struct FName& CharaName, class AS3SoundPlayer* VoicePlayer);
	bool SetTalkClipperInternal(const struct FString& TalkClipperString, const struct FName& CharaName, bool bVoice, class AS3SoundPlayer* VoicePlayer);
	void SetTalkClipper(const struct FString& TalkClipperString, const struct FName& CharaName, bool bVoice);
	void SetSoundPlayer(class AS3SoundPlayer* InSoundPlayer);
	void SetPlayRate(float NewRate);
	void SetFaceId(const struct FString& InFaceId, const struct FName& InCharaName);
	bool SetCharaName(const struct FName& NewName);
	bool IsStopped();
	bool IsFaceDisabled(const struct FName& InCharaName);
	float GetSmoothShapeVolume(int ShapeId);
	bool GetFaceId(const struct FName& InCharaName, struct FString* OutFaceId);
	float GetElapsedTimeAlpha();
	float GetElapsedTime();
	float GetDuration();
	float GetCurrentFrameVolume();
	int GetCurrentFrameShapeId();
	int GetCurrentFrameRawVolume();
	class US3ClipperReader* GetClipperReader();
	class US3ClipperMultiSampler* GetClipperMultiSampler();
	void ClearTalkClipper();
	void ClearSyncContext();
	void ClearFaceId();
	bool CheckChara(const struct FName& Match);
};


// Class Shenmue3.S3ClipperMultiSampler
// 0x0020 (0x0048 - 0x0028)
class US3ClipperMultiSampler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ClipperMultiSampler");
		return ptr;
	}


	void UpdateSamples(class US3ClipperReader* ClipperReader, float Time);
	void SetWindowInterval(float Value);
	float GetVolume(int ID);
	float GetLoudestSample();
	int GetLoudestId();
	void Clear();
};


// Class Shenmue3.S3ClipperOnlyDataAsset
// 0x0010 (0x0040 - 0x0030)
class US3ClipperOnlyDataAsset : public UDataAsset
{
public:
	TArray<struct FS3ClipperOnlyInfo>                  ClipperInfo;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ClipperOnlyDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3ClipperReader
// 0x0080 (0x00A8 - 0x0028)
class US3ClipperReader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TMap<struct FString, EMouseShape>                  ShapeConversionMap;                                       // 0x0050(0x0050) (ZeroConstructor, Transient)
	class US3ClipperVolumeInterpretor*                 VolumeInterpretor;                                        // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ClipperReader");
		return ptr;
	}


	void SetVolumeInterpretor(class US3ClipperVolumeInterpretor* InObject);
	void SetFrameRate(float InFrameRate);
	void SetData(const struct FString& InData);
	bool IsTimeInRange(float Time);
	bool IsFrameInRange(int Frame);
	class US3ClipperVolumeInterpretor* GetVolumeInterpretor();
	float GetTime(int Frame);
	EClipperSourceType GetSourceType();
	struct FS3ClipperSample GetSample(int Frame);
	float GetFrameRate();
	int GetFrameNum();
	float GetFrameAsFloat(float Time);
	int GetFrame(float Time);
};


// Class Shenmue3.S3ClothInfoDataAsset
// 0x00F0 (0x0120 - 0x0030)
class US3ClothInfoDataAsset : public UDataAsset
{
public:
	TMap<EClothPartsType, struct FS3ClothPartsArray>   RyoPartsArray;                                            // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EClothPartsType, struct FS3ClothPartsArray>   ShePartsArray;                                            // 0x0080(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EClothPartsType, struct FS3ClothPartsBind>    MaterialNameBindMap;                                      // 0x00D0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ClothInfoDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3ClothInterface
// 0x0000 (0x0028 - 0x0028)
class US3ClothInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ClothInterface");
		return ptr;
	}


	class UMeshComponent* GetClothMeshComponent();
};


// Class Shenmue3.S3ClipperVolumeInterpretor
// 0x0048 (0x0070 - 0x0028)
class US3ClipperVolumeInterpretor : public UObject
{
public:
	TArray<float>                                      VolumeRateArray;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              VolumeBaseRate;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseClamp;                                                // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              NoVoiceAdjustValue;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxVolumeAutomationStep;                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 VolumeAutomationCurve;                                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 VolumeAutomationCurve_English;                            // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 VolumeAutomationCurve_Chinese;                            // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 UseVolumeCurve;                                           // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ClipperVolumeInterpretor");
		return ptr;
	}

};


// Class Shenmue3.S3ClothManager
// 0x0110 (0x0438 - 0x0328)
class AS3ClothManager : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnClothesChanged;                                         // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class US3ClothInfoDataAsset*                       ClothInfo;                                                // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3CharaMeshType                                   RyoMeshType;                                              // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3CharaMeshType                                   SheMeshType;                                              // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	TArray<struct FS3ClothesCacheInfo>                 RyoObjectCache;                                           // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS3ClothesCacheInfo>                 SheObjectCache;                                           // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FS3ClothesCacheInfo                         RyoTempMeshCache;                                         // 0x0368(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS3ClothesCacheInfo                         SheTempMeshCache;                                         // 0x0380(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class US3ClothInterface>          FittingChara;                                             // 0x0398(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EClothPartsType, struct FName>                FittingInfo;                                              // 0x03A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS3ClothesCacheInfo>                 FittingObjectCache;                                       // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bStreamingParts;                                          // 0x0408(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FName                                       EditMeshId;                                               // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0418(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ClothManager");
		return ptr;
	}


	void UpdateClothParts(bool bRyo);
	void UnlockMesh(const struct FName& ID);
	void UnlockClothParts(EClothPartsType Type, const struct FName& ID);
	void SetSheMeshType(ES3CharaMeshType Type, bool bWithChange);
	void SetRyoMeshType(ES3CharaMeshType Type, bool bWithChange);
	void SetEditMeshId(const struct FName& ID);
	bool IsUnlockedClothParts(const struct FName& ID);
	bool IsTemporaryMesh(ES3CharaMeshType MeshType, EClothPartsType PartsType);
	bool IsFitting();
	bool IsCompleteStreaming();
	void GetWearClothPartsCustom(ES3CharaMeshType MeshType, bool bRyo, TMap<EClothPartsType, struct FName>* WearParts);
	void GetWearClothParts(bool bRyo, TMap<EClothPartsType, struct FName>* WearParts);
	void GetUnlockedMeshes(bool bRyo, TArray<struct FName>* UnlockedMeshes);
	void GetUnlockedClothParts(bool bRyo, TArray<struct FName>* UnlockedParts);
	struct FName GetTagCharaName(const TScriptInterface<class US3ClothInterface>& Interface);
	bool GetMeshAndParts(const struct FName& CharaName, ES3CharaMeshType MeshType, struct FS3ClothesChangeInfo* Info);
	struct FName GetCurrentMeshID(bool bRyo);
	TArray<struct FS3ClothesCacheInfo> GetCacheInfo(bool TargetRyo);
	class UObject* FindCache(TArray<struct FS3ClothesCacheInfo> Cache, const struct FName& ID);
	struct FName CreateMeshCacheID(const struct FName& MeshID, ES3CharaMeshType MeshType);
	void ChangeClothes(const TScriptInterface<class US3ClothInterface>& Interface, ES3CharaMeshType Type);
	void CacheObject(const struct FName& PartsID, EClothPartsType PartsType, ES3CharaMeshType MeshType, class UObject* Object);
};


// Class Shenmue3.S3ClothPartsDataAsset
// 0x00C8 (0x00F8 - 0x0030)
class US3ClothPartsDataAsset : public UDataAsset
{
public:
	EClothPartsType                                    Type;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FName                                       ItemId;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3ClothPartsDataAsset.Material
	unsigned char                                      UnknownData02[0x28];                                      // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3ClothPartsDataAsset.Icon
	unsigned char                                      UnknownData03[0x28];                                      // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3ClothPartsDataAsset.Material_CN
	unsigned char                                      UnknownData04[0x28];                                      // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3ClothPartsDataAsset.Icon_CN
	struct FName                                       UnlockMeshId;                                             // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Description;                                              // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ClothPartsDataAsset");
		return ptr;
	}


	void SetMaterial(class UMaterialInstance* InMaterial);
};


// Class Shenmue3.S3ComboTestDataAsset
// 0x00A0 (0x00D0 - 0x0030)
class US3ComboTestDataAsset : public UDataAsset
{
public:
	struct FComboTestInfo                              Combo1;                                                   // 0x0030(0x0028) (Edit, BlueprintVisible)
	struct FComboTestInfo                              Combo2;                                                   // 0x0058(0x0028) (Edit, BlueprintVisible)
	struct FComboTestInfo                              Combo3;                                                   // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FComboTestInfo                              Combo4;                                                   // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ComboTestDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3CutsceneLevelData
// 0x0018 (0x0040 - 0x0028)
class US3CutsceneLevelData : public UObject
{
public:
	struct FName                                       CutsceneId;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               RequiredLoadLevelList;                                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CutsceneLevelData");
		return ptr;
	}

};


// Class Shenmue3.S3CutsceneLevelDataAsset
// 0x0010 (0x0038 - 0x0028)
class US3CutsceneLevelDataAsset : public UObject
{
public:
	TArray<class US3CutsceneLevelData*>                LevelDataList;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CutsceneLevelDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3CutsceneLibrary
// 0x0000 (0x0028 - 0x0028)
class US3CutsceneLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CutsceneLibrary");
		return ptr;
	}


	class AS3CutscenePlayer* FindCutscenePlayer(class UObject* WorldContextObject, const struct FName& CutsceneId);
};


// Class Shenmue3.S3CutscenePlayer
// 0x0050 (0x03F8 - 0x03A8)
class AS3CutscenePlayer : public ABTL_SequenceActor
{
public:
	bool                                               bAddRefCueSheet;                                          // 0x03A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	TArray<class UObject*>                             PreloadAssets;                                            // 0x03B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C0(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3CutscenePlayer.PreloadSoftAssets
	int                                                MaxTextureResidentActors;                                 // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              PossessableActors;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class US3CharaLightCameraCutDataAsset*             CharaLightCameraCutAsset;                                 // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCullDistanceVolume;                               // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStreamingVolumeUpdateDelay;                        // 0x03F1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayFromDebug;                                           // 0x03F2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x03F3(0x0001) MISSED OFFSET
	int                                                LoopCountForResetAnimDynamics;                            // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CutscenePlayer");
		return ptr;
	}


	void StartCutscene();
	void EndCutscene();
};


// Class Shenmue3.S3CutsceneSkeletalMeshActor
// 0x0020 (0x03D0 - 0x03B0)
class AS3CutsceneSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
	struct FName                                       CharaName;                                                // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class US3FaceAnimDataAsset*                        FaceAnimDataAsset;                                        // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CutsceneSkeletalMeshActor");
		return ptr;
	}


	void SetupMesh();
	struct FName GetTagCharaName();
	struct FName GetConvertedCharaName();
	struct FName GetClothCharaName();
};


// Class Shenmue3.S3CutsceneManager
// 0x0088 (0x03B0 - 0x0328)
class AS3CutsceneManager : public AActor
{
public:
	struct FName                                       CurrentCutscene;                                          // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AS3CutscenePlayer*                           CurrentCutscenePlayer;                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingFlag;                                            // 0x0338(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayerStartedFlag;                                      // 0x0339(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayerFinishedFlag;                                     // 0x033A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x033B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartCutscenePlayer;                                    // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bPlayFromDebug;                                           // 0x0350(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<struct FName>                               LoadRequestList;                                          // 0x0358(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FName                                       LoadingCutscene;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LoadedCutsceneList;                                       // 0x0370(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               IsLoadingCutsceneFlag;                                    // 0x0380(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	TArray<struct FName>                               UnloadRequestList;                                        // 0x0388(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FName                                       UnloadingCutscene;                                        // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnloadingCutsceneFlag;                                  // 0x03A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseFadeOutFlag;                                         // 0x03A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03A2(0x0002) MISSED OFFSET
	float                                              FadeOutTime;                                              // 0x03A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LastCutsceneQTEResult;                                    // 0x03A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CutsceneManager");
		return ptr;
	}


	bool UnloadCutsceneLevel(const struct FName& CutsceneId);
	bool StartCutscene(const struct FName& CutsceneId, bool UseFadeOut);
	void RequestUnloadLevel(const struct FName& CutsceneId);
	void RequestLoadLevel(const struct FName& CutsceneId);
	void OnFinishedUnloadCutsceneLevel(const struct FName& ID);
	void OnFinishedLoadCutsceneLevel(const struct FName& ID);
	bool LoadCutsceneLevel(const struct FName& CutsceneId);
	bool IsUsingForceWeather();
	bool IsUsingForceTimeOfDay();
	bool IsUnloadingLevel();
	bool IsPlaying();
	bool IsLoadingLevel();
	bool IsExistLevelData(const struct FName& CutsceneId);
	TArray<struct FName> GetRequiredUnloadLevelList(const struct FName& CutsceneId);
	TArray<struct FName> GetRequiredLoadLevelList(const struct FName& CutsceneId);
	bool GetLastCutsceneQTEResult();
	float GetForceTimeOfDayValue();
};


// Class Shenmue3.S3CutsceneSubtitleDataAsset
// 0x0050 (0x0078 - 0x0028)
class US3CutsceneSubtitleDataAsset : public UObject
{
public:
	TMap<struct FName, struct FS3CutsceneSubtitleLabelList> SubtitleLabelListMap;                                     // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CutsceneSubtitleDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3CutsceneTimeScheduleManager
// 0x0010 (0x0338 - 0x0328)
class AS3CutsceneTimeScheduleManager : public AActor
{
public:
	TArray<struct FS3CutsceneTimeSchedule>             ScheduleArray;                                            // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3CutsceneTimeScheduleManager");
		return ptr;
	}

};


// Class Shenmue3.S3DebugCameraController
// 0x0148 (0x0808 - 0x06C0)
class AS3DebugCameraController : public ADebugCameraController
{
public:
	bool                                               bExtension;                                               // 0x06C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class ASpectatorPawn*                              SpectPawn;                                                // 0x06C8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MoveSpeedAdjustment;                                      // 0x06D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpDownMoveScale;                                          // 0x06D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrontBackMoveScale;                                       // 0x06D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVAdjustment;                                            // 0x06DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomRange;                                                // 0x06E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomSpeed;                                                // 0x06E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakeInterpSpeed;                                         // 0x06E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlowdownSpeed;                                            // 0x06EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlowdownInterpSpeed;                                      // 0x06F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bYuCustomMode;                                            // 0x06F4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	struct FKey                                        FOVUpKey;                                                 // 0x06F8(0x0018) (Edit, DisableEditOnInstance)
	struct FKey                                        FOVDownKey;                                               // 0x0710(0x0018) (Edit, DisableEditOnInstance)
	struct FKey                                        ZoomInKey;                                                // 0x0728(0x0018) (Edit, DisableEditOnInstance)
	struct FKey                                        ZoomOutKey;                                               // 0x0740(0x0018) (Edit, DisableEditOnInstance)
	struct FKey                                        SpeedUpKey;                                               // 0x0758(0x0018) (Edit, DisableEditOnInstance)
	struct FKey                                        SpeedDownKey;                                             // 0x0770(0x0018) (Edit, DisableEditOnInstance)
	struct FKey                                        BrakeKey;                                                 // 0x0788(0x0018) (Edit, DisableEditOnInstance)
	struct FKey                                        SlowdownKey;                                              // 0x07A0(0x0018) (Edit, DisableEditOnInstance)
	struct FKey                                        RollLeftKey;                                              // 0x07B8(0x0018) (Edit, DisableEditOnInstance)
	struct FKey                                        RollRightKey;                                             // 0x07D0(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x8];                                       // 0x07E8(0x0008) MISSED OFFSET
	float                                              TargetFOV;                                                // 0x07F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x07F4(0x0008) MISSED OFFSET
	float                                              TargetSpeedScale;                                         // 0x07FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0800(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DebugCameraController");
		return ptr;
	}


	void SetFOV(float NewFOV);
	void SetCameraSpeed(float NewSpeed);
	class UPlayer* GetOriginalPlayer();
};


// Class Shenmue3.S3DebugDataAsset
// 0x0018 (0x0048 - 0x0030)
class US3DebugDataAsset : public UDataAsset
{
public:
	bool                                               bDisableNPC;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RecodingMode;                                             // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceDisableCutsceneStreaming;                           // 0x0032(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceSubtitlesAllShow;                                    // 0x0033(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScriptAutoReimport;                                       // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TextAutoReimport;                                         // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideDebugMoney;                                      // 0x0036(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	int                                                DebugMoney;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugKifuda;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceCRIPlayRate;                                        // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceLoadShip;                                           // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DebugDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3DebugInputBox
// 0x06B8 (0x07B8 - 0x0100)
class US3DebugInputBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0120(0x0278) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0398(0x01E0) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             DescriptionStyle;                                         // 0x0578(0x01E0) (Edit, BlueprintVisible)
	struct FText                                       Text;                                                     // 0x0758(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0770(0x0018) (Edit, BlueprintVisible)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0788(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DescriptionDelegate;                                      // 0x0798(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x07A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DebugInputBox");
		return ptr;
	}

};


// Class Shenmue3.S3BuildInfoConfig
// 0x0058 (0x0080 - 0x0028)
class US3BuildInfoConfig : public UObject
{
public:
	struct FString                                     Platform;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     Configuration;                                            // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     BuildType;                                                // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     BuildDate;                                                // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     Region;                                                   // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                BuildNumber;                                              // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                Changelist;                                               // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3BuildInfoConfig");
		return ptr;
	}

};


// Class Shenmue3.S3DebugMenuItem
// 0x0010 (0x0110 - 0x0100)
class US3DebugMenuItem : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DebugMenuItem");
		return ptr;
	}

};


// Class Shenmue3.S3DerivedPlayerLevel
// 0x0028 (0x0050 - 0x0028)
class US3DerivedPlayerLevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DerivedPlayerLevel");
		return ptr;
	}


	int GetMaxLevelDelta();
	int GetMaxLevel();
	void GetLevelRange(int* Min, int* Max);
	float GetLevelNormalizedTo(int Target);
	float GetLevelNormalized();
	int GetLevelDelta();
	void GetLevelAndProgress(int* Level, float* NextLevelProgress);
	int GetLevel();
	void Configure(int InInputCountPerLevel, int InStartLevel, int InEarnableLevels);
};


// Class Shenmue3.S3DebugMenu
// 0x0000 (0x0208 - 0x0208)
class US3DebugMenu : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DebugMenu");
		return ptr;
	}


	void CloseDebugMenu();
};


// Class Shenmue3.S3DetectActionInterface
// 0x0000 (0x0028 - 0x0028)
class US3DetectActionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DetectActionInterface");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void DecideDetectAction(ES3ActionIconType Type);
};


// Class Shenmue3.S3DevelopBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3DevelopBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DevelopBlueprintFunctionLibrary");
		return ptr;
	}


	bool TeleportToNPC(class UObject* WorldContextObject, const struct FName& NPCName);
	void SetVirtualPlatform(ES3Platform Platform);
	void SetPostProcessAnimBlueprint(class USkeletalMesh* Mesh, class UClass* AnimBlueprint);
	void SetPhysicsAsset(class USkeletalMesh* Mesh, class UPhysicsAsset* NewPhysicsAsset);
	void MarkPackageDirty(class UObject* Object);
	bool IsWeGame(class UObject* WorldContextObject);
	bool IsVirtualPS4();
	bool IsVirtualPlatformOverriden();
	bool IsTestBuild();
	bool IsSimulateInEditor();
	bool IsShippingBuild();
	bool IsPS4();
	bool IsPlayInEditor();
	bool IsMouseSupported();
	bool IsEditor();
	bool IsDLCProjectVersion();
	bool IsDebugMouseSupported();
	bool IsDebugBuild();
	bool IsAlpha2();
	bool IsAlpha1();
	TArray<class ULevelStreaming*> GetWorldStreamingLevels(class UObject* WorldContextObject);
	ES3Platform GetVirtualPlatformEnum();
	ES3Platform GetPlatformEnum();
	struct FString GetOnlineServiceName(class UObject* WorldContextObject);
	void DisableVirtualPlatformOverride();
};


// Class Shenmue3.S3DetectAction
// 0x0078 (0x03A0 - 0x0328)
class AS3DetectAction : public AActor
{
public:
	float                                              DetectAreaRadius_TalkChara;                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DetectAreaRadius_MiniGame;                                // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              RegisteredOverlapActors;                                  // 0x0330(0x0010) (ZeroConstructor, Transient)
	class AActor*                                      PreferredCandidate;                                       // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3DetectActionParam>                CandidateParams;                                          // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS3DetectActionParam>                StackParams;                                              // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              DetectActors;                                             // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS3DetectActionActorList>            ForbidActors;                                             // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ForbidSensorActors;                                       // 0x0388(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DetectAction");
		return ptr;
	}


	void UpdateOverlapActors();
	void UpdateButton();
	void UpdateBSActors();
	void UnregisterOverlapActor(class AActor* OtherActor);
	void UnregisterDetectActor(class AActor* OtherActor);
	void RegisterOverlapActor(class AActor* OtherActor);
	void RegisterDetectActor(class AActor* OtherActor);
	void PermitIconAll(class AActor* Executor);
	void PermitIcon(TArray<ES3ActionIconType> Icons, class AActor* Executor);
	void PermitActionSensor(class AActor* Executor);
	void OnStartBS(class AS3Character* TalkableActor);
	void OnEndPlay_ForbidActor(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnEndPlay_DetectActor(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	bool IsRegisterDetectActor(class AActor* OtherActor);
	bool IsDetectTarget(class AActor* Actor, float PlayerDistance);
	bool IsActionSensorEnabled();
	bool IsActionGlobalForbidden();
	bool IsActionForbidden(ES3ActionIconType Icon, bool IgnoreGlobal);
	int GetDefaultButtonIndex(ES3ActionIconType Type);
	void ForbidIcon(TArray<ES3ActionIconType> Icons, class AActor* Executor);
	void ForbidActionSensor(class AActor* Executor);
	int FindStackIndex(const struct FS3DetectActionParam& InParam);
	bool CanStartBS(class AS3Character* Character);
};


// Class Shenmue3.S3DLCDialogManager
// 0x0000 (0x0328 - 0x0328)
class AS3DLCDialogManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DLCDialogManager");
		return ptr;
	}

};


// Class Shenmue3.S3DojoNamePlate
// 0x0070 (0x03A8 - 0x0338)
class AS3DojoNamePlate : public AStaticMeshActor
{
public:
	TMap<ES3DojoRank, struct FS3DojoNamePlateData>     DataList;                                                 // 0x0338(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UObject*>                             PreloadAssets;                                            // 0x0388(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3DojoNamePlate.PreloadSoftAssets

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DojoNamePlate");
		return ptr;
	}

};


// Class Shenmue3.S3DoorData
// 0x0048 (0x0070 - 0x0028)
class US3DoorData : public UObject
{
public:
	TArray<class US3DoorDataBase*>                     DoorDataList;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompulsionScriptPath;                                     // 0x0038(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3DoorData.CompulsionScript

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DoorData");
		return ptr;
	}

};


// Class Shenmue3.S3DoorDataBase
// 0x0060 (0x0088 - 0x0028)
class US3DoorDataBase : public UObject
{
public:
	int                                                StepMin;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimeMin;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimeMax;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     DoorState;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       InHouseNpcName;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     ScriptPath;                                               // 0x0050(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3DoorDataBase.Script

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DoorDataBase");
		return ptr;
	}

};


// Class Shenmue3.S3DoorFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3DoorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DoorFunctionLibrary");
		return ptr;
	}


	class US3DoorDataBase* GetDoorData2(class US3DoorData* DoorData, int Step, int Time);
	class US3DoorDataBase* GetDoorData(int Step, int Time, const struct FString& RootAssetPath, struct FString* State, struct FName* NPCName, struct FString* Path, struct FString* compulsionPath);
};


// Class Shenmue3.S3DoorShovingComponent
// 0x0010 (0x0100 - 0x00F0)
class US3DoorShovingComponent : public UActorComponent
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x00F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DetectChannel;                                            // 0x00F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CharacterChannel;                                         // 0x00F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	float                                              MaxShoveVelocity;                                         // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DoorShovingComponent");
		return ptr;
	}

};


// Class Shenmue3.S3DoorManager
// 0x0000 (0x0328 - 0x0328)
class AS3DoorManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DoorManager");
		return ptr;
	}

};


// Class Shenmue3.S3DownloadableContent
// 0x0020 (0x0050 - 0x0030)
class US3DownloadableContent : public UPrimaryDataAsset
{
public:
	TArray<int>                                        EventFlags;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3DownloadableContent.Maps

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DownloadableContent");
		return ptr;
	}

};


// Class Shenmue3.S3DownloadableContentManager
// 0x0048 (0x0070 - 0x0028)
class US3DownloadableContentManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FS3DownloadableContentInfo>          DLCInfos;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst)
	TArray<class US3DownloadableContent*>              DLCContents;                                              // 0x0040(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bDLCMounted;                                              // 0x0050(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMountDLCFinished;                                       // 0x0060(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DownloadableContentManager");
		return ptr;
	}


	void MountDLCAsync();
	bool IsInstalled(ES3DownloadableContentId ID);
	class US3GameInstance* GetGameInstance();
};


// Class Shenmue3.S3DirectionalLight
// 0x0010 (0x0348 - 0x0338)
class AS3DirectionalLight : public ADirectionalLight
{
public:
	bool                                               bRegister;                                                // 0x0338(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FTimerHandle                                RegisterHandle;                                           // 0x0340(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DirectionalLight");
		return ptr;
	}

};


// Class Shenmue3.S3DPICustomScalingRule
// 0x0000 (0x0028 - 0x0028)
class US3DPICustomScalingRule : public UDPICustomScalingRule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3DPICustomScalingRule");
		return ptr;
	}

};


// Class Shenmue3.S3EmaAttentionComponent
// 0x0010 (0x0690 - 0x0680)
class US3EmaAttentionComponent : public US3AttentionComponent
{
public:
	struct FName                                       NPC_ID;                                                   // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextLabel;                                                // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3EmaAttentionComponent");
		return ptr;
	}

};


// Class Shenmue3.S3EnergyManager
// 0x0000 (0x0328 - 0x0328)
class AS3EnergyManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3EnergyManager");
		return ptr;
	}


	bool IsLowEnergy();
	void DrainRunEnergy();
};


// Class Shenmue3.S3EndCreditsDataAsset
// 0x00A8 (0x00D8 - 0x0030)
class US3EndCreditsDataAsset : public UDataAsset
{
public:
	float                                              ScrollSpeed;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefautSpace;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, class UTexture*>                TextureMap;                                               // 0x0038(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UObject*>               BgmMap;                                                   // 0x0088(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3EndCreditsDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3EventIconManager
// 0x0000 (0x0328 - 0x0328)
class AS3EventIconManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3EventIconManager");
		return ptr;
	}

};


// Class Shenmue3.S3UserWidget
// 0x0018 (0x0220 - 0x0208)
class US3UserWidget : public UUserWidget
{
public:
	class AActor*                                      OwningActor;                                              // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             OwningComponent;                                          // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   VisibilityRestoreState;                                   // 0x0218(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0219(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3UserWidget");
		return ptr;
	}


	void UpdateFontFacetype();
	class USceneComponent* GetOwningComponent();
	class AActor* GetOwningActor();
	class AS3HUD* GetHUD();
	void FindText(class UPanelWidget* PanelWidget);
	struct FSlateFontInfo ChooseFontFacetype(const struct FSlateFontInfo& InFont);
};


// Class Shenmue3.S3EyecatchWidget
// 0x0008 (0x0228 - 0x0220)
class US3EyecatchWidget : public US3UserWidget
{
public:
	bool                                               bIsVisible;                                               // 0x0220(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3EyecatchWidget");
		return ptr;
	}


	void ShowEyecatchTexture(class UTexture* LogoImage, bool bUseFade);
	void ShowEyecatchText2(const struct FText& MainTitle1, const struct FText& SubTitle1, const struct FText& MainTitle2, const struct FText& SubTitle2, bool bUseFade);
	void ShowEyecatch(const struct FText& MainTitle, const struct FText& Subtitle, bool bUseFade);
	void HideEyecatch(bool bUseFade);
};


// Class Shenmue3.S3FaceAnimInstance
// 0x03F0 (0x0750 - 0x0360)
class US3FaceAnimInstance : public US3AnimInstance
{
public:
	bool                                               bRecentlyRendered;                                        // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              CurrentDeltaTimeX;                                        // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterName;                                            // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class US3FaceAnimDataAsset*                        AnimMontageData;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeadScale;                                                // 0x0378(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bUseHeadScale;                                            // 0x0384(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTalking;                                               // 0x0385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0386(0x0002) MISSED OFFSET
	float                                              TalkIdleTime;                                             // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpeaking;                                              // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	TMap<ECharacterEmotion, struct FName>              EmotionMorphMap;                                          // 0x0390(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<ECharacterEmotion, float>                     EmotionMorphScaleMap;                                     // 0x03E0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFaceBlendInfo>                      EmotionBlendArray;                                        // 0x0430(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       EmotionId;                                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PrevEmotionId;                                            // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AS3Clipper*                                  Clipper;                                                  // 0x0450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ClipperRateCurve;                                         // 0x0458(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EMouseShape, struct FName>                    ClipperMorphMap;                                          // 0x0460(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebugDisableClipperInterp;                               // 0x04B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	struct FClipperControlParam                        TextClipperParam;                                         // 0x04B4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FClipperControlParam                        CRIClipperParam;                                          // 0x04C4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FClipperControlParam                        CRIClipperParam_English;                                  // 0x04D4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FClipperControlParam                        CRIClipperParam_Chinese;                                  // 0x04E4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	TArray<struct FFaceBlendInfo>                      ClipperBlendArray;                                        // 0x04F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData05[0x14];                                      // 0x0508(0x0014) MISSED OFFSET
	EMouseShape                                        ClipperId;                                                // 0x051C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	int                                                ClipperVolume;                                            // 0x0520(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClipperVolumeRate;                                        // 0x0524(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 EyeBlinkCurve;                                            // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<ECharacterEmotion, float>                     EyeCloseBlendMaxMap;                                      // 0x0530(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              EyeBlinkTime;                                             // 0x0580(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeBlinkTimeMax;                                          // 0x0584(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloseEyeBlend;                                            // 0x0588(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysCloseEye;                                           // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	float                                              EyeBlinkRandMax;                                          // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeBlinkRandMin;                                          // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FluctuationEmotionCurve;                                  // 0x0598(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableFluctuation;                                       // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x05A1(0x0003) MISSED OFFSET
	float                                              FluctuationScale;                                         // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluctuationEmotionWeight;                                 // 0x05A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluctuationBlend;                                         // 0x05AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluctuationEmotionTimer;                                  // 0x05B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	class US3ProceduralFaceReactionAnim*               ProceduralFaceReactionAnim;                               // 0x05B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ProceduralNeckRotation;                                   // 0x05C0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              ProceduralReactionExecutionRate;                          // 0x05CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                ProceduralRotationCurve;                                  // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralFluctuationMinRate;                             // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralFluctuationMaxRate;                             // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bProceduralReactionReverseCurveRoll;                      // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabledProceduralReactionAnim;                          // 0x05E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledLookAt;                                           // 0x05E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x5];                                       // 0x05E3(0x0005) MISSED OFFSET
	class US3LookAtFSMComponent*                       LookAtComponent;                                          // 0x05E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FS3CharacterLookAtLocation                  LookAtLocationInfo;                                       // 0x05F0(0x0060) (Edit, BlueprintVisible)
	struct FS3CharacterLookAtWholeBodyParamater        LookAtClampInfo;                                          // 0x0650(0x0030) (Edit, BlueprintVisible)
	struct FS3CharacterLookAtBlendedWeight             LookAtBlendedWeight;                                      // 0x0680(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FS3CharacterLookAtIKCorrectionWeight        LookAtIKCorrectionWeight;                                 // 0x068C(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EnableLookAtBlendTime;                                    // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisableLookAtBlendTime;                                   // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendFace;                                               // 0x0698(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0699(0x0003) MISSED OFFSET
	float                                              BodyLookAtAlphaCommon;                                    // 0x069C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeadLookAtAlphaCommon;                                    // 0x06A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EyesLookAtAlphaCommon;                                    // 0x06A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BodyLookAtAlpha;                                          // 0x06A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WaistLookAtAlpha;                                         // 0x06AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChestLookAtAlpha;                                         // 0x06B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NeckLookAtAlpha;                                          // 0x06B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EyeLookAtAlpha;                                           // 0x06B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeadLookAtAlpha;                                          // 0x06BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EyelidLookAtAlpha;                                        // 0x06C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NeckMildAlphaScale;                                       // 0x06C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyelidAlphaScale;                                         // 0x06C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PelvisLookAtLocation;                                     // 0x06CC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     WaistLookAtLocation;                                      // 0x06D8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     BreastLookAtLocation;                                     // 0x06E4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     NeckLookAtLocation;                                       // 0x06F0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     EyeLookAtLocationR;                                       // 0x06FC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     EyeLookAtLocationL;                                       // 0x0708(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PelvisLookAtClampV;                                       // 0x0714(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PelvisLookAtClampH;                                       // 0x0718(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WaistLookAtClampV;                                        // 0x071C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WaistLookAtClampH;                                        // 0x0720(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BreastLookAtClampV;                                       // 0x0724(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BreastLookAtClampH;                                       // 0x0728(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NeckLookAtClampV;                                         // 0x072C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NeckLookAtClampH;                                         // 0x0730(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeadLookAtClampV;                                         // 0x0734(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeadLookAtClampH;                                         // 0x0738(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EyeLookAtClampV;                                          // 0x073C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EyeLookAtClampH;                                          // 0x0740(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LookAtHandIKBlend;                                        // 0x0744(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0748(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3FaceAnimInstance");
		return ptr;
	}


	void UpdateCharacterName();
	void SetHeadScale();
	void SetClipperByGameMode();
	void ResetFluctuationEmotion();
	void ResetClipperMorph();
	void PlayEmotionMorph();
	void PlayClipperMorph();
	bool IsUseFluctuationEmotion();
	bool IsEnableLookAt();
	ECharacterEmotion FindEmotionMorphMapKey(const struct FName& InEmotionId);
	EMouseShape FindClipperMorphMapKey(const struct FName& InClipperId);
	struct FName ConvertEmotionId(const struct FString& InEmotionId);
	void CheckTalking(float DeltaSeconds);
	void CalcLookAt();
	void CalcFluctuationEmotion();
	void CalcEyeBlink();
	void CalcEmotionBlend(float Scale);
	void CalcEmotion();
	void CalcClipperBlend(float Max, float Scale);
	void CalcClipper();
};


// Class Shenmue3.S3FaceAnimDataAsset
// 0x0120 (0x0150 - 0x0030)
class US3FaceAnimDataAsset : public UDataAsset
{
public:
	class UAnimSequence*                               NeutralFaceAnim;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EyelidMontage;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverlapEyeCloseBlendMaxMap;                              // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TMap<ECharacterEmotion, float>                     EyeCloseBlendMaxMap;                                      // 0x0048(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<ECharacterEmotion, float>                     EmotionVaryAdjustMap;                                     // 0x0098(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ClipperVolumeScale;                                       // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FS3CharacterLookAtWholeBodyParamater        LookAtParamater;                                          // 0x00EC(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class UAnimMontage*                                NeutralFaceMontage;                                       // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                IdleFaceMontage;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        EmotionMontages;                                          // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        ClipperMontages;                                          // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3FaceAnimDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3FaceAnimMetaData
// 0x0008 (0x0030 - 0x0028)
class US3FaceAnimMetaData : public UAnimMetaData
{
public:
	bool                                               bIsEyeRotate;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3FaceAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.S3FadeCharacterCapsule
// 0x0050 (0x05E0 - 0x0590)
class US3FadeCharacterCapsule : public UCapsuleComponent
{
public:
	TArray<class ACharacter*>                          WhitelistedCharacters;                                    // 0x0590(0x0010) (ZeroConstructor)
	TArray<class ACharacter*>                          FadedCharacters;                                          // 0x05A0(0x0010) (ZeroConstructor)
	bool                                               bUseWhitelist;                                            // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x05B1(0x0027) MISSED OFFSET
	float                                              FadeTime;                                                 // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3FadeCharacterCapsule");
		return ptr;
	}


	void SetUseWhitelist(bool bNewSetting);
	void RemoveFromWhitelist(class ACharacter* Character);
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AddToWhitelist(class ACharacter* Character);
};


// Class Shenmue3.S3ClipperLibrary
// 0x0000 (0x0028 - 0x0028)
class US3ClipperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ClipperLibrary");
		return ptr;
	}


	float ConvertClipperVolume(int Volume);
};


// Class Shenmue3.S3FaceLegacyAnimInstance
// 0x0020 (0x0770 - 0x0750)
class US3FaceLegacyAnimInstance : public US3FaceAnimInstance
{
public:
	float                                              RateA;                                                    // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RateI;                                                    // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RateU;                                                    // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RateE;                                                    // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RateO;                                                    // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RateMax;                                                  // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RateMaxInter;                                             // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x076C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3FaceLegacyAnimInstance");
		return ptr;
	}


	void UpdateClipperFlag();
	float GetClipperRate(bool bConditionOpenFlag, float Rate, float DeltaTimeX);
};


// Class Shenmue3.S3FrameworkLibrary
// 0x0000 (0x0028 - 0x0028)
class US3FrameworkLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3FrameworkLibrary");
		return ptr;
	}


	class US3TextDataManagerBase* GetS3TextDataManagerNative(class UObject* WorldContextObject);
	class US3TalkScriptManager* GetS3TalkScriptManagerNative(class UObject* WorldContextObject);
	class AS3TalkEventManagerBase* GetS3TalkEventManagerNative(class UObject* WorldContextObject);
	class AS3SoundManager* GetS3SoundManagerNative(class UObject* WorldContextObject);
	class AS3SkyManager* GetS3SkyManagerNative(class UObject* WorldContextObject);
	class US3SaveLoadManager* GetS3SaveLoadManagerNative(class UObject* WorldContextObject);
	class AS3RewardManager* GetS3RewardManagerNative(class UObject* WorldContextObject);
	class AS3NPCLeadManager* GetS3NPCLeadManagerNative(class UObject* WorldContextObject);
	class AS3MiniGameManager* GetS3MiniGameManagerNative(class UObject* WorldContextObject);
	class US3LiveStreamingManager* GetS3LiveStreamingManagerNative(class UObject* WorldContextObject);
	class US3InputDeviceManager* GetS3InputDeviceManagerNative(class UObject* WorldContextObject);
	class AS3HUD* GetS3HUDNative(class UObject* WorldContextObject);
	class AS3HintTalkManager* GetS3HintTalkManagerNative(class UObject* WorldContextObject);
	class AS3GimmickManager* GetS3GimmickManagerNative(class UObject* WorldContextObject);
	class AS3GameTimeManager* GetS3GameTimeManagerNative(class UObject* WorldContextObject);
	class AS3GameMode* GetS3GameModeNative(class UObject* WorldContextObject);
	class US3GameInstance* GetS3GameInstanceNative(class UObject* WorldContextObject);
	class US3DownloadableContentManager* GetS3DownloadableContentManagerNative(class UObject* WorldContextObject);
	class AS3DetectAction* GetS3DetectActionNative(class UObject* WorldContextObject);
	class US3DebugMenu* GetS3DebugMenuNative(class UObject* WorldContextObject);
	class AS3CutsceneManager* GetS3CutsceneManagerNative(class UObject* WorldContextObject);
	class AS3ClothManager* GetS3ClothManagerNative(class UObject* WorldContextObject);
	class AS3Clipper* GetS3ClipperManagerNative(class UObject* WorldContextObject);
	class US3CheatManager* GetS3CheatManagerNative(class UObject* WorldContextObject);
	class AS3CharaLightingManager* GetS3CharaLightingManagerNative(class UObject* WorldContextObject);
	class AS3BgmManager* GetS3BgmManagerNative(class UObject* WorldContextObject);
	class ABTL_BattleSpawner* GetS3BattleSpawnerNative(class UObject* WorldContextObject);
	class US3AssetChunkManager* GetS3AssetChunkManagerNative(class UObject* WorldContextObject);
	class AS3AreaManager* GetS3AreaManagerNative(class UObject* WorldContextObject);
	class AS3AdventurePlayerController* GetS3AdventurePlayerControllerNative(class UObject* WorldContextObject);
	class US3AchievementManager* GetS3AchievementManagerNative(class UObject* WorldContextObject);
};


// Class Shenmue3.S3FindSecretRoom
// 0x0008 (0x0330 - 0x0328)
class AS3FindSecretRoom : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3FindSecretRoom");
		return ptr;
	}


	struct FName GetClothCharaName();
};


// Class Shenmue3.S3FadeMaterialDataAsset
// 0x0020 (0x0050 - 0x0030)
class US3FadeMaterialDataAsset : public UDataAsset
{
public:
	TArray<struct FName>                               StaticSwitchParameters;                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS3FadeMaterialSwapData>             MaterialData;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3FadeMaterialDataAsset");
		return ptr;
	}


	class UMaterialInstanceDynamic* MakeFadeMaterial(class UObject* WorldContextObject, class UMaterialInterface* Source);
};


// Class Shenmue3.S3GameEngine
// 0x0000 (0x0CB0 - 0x0CB0)
class US3GameEngine : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GameEngine");
		return ptr;
	}

};


// Class Shenmue3.S3GameTimeEventManager
// 0x0000 (0x0328 - 0x0328)
class AS3GameTimeEventManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GameTimeEventManager");
		return ptr;
	}

};


// Class Shenmue3.S3GimmickChair
// 0x0040 (0x0378 - 0x0338)
class AS3GimmickChair : public AStaticMeshActor
{
public:
	EChairDirection                                    FrontDir;                                                 // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FString                                     LocationTag;                                              // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ForceStarPointDir;                                        // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	TArray<struct FS3ChairPointStruct>                 PointList;                                                // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UArrowComponent*                             Direction;                                                // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bEndTick;                                                 // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	int                                                LeaveDirection;                                           // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GimmickChair");
		return ptr;
	}


	void OnChanged();
	bool ModeChangeRequest(EChairOccupied Mode, class AS3Character* Character, const struct FVector& pos, int poiIdx, int stIdx, float moveDist, struct FS3ChairResultStruct* Result);
	bool LocationTagCheck(TArray<struct FString>* LocationTags);
	bool LeaveDirectionCheck(ELeaveDirection dir);
	bool IsCharacterSitting(class AS3Character* Character);
	bool HasVacantSeat();
	float GetNearStartPointDist(const struct FTransform& Point, int* poiIdx, int* stIdx);
	struct FRotator GetChairRotator();
	EChairForm GetChairForm();
	void ExitManager();
	bool EntryManager();
};


// Class Shenmue3.S3GameViewportClient
// 0x0008 (0x02F0 - 0x02E8)
class US3GameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x02E8(0x0001) MISSED OFFSET
	bool                                               bEnableCreateWidget;                                      // 0x02E9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02EA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GameViewportClient");
		return ptr;
	}


	void ShowTitleSafeAreaMinimum();
};


// Class Shenmue3.S3GimmickEmitter
// 0x0010 (0x0388 - 0x0378)
class AS3GimmickEmitter : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0378(0x0004) MISSED OFFSET
	bool                                               bDisableActive;                                           // 0x037C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	float                                              OverrideDrawDistance;                                     // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0384(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GimmickEmitter");
		return ptr;
	}

};


// Class Shenmue3.S3GimmickLightInterface
// 0x0000 (0x0028 - 0x0028)
class US3GimmickLightInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GimmickLightInterface");
		return ptr;
	}

};


// Class Shenmue3.S3GimmickLightTarget
// 0x0000 (0x0328 - 0x0328)
class AS3GimmickLightTarget : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GimmickLightTarget");
		return ptr;
	}

};


// Class Shenmue3.S3GimmickLightDrawComponent
// 0x0000 (0x00F0 - 0x00F0)
class US3GimmickLightDrawComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GimmickLightDrawComponent");
		return ptr;
	}

};


// Class Shenmue3.S3GimmickManager
// 0x00A8 (0x03D0 - 0x0328)
class AS3GimmickManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	int                                                MaxUpdatePerTick;                                         // 0x0330(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TArray<class AS3TimeSwitchPointLight*>             PointLights;                                              // 0x0338(0x0010) (ZeroConstructor)
	TArray<class AS3TimeSwitchSpotLight*>              SpotLights;                                               // 0x0348(0x0010) (ZeroConstructor)
	TArray<class AS3TimeSwitchPointLight*>             SensorPointLights;                                        // 0x0358(0x0010) (ZeroConstructor)
	TArray<class AS3TimeSwitchSpotLight*>              SensorSpotLights;                                         // 0x0368(0x0010) (ZeroConstructor)
	TArray<class AS3StaticMeshWithLights*>             StaticMeshWithLights;                                     // 0x0378(0x0010) (ZeroConstructor)
	TArray<class AS3GimmickLightTarget*>               GimmickLightTargets;                                      // 0x0388(0x0010) (ZeroConstructor)
	int                                                MaxCastShadowLights;                                      // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FS3GimmickLightCastShadowInfo>       CastShadowInfos;                                          // 0x03A0(0x0010) (ZeroConstructor)
	TArray<class AS3GimmickEmitter*>                   GimmickEmitters;                                          // 0x03B0(0x0010) (ZeroConstructor)
	TArray<class US3SoundAreaComponent*>               SoundAreas;                                               // 0x03C0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GimmickManager");
		return ptr;
	}


	void GetSpotLights(TArray<class AS3TimeSwitchSpotLight*>* OutSpotLights);
	void GetPointLights(TArray<class AS3TimeSwitchPointLight*>* OutPointLights);
};


// Class Shenmue3.S3NavLinkProxy
// 0x0000 (0x0378 - 0x0378)
class AS3NavLinkProxy : public ANavLinkProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NavLinkProxy");
		return ptr;
	}


	void OnNavlinkStateChange(class US3PathFollowingComponent* PathingComponent, class UNavLinkCustomComponent* NavComp);
};


// Class Shenmue3.S3GimmickOpenDoor
// 0x0048 (0x03C0 - 0x0378)
class AS3GimmickOpenDoor : public AS3NavLinkProxy
{
public:
	bool                                               IsPlayAnimation;                                          // 0x0378(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOpenDoor;                                              // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMovingDoor;                                              // 0x037A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRecoveryPoint;                                        // 0x037B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh_Door;                                        // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3DoorData*                                 DoorData;                                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     DoorDataPath;                                             // 0x0390(0x0010) (ZeroConstructor, Deprecated)
	class USoundAtomCue*                               OpenDoorSE;                                               // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAtomCue*                               CloseDoorSE;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAtomCue*                               KnockSE;                                                  // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3DoorShovingComponent*                     ShovingComponent;                                         // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GimmickOpenDoor");
		return ptr;
	}


	void PlayAnimation(class UAnimationAsset* NewAnimToPlay, bool bLooping);
	bool IsNeedPositionRecovery(class ACharacter* SelfCharacter, class ACharacter* OpponentCharacter);
	struct FTransform GetRecoveryPoint(class ACharacter* Character, bool bBack);
};


// Class Shenmue3.S3GimmickStepTrigger
// 0x0038 (0x0368 - 0x0330)
class AS3GimmickStepTrigger : public ATriggerBox
{
public:
	TArray<class UObject*>                             PreloadAssets;                                            // 0x0330(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3GimmickStepTrigger.PreloadSoftAssets
	struct FName                                       TextDataLabel;                                            // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3Player180ReturnRandomTextData>    TextData;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GimmickStepTrigger");
		return ptr;
	}

};


// Class Shenmue3.S3GlowTextBlock
// 0x0118 (0x0328 - 0x0210)
class US3GlowTextBlock : public UTextBlock
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0210(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0298(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      FinalRenderTarget;                                        // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                GaussianRadius;                                           // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GaussianSigma;                                            // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutlineBlurRadius;                                        // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // 0x02D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              OutlineIntensity;                                         // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   DrawSize;                                                 // 0x02EC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x02F4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0304(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GlowTextBlock");
		return ptr;
	}


	void SetOutlineColor(const struct FLinearColor& InOutlineColor);
	void SetOutlineBlurRadius(float InOutlineBlurRadius);
	void ForceUpdate(float DeltaTime);
	void DrawWidgetToRenderTarget(float DeltaTime);
};


// Class Shenmue3.S3HakkachanAwardFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3HakkachanAwardFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3HakkachanAwardFunctionLibrary");
		return ptr;
	}


	void UnlockHakkachanCountAwards(class US3_BRallyAwardSystem* AwardSystem, class UDataTable* DataTable, int Count);
	void PreviewHakkachanCountAwardsV2(class UDataTable* DataTable, int Owned, int Max, TArray<struct FS3HakkachanAwardPreviewData>* OutAwards);
	int FindHakkachanCountForAward(class UDataTable* DataTable, const struct FName& Award, int MaxHave);
};


// Class Shenmue3.S3HelpInterface
// 0x0000 (0x0028 - 0x0028)
class US3HelpInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3HelpInterface");
		return ptr;
	}


	bool UnregisterHelp(ES3HelpRegisterTiming Timing);
	bool RegisterHelp(ES3HelpRegisterTiming Timing);
	bool IsActivateHelp();
	ES3HelpPriority GetHelpPriority();
	struct FName GetHelpName();
};


// Class Shenmue3.S3HelpManager
// 0x0000 (0x0328 - 0x0328)
class AS3HelpManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3HelpManager");
		return ptr;
	}

};


// Class Shenmue3.S3HierarchicalLODSetup
// 0x0000 (0x0060 - 0x0060)
class US3HierarchicalLODSetup : public UHierarchicalLODSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3HierarchicalLODSetup");
		return ptr;
	}

};


// Class Shenmue3.S3HintTalkManager
// 0x0058 (0x0380 - 0x0328)
class AS3HintTalkManager : public AActor
{
public:
	class UHintTalkData*                               CurHintData;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UTalkScript*>           TestHintTalkScripts;                                      // 0x0330(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3HintTalkManager");
		return ptr;
	}


	class UTalkScript* GetHintTalkScript(const struct FST_S3HintTalkData& Data, class AS3Character* TalkedNPC);
	bool GetHintTalkData(const struct FName& NPC_ID, struct FST_S3HintTalkData* Data);
	struct FString CreateKey(EHintTarget HintTalkKind, bool IsAnswer, TEnumAsByte<ES3CharacterGender> Gender, int Age);
	int AgeToIndex(int Age);
};


// Class Shenmue3.S3GraphicSettingsManager
// 0x0010 (0x0038 - 0x0028)
class US3GraphicSettingsManager : public UObject
{
public:
	int                                                MaxLoadedNPC;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxShowNPC;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxCastShadowLights;                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	ES3GraphicPreset                                   GraphicPreset;                                            // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GraphicSettingsManager");
		return ptr;
	}


	void Init();
	int GetMaxShowNPC();
	int GetMaxLoadedNPC();
	int GetMaxCastShadowLights();
};


// Class Shenmue3.S3HUD
// 0x00C8 (0x04E0 - 0x0418)
class AS3HUD : public AHUD
{
public:
	class UClass*                                      DetectActionClass;                                        // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AS3DetectAction*                             DetectAction;                                             // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowWidget;                                              // 0x0428(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoFadeIn;                                               // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFading;                                                 // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFadeOut;                                                // 0x042B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartScreenFadeIn;                                      // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartScreenFadeOut;                                     // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinishScreenFadeIn;                                     // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinishScreenFadeOut;                                    // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class AActor*>                              LoadingActors;                                            // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<class AActor*>                              LoadingReadyActors;                                       // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	struct FScriptMulticastDelegate                    OnFinishLoading;                                          // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDialogDecide;                                           // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDialogCancel;                                           // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDialogClose;                                            // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class US3UserWidget*>                       WidgetArray;                                              // 0x04D0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3HUD");
		return ptr;
	}


	void ToggleWidget();
	void ShowWidget();
	void ShowRewardNotice(ES3RewardCategory Category);
	bool ShowLoading(class AActor* Executor);
	bool ScreenFadeOut(float FadeTime, const struct FLinearColor& FadeColor);
	bool ScreenFadeInAutoColor(float FadeTime);
	bool ScreenFadeIn(float FadeTime, const struct FLinearColor& FadeColor);
	void PermitWindowUI(class AActor* Actor);
	void PermitDetectAction(class AActor* Actor);
	void OpenCommonDialog(class AActor* Executor, TArray<struct FName> Labels, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify);
	bool IsVisibleDialog();
	bool IsLoading();
	void HideWidget();
	bool HideLoading(class AActor* Executor);
	TArray<class US3UserWidget*> GetWidgets();
	void ForbidWindowUI(class AActor* Actor);
	void ForbidDetectAction(class AActor* Actor);
	void CloseDialog(class AActor* Executor);
	void AddUserWidget(class US3UserWidget* Widget);
};


// Class Shenmue3.S3InputBufferComponent
// 0x0040 (0x0130 - 0x00F0)
class US3InputBufferComponent : public UActorComponent
{
public:
	int                                                MaxInputs;                                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrioritizeNewEvents;                                     // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	TArray<struct FBufferedInputData>                  RecordedInputs;                                           // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FName>                               RecordingEnabledInputs;                                   // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FName>                               RecordingDisabledInputs;                                  // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3InputBufferComponent");
		return ptr;
	}


	void UnPause();
	void RecordInput(const struct FName& Identifier);
	struct FBufferedInputData PopNextInputAction();
	void Pause();
	int Num();
	bool IsRecordingEnabled(const struct FName& Identifier);
	bool IsPaused();
	void EnableRecordingIdentifier(const struct FName& Identifier);
	void EnableAllIdentifiers();
	void DisableRecordingIdentifier(const struct FName& Identifier);
	void DisableAllIdentifiers();
	bool ContainsRecent(const struct FName& Identifier, float MaxTimePast);
	bool Contains(const struct FName& Identifier);
	void ClearRecords(const struct FName& Identifier);
	void ClearAllRecords();
};


// Class Shenmue3.S3InputDeviceManager
// 0x0008 (0x0030 - 0x0028)
class US3InputDeviceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3InputDeviceManager");
		return ptr;
	}


	bool IsGamepadAttached();
};


// Class Shenmue3.S3InstancedStaticMeshActor
// 0x0008 (0x0330 - 0x0328)
class AS3InstancedStaticMeshActor : public AActor
{
public:
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3InstancedStaticMeshActor");
		return ptr;
	}

};


// Class Shenmue3.S3InstancedStaticMeshComponent
// 0x0000 (0x0680 - 0x0680)
class US3InstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3InstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Shenmue3.S3ItemFunctionLibrary
// 0x0068 (0x0090 - 0x0028)
class US3ItemFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	class UDataTable*                                  ItemDataTable;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  ItemLocalizeTextDataTable;                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ItemFunctionLibrary");
		return ptr;
	}


	bool ShouldShowListItemDetails(int InId, ES3ItemListMenuType MenuType, class UObject* WorldContextObject);
	bool IsItemListAdd(ES3ItemListMenuType MenuType, ES3ItemDataGroup Group, ES3ItemDataRarity Rarity);
	TArray<struct FName> GetItemTableRowNamesByGroup(ES3ItemDataGroup Group, class UObject* WorldContextObject);
	TArray<struct FName> GetItemTableRowNames(class UObject* WorldContextObject);
	struct FString GetItemTableName(const struct FName& Label, class UObject* WorldContextObject);
	void GetItemTableMeshReference(const struct FName& Label, class UObject* WorldContextObject);
	class UStaticMesh* GetItemTableMesh(const struct FName& Label, class UObject* WorldContextObject);
	int GetItemTableLength(class UObject* WorldContextObject);
	struct FString GetItemTableDescription(const struct FName& Label, class UObject* WorldContextObject);
	bool GetItemTableDataNoText(const struct FName& Label, class UObject* WorldContextObject, struct FS3ItemDataTable* OutItemData);
	bool GetItemTableDataFromNumber(int ID, class UObject* WorldContextObject, struct FS3ItemDataTable* OutItemData);
	bool GetItemTableData(const struct FName& Label, class UObject* WorldContextObject, struct FS3ItemDataTable* OutItemData);
	int GetItemIndex(const struct FString& ID, bool bStrict);
	class UDataTable* GetItemDataTable(class UObject* WorldContextObject);
	struct FName FormatItemId(const struct FString& InId);
	void EnableItemCacheData(class UObject* WorldContextObject);
	void DisableItemCacheData(class UObject* WorldContextObject);
};


// Class Shenmue3.S3InteractionComponent
// 0x0150 (0x06E0 - 0x0590)
class US3InteractionComponent : public UCapsuleComponent
{
public:
	struct FScriptMulticastDelegate                    OnInteracted;                                             // 0x0590(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractedComponent;                                    // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLeftStick;                                              // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnabled;                                                 // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	struct FName                                       ActionName;                                               // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ES3InteractionFacing>                  Facing;                                                   // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05D1(0x0003) MISSED OFFSET
	float                                              FacingAngle;                                              // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputType;                                                // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ES3InteractionShape>                   InteractionShape;                                         // 0x05D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x05DA(0x0002) MISSED OFFSET
	int                                                Priority;                                                 // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CharacterTransform;                                       // 0x05E0(0x0030) (IsPlainOldData)
	struct FTransform                                  IKHandle;                                                 // 0x0610(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Slices;                                                   // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SliceRadius;                                              // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCapturingMovement;                                       // 0x0648(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bManualGeometryEdit;                                      // 0x0649(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEditorDebugDisplay;                                      // 0x064A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x79];                                      // 0x064B(0x0079) MISSED OFFSET
	float                                              Alpha;                                                    // 0x06C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x06C8(0x000C) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x06D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3InteractionComponent");
		return ptr;
	}


	void SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps);
	struct FVector GetUnscaledBoxExtent();
	struct FVector GetScaledBoxExtent();
	void CaptureMovement(class AS3PlayerController* PlayerController, bool bCaptureMovement);
};


// Class Shenmue3.S3ItemListViewerManager
// 0x0000 (0x0328 - 0x0328)
class AS3ItemListViewerManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ItemListViewerManager");
		return ptr;
	}

};


// Class Shenmue3.S3ItemManager
// 0x00C8 (0x00F0 - 0x0028)
class US3ItemManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ItemManager");
		return ptr;
	}


	int GetItemNum(const struct FString& ID);
	int GetItemLength();
	bool GetItemFlag(const struct FString& ID);
	bool GetItemCheckFlag(int Index);
};


// Class Shenmue3.S3ItemSpawner
// 0x0008 (0x0330 - 0x0328)
class AS3ItemSpawner : public AActor
{
public:
	bool                                               bIsCrudeDrug;                                             // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHitCollisionFlag;                                        // 0x0329(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ItemSpawner");
		return ptr;
	}


	struct FName GetUniqueName();
	void DelayedInitialize();
};


// Class Shenmue3.S3ItemSpawnerManager
// 0x0038 (0x0360 - 0x0328)
class AS3ItemSpawnerManager : public AActor
{
public:
	TArray<class AS3ItemSpawner*>                      NativeSpawnerList;                                        // 0x0328(0x0010) (ZeroConstructor)
	class AS3ItemSpawner*                              NearSpawner;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLookButtonEnable;                                        // 0x0340(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartActionEnd;                                          // 0x0341(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	TArray<class AS3ItemSpawner*>                      DelayedInitializeSpawnerList;                             // 0x0348(0x0010) (ZeroConstructor)
	int                                                DelayedInitializeNumOnFrame;                              // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ItemSpawnerManager");
		return ptr;
	}


	void UpdateDelayedInitialize();
	void RemoveItemSpawner(class AS3ItemSpawner* ItemSpawner);
	void RemoveDelayedInitializeSpawner(class AS3ItemSpawner* ItemSpawner);
	void AddItemSpawner(class AS3ItemSpawner* ItemSpawner);
	void AddDelayedInitializeSpawner(class AS3ItemSpawner* ItemSpawner);
};


// Class Shenmue3.S3KartPawnBase
// 0x0008 (0x0390 - 0x0388)
class AS3KartPawnBase : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3KartPawnBase");
		return ptr;
	}


	struct FName GetClothCharaName();
};


// Class Shenmue3.S3GameTimeManager
// 0x00E0 (0x0408 - 0x0328)
class AS3GameTimeManager : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnGameTimeEventDay;                                       // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameTimeEventShop;                                      // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameTimeEventCustom;                                    // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimeJump;                                               // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameDateNextDay;                                        // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimelineUpdate;                                         // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USceneComponent*                             Scene;                                                    // 0x0388(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FS3GameTimeEventList>                TimeEventList;                                            // 0x0390(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UTimelineComponent*                          tlGametime;                                               // 0x03A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	class UCurveFloat*                                 cvGametime;                                               // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FS3CustomTimeEventList                      CustomEventList;                                          // 0x03B0(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FDateTime                                   GameDate;                                                 // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FDateTime                                   StandardGameDate;                                         // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              GameTime;                                                 // 0x03E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTimeBias;                                            // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ES3DayTimeEvent                                    GameTimeDay;                                              // 0x03E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ES3ShopTimeEvent                                   GameTimeShop;                                             // 0x03E9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03EA(0x0002) MISSED OFFSET
	int                                                GameTimeCustom;                                           // 0x03EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceChangeTime;                                         // 0x03F0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x03F1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03F2(0x0002) MISSED OFFSET
	float                                              ForceStopTime;                                            // 0x03F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              StopActors;                                               // 0x03F8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3GameTimeManager");
		return ptr;
	}


	void UpdateTlGametime();
	void UpdateNextDay();
	void UpdateCurrentGameTimeShop();
	void UpdateCurrentGameTimeDay();
	void UpdateCurrentGameTimeCustom(float OldGameTime);
	void StopGameTime(class AActor* Executor);
	void StartGameTime(class AActor* Executor);
	void SetGameTime(float NewGameTime, bool bUpdateNextDay);
	void SetGameDateTime(const struct FDateTime& NewDate);
	void SetDeltaTimeBias(float InDeltaTimeBias);
	void ReleaseForceStopTime();
	void registCustomTimeEvent(float Time, int* registIndex);
	bool IsStopGameTime();
	bool InitDataTime();
	struct FDateTime GetGameDateTime();
	float GetEventTimeShop(ES3ShopTimeEvent InEventType);
	float GetEventTimeDay(ES3DayTimeEvent InEventType);
	void DetectTimeEventPositon(int cateId, float Time, int* Index);
	void DetectCustomEventPositon(float NewTime, float OldTime, TArray<int>* Indexes);
	void AppendGameTime(float DeltaGameTime, bool bUpdateNextDay);
};


// Class Shenmue3.S3KeyConfigFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3KeyConfigFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3KeyConfigFunctionLibrary");
		return ptr;
	}


	TArray<struct FInputActionKeyMapping> RemoveActionMapping(const struct FName& ActionName, const struct FKey& Key, class UPlayerInput* PlayerInput);
	bool IsKeyGamepadInput(const struct FKey& Key);
	ES3InputDeviceModel GetUIInputDevice(class UObject* WorldContext);
	TArray<struct FInputActionKeyMapping> AddActionMapping(const struct FName& ActionName, const struct FKey& Key, class UPlayerInput* PlayerInput);
};


// Class Shenmue3.S3KismetPlayerLibrary
// 0x0000 (0x0028 - 0x0028)
class US3KismetPlayerLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3KismetPlayerLibrary");
		return ptr;
	}


	struct FVector GetAxisZ();
	struct FVector GetAxisY();
	struct FVector GetAxisX();
};


// Class Shenmue3.S3KismetMathLibrary
// 0x0000 (0x0028 - 0x0028)
class US3KismetMathLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3KismetMathLibrary");
		return ptr;
	}


	float Vector2DLengthSquared(const struct FVector& v1, const struct FVector& v2);
	bool S3SegmentIntersection2D(const struct FVector& SegmentStartA, const struct FVector& SegmentEndA, const struct FVector& SegmentStartB, const struct FVector& SegmentEndB, struct FVector* OutIntersectionPoint);
	struct FVector RotateVectorXY(const struct FVector& Center, const struct FVector& pos, float RotDeg);
	float NormalizeAngle(float RotDeg);
	float LerpAngleSigned(float A, float B, float AlphaWithSign);
	float LerpAngle(float A, float B, float Alpha);
	float InverseLerpLegacy(float A, float B, float Value);
	float InterpolateAngleConstantSigned(float Source, float Target, float DirectionSignedDegrees);
	float InterpolateAngleConstantNear(float Source, float Target, float Delta);
	struct FVector GetTriangleNormal(const struct FVector& V0, const struct FVector& v1, const struct FVector& v2);
	struct FBox GetSplineAreaAtPointVector3D(TArray<struct FVector> PointVector, const struct FVector& Offset);
	float DifferenceAngle(float RotDeg1, float RotDeg2);
	float ConvertAngleToSignDegrees(float AngleDegrees, float Sign);
	float AngleVector2DSignedDegrees(const struct FVector& Target, const struct FVector& Source);
	float AngleDifferenceSignedDegrees(float Target, float Source);
	struct FRotator Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
};


// Class Shenmue3.S3JointAnimInstance
// 0x0030 (0x0390 - 0x0360)
class US3JointAnimInstance : public UAnimInstance
{
public:
	class AS3Character*                                Character;                                                // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlendElbowL;                                              // 0x0368(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlendElbowR;                                              // 0x036C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlendKneeR;                                               // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlendKneeL;                                               // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ElbowRange;                                               // 0x0378(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KneeRange;                                                // 0x037C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCutscene;                                               // 0x0380(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsDebugApply;                                             // 0x0381(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0382(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3JointAnimInstance");
		return ptr;
	}

};


// Class Shenmue3.S3LevelDataAsset
// 0x0038 (0x0068 - 0x0030)
class US3LevelDataAsset : public UDataAsset
{
public:
	TArray<struct FName>                               HakkasonNPCLevelName;                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               ChobuNPCLevelName;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bLoadNPCLevel;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<struct FName>                               DebugAlwaysLoadedLevelName;                               // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3LevelDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3LightTypeComponent
// 0x0008 (0x00F8 - 0x00F0)
class US3LightTypeComponent : public UActorComponent
{
public:
	ES3LightChannelType                                Type;                                                     // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3LightTypeComponent");
		return ptr;
	}

};


// Class Shenmue3.S3LiveStreamingManager
// 0x0008 (0x0030 - 0x0028)
class US3LiveStreamingManager : public UObject
{
public:
	bool                                               bEnableStreaming;                                         // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	ES3Where                                           CurrentLevel;                                             // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                CurrentEventStep;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3LiveStreamingManager");
		return ptr;
	}


	void SetEnableStreaming(bool bEnable);
	void OnLevelChanged();
	void OnGameStepChanged(int SetSteps);
	class US3GameInstance* GetGameInstance();
};


// Class Shenmue3.S3LevelScriptActor
// 0x0000 (0x0330 - 0x0330)
class AS3LevelScriptActor : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3LevelScriptActor");
		return ptr;
	}

};


// Class Shenmue3.S3LoadingFlipBookImage
// 0x0010 (0x01E8 - 0x01D8)
class US3LoadingFlipBookImage : public UImage
{
public:
	int                                                NumRows;                                                  // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumColumns;                                               // 0x01DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FrameRate;                                                // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3LoadingFlipBookImage");
		return ptr;
	}


	void SetFlipBookAnimFlg(bool Flg);
};


// Class Shenmue3.S3LoadingWidget
// 0x0038 (0x0258 - 0x0220)
class US3LoadingWidget : public US3UserWidget
{
public:
	int                                                LoadingEventStep;                                         // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3LoadingType                                     LoadingType;                                              // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	int                                                BackImageIndex;                                           // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TArray<struct FS3CharaLoadingBackInfo>             BackImageList;                                            // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CharaImageIndex;                                          // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TArray<struct FS3CharaLoadingCharaInfo>            CharaImageList;                                           // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3LoadingWidget");
		return ptr;
	}


	bool SetLoadingType(ES3LoadingType Type);
	class US3LoadingProgressImage* GetProgressBarImage();
	int GetCharaImageIndex();
	int GetBackImageIndex();
};


// Class Shenmue3.S3LookAtFSMComponent
// 0x01D8 (0x0398 - 0x01C0)
class US3LookAtFSMComponent : public UFiniteStateMachineComponent
{
public:
	bool                                               bEnableComponent;                                         // 0x01C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetWorldLocationMode;                                 // 0x01C1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipRenderedCheck;                                       // 0x01C2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableEyes;                                              // 0x01C3(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableNeck;                                              // 0x01C4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableBody;                                              // 0x01C5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHandIKCorrection;                                  // 0x01C6(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableComponentAnimNotify;                              // 0x01C7(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledProgramsAnim;                                     // 0x01C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	class UMeshComponent*                              OwnerMeshComponent;                                       // 0x01D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      LookAtTargetActor;                                        // 0x01D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              LookAtTargetMeshComponent;                                // 0x01E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FS3CharacterLookAtLocation                  LookAtLocations;                                          // 0x01E8(0x0060) (BlueprintVisible, BlueprintReadOnly)
	struct FRotator                                    CurrentLookAtRotation;                                    // 0x0248(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    CurrentLookAtRotationBody;                                // 0x0254(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0260(0x0018) MISSED OFFSET
	struct FS3CharacterLookAtBlendedWeight             BaseBlendedWeight;                                        // 0x0278(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FS3CharacterLookAtBlendedWeight             BlendedWeight;                                            // 0x0284(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FS3CharacterLookAtIKCorrectionWeight        BaseIKCorrectionWeight;                                   // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FS3CharacterLookAtIKCorrectionWeight        IKCorrectionWeight;                                       // 0x0294(0x0004) (BlueprintVisible, IsPlainOldData)
	float                                              BlendedWeightInterpSpeed;                                 // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IKCorrectionWeightInterpSpeed;                            // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseRotationInterpSpeed;                                  // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpSpeed;                                      // 0x02A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseRotationInterpSpeedBody;                              // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpSpeedBody;                                  // 0x02AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtTargetLocationClampZAngle;                          // 0x02B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLookAtTargetLocationClampZAngle;                   // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	struct FVector                                     LookAtWorldLocation;                                      // 0x02B8(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	class US3FaceAnimDataAsset*                        FacialAnimationData;                                      // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEyesExecutionRate;                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEyesTimeMinRandomRange;                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEyesTimeMaxRandomRange;                               // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEyesInterpSpeed;                                      // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEyesRandomRangePitch;                                 // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEyesRandomRangeYaw;                                   // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomizeLookAtParamater;                             // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	struct FS3CharacterLookAtWholeBodyParamater        CustomizeLookAtParamater;                                 // 0x02EC(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x5C];                                      // 0x031C(0x005C) MISSED OFFSET
	class AActor*                                      DelayTargetActor;                                         // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ClearTargetActor;                                         // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3LookAtFSMComponent");
		return ptr;
	}


	void SetTargetOffset(float Yaw, float Pitch);
	void SetTargetActorDelay(class AActor* TargetActor, float DelayTime);
	void SetTargetActor(class AActor* TargetActor);
	void SetFaceAnimDataAsset(class US3FaceAnimDataAsset* Original, class US3FaceAnimDataAsset* Default);
	void SetEnableLookAt(bool bEnable);
	void ResetTargetOffset();
	void ResetRotationInterpSpeed();
	void ResetLookAtIKCorrectionWeight();
	void ResetLookAtBlendedWeight();
	bool ModifyLookAtRangeParamaterCheck();
	bool IsProcessingLookAt();
	struct FName GetOwnerTagCharaName();
	struct FGameplayTag GetOwnerCharaTag();
	bool GetLookAtTargetLocation(struct FVector* OutTargetLocation);
	void GetLookAtIKCorrectionWeightInfo(struct FS3CharacterLookAtIKCorrectionWeight* OutInfo);
	void GetLookAtClampInfo(struct FS3CharacterLookAtWholeBodyParamater* OutInfo);
	void GetLookAtBlendedWeightInfo(struct FS3CharacterLookAtBlendedWeight* OutInfo);
	void CopyPreModifyLookAtRangeParamater();
	void ClearTargetActorDelay(float DelayTime);
};


// Class Shenmue3.S3LookAtStateBase
// 0x0000 (0x0038 - 0x0038)
class US3LookAtStateBase : public UFiniteStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3LookAtStateBase");
		return ptr;
	}

};


// Class Shenmue3.S3LoadingProgressImage
// 0x0018 (0x01F0 - 0x01D8)
class US3LoadingProgressImage : public UImage
{
public:
	float                                              LoadingPercentage;                                        // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             LoadingPercentageDelegate;                                // 0x01E0(0x0014) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3LoadingProgressImage");
		return ptr;
	}

};


// Class Shenmue3.S3MemopadPageWidget
// 0x0008 (0x0210 - 0x0208)
class US3MemopadPageWidget : public UUserWidget
{
public:
	class UCanvasPanel*                                PhotoCanvasPanel;                                         // 0x0208(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MemopadPageWidget");
		return ptr;
	}


	void SetSlotHiddenFlag(int Index, bool flag);
	void SetSlotContent(int Index, class US3MemopadTextWidget* Widget);
	class UCanvasPanelSlot* AddPhoto(class UTexture2D* Texture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize);
};


// Class Shenmue3.S3MemoFlagManager
// 0x00A0 (0x00C8 - 0x0028)
class US3MemoFlagManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MemoFlagManager");
		return ptr;
	}


	void SetTabFlagUnread(TArray<bool> TabUnreadArray);
	void SetMemoTabIndex(int memoTabNum);
	void SetMemoMapMask(int Index, bool IsVisible);
	void SetMemoLatestMotivationIndex_Tab(int Index, int TabIndex);
	void SetMemoLatestMotivationIndex(int Index);
	void SetMemoLatestIndex(int Index);
	void SetMemoDataArrayUnderline(int Index, bool IsUnderline);
	void SetMemoDataArrayPage(int Index, int page);
	void SetMemoDataArrayIdentifer(int Index, int identifer);
	void RemoveMemoSubEventOrder(int MemoId);
	bool IsMemoUnread();
	void InitMemo(int ArrayLength);
	TArray<bool> GetTabFlagUnread();
	int GetMemoUnreadNum();
	TArray<int> GetMemoSubEventOrder();
	TArray<bool> GetMemoMapMask();
	void GetMemoLatestMotivationIndexs(TArray<int>* MotivationIndexs);
	void GetMemoLatestMotivationIndex_Tab(int TabIndex, int* Index);
	void GetMemoLatestMotivationIndex(int* Index);
	void GetMemoLatestIndex(int* Index);
	int GetMemoFlagLength();
	int GetMemoFlagLastindex();
	void GetMemoFlag(int Index, bool* flag, bool* Already);
	TArray<struct FMemoData> GetMemoDataArray();
	void AddMemoSubEventOrder(int MemoId);
};


// Class Shenmue3.S3MemopadTextWidget
// 0x0000 (0x0208 - 0x0208)
class US3MemopadTextWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MemopadTextWidget");
		return ptr;
	}

};


// Class Shenmue3.S3MemoTextureDataBase
// 0x0040 (0x0068 - 0x0028)
class US3MemoTextureDataBase : public UObject
{
public:
	struct FName                                       MemoTextureID;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              offsetX;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              offsetY;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3MemoTextureDataBase.TexturePath
	class UTexture*                                    Texture;                                                  // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MemoTextureDataBase");
		return ptr;
	}

};


// Class Shenmue3.S3MemoTextureData
// 0x0010 (0x0038 - 0x0028)
class US3MemoTextureData : public UObject
{
public:
	TArray<class US3MemoTextureDataBase*>              MemoTextureDataList;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MemoTextureData");
		return ptr;
	}

};


// Class Shenmue3.S3MemoTextureDataManagerBase
// 0x0008 (0x0330 - 0x0328)
class AS3MemoTextureDataManagerBase : public AActor
{
public:
	class US3MemoTextureData*                          MemoTexData;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MemoTextureDataManagerBase");
		return ptr;
	}


	class US3MemoTextureDataBase* GetMemoTextureDataObjectByLabel(const struct FName& Label);
};


// Class Shenmue3.S3MergedStaticMeshActor
// 0x0020 (0x0348 - 0x0328)
class AS3MergedStaticMeshActor : public AActor
{
public:
	class US3NullShapeComponent*                       Root;                                                     // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                SMCs;                                                     // 0x0330(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst)
	ES3StaticMeshMergeMode                             MergeMode;                                                // 0x0340(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MergedStaticMeshActor");
		return ptr;
	}

};


// Class Shenmue3.S3MiniGameBase
// 0x0070 (0x0398 - 0x0328)
class AS3MiniGameBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET
	int                                                DefaultHighScore;                                         // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DefaultLastScore;                                         // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3MiniGameCategory                                MiniGameCategory;                                         // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	int                                                DLCFlag;                                                  // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TalkScriptLoadingDistance;                                // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TalkScriptLoadingCheckTime;                               // 0x034C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TalkScriptLoadingHandle;                                  // 0x0350(0x0008) (Transient)
	bool                                               bTalkScriptLoad;                                          // 0x0358(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0359(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3MiniGameBase.PreloadSoftAssets
	bool                                               bUsePreload;                                              // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	TArray<struct FName>                               PreloadLabels;                                            // 0x0378(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bDelayedInitialize;                                       // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class US3TagCharaComponent*                        TagCharaComponent;                                        // 0x0390(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MiniGameBase");
		return ptr;
	}


	void SetTalkScriptLoadTimer();
	struct FName GetTagCharaName();
	class US3TagCharaComponent* GetTagCharaComponent();
	struct FVector GetSightCheckLocation();
	struct FName GetClothCharaName();
	void DelayedInitialize();
	void ClearTalkScriptLoadTimer();
};


// Class Shenmue3.S3MiniGameDataList
// 0x0018 (0x0068 - 0x0050)
class US3MiniGameDataList : public US3TalkDataListBase
{
public:
	TArray<int>                                        NPCManageMiniGameIdTables;                                // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bCanBeMiniGame;                                           // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MiniGameDataList");
		return ptr;
	}

};


// Class Shenmue3.S3MiniGameCharacter
// 0x0010 (0x0750 - 0x0740)
class AS3MiniGameCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0740(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MiniGameCharacter");
		return ptr;
	}


	struct FName GetClothCharaName();
};


// Class Shenmue3.S3MiniGameProgressManager
// 0x0048 (0x0070 - 0x0028)
class US3MiniGameProgressManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FS3FishingInfo                              FishingInfo;                                              // 0x0038(0x0028)
	struct FScriptMulticastDelegate                    OnMiniGameHighScoreChanged;                               // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MiniGameProgressManager");
		return ptr;
	}


	void SetupMiniGameProgressInfoArray(TArray<struct FS3MiniGameProgressSaveData> SaveDataArray);
	void SetProgressValueAsStringArray(unsigned char MiniGameCategory, const struct FName& Key, TArray<struct FString> Values);
	void SetProgressValueAsString(unsigned char MiniGameCategory, const struct FName& Key, const struct FString& Value);
	void SetProgressValueAsIntArray(unsigned char MiniGameCategory, const struct FName& Key, TArray<int> Values);
	void SetProgressValueAsInt(unsigned char MiniGameCategory, const struct FName& Key, int Value);
	void SetProgressValueAsFloatArray(unsigned char MiniGameCategory, const struct FName& Key, TArray<float> Values);
	void SetProgressValueAsFloat(unsigned char MiniGameCategory, const struct FName& Key, float Value);
	void SetLastScore(class AS3MiniGameBase* MiniGame, int Value);
	void SetHighScore(class AS3MiniGameBase* MiniGame, int Value);
	void Initialize(int MiniGameCategoryNum);
	bool GetProgressValueAsStringArray(unsigned char MiniGameCategory, const struct FName& Key, TArray<struct FString>* OutValues);
	bool GetProgressValueAsString(unsigned char MiniGameCategory, const struct FName& Key, struct FString* OutValue);
	bool GetProgressValueAsIntArray(unsigned char MiniGameCategory, const struct FName& Key, TArray<int>* OutValues);
	bool GetProgressValueAsInt(unsigned char MiniGameCategory, const struct FName& Key, int* OutValue);
	bool GetProgressValueAsFloatArray(unsigned char MiniGameCategory, const struct FName& Key, TArray<float>* OutValues);
	bool GetProgressValueAsFloat(unsigned char MiniGameCategory, const struct FName& Key, float* OutValue);
	int GetLastScore(class AS3MiniGameBase* MiniGame);
	int GetHighScore(class AS3MiniGameBase* MiniGame);
	void CreateProgressSaveDataArray(TArray<struct FS3MiniGameProgressSaveData>* OutSaveDataArray);
};


// Class Shenmue3.S3MiniGameScoreChildActorComponent
// 0x0000 (0x0270 - 0x0270)
class US3MiniGameScoreChildActorComponent : public UChildActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MiniGameScoreChildActorComponent");
		return ptr;
	}

};


// Class Shenmue3.S3MiniGameFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3MiniGameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MiniGameFunctionLibrary");
		return ptr;
	}


	void RemoveDelayFromWidget(class UUserWidget* pUserWidget);
	void RemoveDelayFromComponent(class USceneComponent* Component);
	void RemoveDelayFromActor(class AActor* Actor);
	void OutputPunchResult(Enum_QTETitlePlayList PlaylistItem, TArray<Enum_QTETitlePlayList> InPlayList, TArray<struct FQTECommandCheckStruct> InCommandStructArray, TArray<Enum_QTETitlePlayList>* OutPlaylist, TArray<struct FQTECommandCheckStruct>* OutCommandStructArray, bool* bNeedPlaySequencer, bool* bHitSuccessfully);
	void OutputCSVData(const struct FString& Filename, const struct FString& outputFolderName, const struct FString& outStr);
	struct FQTETitleCommandTableRowBase GetRowByNameQTECommandsTable(class UDataTable* DataTable, const struct FName& pName, bool* Result);
	struct FODGiftDataTableRowBase GetRowByNameODGiftTable(class UDataTable* DataTable, const struct FName& pName, bool* Result);
	void GetRowByNameMiniGameNPCLinkData(class UDataTable* DataTable, const struct FGameplayTag& NPC, bool* bOutResult, struct FS3MiniGameNPCLinkData* OutData);
	struct FCupMagicDataTableRowBase GetRowByNameCMDataTable(class UDataTable* DataTable, const struct FName& pName, bool* Result);
	struct FAnimalRaceSpeedTableRowBase GetRowByNameAnimalRaceSpeedTable(class UDataTable* DataTable, const struct FName& pName, bool* Result);
	float GetRandomValueInRange(float Min, float Max);
	int GetRandomIntValueInRange(int Min, int Max);
	struct FName GetLastScoreKey(class AS3MiniGameBase* MiniGame);
	struct FName GetHighScoreKey(class AS3MiniGameBase* MiniGame);
	int CalculateTotalScore(int HitScore, int Combo, int ComboScore, int ComboMaxScore);
};


// Class Shenmue3.S3NarrowPassageActor
// 0x0038 (0x0360 - 0x0328)
class AS3NarrowPassageActor : public AActor
{
public:
	class UPrimitiveComponent*                         Trigger;                                                  // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              ExitPoints;                                               // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AS3Character*>                        InsideCharacters;                                         // 0x0340(0x0010) (ZeroConstructor, Transient)
	class AS3Character*                                InsidePlayerCharacter;                                    // 0x0350(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NarrowPassageActor");
		return ptr;
	}


	void RequestIgnoreCollision(class AS3Character* Player, class AS3Character* Target, float MinTime);
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Shenmue3.S3MovementModeRequestHandler
// 0x0028 (0x0118 - 0x00F0)
class US3MovementModeRequestHandler : public UActorComponent
{
public:
	class UCharacterMovementComponent*                 MovementComponent;                                        // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UObject*>                             FlyingRequesters;                                         // 0x00F8(0x0010) (ZeroConstructor, Transient)
	TArray<class UObject*>                             NoneRequesters;                                           // 0x0108(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MovementModeRequestHandler");
		return ptr;
	}


	void UnrequestMovementMode(class UObject* Requester);
	void RequestMovementMode(class UObject* Requester, TEnumAsByte<EMovementMode> Mode);
	void CheckInvalidUProperties();
};


// Class Shenmue3.S3NavArea_Obstacle
// 0x0000 (0x0048 - 0x0048)
class US3NavArea_Obstacle : public UNavArea_Obstacle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NavArea_Obstacle");
		return ptr;
	}

};


// Class Shenmue3.S3NavArea_Interact
// 0x0000 (0x0048 - 0x0048)
class US3NavArea_Interact : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NavArea_Interact");
		return ptr;
	}

};


// Class Shenmue3.S3NavArea_Path
// 0x0000 (0x0048 - 0x0048)
class US3NavArea_Path : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NavArea_Path");
		return ptr;
	}

};


// Class Shenmue3.S3NavArea_Stairs
// 0x0000 (0x0048 - 0x0048)
class US3NavArea_Stairs : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NavArea_Stairs");
		return ptr;
	}

};


// Class Shenmue3.S3NavigationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3NavigationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NavigationFunctionLibrary");
		return ptr;
	}


	bool TestPathExists(class UObject* Querier, const struct FVector& StartLocation, const struct FVector& EndLocation, class UClass* FilterClass);
	class ARecastNavMesh* GetRecastNavmesh(class UObject* WorldContextObject);
	float FindDistanceToWall(class UObject* WorldContextObject, const struct FVector& StartLoc, class UClass* FilterClass, class ARecastNavMesh* NavData, float MaxDistance, struct FVector* OutClosestPointOnWall);
};


// Class Shenmue3.S3NavLink_Stairs
// 0x00A8 (0x0420 - 0x0378)
class AS3NavLink_Stairs : public AS3NavLinkProxy
{
public:
	float                                              StepHeight;                                               // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepWidth;                                                // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepDepth;                                                // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStairDirection>                       Direction;                                                // 0x0384(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	class AActor*                                      StairActor;                                               // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  StairActorRelativeTransform;                              // 0x0390(0x0030) (BlueprintVisible, IsPlainOldData)
	struct FTransform                                  StairActorCenterWorldTransform;                           // 0x03C0(0x0030) (BlueprintVisible, IsPlainOldData)
	int                                                Steps;                                                    // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Widths;                                                   // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SideOffset;                                               // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeStartOffset;                                      // 0x03FC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     RelativeEndOffset;                                        // 0x0408(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0414(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NavLink_Stairs");
		return ptr;
	}


	void SetStairParam(class AActor* Target, float Height, float Depth, int Num, TEnumAsByte<EStairDirection> dir, float ext);
};


// Class Shenmue3.S3NPCAnimDataAsset
// 0x0010 (0x0040 - 0x0030)
class US3NPCAnimDataAsset : public UDataAsset
{
public:
	TArray<struct FS3FaceMontageData>                  FaceMontageData;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAnimDataAsset");
		return ptr;
	}


	void GetFaceMontagesInstance(class UObject* Outer, const struct FName& Name, struct FS3FaceMontageData* Data);
	TArray<struct FS3FaceMontageData> GetFaceMontages();
};


// Class Shenmue3.S3NPCAnimInstance
// 0x0740 (0x0AA0 - 0x0360)
class US3NPCAnimInstance : public US3AnimInstance
{
public:
	float                                              LocomotionAlpha;                                          // 0x0360(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class US3NPCDefinition*                            NPCDefinition;                                            // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleSequence;                                             // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStartSequence;                                        // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkLoopSequence;                                         // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkStopSequence;                                         // 0x0388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkToSitSequence;                                        // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkInterruptionSequence;                                 // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkTurnSequence;                                         // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnInPlaceSequence;                                      // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLoopSequence;                                          // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SitLoopSequence;                                          // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SitToIdleSequence;                                        // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SitToWalkSequence;                                        // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SittingTurnSequence;                                      // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimationSequenceA;                                       // 0x03D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimationSequenceB;                                       // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               OpenDoorSequence;                                         // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UsingStairsSequence;                                      // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimatingTalkSequence;                                    // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StandTalkSequence;                                        // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SitTalkSequence;                                          // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 AdjustBlendSpace;                                         // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3NPCMovementAnimationSet*                  AnimSet;                                                  // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCompletelyIdle;                                         // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCompletelySitting;                                      // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCompletelyStandup;                                      // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimCompleteBegin;                                      // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimCompleteEnd;                                        // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimSequence*                               ReqAnimatingTalkSequence;                                 // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              BasePlayRate;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      LocomotionState;                                          // 0x047C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      NextLocomotionState;                                      // 0x047D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      PreviousLocomotionState;                                  // 0x047E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x047F(0x0001) MISSED OFFSET
	struct FName                                       BasicFSMState;                                            // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PreviousBasicFSMState;                                    // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPendingIdle>                          IdleType;                                                 // 0x0490(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimationCrouching;                                      // 0x0491(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x12];                                      // 0x0492(0x0012) MISSED OFFSET
	float                                              LocomotionPlayRate;                                       // 0x04A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	float                                              WalkLoopPlayRateMin;                                      // 0x04B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkLoopPlayRateMax;                                      // 0x04B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkLoopPlayRateRampUpRate;                               // 0x04B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkLoopPlayRateRampDownRate;                             // 0x04BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocomotionStrideScale;                                    // 0x04C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpeedWarpingAlpha;                                        // 0x04C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	float                                              LastWalkRatio;                                            // 0x04D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NextWalkRatio;                                            // 0x04D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleLoopAnim;                                          // 0x04D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xB];                                       // 0x04D9(0x000B) MISSED OFFSET
	struct FVector                                     LocomotionDirection;                                      // 0x04E4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      bIdle : 1;                                                // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIdleToWalking : 1;                                       // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWalking : 1;                                             // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWalkingToIdle : 1;                                       // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWalkingToSit : 1;                                        // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWalkingInterruptionIdle : 1;                             // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWalkingTurn : 1;                                         // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bTurningInPlace : 1;                                      // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRunning : 1;                                             // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSitting : 1;                                             // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSittingToIdle : 1;                                       // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSittingToWalk : 1;                                       // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bTalking : 1;                                             // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAnimating : 1;                                           // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOpenDoor : 1;                                            // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWalkingToIdleOnTheWay : 1;                               // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsingStairs : 1;                                         // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsingStairsUp : 1;                                       // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUsingStairsDown : 1;                                     // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSittingAnimating : 1;                                    // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAdjustingPosition : 1;                                   // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSittingTurn : 1;                                         // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCoupleBench : 1;                                         // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bResetFSM : 1;                                            // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x1];                                       // 0x04F3(0x0001) MISSED OFFSET
	bool                                               bAnimationBreakout;                                       // 0x04F4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimationCansel;                                         // 0x04F5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRightDominant;                                           // 0x04F6(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRightFootPlant;                                          // 0x04F7(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightFootPlantAlpha;                                      // 0x04F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FTransform                                  RightFootWorldTransform;                                  // 0x0500(0x0030) (BlueprintVisible, IsPlainOldData)
	bool                                               bLeftFootPlant;                                           // 0x0530(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              LeftFootPlantAlpha;                                       // 0x0534(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0538(0x0008) MISSED OFFSET
	struct FTransform                                  LeftFootWorldTransform;                                   // 0x0540(0x0030) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x0570(0x0008) MISSED OFFSET
	struct FVector                                     AdjustVector;                                             // 0x0578(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   AdjustNormal;                                             // 0x0584(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bIsAdjustingRight;                                        // 0x058C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReqWalkingToSit;                                         // 0x058D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x058E(0x0002) MISSED OFFSET
	float                                              ForceIdleTime;                                            // 0x0590(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTalking;                                               // 0x0594(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTalkStart;                                             // 0x0595(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTalkEnd;                                               // 0x0596(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x5];                                       // 0x0597(0x0005) MISSED OFFSET
	bool                                               bFingerPointing;                                          // 0x059C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFingerPointingL;                                         // 0x059D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFingerPointingR;                                         // 0x059E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFinalFingerPointingHandL;                                // 0x059F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFinalFingerPointingHandR;                                // 0x05A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFingerPointingType                                FingerPointingType;                                       // 0x05A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFingerPointingStart;                                     // 0x05A2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bJawPointing;                                             // 0x05A3(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3FingerPointingMode                              FingerPointingMode;                                       // 0x05A4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x05A5(0x0003) MISSED OFFSET
	float                                              PointingYaw;                                              // 0x05A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PointingPitch;                                            // 0x05AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PointingBlendTime;                                        // 0x05B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x05B4(0x0001) MISSED OFFSET
	bool                                               bFinalLookUp;                                             // 0x05B5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x05B6(0x0002) MISSED OFFSET
	class UAnimSequence*                               LookUpSequence;                                           // 0x05B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TurnAroundAnimStep;                                       // 0x05C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnAroundAngle;                                          // 0x05C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bValidTurnAroundAnimation;                                // 0x05C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTurnAround2StepAnimation;                                // 0x05C9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTurnAroundBreakout;                                      // 0x05CA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x05CB(0x0005) MISSED OFFSET
	class UBlendSpace1D*                               CurrentTurnAroundAnimation;                               // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET
	class US3PathFollowingComponent*                   PathFollowingComponent;                                   // 0x05E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class US3PlayerMovementComponent*                  Movement;                                                 // 0x05E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData18[0x48];                                      // 0x05F0(0x0048) MISSED OFFSET
	float                                              WalkStrideLength;                                         // 0x0638(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RunStrideLength;                                          // 0x063C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SitAnimStartTime;                                         // 0x0640(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0644(0x0004) MISSED OFFSET
	bool                                               bAnimSequenceAComplate;                                   // 0x0648(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EReactionOnTalk>                       EReactionOnTalk;                                          // 0x0649(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFurimukiOnTalk                                    eManualFurimukiType;                                      // 0x064A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDoorReaction>                         eReactOnDoor;                                             // 0x064B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OpenDoorPause;                                            // 0x064C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	class AS3GimmickOpenDoor*                          WantOpenDoor;                                             // 0x0650(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0658(0x0004) MISSED OFFSET
	float                                              AnimSequenceAStartTime;                                   // 0x065C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimSequenceBStartTime;                                   // 0x0660(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	class UAnimSequence*                               SaveAnimSequence;                                         // 0x0668(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x0670(0x0004) MISSED OFFSET
	bool                                               bIsStairsUp;                                              // 0x0674(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0675(0x0003) MISSED OFFSET
	float                                              StairsStartRatio;                                         // 0x0678(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	struct FTransform                                  StairsActorFTransform;                                    // 0x0680(0x0030) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData26[0x6C];                                      // 0x06B0(0x006C) MISSED OFFSET
	int                                                ScriptState;                                              // 0x071C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableOneShotAnimMontage;                                // 0x0720(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0721(0x0003) MISSED OFFSET
	float                                              OneShotBlendWait;                                         // 0x0724(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OneShotInterpSpeed;                                       // 0x0728(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0xC];                                       // 0x072C(0x000C) MISSED OFFSET
	class UAnimMontage*                                CurrentOneShotAnimMontage;                                // 0x0738(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseFootIK;                                               // 0x0740(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x1];                                       // 0x0741(0x0001) MISSED OFFSET
	bool                                               bDisableFootIKFromDefinition;                             // 0x0742(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFootIK;                                             // 0x0743(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftFootEffectorLocation;                                 // 0x0744(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightFootEffectorLocation;                                // 0x0750(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftFootRotation;                                         // 0x075C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightFootRotation;                                        // 0x0768(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bIsFar;                                                   // 0x0774(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReqStepBack;                                             // 0x0775(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReqReactionChange;                                       // 0x0776(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableReactionChange;                                   // 0x0777(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFinalAnimationTalk;                                      // 0x0778(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	int                                                FinalAnimationTalkIndex;                                  // 0x077C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimatingPauseTime;                                       // 0x0780(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFreeSit;                                              // 0x0784(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x0785(0x0003) MISSED OFFSET
	float                                              StopDistance;                                             // 0x0788(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetStopYaw;                                            // 0x078C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0xC];                                       // 0x0790(0x000C) MISSED OFFSET
	float                                              BreathIKSeed;                                             // 0x079C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBreathIK;                                             // 0x07A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x07A1(0x0003) MISSED OFFSET
	struct FVector                                     BreathIKEffectorLocationL;                                // 0x07A4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     BreathIKEffectorLocationR;                                // 0x07B0(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bUseHandMotion;                                           // 0x07BC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x07BD(0x0002) MISSED OFFSET
	bool                                               bFinalUseHandMotion;                                      // 0x07BF(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandMotionBlendTime;                                      // 0x07C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NotHandMotionWeightL;                                     // 0x07C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NotHandMotionWeightR;                                     // 0x07C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	class UAnimSequence*                               DoorAnimation;                                            // 0x07D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x10];                                      // 0x07D8(0x0010) MISSED OFFSET
	class UAnimSequence*                               CoupleBenchLoopSequence;                                  // 0x07E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CoupleBenchActionSequence;                                // 0x07F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCoupleBenchAction;                                       // 0x07F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCoupleBenchActionCancel;                                 // 0x07F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x82];                                      // 0x07FA(0x0082) MISSED OFFSET
	bool                                               bAtoBTransit;                                             // 0x087C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBtoATransit;                                             // 0x087D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x087E(0x0002) MISSED OFFSET
	float                                              IdleToA_BlendTime;                                        // 0x0880(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AtoB_BlendTime;                                           // 0x0884(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BtoA_BlendTime;                                           // 0x0888(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData39[0x74];                                      // 0x088C(0x0074) MISSED OFFSET
	float                                              DefaultBlendTime;                                         // 0x0900(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArmSwingScale;                                            // 0x0904(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData40[0x45];                                      // 0x0908(0x0045) MISSED OFFSET
	bool                                               bSynchroMotionSlow;                                       // 0x094D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData41[0x1E];                                      // 0x094E(0x001E) MISSED OFFSET
	bool                                               bUsePelvisBoneFixed;                                      // 0x096C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	struct FVector                                     PelvisBoneFixedPos;                                       // 0x0970(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PelvisBoneFixedBlendTime;                                 // 0x097C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData43[0x8];                                       // 0x0980(0x0008) MISSED OFFSET
	bool                                               bNoReactFromBehind;                                       // 0x0988(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0x2F];                                      // 0x0989(0x002F) MISSED OFFSET
	bool                                               IsElderlyCtrl;                                            // 0x09B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x09B9(0x0003) MISSED OFFSET
	float                                              ElderlyCtrlMotionSpeed;                                   // 0x09BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ElderlyCtrlWaistAngles1;                                  // 0x09C0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ElderlyCtrlWaistAngles2;                                  // 0x09CC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ElderlyCtrlWaistAngles3;                                  // 0x09D8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ElderlyCtrlArmLAngles;                                    // 0x09E4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ElderlyCtrlArmRAngles;                                    // 0x09F0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              ElderlyCtrlKneeFlexionLength;                             // 0x09FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FNPCAttachInfo>                      AttachInfos;                                              // 0x0A00(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData46[0x14];                                      // 0x0A10(0x0014) MISSED OFFSET
	bool                                               IsHaveItem;                                               // 0x0A24(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHaveItem>                             HaveItemType;                                             // 0x0A25(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsHaveItemBoneControl;                                    // 0x0A26(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0x1];                                       // 0x0A27(0x0001) MISSED OFFSET
	struct FRotator                                    HaveItemArmRotation;                                      // 0x0A28(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    HaveItemArm2Rotation;                                     // 0x0A34(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              HaveItemArmWeight;                                        // 0x0A40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HaveItemAttachLocation;                                   // 0x0A44(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    HaveItemAttachRotation;                                   // 0x0A50(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    HaveItemAttachPalmRotation;                               // 0x0A5C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               IsHaveItemCondition;                                      // 0x0A68(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48[0x1A];                                      // 0x0A69(0x001A) MISSED OFFSET
	EChangeBool                                        eOverwriteLookAtBody;                                     // 0x0A83(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverwriteLookAtDistance;                                  // 0x0A84(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverwriteLookAtAngle;                                     // 0x0A88(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData49[0x14];                                      // 0x0A8C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAnimInstance");
		return ptr;
	}


	void UpdateTraceLocation();
	void UpdatePreciseTarget();
	void UpdateDominantFoot(bool bNewRightDominant);
	void StopRequestedAnimation();
	void StartUsingStairs(bool upflag);
	void SetWalkSequences(class UAnimSequence* Start, class UAnimSequence* Loop, class UAnimSequence* Stop);
	void SetUseHandMotion(bool bUse);
	void SetTalkStart(bool bStart);
	void SetPelvisBoneFixed(bool bEnable, float BlendTime);
	void SetOpenDoorPause(bool bPause, class AS3GimmickOpenDoor* pGimmickOpenDoor);
	void SetNamePlate(bool bShow);
	void SetLookAtBody(bool Enable);
	void SetLocomotionStateAnim(class UAnimSequence* AnimSequence);
	void SetLocomotionState(TEnumAsByte<ELocomotionState> NewLocomotionState, bool bAllowPathChanges);
	void SetHaveItemShowHide(bool bShow);
	void SetHaveItemCondition(bool enableFlag, float BlendTime);
	void SetHaveItemAttach();
	void SetForceLookAtTarget(class AActor* pTarget);
	void SetFootPlanting(bool bRightFoot, bool bPlanted);
	void SetFingerPointingType(EFingerPointingType Type);
	void SaveAnimatingInfo();
	void ResetOverwriteLookAtParameters();
	void ResetFurimuki();
	void ResetFingerPointingType();
	void RequestTurnInPlace(float Angle);
	void RequestTalkMotion(bool bNewTalking);
	void RequestReactionChange(TEnumAsByte<SDK::EReactionOnTalk> NewTalkReaction);
	void RequestAnimation(class UAnimSequence* Sequence);
	void OutputAttachLog(const struct FName& soketName, bool bOn);
	void OnTalkStart();
	void OnFSMStateChanged(TEnumAsByte<ELocomotionState> NewState);
	void OnEncounteredDoor();
	void OnAdjustComplete();
	void MeshChangedInRange(bool bNear);
	void LoadAnimatingInfo();
	void LeftWalkingToIdle();
	void LeftStepBack();
	bool IsWalking();
	bool IsTurnArounding();
	bool IsStairsUp();
	bool IsStairsSkip();
	bool IsReadyTalk_Implementation();
	bool IsLookAtBody();
	bool IsForceLookAt();
	bool IsFarAndHidden();
	float GetVelocityFromStopMetaData(class UAnimSequence* Sequence, float Distance);
	float GetTalkBlendTime();
	float GetStartTraceLocationZ();
	bool GetMotionTrans(TEnumAsByte<ELocomotionState> State, int opt, struct FTransform* trans);
	class UAnimMontage* GetGreetingMontage();
	float GetEndTraceLocationZ();
	struct FTransform GetAttachMeshSocketTransform(class UMeshComponent* pMeshComp, const struct FName& SocketName, const struct FRotator& OffsetRotator, const struct FVector& OffsetLocation);
	struct FTransform GetAttachMeshObjectOffset(class UMeshComponent* pMeshComp);
	void FullyBlendedWalkingToSit();
	void FriendshipGreetingEnd();
	void ForceIdlePose(bool bSittingIdle);
	void ExitUsingStairs();
	void EndTurningInPlace();
	void CoupleBenchActionEnd();
	void CoupleBenchActionBegin();
	bool ConsumeResetFSMFlag();
	void ChangeNPCScriptState(int NewScriptState);
	void ChangeNPCAnimSet(class US3NPCMovementAnimationSet* NewAnimSet);
	bool CanTalk();
	bool CanAnimationCansel();
	void BeginOpenDoorBP();
	void Attach_HaveItem(const struct FHaveItemAttachSetting& HaveItemSetting);
	void AnimNotify_StartFingerPointing();
	void AnimNotify_EndTurningInPlace();
	void AnimNotify_EndTurnAround();
	void AnimNotify_EndFingerPointing();
	void AnimationCompleteEnd(bool bAnimSequenceA);
	void AnimationCompleteBegin(bool bAnimSequenceA);
};


// Class Shenmue3.S3MiniGameManager
// 0x00B8 (0x03E0 - 0x0328)
class AS3MiniGameManager : public AActor
{
public:
	TMap<struct FName, class AS3MiniGameBase*>         CachedMiniGameActors;                                     // 0x0328(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AS3MiniGameBase*>                     DelayedInitializeActors;                                  // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ES3Where                                           AreaId;                                                   // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	TMap<ES3Where, class UDataTable*>                  NPCLinkTable;                                             // 0x0390(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3MiniGameManager");
		return ptr;
	}


	void UpdateMiniGameWinRate();
	void RemoveMiniGameActor(class AS3MiniGameBase* Actor);
	void RemoveDelayedInitializeActor(class AS3MiniGameBase* Actor);
	class AS3MiniGameBase* GetMiniGameActorByTagCharaName(const struct FName& TagCharaName);
	void GetCharacterLinkMiniGames(class AActor* TargetActor, TArray<class AActor*>* MiniGameActors);
	void AddMiniGameActor(class AS3MiniGameBase* Actor);
};


// Class Shenmue3.S3NPCAnimSelector
// 0x0008 (0x0030 - 0x0028)
class US3NPCAnimSelector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAnimSelector");
		return ptr;
	}

};


// Class Shenmue3.S3NPCAnimSelector_Random
// 0x0020 (0x0050 - 0x0030)
class US3NPCAnimSelector_Random : public US3NPCAnimSelector
{
public:
	TArray<struct FS3AnimSelectorRandomAnim>           RandomAnimList;                                           // 0x0030(0x0010) (Edit, ZeroConstructor)
	class US3NPCAnimSelector*                          CurrentSelector;                                          // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAnimSelector_Random");
		return ptr;
	}

};


// Class Shenmue3.S3NPCAnimSelector_List
// 0x0018 (0x0048 - 0x0030)
class US3NPCAnimSelector_List : public US3NPCAnimSelector
{
public:
	TArray<class US3NPCAnimSelector*>                  AnimList;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAnimSelector_List");
		return ptr;
	}

};


// Class Shenmue3.S3NPCAnimSelector_Repeat
// 0x0018 (0x0048 - 0x0030)
class US3NPCAnimSelector_Repeat : public US3NPCAnimSelector
{
public:
	int                                                NumPlays;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class US3NPCAnimSelector*                          AnimSelector;                                             // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAnimSelector_Repeat");
		return ptr;
	}

};


// Class Shenmue3.S3NPCAttachmentActor
// 0x0040 (0x0368 - 0x0328)
class AS3NPCAttachmentActor : public AActor
{
public:
	struct FGameplayTag                                AttachmentTag;                                            // 0x0328(0x0008) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0330(0x002C) MISSED OFFSET
	bool                                               bTalkHide;                                                // 0x035C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENPCAttachFrom                                     AttachFrom;                                               // 0x035D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x035E(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAttachmentActor");
		return ptr;
	}


	void SetMeshVisibility(bool bEnable);
	void RequestActionName(const struct FName& ActionName);
	void Notify_HiddenInGame(bool _bHidden);
	void Notify_FadeOut(float Time);
	void Notify_FadeIn(float Time);
	bool IsMeshVisibility();
	void InitializeAttachNative(int Type);
	void InitializeAttach(int Type);
	class UStaticMeshComponent* GetStaticMeshComp();
	class USkeletalMeshComponent* GetSkeletalMeshComp();
	void CallDelayEndTalk();
};


// Class Shenmue3.S3NPCAttachmentAnimInstance
// 0x0040 (0x03A0 - 0x0360)
class US3NPCAttachmentAnimInstance : public UAnimInstance
{
public:
	struct FName                                       SynchroMachineName;                                       // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SynchroStateName;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SynchroPlayerRate;                                        // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTransitionFlag00 : 1;                                    // 0x0374(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag01 : 1;                                    // 0x0374(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag02 : 1;                                    // 0x0374(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag03 : 1;                                    // 0x0374(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag04 : 1;                                    // 0x0374(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag05 : 1;                                    // 0x0374(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag06 : 1;                                    // 0x0374(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag07 : 1;                                    // 0x0374(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag08 : 1;                                    // 0x0375(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag09 : 1;                                    // 0x0375(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag10 : 1;                                    // 0x0375(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag11 : 1;                                    // 0x0375(0x0001) (BlueprintVisible)
	unsigned char                                      bTransitionFlag12 : 1;                                    // 0x0375(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x2A];                                      // 0x0376(0x002A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAttachmentAnimInstance");
		return ptr;
	}


	void SetPerBoneMotionBlur(bool bBlur);
	void ResetTransitionFlag();
	void RequestAnimationName(const struct FName& AnimationName);
	void RequestAnimationIndex(int Index);
	void RequestActionName(const struct FName& ActionName);
	void InitializeAttach(int Type);
};


// Class Shenmue3.NPCChangeMeshAnimMetaData
// 0x0008 (0x0030 - 0x0028)
class UNPCChangeMeshAnimMetaData : public UAnimMetaData
{
public:
	ES3CharaMeshType                                   CharaMeshType;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.NPCChangeMeshAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.S3NPCController
// 0x0048 (0x0480 - 0x0438)
class AS3NPCController : public AAIController
{
public:
	class US3NPCScheduleTask*                          CurrentTask;                                              // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FTransform                                  PreciseTargetTransform;                                   // 0x0440(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bUsePreciseTargetTransform;                               // 0x0470(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0471(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCController");
		return ptr;
	}


	class US3PathFollowingComponent* GetS3PathFollowingComponent();
};


// Class Shenmue3.S3NPCAnimSelector_Single
// 0x0018 (0x0048 - 0x0030)
class US3NPCAnimSelector_Single : public US3NPCAnimSelector
{
public:
	float                                              BlendTime;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UAnimSequence*                               Animation;                                                // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAnimSelector_Single");
		return ptr;
	}

};


// Class Shenmue3.S3NPCAttachmetAnimInstance
// 0x0000 (0x03A0 - 0x03A0)
class US3NPCAttachmetAnimInstance : public US3NPCAttachmentAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCAttachmetAnimInstance");
		return ptr;
	}

};


// Class Shenmue3.S3NPCDefinition
// 0x0190 (0x01C0 - 0x0030)
class US3NPCDefinition : public UDataAsset
{
public:
	struct FGameplayTag                                NPCID;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bPreloadMesh;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangeClothes;                                           // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableHandMotion;                                        // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlwaysShowAttachment;                                    // 0x003B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPrioritizeAnimation;                                     // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              DefaultWalkSpeed;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkSpeedScale;                                           // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LegLength;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmSwingScale;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ManualRootMotionScale;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FNPCFriendshipCondition>             FriendshipConditions;                                     // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        FriendshipMontages;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              FriendshipSearchDelay;                                    // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FriendshipSearchRange;                                    // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableFootIK;                                           // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoFootIK;                                              // 0x0081(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	float                                              GroundSocketScale;                                        // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsElderlyCtrl;                                            // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              ElderlyCtrlMotionSpeed;                                   // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElderlyCtrlWaistAngle1;                                   // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElderlyCtrlWaistAngle2;                                   // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElderlyCtrlWaistAngle3;                                   // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElderlyCtrlArmAngle;                                      // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElderlyCtrlKneeFlexionLength;                             // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHaveItem;                                               // 0x00A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHaveItem>                             HaveItemType;                                             // 0x00A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET
	TArray<struct FHaveItemAttachSetting>              HaveItemAttachSettings;                                   // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAttachObjectOffset>                 AttachObjectOffsets;                                      // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData05[0x28];                                      // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Shenmue3.S3NPCDefinition.Mesh
	unsigned char                                      UnknownData06[0x10];                                      // 0x00F0(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3NPCDefinition.ChangeMeshes
	class US3NPCMovementAnimationSet*                  MovementAnimSet;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3FaceAnimDataAsset*                        FacialAnimationData;                                      // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FOverwriteAnims                             OverwriteAnimations;                                      // 0x0110(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FPOIUniqueAnims>                     POIUniqueAnims;                                           // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUsePhysics;                                              // 0x0160(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ES3CharacterGender>                    Gender;                                                   // 0x0161(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysCloseEye;                                           // 0x0162(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0163(0x0005) MISSED OFFSET
	struct FName                                       BackerId;                                                 // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3PCDataList*                               TalkPCDataList;                                           // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3BSDataList*                               TalkBSDataList;                                           // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3MiniGameDataList*                         TalkMiniGameDataList;                                     // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3ShopDataList*                             TalkShopDataList;                                         // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNPCCharacterTag                            CharacterTag;                                             // 0x0190(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FNPCTalkEventInfo                           TalkEventInfo;                                            // 0x01A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              BSStartRadius;                                            // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraCollisionRadius;                                    // 0x01B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x01B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCDefinition");
		return ptr;
	}


	void SetTagCharaName(const struct FName& NewName);
	void SetLegLength(float NewLength);
	void SetFacialAnimationData(class US3FaceAnimDataAsset* DataAsset);
};


// Class Shenmue3.S3NPCHighPriorityShowTrigger
// 0x0010 (0x0340 - 0x0330)
class AS3NPCHighPriorityShowTrigger : public ATriggerBox
{
public:
	TArray<struct FNPCHighPriorityShowSetting>         HighPriorityShowSettings;                                 // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCHighPriorityShowTrigger");
		return ptr;
	}

};


// Class Shenmue3.S3NPCLeadManager
// 0x0020 (0x0348 - 0x0328)
class AS3NPCLeadManager : public AActor
{
public:
	bool                                               bFinishedTalkMove;                                        // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFinishedOnBeginTalkRotate;                               // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x032A(0x0002) MISSED OFFSET
	float                                              OnTalkPositionDistance;                                   // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TalkFarAwayTeleportDistance;                              // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Follow_GoalFlag;                                          // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	class UClass*                                      DefaultPawnClass;                                         // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpawnLocationNavFilterClass;                              // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCLeadManager");
		return ptr;
	}


	bool IsQuickSkipTestOn();
	struct FVector GetTalkLocation();
	class AS3Character* GetNPCCharater();
	bool FindSpawnLocation(class ACharacter* PlayerChar, const struct FVector2D& OffsetLS, bool FacePlayer, struct FVector* OutLocation, float* OutYaw);
};


// Class Shenmue3.S3NPCLoadTrigger
// 0x0018 (0x0348 - 0x0330)
class AS3NPCLoadTrigger : public ATriggerBox
{
public:
	TArray<class AS3Character*>                        TargetNPCs;                                               // 0x0330(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCLoadTrigger");
		return ptr;
	}


	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Shenmue3.S3NPCManagerBase
// 0x0090 (0x03B8 - 0x0328)
class AS3NPCManagerBase : public AActor
{
public:
	TArray<struct FSoftObjectPath>                     ScheduleAssets;                                           // 0x0328(0x0010) (ZeroConstructor, Deprecated)
	TArray<class US3NPCSchedule*>                      ScheduleAssetRefs;                                        // 0x0338(0x0010) (Edit, ZeroConstructor)
	struct FString                                     NPCDefinitionsPath;                                       // 0x0348(0x0010) (Edit, ZeroConstructor)
	TArray<class US3NPCScheduleTask*>                  Schedule;                                                 // 0x0358(0x0010) (ZeroConstructor, Transient)
	TMap<struct FGameplayTag, class US3NPCDefinition*> NPCDefMap;                                                // 0x0368(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCManagerBase");
		return ptr;
	}

};


// Class Shenmue3.S3NPCManager
// 0x0318 (0x06D0 - 0x03B8)
class AS3NPCManager : public AS3NPCManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNPCSpawnDelegate;                                       // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNPCUnspawnDelegate;                                     // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      CharacterClass;                                           // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceInstantLoad;                                        // 0x03E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	class UClass*                                      ControllerClass;                                          // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimTreeClass;                                            // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoadedNPC;                                             // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceFromPlayer;                                    // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOutputLog;                                               // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOutputMeshInfo;                                          // 0x0409(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x040A(0x0006) MISSED OFFSET
	TArray<struct FGameplayTag>                        LimitedCharacters;                                        // 0x0410(0x0010) (Edit, ZeroConstructor)
	bool                                               bChobuMap;                                                // 0x0420(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	TMap<struct FGameplayTag, class AS3Character*>     NPCMap;                                                   // 0x0428(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TMap<struct FGameplayTag, class US3NPCScheduleTask*> ActiveTasks;                                              // 0x0478(0x0050) (ZeroConstructor, Transient)
	TArray<struct FGameplayTag>                        RespawnCheckNPCIDs;                                       // 0x04C8(0x0010) (ZeroConstructor, Transient)
	class AS3GameTimeManager*                          GameTimeManager;                                          // 0x04D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class US3NPCStreamingComponent*                    StreamingComponent;                                       // 0x04E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x04E8(0x0028) MISSED OFFSET
	TArray<struct FPendingTask>                        PendingTasks;                                             // 0x0510(0x0010) (ZeroConstructor, Transient)
	TMap<EAnimBaseChara, float>                        BaseLegLengthMap;                                         // 0x0520(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0570(0x0020) MISSED OFFSET
	TArray<struct FFlagConditionChange>                FlagConditionChanges;                                     // 0x0590(0x0010) (Edit, ZeroConstructor)
	TArray<struct FFlagStepChange>                     FlagStepChanges;                                          // 0x05A0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData06[0x50];                                      // 0x05B0(0x0050) MISSED OFFSET
	TArray<class AS3GimmickChair*>                     GimmickChairList;                                         // 0x0600(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0610(0x0010) MISSED OFFSET
	bool                                               bDrawStreamingDebug;                                      // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNewStreamingPriority;                                 // 0x0621(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockNPCStreaming;                                       // 0x0622(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0xAD];                                      // 0x0623(0x00AD) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCManager");
		return ptr;
	}


	void UpdateTimeManual(float NewTime, bool bForceUpdate);
	void UpdateTime(float NewTime);
	void UpdateDistanceFromPlayer();
	bool UnspawnNPCFromID(const struct FGameplayTag& NPCID);
	void TeleportOpenedDoorNPC(class AS3GimmickOpenDoor* pGimmickOpenDoor, float Radius);
	bool SpawnNPCFromID(const struct FGameplayTag& NPCID, const struct FTransform& SpawnTransform, const struct FBox& ActionBounds, bool FastFadein);
	void ShowNPC(class AActor* Executor, class AS3Character* TargetNPC, float FadeTime);
	void SetShenfaSpawnTransform(const struct FTransform& _transform);
	void SetNPCHighPriorityShow(const struct FGameplayTag& NPCID, bool bHighPriorityShow);
	void SetForceStreamNPC(bool bForce);
	void OnStepChanged(int NewStep);
	void OnPlayerBehaviorIdChanged(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId);
	void OnNPCDestroyed(class AActor* DestroyedNPC);
	void OnFlagChanged(int ArrayIndex, int SetFlags);
	void NPCEvent(ENpcManagerEventMessage Message);
	bool IsNPCSchedulePaused(class AS3Character* Char);
	bool IsDebugDisableNPC();
	void HideNPC(class AActor* Executor, class AS3Character* TargetNPC, float FadeTime);
	class AS3Character* GetNPCFromString(const struct FString& NPCID);
	class AS3Character* GetNPCFromID(const struct FGameplayTag& NPCID);
	int GetNPCFadeInCount();
	class US3NPCDefinition* GetNPCDefinitionFromString(const struct FString& NPCID);
	class US3NPCDefinition* GetNPCDefinitionFromID(const struct FGameplayTag& NPCID);
	class AS3NPCController* GetNPCControllerFromID(const struct FGameplayTag& NPCID);
	class AS3NPCManager* GetInstance(class UObject* WorldContextObject);
	bool GetCurrentMesh(class US3NPCDefinition* inNPCDef);
	class AS3Character* GetAnyNPCFadeInProgress();
	TArray<class AS3Character*> GetAllNPC();
	void ForceAllPendingTasks();
	bool FindAppropriateLocation(const struct FGameplayTag& NPCID, struct FTransform* OutTransform);
	void ExitChair(class AS3GimmickChair* gimmick);
	void EntryChair(class AS3GimmickChair* gimmick);
	void DestroyNPCCameraCollision();
	void CreateNPCCameraCollision(float Distance);
	void ClearAllScheduleNPCs();
	bool CheckNPCState(const struct FGameplayTag& NPCID, ENpcCheckState State);
	void ChangeMesh(const struct FGameplayTag& NPCID, int Index);
	bool CanSpawnNPC();
	void BlueprintInitializeNPC(class AS3Character* NewNPC, class AS3NPCController* NewAI, class US3NPCDefinition* NPCDef);
};


// Class Shenmue3.NPCLookAtAnimMetaData
// 0x0010 (0x0038 - 0x0028)
class UNPCLookAtAnimMetaData : public UAnimMetaData
{
public:
	EChangeBody                                        eEnableBody;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Distance;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Angle;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.NPCLookAtAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.NPCOpenDoorAnimMetaData
// 0x0018 (0x0040 - 0x0028)
class UNPCOpenDoorAnimMetaData : public UAnimMetaData
{
public:
	float                                              Distance;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UAnimSequence*                               DoorAnimation;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableRootMotionScale;                                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.NPCOpenDoorAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.S3NPCMovementAnimationSet
// 0x03D8 (0x0408 - 0x0030)
class US3NPCMovementAnimationSet : public UDataAsset
{
public:
	struct FTurnAnims                                  WalkStartSequences;                                       // 0x0030(0x0048) (Edit, IsPlainOldData)
	struct FTurnAnims                                  WalkingTurnSequences;                                     // 0x0078(0x0048) (Edit, IsPlainOldData)
	struct FTurnAnims                                  StoppingTurnSequences;                                    // 0x00C0(0x0048) (Edit, IsPlainOldData)
	struct FTurnAnims                                  InPlaceTurnSequences;                                     // 0x0108(0x0048) (Edit, IsPlainOldData)
	struct FTurnAnims                                  WalkToSitSequences;                                       // 0x0150(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTurnAnims                                  FreeSitSequences;                                         // 0x0198(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTurnAnims                                  SittingTurnSequences;                                     // 0x01E0(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTurnAnims3                                 SitToIdleSequences;                                       // 0x0228(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTurnAnims                                  SitToWalkSequences;                                       // 0x0240(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLeftRightAnims                             WalkStopSequences;                                        // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UAnimSequence*                               IdleSequence;                                             // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkLoopSequence;                                         // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RunLoopSequence;                                          // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SitLoopSequence;                                          // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FLeftRightAnims>                     WalkInterruptions;                                        // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector2D                                   WalkInterruptionTimeRange;                                // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              WalkInterruptionMinDistance;                              // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FLeftRightAnims                             OpenDoorSequences;                                        // 0x02D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FDoorAnims                                  OpenKnobDoorSequences;                                    // 0x02E8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FDoorAnims                                  OpenKnobDoorLeftHandedSequences;                          // 0x0308(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FDoubleDoorAnims                            OpenDoubleDoorsSequences;                                 // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FDoubleDoorAnims                            OpenHalfDoubleDoorsSequences;                             // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FBlendSpaceTurnAroundAnims                  TurnAround;                                               // 0x0348(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FStairAnims                                 Stairs;                                                   // 0x0358(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFriendshipAnims                            Friendship;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSteppingAnims                              Stepping;                                                 // 0x0370(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FPOIAnims                                   POI;                                                      // 0x0380(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UAnimMontage*>                        OneShotAnimMontages;                                      // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAdjustBlendSpaces                          Adjustment;                                               // 0x03C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UAnimSequence*                               StandTalkSequence;                                        // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequence*>                       RandomStandTalkSequences;                                 // 0x03D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               SitTalkSequence;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequence*>                       RandomSitTalkSequences;                                   // 0x03F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EAnimBaseChara                                     BaseChara;                                                // 0x0400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFingerPointingType                                FingerPointingType;                                       // 0x0401(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0402(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCMovementAnimationSet");
		return ptr;
	}

};


// Class Shenmue3.S3NPCPathFollowingComponent
// 0x0030 (0x02F8 - 0x02C8)
class US3NPCPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FInterpCurveVector                          NavCurve;                                                 // 0x02D0(0x0018) (Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCPathFollowingComponent");
		return ptr;
	}


	void ResumePathMove();
	void PausePathMove(bool bResetVelocity);
	void GetPathPoints(TArray<struct FVector>* OutPoints);
	float GetDistanceToGoal();
	void AbortPathMove(const struct FString& Reason, bool bResetVelocity);
};


// Class Shenmue3.NPCPelvisBoneFixedAnimMetaData
// 0x0008 (0x0030 - 0x0028)
class UNPCPelvisBoneFixedAnimMetaData : public UAnimMetaData
{
public:
	bool                                               bEnablePelvisBoneFixed;                                   // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.NPCPelvisBoneFixedAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.S3NPCPOIScheduler
// 0x00B0 (0x03D8 - 0x0328)
class AS3NPCPOIScheduler : public AActor
{
public:
	struct FNPCPOICondition                            Conditions;                                               // 0x0328(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                PointNum;                                                 // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTriggerBox2;                                          // 0x0354(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class USceneComponent*                             RootSceneComp;                                            // 0x0358(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3_POIPointComponent*                       StartPointComp;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class US3_POIPointComponent*                       WaypointComp1;                                            // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class US3_POIPointComponent*                       WaypointComp2;                                            // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class US3_POIPointComponent*                       WaypointComp3;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class US3_POIPointComponent*                       WaypointComp4;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class US3_POIPointComponent*                       WaypointComp5;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class US3_POIPointComponent*                       WaypointComp6;                                            // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class US3_POIPointComponent*                       WaypointComp7;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TriggerBoxComp1;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TriggerBoxComp2;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x03B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCPOIScheduler");
		return ptr;
	}


	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Shenmue3.S3_POIPointComponent
// 0x0040 (0x05C0 - 0x0580)
class US3_POIPointComponent : public UArrowComponent
{
public:
	struct FNPCPOICommand                              Command;                                                  // 0x0580(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3_POIPointComponent");
		return ptr;
	}

};


// Class Shenmue3.NPCRootMotionAnimMetaData
// 0x0008 (0x0030 - 0x0028)
class UNPCRootMotionAnimMetaData : public UAnimMetaData
{
public:
	float                                              RootMotionScale;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.NPCRootMotionAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.S3NPCSchedule
// 0x0000 (0x0088 - 0x0088)
class US3NPCSchedule : public UDataTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCSchedule");
		return ptr;
	}


	bool ChangeAnimSequences(const struct FGameplayTag& NPCID, class UAnimSequence* srcAnim, class UAnimSequence* distAnim, bool IsNPCAll);
};


// Class Shenmue3.S3NPCScheduleTask
// 0x00A8 (0x00D0 - 0x0028)
class US3NPCScheduleTask : public UObject
{
public:
	struct FGameplayTag                                NPCID;                                                    // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly)
	class US3NPCDefinition*                            NPCDefinition;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRelativeTime;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENPCCommand>                           Command;                                                  // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStep;                                              // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                MinStep;                                                  // 0x0044(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FS3NPCScheduleStepRange>             StepRanges;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      TaskGroupNo;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediateNext;                                           // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bManualTrigger;                                           // 0x0062(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	float                                              StartDelay;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFlag;                                              // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                FlagIndex;                                                // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlagValue;                                                // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlagValue2;                                               // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FlagPriority;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FNPCTaskDetails                             TaskDetails;                                              // 0x007C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FNPCTaskFinishCommand>               TaskFinishCommands;                                       // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                ScriptState;                                              // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x34];                                      // 0x009C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCScheduleTask");
		return ptr;
	}


	void CheckHighPriorityShow();
};


// Class Shenmue3.S3NPCScheduleTask_Animation
// 0x0080 (0x0150 - 0x00D0)
class US3NPCScheduleTask_Animation : public US3NPCScheduleTask
{
public:
	bool                                               bInOrder;                                                 // 0x00D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	TArray<class UAnimSequence*>                       Animations;                                               // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      Weights;                                                  // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class US3NPCAnimSelector*                          AnimSelector;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCScheduleTask_Animation");
		return ptr;
	}


	void AnimCompleteEnd(bool bAnimSequenceA);
	void AnimCompleteBegin(bool bAnimSequenceA);
};


// Class Shenmue3.S3NPCScheduleTask_Appear
// 0x0060 (0x0130 - 0x00D0)
class US3NPCScheduleTask_Appear : public US3NPCScheduleTask
{
public:
	struct FBox                                        SpawnActionBounds;                                        // 0x00D0(0x001C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x00F0(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCScheduleTask_Appear");
		return ptr;
	}

};


// Class Shenmue3.S3NPCScheduleTask_Move
// 0x0180 (0x0250 - 0x00D0)
class US3NPCScheduleTask_Move : public US3NPCScheduleTask
{
public:
	TArray<struct FString>                             LocationTags;                                             // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          TargetTransforms;                                         // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EPendingIdle>                          IdleType;                                                 // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<unsigned char>                              PathFlags;                                                // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Loops;                                                    // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class UAIAsyncTaskBlueprintProxy*                  MoveProxy;                                                // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	class AS3GimmickChair*                             GimmickChair;                                             // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x128];                                     // 0x0128(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCScheduleTask_Move");
		return ptr;
	}


	void StartNextMoveAfterRandomDelay();
	void StartNextMove();
	bool SearchChair(bool bForceSit);
	void OnSuccess(TEnumAsByte<EPathFollowingResult> Result);
	void OnPOIWait();
	void OnPOIMoveSuccess(TEnumAsByte<EPathFollowingResult> Result);
	void OnPOIMoveFailure(TEnumAsByte<EPathFollowingResult> Result);
	void OnPOIAnimComplete(bool bAnimSequenceA);
	void OnFailure(TEnumAsByte<EPathFollowingResult> Result);
	void MoveComplete();
	void LeavedChair();
	bool IsTargetGimmick();
	int GetSitDirection();
	class AS3GimmickChair* GetSeatedChair();
	class AS3GimmickChair* GetGimmickChair();
	void GetChairTransform(struct FTransform* trans);
	bool GetChairLeavePoint(struct FTransform* trans);
};


// Class Shenmue3.S3NPCScheduleTask_Disappear
// 0x0000 (0x00D0 - 0x00D0)
class US3NPCScheduleTask_Disappear : public US3NPCScheduleTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCScheduleTask_Disappear");
		return ptr;
	}

};


// Class Shenmue3.S3NPCScheduleTask_Null
// 0x0000 (0x00D0 - 0x00D0)
class US3NPCScheduleTask_Null : public US3NPCScheduleTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCScheduleTask_Null");
		return ptr;
	}

};


// Class Shenmue3.NPCStateAnimMetaData
// 0x0008 (0x0030 - 0x0028)
class UNPCStateAnimMetaData : public UAnimMetaData
{
public:
	bool                                               bAnimationCrouching;                                      // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                HaveItemExBoneControlNo;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.NPCStateAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.S3NPCTalkScriptStreamer
// 0x0028 (0x0050 - 0x0028)
class US3NPCTalkScriptStreamer : public UObject
{
public:
	TArray<class AS3Character*>                        NPCs;                                                     // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<class AS3Character*>                        Loaded;                                                   // 0x0038(0x0010) (ZeroConstructor, Transient)
	float                                              LoadDistance;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UnloadDistance;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCTalkScriptStreamer");
		return ptr;
	}

};


// Class Shenmue3.S3NPCStreamingComponent
// 0x01A8 (0x0298 - 0x00F0)
class US3NPCStreamingComponent : public UActorComponent
{
public:
	class AS3NPCManager*                               NPCProvider;                                              // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class US3NPCTalkScriptStreamer*                    TalkScriptStreamer;                                       // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AS3Character*>                        CurrentlyLoading;                                         // 0x0100(0x0010) (ZeroConstructor, Transient)
	TArray<class AS3Character*>                        WaitingToUnload;                                          // 0x0110(0x0010) (ZeroConstructor, Transient)
	TArray<class AS3Character*>                        PreloadNPCs;                                              // 0x0120(0x0010) (ZeroConstructor, Transient)
	TArray<class AS3NPCLoadTrigger*>                   LoadTriggers;                                             // 0x0130(0x0010) (ZeroConstructor, Transient)
	TArray<class AS3Character*>                        InsideLoadTriggerNPCs;                                    // 0x0140(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x148];                                     // 0x0150(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NPCStreamingComponent");
		return ptr;
	}


	void OnTriggerDestroyed(class AActor* DestroyedTrigger);
	void OnNPCDestroyed(class AActor* DestroyedNPC);
	void ClothesChanged(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
};


// Class Shenmue3.S3PathFollowingComponent
// 0x0180 (0x0448 - 0x02C8)
class US3PathFollowingComponent : public UPathFollowingComponent
{
public:
	bool                                               bDrawDebug;                                               // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA3];                                      // 0x02C9(0x00A3) MISSED OFFSET
	float                                              MinLookAheadDistance;                                     // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLookAheadDistance;                                     // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PathSeperationDistanceForMinLookAhead;                    // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PathSeperationDistanceForMaxLookAhead;                    // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeSinceAvoidForMaxLookAhead;                            // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeSinceAvoidForMinLookAhead;                            // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OvershootAcceptanceRadius;                                // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotationSpeedAdjustment;                           // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	float                                              WalkStrideLength;                                         // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RunStrideLength;                                          // 0x0394(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StopDistance;                                             // 0x0398(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x64];                                      // 0x039C(0x0064) MISSED OFFSET
	class US3NPCScheduleTask*                          MoveTask;                                                 // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsNearFrontOfDoor;                                       // 0x0408(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	int                                                DoorType;                                                 // 0x040C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DoorOpenType;                                             // 0x0410(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HingeSide;                                                // 0x0414(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0418(0x0010) MISSED OFFSET
	bool                                               bUseNewAvoidance;                                         // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathMassaging;                                        // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysMoveDirectlyTowardsGoal;                           // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1D];                                      // 0x042B(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PathFollowingComponent");
		return ptr;
	}


	void ResumePathMove();
	void PausePathMove(bool bResetVelocity);
	bool IsUsingStairs();
	bool IsNearStairs();
	bool HasDoorOnCurrentPath();
	bool GetTargetRotation(struct FRotator* Rotation);
	bool GetTargetLocation(struct FVector* Location);
	void GetStrideInfo(float* InRemainingSteps, float* AdjustedRemainingStrides, float* RequiredAdjustment);
	int GetRemainingSteps();
	void GetPathPoints(TArray<struct FVector>* OutPoints);
	float GetPathLength();
	float GetNextTurnAngle();
	bool GetNextPathLocation(struct FVector* InNextPathLocation);
	struct FVector GetNextLocationNormal();
	struct FVector GetNearStairsNavLinkPos();
	struct FVector GetNearStairsNavLinkNextPos();
	class AActor* GetNearStairsNavLinkActor();
	float GetDistanceToNextTurn();
	float GetDistanceToGoal();
	struct FVector GetDirectionToGoal();
	float GetAngleToGoal();
	bool DidLastMoveReachGoal();
	void AbortPathMove(const struct FString& Reason, bool bResetVelocity);
};


// Class Shenmue3.S3PCDataList
// 0x0000 (0x0050 - 0x0050)
class US3PCDataList : public US3TalkDataListBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PCDataList");
		return ptr;
	}

};


// Class Shenmue3.S3PlayerCameraLibrary
// 0x0000 (0x0028 - 0x0028)
class US3PlayerCameraLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerCameraLibrary");
		return ptr;
	}


	struct FPlayerCameraGetNearRotResult GetNearRotCamera(float Rot1, float Rot2, float Speed);
	struct FPlayerCameraCalcCenterResult CalcCameraCenter(const struct FVector& CameraC, const struct FVector& CameraP, float CameraDis, bool Z_AttentionFlag, float Z_AttentionRot, float RotY, float CameraCenter, float RotAdd);
};


// Class Shenmue3.S3PlayerCameraManagerBase
// 0x0000 (0x2650 - 0x2650)
class AS3PlayerCameraManagerBase : public APlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerCameraManagerBase");
		return ptr;
	}

};


// Class Shenmue3.S3PlayerCameraManager
// 0x0060 (0x26B0 - 0x2650)
class AS3PlayerCameraManager : public AS3PlayerCameraManagerBase
{
public:
	struct FScriptMulticastDelegate                    TransitionComplete;                                       // 0x2650(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUseBoomTransition;                                       // 0x2660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2661(0x0003) MISSED OFFSET
	float                                              ZoomInterpSpeed;                                          // 0x2664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZoomFOV;                                                  // 0x2668(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ZoomRotY;                                                 // 0x266C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZoomRotZ;                                                 // 0x2670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZoomFOVOffset;                                            // 0x2674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECameraState                                       CameraState;                                              // 0x2678(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x2679(0x002F) MISSED OFFSET
	bool                                               bUserEnableAutoCameraRotation;                            // 0x26A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x26A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerCameraManager");
		return ptr;
	}


	void SetNotInterpSearchZoom(bool bSeachZoom);
	void SetCameraState(ECameraState NewState);
	bool IsAutoCameraRotationEnabled();
	float GetSearchCameraFOV();
	bool GetIsZoomingInFOV();
	float GetDesiredZoomFOV();
	class AActor* GetDefaultViewTarget();
	ECameraState GetCameraState();
	float GetBaseFOV();
	void ChangedCameraState(ECameraState OldState, ECameraState NewState);
};


// Class Shenmue3.S3NavLinkCustomComponent
// 0x0000 (0x01C8 - 0x01C8)
class US3NavLinkCustomComponent : public UNavLinkCustomComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NavLinkCustomComponent");
		return ptr;
	}


	bool IsNavLinkEnabled();
};


// Class Shenmue3.S3PlayerCharacter
// 0x0000 (0x08E0 - 0x08E0)
class AS3PlayerCharacter : public AS3Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerCharacter");
		return ptr;
	}

};


// Class Shenmue3.S3PlayerExpCollection
// 0x00D0 (0x00F8 - 0x0028)
class US3PlayerExpCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerExpCollection");
		return ptr;
	}


	void SetAttributePoints(const struct FName& Key, float Value);
	void SetAttributePointRatio(const struct FName& Key, float Ratio);
	void SetAttributeLevel(const struct FName& Key, int Level);
	TArray<struct FName> ListUpValidAttributes();
	bool IsValidAttribute(const struct FName& Key);
	float GetMaxAttributePoints();
	float GetAttributeRatio(const struct FName& Key);
	float GetAttributePoints(const struct FName& Key);
	int GetAttributeMinLevel();
	int GetAttributeMaxLevel();
	void GetAttributeLevel(const struct FName& Key, int* OutLevel, float* OutNextRatio);
	void Debug_SetTotalEarnedAttributeLevels(int Levels);
	int CountAttributeLevels();
	void ConfigureFixedLevel(int InAttributeLevel);
	void ConfigureByTotalXp(int InMinAttributeLevel, int InMaxAttributeLevel, float InTotalXpToMax, float InXpDifficultyRamp);
	void Configure(int InMinAttributeLevel, int InMaxAttributeLevel, float InAttributePointsToLevel);
	void AddAttributePoints(const struct FName& Key, float Value);
	void AddAttributePointRatio(const struct FName& Key, float Ratio);
};


// Class Shenmue3.S3PlayerInput
// 0x0090 (0x0438 - 0x03A8)
class US3PlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x03A8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerInput");
		return ptr;
	}


	void UpdateKeyBinding();
};


// Class Shenmue3.S3PlayerMovementComponent
// 0x00B0 (0x0820 - 0x0770)
class US3PlayerMovementComponent : public US3CharacterMovementComponent
{
public:
	float                                              SplineWalkSpeed;                                          // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplinePosition;                                           // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeashLength;                                              // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeashLimit;                                               // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	class AActor*                                      LeashActor;                                               // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawAvoidanceDebug;                                      // 0x0791(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePhysRotationPivot;                                    // 0x0792(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClampVelocityToForward;                                  // 0x0793(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalRotationPivot;                                       // 0x0794(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseDirectVelocity;                                       // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x07A1(0x001F) MISSED OFFSET
	float                                              YawRotationAcceleration;                                  // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinYawRotationSpeed;                                      // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxYawRotationSpeed;                                      // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x07CC(0x0034) MISSED OFFSET
	bool                                               bUseNewAvoidance;                                         // 0x0800(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1F];                                      // 0x0801(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerMovementComponent");
		return ptr;
	}


	void SetExecCountPerformMovement(int Count);
	void PauseAvoidance(bool IsPaused);
	struct FVector GetVelocityTarget();
	struct FVector GetRequestedVelocity();
	TEnumAsByte<ENPCAnimRotateMode> GetNPCAnimRotateMode();
	TEnumAsByte<ENPCAnimMoveMode> GetNPCAnimMoveMode();
	struct FVector GetForwardVelocityProjection(const struct FVector& Original);
	TEnumAsByte<ENPCAnimRotateMode> GetEffectiveNPCAnimRotateMode();
	TEnumAsByte<ENPCAnimMoveMode> GetEffectiveNPCAnimMoveMode();
	struct FVector CalculateDeltaLocationForDeltaRotation(float FromYawDegrees, float ToYawDegrees);
};


// Class Shenmue3.S3PlayerObstacleSensorComponent
// 0x0008 (0x00F8 - 0x00F0)
class US3PlayerObstacleSensorComponent : public UActorComponent
{
public:
	class AS3Character*                                ContextCharacter;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerObstacleSensorComponent");
		return ptr;
	}


	class AS3Character* CheckForNPCObstacles(TArray<class AS3Character*> Chars, class AS3Character* PreviousChar, const struct FVector& InDirection, float PreviousCharRadiusPad, float ReactDistance, struct FVector* OutDirection, float* OutDistance);
	void CalculateStopParameters(float WalkCycleTime, float WalkCycleDuration, float WalkCycleSpeed, float WalkStopMarkerA, float WalkStopMarkerB, float StopAnimDistance, float DistanceToStopPoint, float* OutStrideScale, bool* OutQueueStopAnim);
	float CalculateStopGap(class AS3Character* Char);
};


// Class Shenmue3.S3PlayerSensorComponent
// 0x0000 (0x0108 - 0x0108)
class US3PlayerSensorComponent : public US3CharacterSensorComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerSensorComponent");
		return ptr;
	}

};


// Class Shenmue3.S3PlayerSetting
// 0x0000 (0x0028 - 0x0028)
class US3PlayerSetting : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerSetting");
		return ptr;
	}

};


// Class Shenmue3.S3PlayerSteeringComponent
// 0x0020 (0x0110 - 0x00F0)
class US3PlayerSteeringComponent : public UActorComponent
{
public:
	class AS3SplineMoveActor*                          SplineActor;                                              // 0x00F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowTraverseSplineBackwards;                             // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoTraverseSpline;                                       // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
	TArray<struct FTalkableCacheData>                  TalkableNPCCache;                                         // 0x0100(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PlayerSteeringComponent");
		return ptr;
	}


	void UpdateTestCache(float DeltaTime);
	bool SteerTowardsPartnerSpline(const struct FVector& InLocation, float InputYaw, float InputMagnitude, float* OutputYaw, float* OutputMagnitude);
	bool CheckTalkToNPCWithCache(class US3TalkComponentBase* NPCTalkComponent);
};


// Class Shenmue3.S3PointLight
// 0x0018 (0x0358 - 0x0340)
class AS3PointLight : public APointLight
{
public:
	bool                                               bRegister;                                                // 0x0340(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class US3LightTypeComponent*                       LightTypeComponent;                                       // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                RegisterHandle;                                           // 0x0350(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PointLight");
		return ptr;
	}

};


// Class Shenmue3.S3PostProcessAnimInstance
// 0x0030 (0x0390 - 0x0360)
class US3PostProcessAnimInstance : public UAnimInstance
{
public:
	class AS3Character*                                S3Character;                                              // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3FaceAnimInstance*                         FaceAnimInstance;                                         // 0x0368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCutsceneCharacter;                                       // 0x0370(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablePhysics;                                          // 0x0371(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	float                                              RigidbodyAlpha;                                           // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableEarring;                                          // 0x0378(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTalking;                                                 // 0x0379(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportHem;                                              // 0x037A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x037B(0x0001) MISSED OFFSET
	float                                              MeshAlpha;                                                // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEarringCone;                                             // 0x0380(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSimulation;                                           // 0x0381(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	float                                              SimulationAlpha;                                          // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PostProcessAnimInstance");
		return ptr;
	}


	void SetEarringPattern(EEarringParttern Pattern);
	bool IsNeedSupportHem();
	bool IsDisablePhysics();
};


// Class Shenmue3.S3PostProcessSettingsDataAsset
// 0x0530 (0x0560 - 0x0030)
class US3PostProcessSettingsDataAsset : public UDataAsset
{
public:
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0030(0x0530) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3PostProcessSettingsDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3ProceduralAnimBlendComponent
// 0x02E0 (0x03D0 - 0x00F0)
class US3ProceduralAnimBlendComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x00F0(0x0200) MISSED OFFSET
	struct FTransform                                  IKLeftFootTarget;                                         // 0x02F0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FTransform                                  IKRightFootTarget;                                        // 0x0320(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FTransform                                  ActorTransformMoveTarget;                                 // 0x0350(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       LeftFootName;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootName;                                            // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMapRangeStruct                             MapAngleToWobbleRatio;                                    // 0x0398(0x0010) (Edit, BlueprintVisible)
	struct FMapRangeStruct                             MapAngleToFootRaiseAmount;                                // 0x03A8(0x0010) (Edit, BlueprintVisible)
	struct FMapRangeStruct                             MapTravelDistanceToFootRaiseAmount;                       // 0x03B8(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ProceduralAnimBlendComponent");
		return ptr;
	}


	void Stop();
	void SampleStep(float NormalizedTime);
	bool IsRunning();
	void BeginStep(const struct FTransform& TargetActorTransform, const struct FTransform& TargetFootTransform, bool LeadWithRight);
	void BeginBlend(class UAnimSequenceBase* EndSequence, float EndSequenceTime, const struct FTransform& TargetTransform, float Duration);
};


// Class Shenmue3.S3ProceduralFaceReactionAnim
// 0x0038 (0x0060 - 0x0028)
class US3ProceduralFaceReactionAnim : public UObject
{
public:
	class US3FaceAnimInstance*                         FaceAnimInstance;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                RotationCurve;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ProceduralFaceReactionAnim");
		return ptr;
	}

};


// Class Shenmue3.S3ProgressManager
// 0x00D0 (0x00F8 - 0x0028)
class US3ProgressManager : public UObject
{
public:
	int                                                EventStep;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xCC];                                      // 0x002C(0x00CC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ProgressManager");
		return ptr;
	}


	void UpdateMainFlowWork(const struct FName& ID, const struct FString& Param);
	void UpdateACPlayDateTime(const struct FName& ID, const struct FDateTime& NewDateTime);
	void RemoveMainFlowWork(const struct FName& ID);
	void InitProgress(int flag_array_length);
	struct FString GetMainFlowWork(const struct FName& ID);
	bool GetACPlayDateTime(const struct FName& ID, struct FDateTime* DateTime);
};


// Class Shenmue3.S3ProxyMovementComponent
// 0x0008 (0x0190 - 0x0188)
class US3ProxyMovementComponent : public UPawnMovementComponent
{
public:
	class UPawnMovementComponent*                      TargetComponent;                                          // 0x0188(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ProxyMovementComponent");
		return ptr;
	}

};


// Class Shenmue3.S3RainManager
// 0x40098 (0x403C0 - 0x0328)
class AS3RainManager : public AActor
{
public:
	struct FNavAgentProperties                         NavProperties;                                            // 0x0328(0x0030) (Edit)
	float                                              Density;                                                  // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               Stream;                                                   // 0x035C(0x0008) (Edit, BlueprintVisible)
	float                                              Probability;                                              // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0368(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	int                                                FrontHalfWidth;                                           // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RearRows;                                                 // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrontRows;                                                // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebug;                                                // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    RainMID;                                                  // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NavQueryExtent;                                           // 0x0388(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4000C];                                   // 0x0394(0x4000C) MISSED OFFSET
	class UInstancedStaticMeshComponent*               InstancedRainMeshes;                                      // 0x403A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class US3GameInstance*                             GameInstance;                                             // 0x403A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x403B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3RainManager");
		return ptr;
	}


	void SetEnabled(bool NewEnabled);
	bool NavigationRaincast(const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, struct FVector* HitLocation);
	class ANavigationData* GetNavData();
};


// Class Shenmue3.S3RainNavData
// 0x0008 (0x0598 - 0x0590)
class AS3RainNavData : public ARecastNavMesh
{
public:
	bool                                               bCanRebuild;                                              // 0x0590(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0591(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3RainNavData");
		return ptr;
	}

};


// Class Shenmue3.S3ReactionComponent
// 0x0060 (0x05F0 - 0x0590)
class US3ReactionComponent : public USphereComponent
{
public:
	float                                              SearchRangeMinimum;                                       // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SearchAngle;                                              // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0598(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFriendSpotted;                                          // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendLost;                                             // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x05C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ReactionComponent");
		return ptr;
	}

};


// Class Shenmue3.S3RewardKeyDataAsset
// 0x0008 (0x0038 - 0x0030)
class US3RewardKeyDataAsset : public UDataAsset
{
public:
	ES3RewardType                                      Type;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3RewardKeyDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3RewardManager
// 0x0000 (0x0328 - 0x0328)
class AS3RewardManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3RewardManager");
		return ptr;
	}

};


// Class Shenmue3.S3SaveGameBase
// 0x0018 (0x0040 - 0x0028)
class US3SaveGameBase : public USaveGame
{
public:
	struct FString                                     UserId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bValidEngineVersion;                                      // 0x0038(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SaveGameBase");
		return ptr;
	}

};


// Class Shenmue3.S3SaveGameSystem
// 0x00E8 (0x0128 - 0x0040)
class US3SaveGameSystem : public US3SaveGameBase
{
public:
	int                                                Version;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<unsigned char>                              AutoSaveData;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ES3Locale                                          Locale;                                                   // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ES3VoiceLanguage                                   VoiceLanguage;                                            // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              BGMVolume;                                                // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SEVolume;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VoiceVolume;                                              // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ES3WindowType                                      WindowType;                                               // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     Resolution;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bVSync;                                                   // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ES3GraphicPreset                                   Quality;                                                  // 0x0081(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
	TMap<ES3KeyConfigType, unsigned char>              KeyConfigMap;                                             // 0x0088(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              DisplayGamma;                                             // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVibration;                                               // 0x00DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	TArray<struct FName>                               RewardPasswords;                                          // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        SystemFlags;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bBattleRallyAlready;                                      // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<struct FS3BattleRallyInfo>                  BattleRallyInfoArray;                                     // 0x0108(0x0010) (ZeroConstructor)
	struct FS3BattleRallySaveData                      BattleRallyInfo;                                          // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SaveGameSystem");
		return ptr;
	}

};


// Class Shenmue3.S3SaveGame
// 0x07B0 (0x07F0 - 0x0040)
class US3SaveGame : public US3SaveGameBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty Shenmue3.S3SaveGame.PreloadAssets
	unsigned char                                      UnknownData01[0x50];                                      // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty Shenmue3.S3SaveGame.PreloadClasses
	TArray<unsigned char>                              RetrySaveData;                                            // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     SaveName;                                                 // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   GameDate;                                                 // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              GameTime;                                                 // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClearStory;                                              // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWeatherType                                       Weather;                                                  // 0x010D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ES3Where                                           LocationId;                                               // 0x010E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x010F(0x0001) MISSED OFFSET
	struct FString                                     AreaId;                                                   // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                EventStep;                                                // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	TArray<int>                                        SubFlags;                                                 // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FString>                 MainFlowWorkMap;                                          // 0x0138(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FDateTime>               ACPlayDateTimeMap;                                        // 0x0188(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET
	struct FTransform                                  PlayerTransform;                                          // 0x01E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    CameraRot;                                                // 0x0210(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	TArray<bool>                                       MemoFlags;                                                // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       MemoAlreadys;                                             // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        MemoDataIdentifer;                                        // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MemoLatestIndex;                                          // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MemoMotivationIndex;                                      // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MemoMotivationIndexs;                                     // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       MemoMapMasks;                                             // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        UnleadMemoIds;                                            // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       TabFlagUnread;                                            // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        MemoSubEventOrder;                                        // 0x0298(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Money;                                                    // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BetMoney;                                                 // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RedemptionPoint;                                          // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	TArray<int>                                        ItemFlags;                                                // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       ItemCheckFlags;                                           // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, unsigned char>                  AcquisitionMap;                                           // 0x02D8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, unsigned char>                  AchievementAcquisitionMap;                                // 0x0328(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   SaveDataTime;                                             // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               ReadHelpIds;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FS3BattleStatsSaveData                      BattleStats;                                              // 0x0390(0x00C0) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<ES3AchievementCountType, int>                 AchievementCountMap;                                      // 0x0450(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<EClothPartsType, struct FName>                RyoClothParts;                                            // 0x04A0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<EClothPartsType, struct FName>                SheClothParts;                                            // 0x04F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               UnlockRyoClothParts;                                      // 0x0540(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               UnlockSheClothParts;                                      // 0x0550(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTalkScriptData>                     TalkProgressData;                                         // 0x0560(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FNPCTalkData>          NPCTalkData;                                              // 0x0570(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FTalkScheduleData>     PcTalkData;                                               // 0x05C0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FTalkScheduleData>     BsTalkData;                                               // 0x0610(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FTalkScheduleData>     MiniGameTalkData;                                         // 0x0660(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FTalkScheduleData>     ShopTalkData;                                             // 0x06B0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, int>                          ACTalkData;                                               // 0x0700(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FDateTime>                        ScriptStartTimer;                                         // 0x0750(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<struct FName>                               PlayedCutsceneIds;                                        // 0x07A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FS3MiniGameProgressSaveData>         MiniGameProgress;                                         // 0x07B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FS3FishingInfo                              FishingInfo;                                              // 0x07C0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData07[0x8];                                       // 0x07E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SaveGame");
		return ptr;
	}


	int GetEventFlag(int Index);
};


// Class Shenmue3.S3SaveLoadManager
// 0x02E8 (0x0310 - 0x0028)
class US3SaveLoadManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     DefaultSaveSlot;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     AutoSaveSlot;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     RetrySaveSlot;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     SystemLabel;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                ClearEventStep;                                           // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxPCData;                                                // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<int>                                        IgnoreSteps;                                              // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FS3FlagRange>                     IgnoreStepAndFlags;                                       // 0x0088(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              AutoSaveData;                                             // 0x00D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<unsigned char>                              RetrySaveData;                                            // 0x00E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      SaveGameClass;                                            // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  SaveIconDataTable;                                        // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  StepNumberDataTable;                                      // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSubFlags;                                              // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxItems;                                                 // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxMemoFlags;                                             // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3LoadingType                                     LoadingType;                                              // 0x011C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x33];                                      // 0x011D(0x0033) MISSED OFFSET
	TArray<int>                                        AddNewGameItem;                                           // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        RemoveNewGameItem;                                        // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        RemoveNewGameItemHakkason;                                // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        NoResetSubFlag;                                           // 0x0180(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ResetChobuMemo;                                           // 0x0190(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<ES3Where, struct FS3SaveInitialParam>         InitialParamMap;                                          // 0x01A0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               RemoveAcquisitionItemName;                                // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FS3SaveOverrideParam                        OverrideSaveParam;                                        // 0x0200(0x0050)
	TArray<unsigned char>                              OutputSaveData;                                           // 0x0250(0x0010) (ZeroConstructor, Config)
	bool                                               bSystemDataLoaded;                                        // 0x0260(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bLoadingRetryData;                                        // 0x0261(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	class US3SaveGame*                                 LoadingData;                                              // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class UObject*>                             LoadingDataAssets;                                        // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                              LoadingDataClasses;                                       // 0x0280(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData03[0x30];                                      // 0x0290(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSystemDataLoaded;                                       // 0x02C0(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSaveLoadWidgetClosed;                                   // 0x02D0(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAutoSaveStarted;                                        // 0x02E0(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAutoSaveFinished;                                       // 0x02F0(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSystemSaveFinished;                                     // 0x0300(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SaveLoadManager");
		return ptr;
	}


	void ShowNotInstallDLCDialog();
	void SetOverrideSaveParam(const struct FS3SaveOverrideParam& Param);
	void SetLoadingScreen(ES3LoadingType Type);
	void SetLoadedData(class US3SaveGame* SaveGame);
	bool ResetSaveData();
	bool OpenSaveWidget();
	void OpenSaveLoadWidget();
	bool OpenLoadWidget();
	bool OpenLevel(ES3Where LocationId, int EventStep);
	struct FString MakeSlotName(int Index);
	void MakeNewGameData(class US3SaveGame* SaveGame, ES3Where ClearRestartLevel);
	bool IsIgnoreStep(int Step);
	bool IsExistAutoSaveData();
	bool IsClearData(class US3SaveGame* SaveGame);
	void GetUniquePlayerId(bool* bSuccess, struct FString* ID);
	struct FString GetTitleName();
	class US3SaveGame* GetLoadingData(bool bForce);
	class US3GameInstance* GetGameInstance();
	bool ExecSaveSystem(bool bAutoSave);
	bool ExecSaveIgnore(const struct FString& SaveLabel, const struct FString& SlotName, int UserIndex);
	bool ExecSave(const struct FString& SaveLabel, const struct FString& SlotName, int UserIndex);
	void ExecLoadSystemAsync();
	class US3SaveGame* ExecLoad(const struct FString& SlotName, int UserIndex, bool SetData, bool* bSuccess);
	bool ExecAutoSave();
	struct FString DateTimeToString(const struct FDateTime& DateTime);
	struct FString CreateSaveProgressText(ES3Where Location, int Step);
	struct FString CreateMoneyChipName(int Money, int chip);
	struct FString CreateDifficultyAndKungFuName(const struct FS3BattleStatsSaveData& BattleStats);
	void ClearOverrideSaveParam();
	void BeginLoadData(class US3SaveGame* SaveGame, bool bRetryData);
	void ApplyIniSaveData();
};


// Class Shenmue3.S3SceneAndWidgetCapture2D
// 0x0020 (0x0350 - 0x0330)
class AS3SceneAndWidgetCapture2D : public ASceneCapture
{
public:
	class US3SceneCaptureComponent2D*                  CaptureComponent2D;                                       // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class US3WidgetToRenderTargetComponent*            WidgetRenderer;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDrawFrustumComponent*                       DrawFrustum;                                              // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SceneAndWidgetCapture2D");
		return ptr;
	}


	void OnInterpToggle(bool bEnable);
};


// Class Shenmue3.S3SceneCaptureComponent2D
// 0x0010 (0x08A0 - 0x0890)
class US3SceneCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0890(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SceneCaptureComponent2D");
		return ptr;
	}

};


// Class Shenmue3.S3SceneColorWidget
// 0x0010 (0x01E8 - 0x01D8)
class US3SceneColorWidget : public UImage
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SceneColorWidget");
		return ptr;
	}

};


// Class Shenmue3.S3SearchAnimMetaData
// 0x0008 (0x0030 - 0x0028)
class US3SearchAnimMetaData : public UAnimMetaData
{
public:
	bool                                               bIsDeleteItem;                                            // 0x0028(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SearchAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.S3SearchArea
// 0x0280 (0x05B0 - 0x0330)
class AS3SearchArea : public ATriggerBox
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET
	bool                                               bFreeSearch;                                              // 0x0340(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNewFreeSearchMode;                                       // 0x0341(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGatherMode;                                              // 0x0342(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledSearchCount;                                      // 0x0343(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SearchCountGlobalFlag;                                    // 0x0344(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InnerOval;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   OuterOval;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bOneShotSearch;                                           // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bContinuationFlag;                                        // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHandIK;                                               // 0x035A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x035B(0x0005) MISSED OFFSET
	class USceneComponent*                             AdditionalCollisionRoot;                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class US3SearchComponent*>                  ChildSearchComponents;                                    // 0x0368(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class US3SearchComponent*>                  VisibleSearchComponents;                                  // 0x0378(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             SearchFlags;                                              // 0x0388(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             SearchedComponentNameList;                                // 0x0398(0x0010) (BlueprintVisible, ZeroConstructor)
	class USkeletalMeshComponent*                      ArmMesh;                                                  // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ShadowMesh;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	struct FTransform                                  ArmMeshTransform;                                         // 0x03C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  HandIKTransform;                                          // 0x03F0(0x0030) (BlueprintVisible, Transient, IsPlainOldData)
	struct FName                                       HandAttachSocket;                                         // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGrabbingItem;                                            // 0x0428(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFreeLockMode;                                            // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCrouchMode;                                              // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBusyLockOnChange;                                        // 0x042B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartSearch;                                             // 0x042C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledPlaySubTitle;                                     // 0x042D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x042E(0x0002) MISSED OFFSET
	struct FString                                     AnimationSelectorName;                                    // 0x0430(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    SearchComponentUsed;                                      // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SearchComponentLookedAt;                                  // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SearchComponentLookedItem;                                // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SearchComponentGrabbed;                                   // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SearchComponentDestroyGrabActor;                          // 0x0480(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ACameraActor*                                CameraLock;                                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACameraActor*                                CameraA;                                                  // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	class ACameraActor*                                CameraB;                                                  // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x04A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	struct FLinearColor                                IconColor;                                                // 0x04AC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                IconDisableColor;                                         // 0x04BC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData05[0x24];                                      // 0x04CC(0x0024) MISSED OFFSET
	class US3SearchComponent*                          CurrentSearch;                                            // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3SearchComponent*                          LastSearch;                                               // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3SearchComponent*                          CurrentFocus;                                             // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CurrentPivot;                                             // 0x0508(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	class AS3PlayerController*                         PlayerController;                                         // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class AS3PlayerCameraManager*                      CameraManager;                                            // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CustomViewTarget;                                         // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x34];                                      // 0x0530(0x0034) MISSED OFFSET
	bool                                               bActionEnabled;                                           // 0x0564(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBackEnabled;                                             // 0x0565(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTransitionCamera;                                        // 0x0566(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckTransitionCamera;                                   // 0x0567(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0568(0x0004) MISSED OFFSET
	float                                              TextDrawTimer;                                            // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActionEventDelayTime;                                     // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDetailModeStep                                    DetailMode;                                               // 0x0574(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	class US3SearchComponent*                          DetailRoot;                                               // 0x0578(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class US3SearchComponent*                          DetailFocus;                                              // 0x0580(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData10[0x28];                                      // 0x0588(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SearchArea");
		return ptr;
	}


	void ToggleCamera();
	void StopSearch(class AS3PlayerController* PlayerController);
	void StartSearch(class AS3PlayerController* PlayerController);
	void StartGrabSubAnim();
	void StartCheckCameraTransition(float TransitionTime);
	void StartACEvent(class UTalkScript* ACEventScript);
	void SetLocked(bool bNewLocked);
	void SetEnabledSearchCount(bool bEnabled);
	void SetCurrentSearch(class US3SearchComponent* Component);
	void SetCurrentFocus(class US3SearchComponent* NewForcus);
	void SetBusyLockOnChangeFlag(bool flag);
	void SelectCameraTransitionComplete();
	void ResumeCurrentMontage();
	void RestoreCamera();
	void ResetDetailParam();
	void ReleasedItem();
	void PlayGetSound();
	void PlayCutscene(const struct FName& CutsceneId);
	void PauseCurrentMontage();
	void OnStopSearch();
	void OnStartSearch();
	void OnInteracted(class AActor* InteractingActor, class US3SearchComponent* SearchComponent);
	void OnBack(class AActor* InteractingActor);
	void OnAction(class AActor* InteractingActor);
	void MoveGrabedItem();
	void LookingItem();
	void KillTransitionEvent();
	bool IsValidComponent(class US3GameInstance* GameIns, class US3SearchComponent* Target);
	bool IsTransitionBusy();
	bool IsStartSeach();
	bool IsShowBackIcon();
	bool IsLocked(bool bForDescription);
	bool IsEnabledPlaySubTitle();
	bool IsDetailTransition();
	void InitializeGather();
	void GrabCompleted();
	void GrabbedItem();
	struct FName GetTagCharaName();
	class US3SearchComponent* GetSearchComponentByName(const struct FString& Name);
	float GetMoveMotionValue(bool bReturnMode);
	class US3SearchComponent* GetLastChildSearch();
	void GetItem(const struct FName& ItemId);
	bool GetDetailBackRequest();
	class US3SearchComponent* GetCurrentSearch();
	class US3SearchComponent* GetCurrentFocus();
	class ACameraActor* GetCurrentCamera();
	struct FName GetClothCharaName();
	class ACameraActor* GetCamera();
	ESearchActionIcon GetActionIconType();
	void FreeSearchLock();
	void ForceUnlock();
	void FinishedSearchPoint();
	void ExitSearchMode();
	void ExitSearch();
	void EndGrabSubAnim();
	void EndCheckCameraTransition();
	bool CheckAction(ESearchTiming Timing);
	bool CanOpenMemopad();
	void CameraTransitionComplete();
	void AttachGrabActor();
};


// Class Shenmue3.S3SearchComponent
// 0x01B0 (0x0890 - 0x06E0)
class US3SearchComponent : public US3InteractionComponent
{
public:
	TArray<class UObject*>                             PreloadAssets;                                            // 0x06E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x06F0(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3SearchComponent.PreloadSoftAssets
	uint32_t                                           EditedCamera;                                             // 0x0700(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	TArray<struct FS3SearchStep>                       SearchSteps;                                              // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                SearchMontage;                                            // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESearchGrabMotionSoundType                         GrabMotionSoundType;                                      // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrabMotion;                                           // 0x0721(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0722(0x0006) MISSED OFFSET
	class AActor*                                      GrabActor;                                                // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0730(0x0001) MISSED OFFSET
	bool                                               bTraceTargetIsMesh;                                       // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimpleSearchMode;                                        // 0x0732(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0733(0x0001) MISSED OFFSET
	float                                              SearchEnableRadius;                                       // 0x0734(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SearchDirectionYaw;                                       // 0x0738(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAdhereActor;                                             // 0x073C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMotionPosOrigin;                                         // 0x073D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bParentOnlyLocation;                                      // 0x073E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLowerObject;                                             // 0x073F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EventStepMin;                                             // 0x0740(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EventStepMax;                                             // 0x0744(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreStep;                                              // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLookingItemOnGrabbed;                                    // 0x0749(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLookingOnFocus;                                     // 0x074A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDayLimitItem;                                            // 0x074B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyOnceItem;                                            // 0x074C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableInputOnPlayingLabel;                              // 0x074D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x074E(0x0002) MISSED OFFSET
	TArray<struct FS3SearchActionTiming>               ActionTimings;                                            // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     CharacterLocation;                                        // 0x0760(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     CharacterAnimOffset;                                      // 0x076C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    CharacterRotation;                                        // 0x0778(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              CharacterHalfHeight;                                      // 0x0784(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CharacterEyeHeight;                                       // 0x0788(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CharacterRadius;                                          // 0x078C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             RequiredFlags;                                            // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SearchDirectionAngle;                                     // 0x07A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseToCameraAngle;                                        // 0x07A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // 0x07A5(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseReturnMontage;                                        // 0x07A6(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGrabStartReturnMode;                                     // 0x07A7(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                SearchStep;                                               // 0x07A8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawIcon;                                                // 0x07AC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	struct FVector                                     SearchTargetVector;                                       // 0x07B0(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bStayAfterGrab;                                           // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRepositionCharacter;                                     // 0x07BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetailMode;                                              // 0x07BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x07BF(0x0001) MISSED OFFSET
	int                                                DetailCameraType;                                         // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DetailTargetPosition;                                     // 0x07C4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DetailTargetOffsetZ;                                      // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x07D4(0x0004) MISSED OFFSET
	class AActor*                                      DetailTargetActor;                                        // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DetailCameraDist;                                         // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseExtOffset;                                            // 0x07E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x07E5(0x0003) MISSED OFFSET
	float                                              ExtOffsetFront;                                           // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtOffsetHeight;                                          // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExtSearchDirection;                                      // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCollisionSize;                                       // 0x07F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCameraPosition;                                      // 0x07F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x07F3(0x0001) MISSED OFFSET
	float                                              AutoCameraDistance;                                       // 0x07F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoCameraHeight;                                         // 0x07F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoCameraFOVOffset;                                      // 0x07FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoArmPosition;                                         // 0x0800(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	float                                              AutoArmDistance;                                          // 0x0804(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoArmHeight;                                            // 0x0808(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESearchTemplate                                    SearchTemplate;                                           // 0x080C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	struct FVector                                     TemplateOffset;                                           // 0x0810(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    TemplateRotOffset;                                        // 0x081C(0x000C) (Edit, IsPlainOldData)
	bool                                               bIKPreview;                                               // 0x0828(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0829(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    SearchEffect;                                             // 0x0830(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentEffectScale;                                       // 0x0840(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectLocation;                                           // 0x0844(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData14[0x40];                                      // 0x0850(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SearchComponent");
		return ptr;
	}


	void SetUniqueItemName(const struct FString& UniqueName);
	void SetIconColor(const struct FLinearColor& NormalColor, const struct FLinearColor& DisableColor);
	void SetCharacterWorldTransform(const struct FTransform& NewTransform, float AdjustRight);
	bool IsMoveItem();
	bool IsDeleteItem();
	void InitializePreGrabActorLocation();
	void InitializePreComponentLocation();
	void InitializeLocationBackUp();
	struct FString GetUniqueItemName();
	float GetSearchEnableRadius();
	struct FS3SearchStep GetNextSearchStep();
	struct FString GetGrabMotionTypeName();
	ESearchActionIcon GetFirstActionIconType();
	int GetEditedStep();
	float GetCurrentTextDisplayTimeOverride();
	struct FS3SearchStep GetCurrentSearchStep();
	struct FName GetCurrentScriptLabel();
	class UAnimSequence* GetCurrentPreviewSequence();
	class UAnimMontage* GetCurrentMontage();
	struct FTransform GetCharacterWorldTransform(bool bForArmMesh);
	struct FTransform GetCameraTransform(int Camera, bool bNewModeFlag, float* InterpTime, float* CameraFOVOffset);
	void FinalizeComponent(bool bActionComplete);
	int AdvanceSearch(bool bReverse, bool BMax, bool bStopOnAll);
};


// Class Shenmue3.S3SearchMoveComponent
// 0x0050 (0x08E0 - 0x0890)
class US3SearchMoveComponent : public US3SearchComponent
{
public:
	struct FVector                                     MoveDirection;                                            // 0x0890(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    MoveRotation;                                             // 0x089C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bTargetDirection;                                         // 0x08A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveCamera;                                              // 0x08A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x36];                                      // 0x08AA(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SearchMoveComponent");
		return ptr;
	}

};


// Class Shenmue3.S3SearchMultiMoveComponent
// 0x0040 (0x0920 - 0x08E0)
class US3SearchMultiMoveComponent : public US3SearchMoveComponent
{
public:
	class AActor*                                      GrabActorSub;                                             // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x08E8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SearchMultiMoveComponent");
		return ptr;
	}

};


// Class Shenmue3.S3SearchPamphletComponent
// 0x0000 (0x0890 - 0x0890)
class US3SearchPamphletComponent : public US3SearchComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SearchPamphletComponent");
		return ptr;
	}


	void UpdateFlagCount();
};


// Class Shenmue3.S3ShopData
// 0x0010 (0x0038 - 0x0028)
class US3ShopData : public UObject
{
public:
	TArray<class US3ShopDataBase*>                     ShopDataList;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ShopData");
		return ptr;
	}

};


// Class Shenmue3.S3ShopDataBase
// 0x0018 (0x0040 - 0x0028)
class US3ShopDataBase : public UObject
{
public:
	struct FName                                       ShopID;                                                   // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ItemIDs;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ShopDataBase");
		return ptr;
	}

};


// Class Shenmue3.S3ShopDataList
// 0x0000 (0x0050 - 0x0050)
class US3ShopDataList : public US3TalkDataListBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ShopDataList");
		return ptr;
	}

};


// Class Shenmue3.S3ShopDataManagerBase
// 0x0000 (0x0328 - 0x0328)
class AS3ShopDataManagerBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3ShopDataManagerBase");
		return ptr;
	}


	class US3ShopDataBase* GetShopData(class US3ShopData* ShopData, const struct FName& Label);
};


// Class Shenmue3.S3SimpleNavModifierComponent
// 0x0050 (0x0170 - 0x0120)
class US3SimpleNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0128(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Radius;                                                   // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x013C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x33];                                      // 0x013D(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SimpleNavModifierComponent");
		return ptr;
	}

};


// Class Shenmue3.NPCPosCorrectionAnimMetaData
// 0x0008 (0x0030 - 0x0028)
class UNPCPosCorrectionAnimMetaData : public UAnimMetaData
{
public:
	ECorrectionType                                    CorrectionType;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.NPCPosCorrectionAnimMetaData");
		return ptr;
	}

};


// Class Shenmue3.S3SkipController
// 0x0000 (0x0328 - 0x0328)
class AS3SkipController : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SkipController");
		return ptr;
	}

};


// Class Shenmue3.S3SkyManager
// 0x0008 (0x0330 - 0x0328)
class AS3SkyManager : public AActor
{
public:
	float                                              WetRate;                                                  // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SkyManager");
		return ptr;
	}


	void CalcMoonPhase();
};


// Class Shenmue3.S3SoundAreaComponent
// 0x0030 (0x0120 - 0x00F0)
class US3SoundAreaComponent : public UActorComponent
{
public:
	class UPrimitiveComponent*                         Range;                                                    // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEnteredArea;                                            // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExitedArea;                                             // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SoundAreaComponent");
		return ptr;
	}

};


// Class Shenmue3.S3SoundManager
// 0x0018 (0x0340 - 0x0328)
class AS3SoundManager : public AS3SequencerSoundManager
{
public:
	TArray<class AS3SoundPlayer*>                      PlayerArray;                                              // 0x0328(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bEnableFadePause;                                         // 0x0338(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SoundManager");
		return ptr;
	}


	bool Stop(const struct FName& InId);
	void SetTalkVolume(bool bReset);
	void SetEnableFadePause(bool bEnable);
	void Play(class USoundAtomCue* Cue);
	class AS3SoundPlayer* GetPlayerById(const struct FName& InId);
	class UAtomComponent* CreateAtomComponent();
};


// Class Shenmue3.S3SoundPlayer
// 0x0030 (0x0358 - 0x0328)
class AS3SoundPlayer : public AActor
{
public:
	bool                                               ForbidFlag;                                               // 0x0328(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	struct FName                                       ID;                                                       // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPlay;                                                 // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsing;                                                   // 0x033A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPauseBySystemPause;                                      // 0x033B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UseTimestamp;                                             // 0x033C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVoiceFlag;                                               // 0x0340(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCutsceneFlag;                                            // 0x0341(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	class USoundAtomCue*                               SourceAtomCue;                                            // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  SourceSoundWave;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SoundPlayer");
		return ptr;
	}


	bool Stop();
	void SetVoiceFlag(bool bNewFlag);
	void SetSystemVolume(float Volume);
	void Restart();
	void PermitPlay();
	void Pause();
	float GetPlaybackTime();
};


// Class Shenmue3.S3SpectatorPawn
// 0x0008 (0x03B8 - 0x03B0)
class AS3SpectatorPawn : public ASpectatorPawn
{
public:
	float                                              ZMovement;                                                // 0x03B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SpectatorPawn");
		return ptr;
	}


	void InputY(float Val);
	void InputX(float Val);
};


// Class Shenmue3.S3NullShapeComponent
// 0x0000 (0x0560 - 0x0560)
class US3NullShapeComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3NullShapeComponent");
		return ptr;
	}

};


// Class Shenmue3.S3SplineNavModifierComponent
// 0x0010 (0x0158 - 0x0148)
class US3SplineNavModifierComponent : public UNavModifierComponent
{
public:
	TArray<struct FTransform>                          SplinePoints;                                             // 0x0148(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SplineNavModifierComponent");
		return ptr;
	}

};


// Class Shenmue3.S3SpotLight
// 0x0018 (0x0358 - 0x0340)
class AS3SpotLight : public ASpotLight
{
public:
	bool                                               bRegister;                                                // 0x0340(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class US3LightTypeComponent*                       LightTypeComponent;                                       // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                RegisterHandle;                                           // 0x0350(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SpotLight");
		return ptr;
	}

};


// Class Shenmue3.S3SplineMoveActor
// 0x0060 (0x0388 - 0x0328)
class AS3SplineMoveActor : public AActor
{
public:
	class USplineComponent*                            spline;                                                   // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UseScaleForWidth;                                         // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	float                                              FixedWidth;                                               // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBox                                        SplineBounds;                                             // 0x0338(0x001C) (BlueprintVisible, IsPlainOldData)
	int                                                SplineDiv;                                                // 0x0354(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      SplineDistanceBuf;                                        // 0x0358(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             SplinePosBuf;                                             // 0x0368(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             SplineFvBuf;                                              // 0x0378(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SplineMoveActor");
		return ptr;
	}


	void SplineInit();
	bool IsLocationWithinSplineWidth(const struct FVector& Location, float Buffer);
	float GetWidthAtDistanceAlongSpline(float Distance);
	void FindSplineDistanceAndForward(const struct FVector& WorldLocation, struct FVector* Direction, float* DistanceAlongSpline);
	float FindSplineDistance(const struct FVector& WorldLocation);
};


// Class Shenmue3.S3SplineNavArea
// 0x0010 (0x0338 - 0x0328)
class AS3SplineNavArea : public AActor
{
public:
	class USplineComponent*                            spline;                                                   // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         SpriteComponent;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SplineNavArea");
		return ptr;
	}

};


// Class Shenmue3.S3SpringArmComponent
// 0x0040 (0x0300 - 0x02C0)
class US3SpringArmComponent : public USpringArmComponent
{
public:
	class AActor*                                      TargetActor;                                              // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetActorOffset;                                        // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinCameraObstacleDistance;                                // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraMaxLagSpeedMult;                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraLagAccelerateDist;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketWorldSpaceOffset;                                   // 0x02D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x02E4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SpringArmComponent");
		return ptr;
	}


	void ZoomFlagOn();
	void ZoomFlagOff();
	bool IsHitUp();
	bool IsHit();
};


// Class Shenmue3.S3StaticMeshWithLights
// 0x0050 (0x0388 - 0x0338)
class AS3StaticMeshWithLights : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	bool                                               CastShadows;                                              // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	float                                              VisibleAreaRadius;                                        // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VisibleAreaOffset;                                        // 0x0348(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CastShadowAreaRadius;                                     // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CastShadowAreaOffset;                                     // 0x0358(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bVisibleArea;                                             // 0x0364(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCastShadowArea;                                          // 0x0365(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bLightEnable;                                             // 0x0366(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bLightCastShadow;                                         // 0x0367(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AActor*>                              OverlappingCastShadowAreaTargets;                         // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<class AActor*>                              OverlappingVisibleAreaTargets;                            // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3StaticMeshWithLights");
		return ptr;
	}


	void UpdateLight(bool bForce);
	void OnSetLightEnable(bool bNewLightEnable);
	void OnSetLightCastShadow(bool bNewLightCastShadow);
};


// Class Shenmue3.S3StatusManager
// 0x00F0 (0x0118 - 0x0028)
class US3StatusManager : public UObject
{
public:
	int                                                HaveMoney;                                                // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                BetMoney;                                                 // 0x002C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TMap<EClothPartsType, struct FName>                RyoClothParts;                                            // 0x0038(0x0050) (ZeroConstructor, Config)
	TMap<EClothPartsType, struct FName>                SheClothParts;                                            // 0x0088(0x0050) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	TArray<struct FName>                               InitialUnlockRyoClothParts;                               // 0x00E8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
	TArray<struct FName>                               InitialUnlockSheClothParts;                               // 0x0108(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3StatusManager");
		return ptr;
	}


	void UpdateClothParts(bool bRyo, TMap<EClothPartsType, struct FName>* WearParts);
	void UnlockClothParts(const struct FName& ID);
	void SetRedemptionPoint(int NewPoint);
	bool IsUnlockedClothParts(const struct FName& ID);
	void InitStatus();
	void GetWearClothParts(bool bRyo, TMap<EClothPartsType, struct FName>* WearParts);
	void GetUnlockedClothParts(bool bRyo, TArray<struct FName>* UnlockedParts);
	int GetRedemptionPoint();
	void AddRedemptionPoint(int AddPoint);
};


// Class Shenmue3.S3StreetFightDataAsset
// 0x0058 (0x0088 - 0x0030)
class US3StreetFightDataAsset : public UDataAsset
{
public:
	int                                                RestartMinutes;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ExhibitionFee;                                            // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        VictoryFees;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             BattleList;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        IgnoreSteps;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MainFlowBattleID;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MainFlowReward;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3StreetFightDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3SubmissionConfig
// 0x0038 (0x0060 - 0x0028)
class US3SubmissionConfig : public UObject
{
public:
	TArray<ES3Locale>                                  AvailableLocales;                                         // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	TArray<ES3VoiceLanguage>                           AvailableVoiceLanguages;                                  // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	bool                                               bChinaMainland;                                           // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	ES3DemoType                                        DemoType;                                                 // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	float                                              TrialTime;                                                // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowHakkason;                                           // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowChobu;                                              // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowCave;                                               // 0x0052(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisableNPC;                                              // 0x0053(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisableCutscene;                                         // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                LimitStepMin;                                             // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                LimitStepMax;                                             // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SubmissionConfig");
		return ptr;
	}


	void SetDemoType(ES3DemoType NewType);
};


// Class Shenmue3.S3StopAnimMetaData
// 0x0050 (0x0078 - 0x0028)
class US3StopAnimMetaData : public UAnimMetaData
{
public:
	struct FInterpCurveFloat                           StopDriverCurve;                                          // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FInterpCurveFloat                           StopSpeedCurve;                                           // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FInterpCurveFloat                           YawCurve;                                                 // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   YawMinMax;                                                // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3StopAnimMetaData");
		return ptr;
	}


	void SetYawMinMax(float Min, float Max);
	void MassageCurves();
	float GetYawAtDistance(float Distance);
	void AddYawDataPoint(float Distance, float Yaw);
	void AddSpeedDataPoint(float Distance, float Speed);
	void AddDataPoint(float Time, float Distance);
};


// Class Shenmue3.S3StreetFightTrigger
// 0x0008 (0x0338 - 0x0330)
class AS3StreetFightTrigger : public ATriggerBox
{
public:
	bool                                               bActivate;                                                // 0x0330(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3StreetFightTrigger");
		return ptr;
	}


	struct FString GetNextFighter();
};


// Class Shenmue3.S3SubtitleWidget
// 0x0048 (0x0250 - 0x0208)
class US3SubtitleWidget : public UUserWidget
{
public:
	struct FLinearColor                                SubtitleColor;                                            // 0x0208(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FString                                     SubtitleText;                                             // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                OutlineColor;                                             // 0x0228(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                NowIdx;                                                   // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NowTime;                                                  // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVoice;                                                   // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SubtitleWidget");
		return ptr;
	}

};


// Class Shenmue3.S3TagCharaComponent
// 0x00E0 (0x01D0 - 0x00F0)
class US3TagCharaComponent : public UActorComponent
{
public:
	struct FName                                       Name;                                                     // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FS3CharacterProfile                         Profile;                                                  // 0x0108(0x00C8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TagCharaComponent");
		return ptr;
	}

};


// Class Shenmue3.S3TalkAvoidanceComponent
// 0x0008 (0x00F8 - 0x00F0)
class US3TalkAvoidanceComponent : public UActorComponent
{
public:
	float                                              OwnerCapsuleRadius;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TalkAvoidanceComponent");
		return ptr;
	}


	void MakeRadialLocations(float BaseDistance, int DistanceDiv, float MaxAngle, int AngleDiv, TArray<struct FVector>* OutLocations);
	void MakeCircularSurroundLocations(class ACharacter* SurroundChar, TArray<struct FVector>* OutLocations);
	bool IsDebugDrawingEnabled();
};


// Class Shenmue3.S3SystemManager
// 0x00B8 (0x00E0 - 0x0028)
class US3SystemManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	TMap<ES3KeyConfigType, unsigned char>              KeyConfigMap;                                             // 0x0058(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET
	struct FS3BattleRallySaveData                      BattleRallyInfo;                                          // 0x00C0(0x0010)
	TArray<int>                                        SystemFlagArray;                                          // 0x00D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SystemManager");
		return ptr;
	}


	void UpdateKeyConfig(ES3KeyConfigType Type, unsigned char Value);
	void UpdateCulture();
	void SetWindowParam(ES3WindowType Type, const struct FString& InResolution);
	void SetVSync(bool bEnable);
	void SetVoiceVolume(float NewVolume);
	void SetVoiceLanguage(ES3VoiceLanguage InVoiceLanguage);
	void SetSEVolume(float NewVolume);
	void SetLocale(ES3Locale InLocale);
	void SetDisplayGamma(float NewValue);
	void SetBGMVolume(float NewVolume);
	void SetBattleRallyInfo(const struct FS3BattleRallySaveData& Info);
	void GetWindowParam(ES3WindowType* Type, struct FString* OutResolution);
	bool GetVSync();
	float GetVoiceVolume();
	ES3VoiceLanguage GetVoiceLanguage();
	float GetSEVolume();
	TArray<struct FName> GetRewardPasswords();
	ES3Locale GetLocale();
	unsigned char GetKeyConfigValue(ES3KeyConfigType Type);
	float GetDisplayGamma();
	float GetBGMVolume();
	void GetBattleRallyInfo(struct FS3BattleRallySaveData* Info);
	void ClearRewardPasswords();
	bool AddRewardPassword(const struct FName& Password);
};


// Class Shenmue3.S3StreetFightManager
// 0x0000 (0x0328 - 0x0328)
class AS3StreetFightManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3StreetFightManager");
		return ptr;
	}

};


// Class Shenmue3.S3TalkComponent
// 0x00C0 (0x0208 - 0x0148)
class US3TalkComponent : public US3TalkComponentBase
{
public:
	class UPrimitiveComponent*                         InteractionAnglePrim;                                     // 0x0148(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3TalkDataListBase*                         DataList;                                                 // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTalkScriptContainer>                FirstContactTalkScript;                                   // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0168(0x0010) MISSED OFFSET
	TMap<float, bool>                                  EnableScheduleCache;                                      // 0x0178(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSetEnableScheduleData>              EnableScheduleData;                                       // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsCheckSight;                                             // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	float                                              PlayerToNPC_CanTalkAngle;                                 // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bJawPointing;                                             // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01E1(0x0003) MISSED OFFSET
	float                                              JawPointingYaw;                                           // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JawPointingPitch;                                         // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JawPointingBlendTime;                                     // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFingerPointing;                                          // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01F1(0x0003) MISSED OFFSET
	float                                              FingerPointingYaw;                                        // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FingerPointingPitch;                                      // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FingerPointingBlendTime;                                  // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3FingerPointingMode                              FingerPointingMode;                                       // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0201(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TalkComponent");
		return ptr;
	}


	bool IsValidMiniGame(class UTalkScript* Script);
	bool IsLineSight(class AActor* Player, class AActor* NPC);
	bool IsInTalkAngle();
	float GetInteractionAngle(const struct FVector& RefLocation, const struct FVector& RefDirection);
	struct FVector GetEyeLocation(class AActor* Actor);
	bool CheckLineOfSight(const struct FVector& PlayerLocation, const struct FVector& NPCLocation);
};


// Class Shenmue3.S3TalkEventManagerBase
// 0x0200 (0x0528 - 0x0328)
class AS3TalkEventManagerBase : public AActor
{
public:
	class UTalkScript*                                 CurrentTalkScript;                                        // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENPCTalkState                                      CurrentTalkState;                                         // 0x0330(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	TArray<class UTalkEventTaskBase*>                  ActiveEventList;                                          // 0x0338(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UTalkEventTaskBase*>                  SubActiveEventList;                                       // 0x0348(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bActiveManager;                                           // 0x0358(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	TArray<class AActor*>                              JoinedThisTalkActors;                                     // 0x0360(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class AS3Character*>                        ACCharacters;                                             // 0x0370(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnBeginTalkEventDispatcher;                               // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndTalkEventDispatcher;                                 // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCameraChangedDispatcher;                                // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangedJoinActorDispatcher;                             // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UTalkEventTaskBase*>                  callStack;                                                // 0x03C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UDataTable*                                  TalkProcessClassesTable;                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  TalkTaskMetaData;                                         // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               DisableSkipScripts;                                       // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRunStandAloneScript;                                     // 0x03F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugForceSkip;                                           // 0x03F1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xDE];                                      // 0x03F2(0x00DE) MISSED OFFSET
	bool                                               bClearFlag;                                               // 0x04D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x57];                                      // 0x04D1(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TalkEventManagerBase");
		return ptr;
	}


	void SetTalkScriptProgressIndex(class AActor* Actor, class UTalkScript* TalkScript, int Value);
	void SetJoinedThisTalkActors(TArray<class AActor*> NewActors);
	void SetBetweenVolumeUnloadRequestsMinTime(float Time);
	bool SetActorsTextureForceResidentFlag(TArray<class AActor*> Actors, bool flag);
	void ResetBetweenVolumeUnloadRequestsMinTime();
	bool RequestStepChange(int Step);
	void RemoveJoinedThisTalkActors(class AActor* RemoveActor);
	void OnVoiceFinished();
	void OnTalkStart(class UTalkEventTaskBase* ptr);
	void OnFinishedSubEvent(class UTalkEventTaskBase* ptr, int NextIndex, bool bBreakEvent);
	void OnFinished(class UTalkEventTaskBase* ptr, int NextIndex, bool bBreakEvent);
	void OnActivate(class UTalkEventTaskBase* ptr);
	bool IsTalking();
	bool IsMultipleTalking();
	bool IsMiniGameTalk(bool bStrictly);
	bool IsJoinTalk(class AActor* Actor);
	void Initialize(class AActor* InTalkedActor, bool InIsBS, class UTalkScript* InTalkScript, class US3TalkComponent* InTalkComponent, ENPCTalkState InTalkState);
	void GetTalkScriptProgressIndex(class AActor* Actor, class UTalkScript* TalkScript, bool* bCanSkip, int* Index);
	struct FVector GetMultipleTalkCanterLocation2D();
	class AS3Character* GetJoinTalkActorFromType(ES3CharacterType Type);
	TArray<class AActor*> GetJoinedThisTalkActors();
	struct FString GetActorUniqueName(class AActor* Actor);
	bool Finalize();
	void DumpCallStack(const struct FString& ScriptName, const struct FString& outputFolderName);
	void ClearJoinedThisTalkActors();
	void ClearCallStack();
	void ChangeBoundsScale(class AActor* Actor, bool bReset);
	void AddJoinedThisTalkActors(class AActor* AddActor);
	bool ActivateSubEvent(TArray<class UTalkEventTaskBase*> EventData, int Index);
	bool ActivateEvent(TArray<class UTalkEventTaskBase*> EventData, int Index);
};


// Class Shenmue3.S3TalkCameraManagerBase
// 0x0000 (0x0328 - 0x0328)
class AS3TalkCameraManagerBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TalkCameraManagerBase");
		return ptr;
	}


	void SetGameCameraCutThisFrame(bool newParam);
};


// Class Shenmue3.S3TagCharaInterface
// 0x0000 (0x0028 - 0x0028)
class US3TagCharaInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TagCharaInterface");
		return ptr;
	}

};


// Class Shenmue3.S3TalkEventManagerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3TalkEventManagerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TalkEventManagerFunctionLibrary");
		return ptr;
	}


	bool TalkEvent_IsJoinTalk(class AActor* Actor);
	bool IsSight(class UWorld* World, class ACharacter* FromChara, class ACharacter* ToChara);
	bool IsRunningSubQuest(class UObject* WorldContextObject, int SubQuestGlobalFlagIndex);
	void GetS3CharacterAll(class UObject* WorldContextObject, TArray<class AS3Character*>* Characters);
	ENPCTalkState GetNPCTalkState(class UObject* WorldContextObject, class AS3Character* Character);
	void BreakInt32Range(const struct FInt32Range& Range, TEnumAsByte<ERangeBoundTypes>* LowerType, int* LowerValue, TEnumAsByte<ERangeBoundTypes>* UpperType, int* UpperValue);
};


// Class Shenmue3.S3TalkScriptManager
// 0x0298 (0x02C0 - 0x0028)
class US3TalkScriptManager : public UObject
{
public:
	TMap<struct FString, struct FTalkScheduleData>     PcTalkData;                                               // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TMap<struct FString, struct FTalkScheduleData>     BsTalkData;                                               // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TMap<struct FString, struct FTalkScheduleData>     MiniGameTalkData;                                         // 0x00C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TMap<struct FString, struct FTalkScheduleData>     ShopTalkData;                                             // 0x0118(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TMap<struct FString, int>                          ACTalkData;                                               // 0x0168(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TMap<int, struct FDateTime>                        ScriptStartTimer;                                         // 0x01B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TMap<struct FString, struct FNPCTalkData>          NPCTalkData;                                              // 0x0208(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<struct FName>                               PlayedCutsceneIds;                                        // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                LastStep;                                                 // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x026C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TalkScriptManager");
		return ptr;
	}


	bool SetProgressIndex(const struct FString& Key, int Value);
	void SetLoadData(TArray<struct FTalkScriptData> talkScriptIndexData, TMap<struct FString, struct FNPCTalkData> NPCTalkData, TMap<struct FString, struct FTalkScheduleData> PcData, TMap<struct FString, struct FTalkScheduleData> BsData, TMap<struct FString, struct FTalkScheduleData> MiniGameData, TMap<struct FString, struct FTalkScheduleData> ShopData, TMap<struct FString, int> ACData, TArray<struct FName> CutsceneIds, TMap<int, struct FDateTime> StartTimer, int Step);
	void SetIsFirstContactState(const struct FString& NPCID, bool newParam);
	void OnGameTimeEvent(ES3DayTimeEvent EventType);
	void OnGameDateNext();
	bool IsPlayedCutscene(const struct FName& ID);
	void Init();
	TArray<struct FTalkScriptData> GetTalkScriptIndexData();
	int GetProgressStep(const struct FString& Key);
	int GetProgressIndex(const struct FString& Key);
	bool GetIsFirstContactState(const struct FString& NPCID);
	class US3GameInstance* GetGameInstance();
	int GetACPlayCount(const struct FString& Key);
	struct FString CreateKeyFromNpcIdAndScrinptName(const struct FString& NPCID, const struct FString& ScriptName);
	void AddCutsceneId(const struct FName& ID);
	void AddACPlayCount(const struct FString& Key);
};


// Class Shenmue3.S3TalkInterface
// 0x0000 (0x0028 - 0x0028)
class US3TalkInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TalkInterface");
		return ptr;
	}


	void Screen_Player();
	void Screen_NPC();
	void OnTalkStart(class US3TalkComponent* TalkComponent);
	void OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	bool IsTalking();
};


// Class Shenmue3.S3TextDataBase
// 0x0008 (0x0030 - 0x0028)
class US3TextDataBase : public UObject
{
public:
	struct FName                                       Label;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TextDataBase");
		return ptr;
	}

};


// Class Shenmue3.S3TextDataItem
// 0x0020 (0x0050 - 0x0030)
class US3TextDataItem : public US3TextDataBase
{
public:
	struct FString                                     Name;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TextDataItem");
		return ptr;
	}

};


// Class Shenmue3.S3TextDataAsset
// 0x00C8 (0x00F0 - 0x0028)
class US3TextDataAsset : public UObject
{
public:
	TArray<struct FS3TextData>                         TextList;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, int>                            TextLabelCache;                                           // 0x0038(0x0050) (ZeroConstructor)
	TArray<class US3TextDataBase*>                     TextDataList;                                             // 0x0088(0x0010) (ZeroConstructor, Deprecated)
	ES3TextDataType                                    Type;                                                     // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0099(0x0050) UNKNOWN PROPERTY: MapProperty Shenmue3.S3TextDataAsset.SubTextDataList

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TextDataAsset");
		return ptr;
	}

};


// Class Shenmue3.S3TextDataTalk
// 0x0020 (0x0050 - 0x0030)
class US3TextDataTalk : public US3TextDataBase
{
public:
	struct FString                                     Text;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             Clipper;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TextDataTalk");
		return ptr;
	}


	struct FString GetClipperString(ES3VoiceLanguage VoiceLanguage);
};


// Class Shenmue3.S3TextDataManagerBase
// 0x0098 (0x00C0 - 0x0028)
class US3TextDataManagerBase : public UObject
{
public:
	TArray<class UObject*>                             PreloadAssets;                                            // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3TextDataManagerBase.PreloadSoftAssets
	TArray<struct FS3TextDataPreloadAssetInfo>         PreloadAssetInfos;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ES3Locale                                          Locale;                                                   // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ES3VoiceLanguage                                   VoiceLanguage;                                            // 0x0059(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	TMap<struct FString, class US3TextDataAsset*>      TextDataCache;                                            // 0x0060(0x0050) (ZeroConstructor)
	struct FString                                     RootAssetPathTypeItem;                                    // 0x00B0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TextDataManagerBase");
		return ptr;
	}


	void Initialize(ES3Locale InLocale, ES3VoiceLanguage InVoiceLanguage);
	class UObject* GetVoiceByLabel(const struct FName& Label, const struct FString& RootAssetPath, const struct FName& CharaName);
	class UObject* GetTextDataObjectByLabel(const struct FName& Label, const struct FString& RootAssetPath, bool bOutputErrorLog, ES3TextDataType* OutType);
	struct FS3TextData GetTextDataByLabelAndLocale(const struct FName& Label, ES3Locale InLocale, const struct FString& RootAssetPath, bool bOutputErrorLog, ES3TextDataType* OutType);
	struct FS3TextData GetTextDataByLabel(const struct FName& Label, const struct FString& RootAssetPath, bool bOutputErrorLog, ES3TextDataType* OutType);
	class US3TextDataAsset* GetTextDataAssetByLabelAndLocale(const struct FName& Label, ES3Locale InLocale, const struct FString& RootAssetPath, bool bOutputErrorLog);
	class US3TextDataAsset* GetTextDataAssetByLabel(const struct FName& Label, const struct FString& RootAssetPath, bool bOutputErrorLog);
	struct FString GetTextByLabel(const struct FName& Label, ES3TextPathType Type);
	class AS3GameMode* GetOuterGameMode();
	bool GetItemNameAndDescription(const struct FName& Label, struct FString* OutName, struct FString* OutDescription);
	struct FString GetItemName(const struct FName& Label);
	struct FString GetItemDescription(const struct FName& Label);
	bool GetFolderName(const struct FString& Label, struct FString* Out);
	struct FString GetCueSheetAssetPath(const struct FString& BaseSheetName, ES3TextPathType Type);
	ES3TextPathType FixupTextPathType(ES3TextPathType Type, const struct FName& Label);
	void EnableCacheData();
	void DisableCacheData();
};


// Class Shenmue3.S3TextDataPreloadActor
// 0x0040 (0x0368 - 0x0328)
class AS3TextDataPreloadActor : public AActor
{
public:
	TArray<class UObject*>                             PreloadAssets;                                            // 0x0328(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) UNKNOWN PROPERTY: ArrayProperty Shenmue3.S3TextDataPreloadActor.PreloadSoftAssets
	TArray<struct FS3TextDataPreloadAssetInfo>         PreloadTexts;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS3TextDataPreloadAssetInfo>         PreloadVoices;                                            // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TextDataPreloadActor");
		return ptr;
	}

};


// Class Shenmue3.S3TextDataLibrary
// 0x0000 (0x0028 - 0x0028)
class US3TextDataLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TextDataLibrary");
		return ptr;
	}


	float StringLengthConvertTime(const struct FString& S);
	bool ShouldSplitTextData(const struct FString& Path);
	struct FString RemoveRuby(const struct FString& CheckString);
	struct FString GetVoiceLanguageCueSheetPostfix(ES3VoiceLanguage VoiceLanguage);
	struct FString GetVoiceLanguageAbbreviation(ES3VoiceLanguage VoiceLanguage);
	struct FString GetVoiceAssetPath(ES3TextPathType Type);
	void GetTextDataAssets(ES3TextPathType PathType, ES3Locale Locale, const struct FString& LabelKeyword, TArray<class US3TextDataAsset*>* OutAssets);
	struct FString GetTextDataAssetPath(ES3TextPathType Type);
	struct FString GetSplitAssetName(const struct FString& Label);
	struct FString GetLocaleAbbreviation(ES3Locale Locale);
	struct FString ConvertFullWidthCharacter(const struct FString& ConvertString, ES3Locale Locale);
	struct FString AddSimpleLineBreak(const struct FString& SourceString, int MinLengthToBreak, float MinRatio);
};


// Class Shenmue3.S3TimeSwitchSpotLight
// 0x0058 (0x03B0 - 0x0358)
class AS3TimeSwitchSpotLight : public AS3SpotLight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	bool                                               bLimitLightArea;                                          // 0x0360(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              VisibleAreaRadius;                                        // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VisibleAreaOffset;                                        // 0x0368(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CastShadowAreaRadius;                                     // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CastShadowAreaOffset;                                     // 0x0378(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              BaseIntensity;                                            // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDefaultCastShadow;                                       // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bVisibleArea;                                             // 0x0389(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bVisibleTime;                                             // 0x038A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCastShadowArea;                                          // 0x038B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInTimeEvent;                                             // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bLightEnable;                                             // 0x038D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bLightCastShadow;                                         // 0x038E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x038F(0x0001) MISSED OFFSET
	TArray<class AActor*>                              OverlappingCastShadowAreaTargets;                         // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<class AActor*>                              OverlappingVisibleAreaTargets;                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TimeSwitchSpotLight");
		return ptr;
	}


	void UpdateLight(bool bForce);
	void SetVisibleTime(bool bNewVisibleTime);
	void SetLimitLightArea(bool bNewLimitLightArea);
	void OnSetLightEnable(bool bNewLightEnable);
	void OnSetLightCastShadow(bool bNewLightCastShadow);
};


// Class Shenmue3.S3TimeSwitchPointLight
// 0x0058 (0x03B0 - 0x0358)
class AS3TimeSwitchPointLight : public AS3PointLight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	bool                                               bLimitLightArea;                                          // 0x0360(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              VisibleAreaRadius;                                        // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VisibleAreaOffset;                                        // 0x0368(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CastShadowAreaRadius;                                     // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CastShadowAreaOffset;                                     // 0x0378(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              BaseIntensity;                                            // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDefaultCastShadow;                                       // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bVisibleArea;                                             // 0x0389(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bVisibleTime;                                             // 0x038A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCastShadowArea;                                          // 0x038B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInTimeEvent;                                             // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bLightEnable;                                             // 0x038D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bLightCastShadow;                                         // 0x038E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x038F(0x0001) MISSED OFFSET
	TArray<class AActor*>                              OverlappingCastShadowAreaTargets;                         // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<class AActor*>                              OverlappingVisibleAreaTargets;                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TimeSwitchPointLight");
		return ptr;
	}


	void UpdateLight(bool bForce);
	void SetVisibleTime(bool bNewVisibleTime);
	void SetLimitLightArea(bool bNewLimitLightArea);
	void OnSetLightEnable(bool bNewLightEnable);
	void OnSetLightCastShadow(bool bNewLightCastShadow);
	void InitialDisable();
};


// Class Shenmue3.S3TurnAroundComponent
// 0x0008 (0x00F8 - 0x00F0)
class US3TurnAroundComponent : public UActorComponent
{
public:
	float                                              TurnAroundAngle;                                          // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessingTurnAround;                                    // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTurnAroundIsWithin;                                      // 0x00F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TurnAroundComponent");
		return ptr;
	}

};


// Class Shenmue3.S3UISettings
// 0x0050 (0x0078 - 0x0028)
class US3UISettings : public UObject
{
public:
	struct FSoftObjectPath                             InteractionComponentIcon;                                 // 0x0028(0x0018) (Edit, Config)
	struct FSoftObjectPath                             IKEditIcon;                                               // 0x0040(0x0018) (Edit, Config)
	struct FSoftObjectPath                             AnimOffsetEditIcon;                                       // 0x0058(0x0018) (Edit, Config)
	bool                                               bEnableFlyCamAtStart;                                     // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3UISettings");
		return ptr;
	}

};


// Class Shenmue3.S3WalkOnlyTrigger
// 0x0008 (0x0338 - 0x0330)
class AS3WalkOnlyTrigger : public ATriggerBox
{
public:
	bool                                               bEnableTrigger;                                           // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3WalkOnlyTrigger");
		return ptr;
	}


	void SetEnable(bool bInEnable);
	bool GetEnable();
};


// Class Shenmue3.S3WaveActor
// 0x0040 (0x0368 - 0x0328)
class AS3WaveActor : public AActor
{
public:
	TArray<struct FS3WaveElement>                      WaveElements;                                             // 0x0328(0x0010) (Edit, ZeroConstructor)
	float                                              NormalizedMaxAmplitude;                                   // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseArea;                                                 // 0x033C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x033D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033E(0x0002) MISSED OFFSET
	TArray<struct FS3BuoyantActor>                     Buoys;                                                    // 0x0340(0x0010) (ZeroConstructor, Transient)
	class USceneComponent*                             SceneComponent;                                           // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ProcessArea;                                              // 0x0358(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0360(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3WaveActor");
		return ptr;
	}


	void SnapAttachedActorsToWave();
	struct FVector ProjectPointToWave(const struct FVector& Location, bool bZOnly);
	void ExitArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void EnterArea(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Shenmue3.S3WeatherDataAsset
// 0x01F0 (0x0220 - 0x0030)
class US3WeatherDataAsset : public UDataAsset
{
public:
	TMap<struct FString, float>                        DefaultHourMap;                                           // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              OtherDefaultHour;                                         // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWeatherType                                       DefaultWeather;                                           // 0x0084(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	TMap<int, EWeatherPrestType>                       HakkasonWeatherStepPreset;                                // 0x0088(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, EWeatherPrestType>                       ChobuWeatherStepPreset;                                   // 0x00D8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<EWeatherType, float>                          BadWeatherRatio;                                          // 0x0128(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              ChangeWeatherHour;                                        // 0x0178(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudDensityBase;                                         // 0x017C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<EWeatherType, struct FS3RainParam>            RainStrengthParams;                                       // 0x0180(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<EWeatherType, float>                          FogValueMap;                                              // 0x01D0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3WeatherDataAsset");
		return ptr;
	}


	float GetDefaultHour();
};


// Class Shenmue3.S3WeatherFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class US3WeatherFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3WeatherFunctionLibrary");
		return ptr;
	}


	bool TestInRainShelter(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
	class AS3RainNavData* GetRainNavData(class UObject* WorldContextObject);
};


// Class Shenmue3.S3WetnessComponent
// 0x00A8 (0x0198 - 0x00F0)
class US3WetnessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class AS3SkyManager*                               SkyManager;                                               // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class US3GameInstance*                             S3GameInstance;                                           // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UMeshComponent*>                      MeshComponents;                                           // 0x0108(0x0010) (ExportObject, ZeroConstructor)
	TMap<EWeatherType, float>                          WeatherWetnessRates;                                      // 0x0118(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              ShelterWetnessRate;                                       // 0x0168(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShelterQueryExtent;                                       // 0x016C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UCurveFloat*                                 WetnessCurve;                                             // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WetnessMaterialParameter;                                 // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0188(0x000C) MISSED OFFSET
	bool                                               bUpdateIsInShelter;                                       // 0x0194(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0195(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3WetnessComponent");
		return ptr;
	}


	void SimulateTimeSkip();
	void SetRoughWetnessValue(float Value);
	void SetMeshComponents(TArray<class UMeshComponent*> Components);
	void SetMeshComponent(class UMeshComponent* Component);
	void SetIsInShelter(bool bValue);
	void ResetWetnessValue();
	bool IsInShelter();
	float GetWetnessValue();
	void EnableAutomaticShelterUpdate(bool bValue);
};


// Class Shenmue3.S3WheeledVehicle
// 0x0000 (0x0398 - 0x0398)
class AS3WheeledVehicle : public AWheeledVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3WheeledVehicle");
		return ptr;
	}


	bool SetLinearDriveVelocity(const struct FName& BoneName, const struct FVector& Velocity);
	bool SetLinearDrivePosition(const struct FName& BoneName, const struct FVector& Position);
	bool GetLinearDriveVelocity(const struct FName& BoneName, struct FVector* Velocity);
	bool GetLinearDrivePosition(const struct FName& BoneName, struct FVector* Position);
};


// Class Shenmue3.S3WidgetToRenderTargetComponent
// 0x0080 (0x02C0 - 0x0240)
class US3WidgetToRenderTargetComponent : public USceneComponent
{
public:
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FIntPoint                                   DrawSize;                                                 // 0x0258(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FParentMaterial>                     ParentMaterials;                                          // 0x0260(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                BackgroundColor;                                          // 0x0270(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0280(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3WidgetToRenderTargetComponent");
		return ptr;
	}


	bool DrawWidgetToRenderTarget(float DeltaTime);
};


// Class Shenmue3.SavePositionAndRotationTask
// 0x0020 (0x0080 - 0x0060)
class USavePositionAndRotationTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     VariableName;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SavePositionAndRotationTask");
		return ptr;
	}

};


// Class Shenmue3.SavePositionTask
// 0x0020 (0x0080 - 0x0060)
class USavePositionTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     VariableName;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SavePositionTask");
		return ptr;
	}

};


// Class Shenmue3.SaveRotationTask
// 0x0020 (0x0080 - 0x0060)
class USaveRotationTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     VariableName;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SaveRotationTask");
		return ptr;
	}

};


// Class Shenmue3.ScriptFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UScriptFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ScriptFunctionLibrary");
		return ptr;
	}


	class US3NPCDefinition* GetNPCDefinition(class UObject* WorldContextObject, const struct FString& NPCID);
	bool CreateTaskWithClass(class UObject* Outer, class UClass* ObjectClass, class UObject** TaskClass);
};


// Class Shenmue3.SetBsCountTask
// 0x0018 (0x0078 - 0x0060)
class USetBsCountTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                EventCount;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetBsCountTask");
		return ptr;
	}

};


// Class Shenmue3.SetBsEnableTask
// 0x0018 (0x0078 - 0x0060)
class USetBsEnableTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bEnable;                                                  // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetBsEnableTask");
		return ptr;
	}

};


// Class Shenmue3.SetCutscenePosAndRotTask
// 0x0020 (0x0080 - 0x0060)
class USetCutscenePosAndRotTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetCharacterID;                                        // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     TargetCutsceneCharacterID;                                // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetCutscenePosAndRotTask");
		return ptr;
	}

};


// Class Shenmue3.SetGameTimeTask
// 0x0008 (0x0068 - 0x0060)
class USetGameTimeTask : public UTalkEventTaskBase
{
public:
	int                                                Hour;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Minute;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetGameTimeTask");
		return ptr;
	}

};


// Class Shenmue3.SetNoVoiceTimeTask
// 0x0008 (0x0068 - 0x0060)
class USetNoVoiceTimeTask : public UTalkEventTaskBase
{
public:
	float                                              NoVoiceTime;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NoVoiceFrame;                                             // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetNoVoiceTimeTask");
		return ptr;
	}

};


// Class Shenmue3.SetPositionAndRotationTask
// 0x0020 (0x0080 - 0x0060)
class USetPositionAndRotationTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FVector                                     Destination;                                              // 0x0070(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              Yaw;                                                      // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetPositionAndRotationTask");
		return ptr;
	}

};


// Class Shenmue3.SetPositionTask
// 0x0020 (0x0080 - 0x0060)
class USetPositionTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FVector                                     Destination;                                              // 0x0070(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetPositionTask");
		return ptr;
	}

};


// Class Shenmue3.SetStep
// 0x0008 (0x0068 - 0x0060)
class USetStep : public UTalkEventTaskBase
{
public:
	int                                                Step;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetStep");
		return ptr;
	}

};


// Class Shenmue3.SetTalkEnableTask
// 0x0018 (0x0078 - 0x0060)
class USetTalkEnableTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bEnable;                                                  // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetTalkEnableTask");
		return ptr;
	}

};


// Class Shenmue3.SetTask
// 0x0018 (0x0078 - 0x0060)
class USetTask : public UTalkEventTaskBase
{
public:
	int                                                FlagNum;                                                  // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetTask");
		return ptr;
	}

};


// Class Shenmue3.SetVisibilityTask
// 0x0018 (0x0078 - 0x0060)
class USetVisibilityTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bVisibility;                                              // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetVisibilityTask");
		return ptr;
	}

};


// Class Shenmue3.SetWeatherTask
// 0x0008 (0x0068 - 0x0060)
class USetWeatherTask : public UTalkEventTaskBase
{
public:
	int                                                WeatherValue;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetWeatherTask");
		return ptr;
	}

};


// Class Shenmue3.ShopTask
// 0x0040 (0x00A0 - 0x0060)
class UShopTask : public UTalkEventTaskBase
{
public:
	int                                                ShopID;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     BuyLabelName;                                             // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                BuyLabelIndex;                                            // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     CancelLabelName;                                          // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                CancelLabelIndex;                                         // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NextLabelIndex;                                           // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bOldMode;                                                 // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ShopTask");
		return ptr;
	}


	void SetCancelLabelIndex();
	void SetBuyLabelIndex();
};


// Class Shenmue3.ShowItemTask
// 0x0020 (0x0080 - 0x0060)
class UShowItemTask : public UTalkEventTaskBase
{
public:
	int                                                motionType;                                               // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     ItemId;                                                   // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                rotate;                                                   // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                showType;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ShowItemTask");
		return ptr;
	}

};


// Class Shenmue3.ShowHPTask
// 0x0008 (0x0068 - 0x0060)
class UShowHPTask : public UTalkEventTaskBase
{
public:
	bool                                               bShow;                                                    // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                Mode;                                                     // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ShowHPTask");
		return ptr;
	}

};


// Class Shenmue3.ShowPriceTask
// 0x0028 (0x0088 - 0x0060)
class UShowPriceTask : public UTalkEventTaskBase
{
public:
	bool                                               bShow;                                                    // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                WaitFrame;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              WaitTime;                                                 // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     AddSubPrice;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ShowPriceTask");
		return ptr;
	}

};


// Class Shenmue3.ACSkipEnableTask
// 0x0008 (0x0068 - 0x0060)
class UACSkipEnableTask : public UTalkEventTaskBase
{
public:
	bool                                               bEnable;                                                  // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.ACSkipEnableTask");
		return ptr;
	}

};


// Class Shenmue3.S3TriggerableStaticMeshActor
// 0x0018 (0x0350 - 0x0338)
class AS3TriggerableStaticMeshActor : public AStaticMeshActor
{
public:
	ETriggerPosition                                   TriggerPosition;                                          // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETriggerAction                                     TriggerAction;                                            // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x033A(0x0006) MISSED OFFSET
	struct FString                                     ActionId;                                                 // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3TriggerableStaticMeshActor");
		return ptr;
	}

};


// Class Shenmue3.SetRotationTask
// 0x0018 (0x0078 - 0x0060)
class USetRotationTask : public UTalkEventTaskBase
{
public:
	struct FString                                     TargetActorID;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              Yaw;                                                      // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SetRotationTask");
		return ptr;
	}

};


// Class Shenmue3.StepTrigger
// 0x0008 (0x0030 - 0x0028)
class UStepTrigger : public UScriptEventTriggerBase
{
public:
	int                                                MinStep;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxStep;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.StepTrigger");
		return ptr;
	}

};


// Class Shenmue3.SoundNodeVehicleEngine
// 0x0018 (0x0050 - 0x0038)
class USoundNodeVehicleEngine : public USoundNode
{
public:
	TArray<struct FVehicleEngineDatum>                 EngineSamples;                                            // 0x0038(0x0010) (Edit, ExportObject, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0048(0x0004) MISSED OFFSET
	float                                              CurrentRPM;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SoundNodeVehicleEngine");
		return ptr;
	}

};


// Class Shenmue3.StopBgmTask
// 0x0008 (0x0068 - 0x0060)
class UStopBgmTask : public UTalkEventTaskBase
{
public:
	bool                                               bForceStop;                                               // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.StopBgmTask");
		return ptr;
	}

};


// Class Shenmue3.StopMotionTask
// 0x0020 (0x0080 - 0x0060)
class UStopMotionTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CharacterID;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	bool                                               bUseBlend;                                                // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              BlendTime;                                                // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DelayTime;                                                // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.StopMotionTask");
		return ptr;
	}

};


// Class Shenmue3.StreetFightTask
// 0x0008 (0x0068 - 0x0060)
class UStreetFightTask : public UTalkEventTaskBase
{
public:
	int                                                Mode;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.StreetFightTask");
		return ptr;
	}

};


// Class Shenmue3.TalkCameraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTalkCameraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.TalkCameraFunctionLibrary");
		return ptr;
	}


	void TakeScreenShotWithCompression(const struct FString& fineName, TEnumAsByte<EImageFormatType> inFormat, bool bInsertTimeStampToFileName, bool bInShowUI, bool bAddFilenameSuffix, int Quality);
	void TakeScreenShot(const struct FString& fineName, TEnumAsByte<EImageFormatType> Format, bool bInsertTimeStampToFileName, bool bInShowUI, bool bAddFilenameSuffix);
	void PrintTalkCameraLog(const struct FString& inString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
};


// Class Shenmue3.SubQuestTask
// 0x0008 (0x0068 - 0x0060)
class USubQuestTask : public UTalkEventTaskBase
{
public:
	int                                                Mode;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.SubQuestTask");
		return ptr;
	}

};


// Class Shenmue3.TalkEventProcessBase
// 0x0010 (0x0038 - 0x0028)
class UTalkEventProcessBase : public UObject
{
public:
	class UTalkEventTaskBase*                          OwnerTask;                                                // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AS3TalkEventManagerBase*                     TalkEventManager;                                         // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.TalkEventProcessBase");
		return ptr;
	}


	void Update(float DeltaTime);
	void Initialize(class UTalkEventTaskBase* Task, class AS3TalkEventManagerBase* TalkManager);
	void Finalize();
	void Activate();
};


// Class Shenmue3.TimerStopTask
// 0x0008 (0x0068 - 0x0060)
class UTimerStopTask : public UTalkEventTaskBase
{
public:
	int                                                GlobalFlagIndex;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.TimerStopTask");
		return ptr;
	}

};


// Class Shenmue3.TimeTrigger
// 0x0010 (0x0038 - 0x0028)
class UTimeTrigger : public UScriptEventTriggerBase
{
public:
	int                                                MinHour;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MinMinute;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxHour;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxMinute;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.TimeTrigger");
		return ptr;
	}

};


// Class Shenmue3.StartedMiniGameTask
// 0x0008 (0x0068 - 0x0060)
class UStartedMiniGameTask : public UTalkEventTaskBase
{
public:
	int                                                RuleIndex;                                                // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.StartedMiniGameTask");
		return ptr;
	}

};


// Class Shenmue3.UnloadLevelTask
// 0x0010 (0x0070 - 0x0060)
class UUnloadLevelTask : public UTalkEventTaskBase
{
public:
	struct FString                                     UnloadLevelName;                                          // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.UnloadLevelTask");
		return ptr;
	}

};


// Class Shenmue3.TimerStartTask
// 0x0008 (0x0068 - 0x0060)
class UTimerStartTask : public UTalkEventTaskBase
{
public:
	int                                                GlobalFlagIndex;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.TimerStartTask");
		return ptr;
	}

};


// Class Shenmue3.UpdateCameraTask
// 0x0020 (0x0080 - 0x0060)
class UUpdateCameraTask : public UTalkEventTaskBase
{
public:
	struct FString                                     CameraName;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FString>                             TargetCharacterIDs;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.UpdateCameraTask");
		return ptr;
	}

};


// Class Shenmue3.UpdateCameraGroupTask
// 0x0020 (0x0080 - 0x0060)
class UUpdateCameraGroupTask : public UTalkEventTaskBase
{
public:
	struct FString                                     Group;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FString>                             TargetCharacterIDs;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.UpdateCameraGroupTask");
		return ptr;
	}

};


// Class Shenmue3.UpdateMemoTask
// 0x0008 (0x0068 - 0x0060)
class UUpdateMemoTask : public UTalkEventTaskBase
{
public:
	int                                                MemoNo;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                identifer;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.UpdateMemoTask");
		return ptr;
	}

};


// Class Shenmue3.UpdatePlayPriceMiniGame
// 0x0018 (0x0078 - 0x0060)
class UUpdatePlayPriceMiniGame : public UTalkEventTaskBase
{
public:
	int                                                Price;                                                    // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     MiniGameId;                                               // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.UpdatePlayPriceMiniGame");
		return ptr;
	}

};


// Class Shenmue3.UseIKTask
// 0x0010 (0x0070 - 0x0060)
class UUseIKTask : public UTalkEventTaskBase
{
public:
	struct FString                                     ik_id;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.UseIKTask");
		return ptr;
	}

};


// Class Shenmue3.WaitTask
// 0x0010 (0x0070 - 0x0060)
class UWaitTask : public UTalkEventTaskBase
{
public:
	float                                              WaitTime;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                WaitFrame;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.WaitTask");
		return ptr;
	}

};


// Class Shenmue3.S3SkillDisplaySceneActor
// 0x0018 (0x0340 - 0x0328)
class AS3SkillDisplaySceneActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnSceneCapture;                                           // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class US3SceneCaptureComponent2D*                  SceneCaptureComponent2D;                                  // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Shenmue3.S3SkillDisplaySceneActor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
