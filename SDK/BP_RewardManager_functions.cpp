
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_RewardManager.BP_RewardManager_C.InitialPassword
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::InitialPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.InitialPassword");

	ABP_RewardManager_C_InitialPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ConvertType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_RewardPresetInfo    Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
// ES3RewardType                  Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::ConvertType(const struct FST_RewardPresetInfo& Info, ES3RewardType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ConvertType");

	ABP_RewardManager_C_ConvertType_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_RewardManager.BP_RewardManager_C.IsInstalledContent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Installed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::IsInstalledContent(ES3RewardType Type, bool* Installed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.IsInstalledContent");

	ABP_RewardManager_C_IsInstalledContent_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Installed != nullptr)
		*Installed = params.Installed;
}


// Function BP_RewardManager.BP_RewardManager_C.SetEndRollPassword
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::SetEndRollPassword(const struct FName& ID, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.SetEndRollPassword");

	ABP_RewardManager_C_SetEndRollPassword_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_RewardManager.BP_RewardManager_C.RandomCapsulToy
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ItemId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::RandomCapsulToy(struct FName* ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.RandomCapsulToy");

	ABP_RewardManager_C_RandomCapsulToy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemId != nullptr)
		*ItemId = params.ItemId;
}


// Function BP_RewardManager.BP_RewardManager_C.IsBonusPack
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bonus                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::IsBonusPack(ES3RewardType Type, bool* Bonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.IsBonusPack");

	ABP_RewardManager_C_IsBonusPack_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bonus != nullptr)
		*Bonus = params.Bonus;
}


// Function BP_RewardManager.BP_RewardManager_C.GetEmaMateiral
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_RewardManager_C::GetEmaMateiral()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetEmaMateiral");

	ABP_RewardManager_C_GetEmaMateiral_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ConvertCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3RewardCategory              Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::ConvertCategory(ES3RewardType Type, ES3RewardCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ConvertCategory");

	ABP_RewardManager_C_ConvertCategory_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function BP_RewardManager.BP_RewardManager_C.DebugResetPassword
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::DebugResetPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.DebugResetPassword");

	ABP_RewardManager_C_DebugResetPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.AddRewardItem
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InItemId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   O                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::AddRewardItem(ES3RewardType Type, const struct FName& InItemId, int Num, struct FName* O)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.AddRewardItem");

	ABP_RewardManager_C_AddRewardItem_Params params;
	params.Type = Type;
	params.InItemId = InItemId;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (O != nullptr)
		*O = params.O;
}


// Function BP_RewardManager.BP_RewardManager_C.CheckRewardItem
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PresetId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           exec                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::CheckRewardItem(const struct FName& PresetId, bool* exec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.CheckRewardItem");

	ABP_RewardManager_C_CheckRewardItem_Params params;
	params.PresetId = PresetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec != nullptr)
		*exec = params.exec;
}


// Function BP_RewardManager.BP_RewardManager_C.SetRodAndLureFlag
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::SetRodAndLureFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.SetRodAndLureFlag");

	ABP_RewardManager_C_SetRodAndLureFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.CheckShowFlag
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_RewardInfo          Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::CheckShowFlag(struct FST_RewardInfo* Info, bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.CheckShowFlag");

	ABP_RewardManager_C_CheckShowFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Show != nullptr)
		*Show = params.Show;
}


// Function BP_RewardManager.BP_RewardManager_C.ShowNotice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::ShowNotice(ES3RewardType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ShowNotice");

	ABP_RewardManager_C_ShowNotice_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.GetActivateRewards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<ES3RewardType>          Rewards                        (Parm, OutParm, ZeroConstructor)

void ABP_RewardManager_C::GetActivateRewards(TArray<ES3RewardType>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetActivateRewards");

	ABP_RewardManager_C_GetActivateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function BP_RewardManager.BP_RewardManager_C.IsActivate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Activate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::IsActivate(ES3RewardType Type, bool* Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.IsActivate");

	ABP_RewardManager_C_IsActivate_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Activate != nullptr)
		*Activate = params.Activate;
}


// Function BP_RewardManager.BP_RewardManager_C.ConvertTypeArray
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_RewardPresetInfo    Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<ES3RewardType>          Types                          (Parm, OutParm, ZeroConstructor)

void ABP_RewardManager_C::ConvertTypeArray(struct FST_RewardPresetInfo* Info, TArray<ES3RewardType>* Types)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ConvertTypeArray");

	ABP_RewardManager_C_ConvertTypeArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Types != nullptr)
		*Types = params.Types;
}


