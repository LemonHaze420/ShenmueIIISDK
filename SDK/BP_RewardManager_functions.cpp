
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
// (Net, NetRequest, Exec, Event, NetMulticast, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent)

void ABP_RewardManager_C::InitialPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.InitialPassword");

	ABP_RewardManager_C_InitialPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ConvertType
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Private, HasDefaults, BlueprintEvent)
// Parameters:
// struct FST_RewardPresetInfo    Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
// ES3RewardType                  Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::ConvertType(const struct FST_RewardPresetInfo& Info, ES3RewardType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ConvertType");

	ABP_RewardManager_C_ConvertType_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_RewardManager.BP_RewardManager_C.IsInstalledContent
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Installed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::IsInstalledContent(ES3RewardType Type, bool* Installed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.IsInstalledContent");

	ABP_RewardManager_C_IsInstalledContent_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Installed != nullptr)
		*Installed = params.Installed;
}


// Function BP_RewardManager.BP_RewardManager_C.SetEndRollPassword
// (Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::SetEndRollPassword(const struct FName& ID, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.SetEndRollPassword");

	ABP_RewardManager_C_SetEndRollPassword_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_RewardManager.BP_RewardManager_C.RandomCapsulToy
// (NetReliable, Exec, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport)
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
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bonus                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::IsBonusPack(ES3RewardType Type, bool* Bonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.IsBonusPack");

	ABP_RewardManager_C_IsBonusPack_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bonus != nullptr)
		*Bonus = params.Bonus;
}


// Function BP_RewardManager.BP_RewardManager_C.GetEmaMateiral
// (NetReliable, NetResponse, Static, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::STATIC_GetEmaMateiral()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetEmaMateiral");

	ABP_RewardManager_C_GetEmaMateiral_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ConvertCategory
// (Event, NetResponse, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
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
// (Exec, Native, NetResponse, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)

void ABP_RewardManager_C::DebugResetPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.DebugResetPassword");

	ABP_RewardManager_C_DebugResetPassword_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.AddRewardItem
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InItemId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   O                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_AddRewardItem(ES3RewardType Type, const struct FName& InItemId, int Num, struct FName* O)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.AddRewardItem");

	ABP_RewardManager_C_AddRewardItem_Params params;
	params.Type = Type;
	params.InItemId = InItemId;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (O != nullptr)
		*O = params.O;
}


// Function BP_RewardManager.BP_RewardManager_C.CheckRewardItem
// (Net, NetRequest, Exec, Native, Static, Public, Private, NetServer, BlueprintCallable)
// Parameters:
// struct FName                   PresetId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           exec                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_CheckRewardItem(const struct FName& PresetId, bool* exec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.CheckRewardItem");

	ABP_RewardManager_C_CheckRewardItem_Params params;
	params.PresetId = PresetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec != nullptr)
		*exec = params.exec;
}


// Function BP_RewardManager.BP_RewardManager_C.SetRodAndLureFlag
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, DLLImport)

void ABP_RewardManager_C::SetRodAndLureFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.SetRodAndLureFlag");

	ABP_RewardManager_C_SetRodAndLureFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.CheckShowFlag
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// struct FST_RewardInfo          Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_CheckShowFlag(struct FST_RewardInfo* Info, bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.CheckShowFlag");

	ABP_RewardManager_C_CheckShowFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Show != nullptr)
		*Show = params.Show;
}


// Function BP_RewardManager.BP_RewardManager_C.ShowNotice
// (Native, Static, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3RewardType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_ShowNotice(ES3RewardType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ShowNotice");

	ABP_RewardManager_C_ShowNotice_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.GetActivateRewards
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// TArray<ES3RewardType>          Rewards                        (Parm, OutParm, ZeroConstructor)

