
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

// Function BPF_LevelData.BPF_LevelData_C.GetACLevelName
// (Exec, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetACLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetACLevelName");

	UBPF_LevelData_C_GetACLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.IsInChobuRyosya
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           In                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::IsInChobuRyosya(class UObject* __WorldContext, bool* In)
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
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetBPLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetBPLevelName");

	UBPF_LevelData_C_GetBPLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.GetLookAtLevelName
// (NetRequest, Native, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetLookAtLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetLookAtLevelName");

	UBPF_LevelData_C_GetLookAtLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.GetLandscapeLevelNames
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Protected, NetServer, BlueprintCallable)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LevelNames                     (Parm, OutParm, ZeroConstructor)

void UBPF_LevelData_C::GetLandscapeLevelNames(class UObject* __WorldContext, TArray<struct FName>* LevelNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetLandscapeLevelNames");

	UBPF_LevelData_C_GetLandscapeLevelNames_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelNames != nullptr)
		*LevelNames = params.LevelNames;
}


// Function BPF_LevelData.BPF_LevelData_C.GetMinimapLevelName
// (NetReliable, Exec, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
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
// (Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
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
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport)
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
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Protected, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_GetChobuLevelName(class UObject* __WorldContext, struct FName* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.GetChobuLevelName");

	UBPF_LevelData_C_GetChobuLevelName_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelName != nullptr)
		*LevelName = params.LevelName;
}


// Function BPF_LevelData.BPF_LevelData_C.getLevelNameAndEnum
// (Net, NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FString                 PersistentLevelName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 nameStr                        (Parm, OutParm, ZeroConstructor)
// ES3Where                       enWhere                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::getLevelNameAndEnum(const struct FString& PersistentLevelName, bool Detail, class UObject* __WorldContext, struct FString* nameStr, ES3Where* enWhere)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.getLevelNameAndEnum");

	UBPF_LevelData_C_getLevelNameAndEnum_Params params;
	params.PersistentLevelName = PersistentLevelName;
	params.Detail = Detail;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nameStr != nullptr)
		*nameStr = params.nameStr;
	if (enWhere != nullptr)
		*enWhere = params.enWhere;
}


// Function BPF_LevelData.BPF_LevelData_C.getLevelData
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3LevelDataAsset*       LevelData                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LevelData_C::STATIC_getLevelData(class UObject* __WorldContext, class US3LevelDataAsset** LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LevelData.BPF_LevelData_C.getLevelData");

	UBPF_LevelData_C_getLevelData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelData != nullptr)
		*LevelData = params.LevelData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
