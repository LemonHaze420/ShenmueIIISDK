
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_LevelData.BPF_LevelData_C.IsInChobuRyosya
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           In                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_IsInChobuRyosya(class UObject* __WorldContext, bool* In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.IsInChobuRyosya");

	UBPF_LevelData_C_IsInChobuRyosya_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
}


// Function BPF_LevelData.BPF_LevelData_C.GetBPLevelName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetBPLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetBPLevelName");

	UBPF_LevelData_C_GetBPLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.GetLookAtLevelName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetLookAtLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetLookAtLevelName");

	UBPF_LevelData_C_GetLookAtLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.GetLandscapeLevelNames
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBPF_LevelData_C::STATIC_GetLandscapeLevelNames(class UObject* __WorldContext, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetLandscapeLevelNames");

	UBPF_LevelData_C_GetLandscapeLevelNames_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BPF_LevelData.BPF_LevelData_C.GetMinimapLevelName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetMinimapLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetMinimapLevelName");

	UBPF_LevelData_C_GetMinimapLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.GetNaviMeshLevelName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetNaviMeshLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetNaviMeshLevelName");

	UBPF_LevelData_C_GetNaviMeshLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.GetNPCLevelName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetNPCLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetNPCLevelName");

	UBPF_LevelData_C_GetNPCLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.GetChobuLevelName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetChobuLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetChobuLevelName");

	UBPF_LevelData_C_GetChobuLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.getLevelNameAndEnum
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PersistentLevelName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 nameStr                        (Parm, OutParm, ZeroConstructor)
// ES3Where                       enWhere                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_getLevelNameAndEnum(const struct FString& PersistentLevelName, bool Detail, class UObject* __WorldContext, struct FString* nameStr, ES3Where* enWhere)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.getLevelNameAndEnum");

	UBPF_LevelData_C_getLevelNameAndEnum_Params params;
	params.PersistentLevelName = PersistentLevelName;
	params.Detail = Detail;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nameStr != nullptr)
		*nameStr = params.nameStr;
	if (enWhere != nullptr)
		*enWhere = params.enWhere;
}


// Function BPF_LevelData.BPF_LevelData_C.getLevelData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3LevelDataAsset*       LevelData                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_getLevelData(class UObject* __WorldContext, class US3LevelDataAsset** LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.getLevelData");

	UBPF_LevelData_C_getLevelData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelData != nullptr)
		*LevelData = params.LevelData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