void ABP_RewardManager_C::STATIC_GetActivateRewards(TArray<ES3RewardType>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetActivateRewards");

	ABP_RewardManager_C_GetActivateRewards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function BP_RewardManager.BP_RewardManager_C.IsActivate
// (NetRequest, Exec, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, BlueprintEvent)
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
// (Net, NetReliable, NetMulticast, Public, Private, NetServer, BlueprintCallable)
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
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<ES3RewardType>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<ES3RewardType>          NewArray                       (Parm, OutParm, ZeroConstructor)

void ABP_RewardManager_C::STATIC_MakePresetArray(const struct FName& ID, TArray<ES3RewardType>* Array, TArray<ES3RewardType>* NewArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.MakePresetArray");

	ABP_RewardManager_C_MakePresetArray_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (NewArray != nullptr)
		*NewArray = params.NewArray;
}


// Function BP_RewardManager.BP_RewardManager_C.CheckDownloadFile
// (Exec, Native, Static, NetMulticast, Private, NetServer, BlueprintCallable)

void ABP_RewardManager_C::STATIC_CheckDownloadFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.CheckDownloadFile");

	ABP_RewardManager_C_CheckDownloadFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.SetPresetId
// (Net, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, BlueprintEvent)
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
// (Native, NetResponse, Static, Public, Private, NetServer, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_SetDebugUpdateParam(const struct FString& ParamName, bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.SetDebugUpdateParam");

	ABP_RewardManager_C_SetDebugUpdateParam_Params params;
	params.ParamName = ParamName;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.GetUserName
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FString                 UserName                       (Parm, OutParm, ZeroConstructor)

void ABP_RewardManager_C::STATIC_GetUserName(struct FString* UserName)
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
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void ABP_RewardManager_C::STATIC_GetFudaMateiral()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetFudaMateiral");

	ABP_RewardManager_C_GetFudaMateiral_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.GetHanamojiMaterial
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Protected, NetServer, DLLImport, BlueprintEvent)

void ABP_RewardManager_C::GetHanamojiMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetHanamojiMaterial");

	ABP_RewardManager_C_GetHanamojiMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.GetDebugRewardPresetId
// (NetRequest, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, DLLImport)
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
// (Exec, Event, NetResponse, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
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
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// TEnumAsByte<EN_DreamsComeTrue> Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_GetDreamsComeTrueType(TEnumAsByte<EN_DreamsComeTrue>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.GetDreamsComeTrueType");

	ABP_RewardManager_C_GetDreamsComeTrueType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_RewardManager.BP_RewardManager_C.SetPassword
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_PasswordResult> Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::SetPassword(const struct FName& ID, TEnumAsByte<EN_PasswordResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.SetPassword");

	ABP_RewardManager_C_SetPassword_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_RewardManager.BP_RewardManager_C.UserConstructionScript
// (NetReliable, Event, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.UserConstructionScript");

	ABP_RewardManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.FlagChange
// (Net, Native, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_FlagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.FlagChange");

	ABP_RewardManager_C_FlagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ReceiveEndPlay
// (NetRequest, NetMulticast, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
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
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, BlueprintCallable)

void ABP_RewardManager_C::ShowItemDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ShowItemDialog");

	ABP_RewardManager_C_ShowItemDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ChangePlayerBehavior
// (NetRequest, Exec, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
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
// (Net, NetRequest, NetMulticast, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
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
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, BlueprintCallable)

void ABP_RewardManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ReceiveBeginPlay");

	ABP_RewardManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.CheckFreerun
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, BlueprintCallable)

void ABP_RewardManager_C::CheckFreerun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.CheckFreerun");

	ABP_RewardManager_C_CheckFreerun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.FinishedDLC
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, BlueprintCallable)

void ABP_RewardManager_C::FinishedDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.FinishedDLC");

	ABP_RewardManager_C_FinishedDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.ChangedItemNum
// (NetReliable, Exec, NetResponse, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_ChangedItemNum(const struct FName& ItemId, int NewNum, int OldNum)
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
// (Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RewardManager_C::STATIC_ExecuteUbergraph_BP_RewardManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RewardManager.BP_RewardManager_C.ExecuteUbergraph_BP_RewardManager");

	ABP_RewardManager_C_ExecuteUbergraph_BP_RewardManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RewardManager.BP_RewardManager_C.OnChangeReward__DelegateSignature
// (NetReliable, Event, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_RewardManager_C::STATIC_OnChangeReward__DelegateSignature()
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
