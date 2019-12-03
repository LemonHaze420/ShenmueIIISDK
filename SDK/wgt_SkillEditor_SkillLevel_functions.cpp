
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

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetLevelData
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelChanged                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ProgressChanged                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SkillLevel_C::SetLevelData(int Level, float Progress, int MaxLevel, bool* LevelChanged, bool* ProgressChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetLevelData");

	Uwgt_SkillEditor_SkillLevel_C_SetLevelData_Params params;
	params.Level = Level;
	params.Progress = Progress;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelChanged != nullptr)
		*LevelChanged = params.LevelChanged;
	if (ProgressChanged != nullptr)
		*ProgressChanged = params.ProgressChanged;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.RefreshLevel
// (NetReliable, Exec, Native, NetResponse, Static, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_SkillEditor_SkillLevel_C::STATIC_RefreshLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.RefreshLevel");

	Uwgt_SkillEditor_SkillLevel_C_RefreshLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetMasterLevel
// (Net, NetRequest, Event, NetResponse, NetMulticast, Private, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SkillLevel_C::SetMasterLevel(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetMasterLevel");

	Uwgt_SkillEditor_SkillLevel_C_SetMasterLevel_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.IsMasterLevel
// (Net, NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_SkillEditor_SkillLevel_C::IsMasterLevel(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.IsMasterLevel");

	Uwgt_SkillEditor_SkillLevel_C_IsMasterLevel_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.PlayLevelUpAnimation
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_SkillEditor_SkillLevel_C::PlayLevelUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.PlayLevelUpAnimation");

	Uwgt_SkillEditor_SkillLevel_C_PlayLevelUpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetLevel
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelChanged                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SkillLevel_C::STATIC_SetLevel(int Level, bool* LevelChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetLevel");

	Uwgt_SkillEditor_SkillLevel_C_SetLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelChanged != nullptr)
		*LevelChanged = params.LevelChanged;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetFillRatio
// (NetRequest, Event, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SkillLevel_C::SetFillRatio(float FillRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetFillRatio");

	Uwgt_SkillEditor_SkillLevel_C_SetFillRatio_Params params;
	params.FillRatio = FillRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.Construct
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_SkillEditor_SkillLevel_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.Construct");

	Uwgt_SkillEditor_SkillLevel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.Tick
// (Net, Event, NetResponse, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SkillLevel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.Tick");

	Uwgt_SkillEditor_SkillLevel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.PreConstruct
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SkillLevel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.PreConstruct");

	Uwgt_SkillEditor_SkillLevel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.ExecuteUbergraph_wgt_SkillEditor_SkillLevel
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SkillLevel_C::ExecuteUbergraph_wgt_SkillEditor_SkillLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.ExecuteUbergraph_wgt_SkillEditor_SkillLevel");

	Uwgt_SkillEditor_SkillLevel_C_ExecuteUbergraph_wgt_SkillEditor_SkillLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