// Function BP_RewardManager.BP_RewardManager_C.MakePresetArray
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<ES3RewardType>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<ES3RewardType>          NewArray                       (Parm, OutParm, ZeroConstructor)

void ABP_RewardManager_C::MakePresetArray(const struct FName& ID, TArray<ES3RewardType>* Array, TArray<ES3RewardType>* NewArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.MakePresetArray");

	ABP_RewardManager_C_MakePresetArray_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (NewArray != nullptr)
		*NewArray = params.NewArray;
}


// Function BP_RewardManager.BP_RewardManager_C.CheckDownloadFile
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::CheckDownloadFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.CheckDownloadFile");

	ABP_RewardManager_C_CheckDownloadFile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.SetPresetId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PresetId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::SetPresetId(const struct FName& PresetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.SetPresetId");

	ABP_RewardManager_C_SetPresetId_Params params;
	params.PresetId = PresetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.SetDebugUpdateParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::SetDebugUpdateParam(const struct FString& ParamName, bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.SetDebugUpdateParam");

	ABP_RewardManager_C_SetDebugUpdateParam_Params params;
	params.ParamName = ParamName;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.GetUserName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 UserName                       (Parm, OutParm, ZeroConstructor)

void ABP_RewardManager_C::GetUserName(struct FString* UserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetUserName");

	ABP_RewardManager_C_GetUserName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserName != nullptr)
		*UserName = params.UserName;
}


// Function BP_RewardManager.BP_RewardManager_C.GetFudaMateiral
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_RewardManager_C::GetFudaMateiral()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetFudaMateiral");

	ABP_RewardManager_C_GetFudaMateiral_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.GetHanamojiMaterial
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_RewardManager_C::GetHanamojiMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetHanamojiMaterial");

	ABP_RewardManager_C_GetHanamojiMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.GetDebugRewardPresetId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::GetDebugRewardPresetId(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetDebugRewardPresetId");

	ABP_RewardManager_C_GetDebugRewardPresetId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function BP_RewardManager.BP_RewardManager_C.GetEndCreditType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_EndCreditType>  Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::GetEndCreditType(TEnumAsByte<EN_EndCreditType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetEndCreditType");

	ABP_RewardManager_C_GetEndCreditType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_RewardManager.BP_RewardManager_C.GetDreamsComeTrueType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_DreamsComeTrue> Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::GetDreamsComeTrueType(TEnumAsByte<EN_DreamsComeTrue>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetDreamsComeTrueType");

	ABP_RewardManager_C_GetDreamsComeTrueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_RewardManager.BP_RewardManager_C.SetPassword
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_PasswordResult> Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::SetPassword(const struct FName& ID, TEnumAsByte<EN_PasswordResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.SetPassword");

	ABP_RewardManager_C_SetPassword_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_RewardManager.BP_RewardManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.UserConstructionScript");

	ABP_RewardManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.FlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::FlagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.FlagChange");

	ABP_RewardManager_C_FlagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ReceiveEndPlay");

	ABP_RewardManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ShowItemDialog
// (BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::ShowItemDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ShowItemDialog");

	ABP_RewardManager_C_ShowItemDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ChangePlayerBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ChangePlayerBehavior");

	ABP_RewardManager_C_ChangePlayerBehavior_Params params;
	params.NewId = NewId;
	params.OldId = OldId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.PushDecide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::PushDecide(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.PushDecide");

	ABP_RewardManager_C_PushDecide_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RewardManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ReceiveBeginPlay");

	ABP_RewardManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.CheckFreerun
// (BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::CheckFreerun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.CheckFreerun");

	ABP_RewardManager_C_CheckFreerun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.FinishedDLC
// (BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::FinishedDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.FinishedDLC");

	ABP_RewardManager_C_FinishedDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ChangedItemNum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::ChangedItemNum(const struct FName& ItemId, int NewNum, int OldNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ChangedItemNum");

	ABP_RewardManager_C_ChangedItemNum_Params params;
	params.ItemId = ItemId;
	params.NewNum = NewNum;
	params.OldNum = OldNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ExecuteUbergraph_BP_RewardManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::ExecuteUbergraph_BP_RewardManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ExecuteUbergraph_BP_RewardManager");

	ABP_RewardManager_C_ExecuteUbergraph_BP_RewardManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.OnChangeReward__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::OnChangeReward__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.OnChangeReward__DelegateSignature");

	ABP_RewardManager_C_OnChangeReward__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
