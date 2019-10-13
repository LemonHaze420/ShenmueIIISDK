
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

// Function BPC_ObjectLoader.BPC_ObjectLoader_C.AssetLoadObject
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ObjectLoadInfo      LoadInfo                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPC_ObjectLoader_C::AssetLoadObject(struct FST_ObjectLoadInfo* LoadInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ObjectLoader.BPC_ObjectLoader_C.AssetLoadObject");

	UBPC_ObjectLoader_C_AssetLoadObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadInfo != nullptr)
		*LoadInfo = params.LoadInfo;
}


// Function BPC_ObjectLoader.BPC_ObjectLoader_C.RemoveLoadingList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPC_ObjectLoader_C::RemoveLoadingList(const struct FString& LoadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ObjectLoader.BPC_ObjectLoader_C.RemoveLoadingList");

	UBPC_ObjectLoader_C_RemoveLoadingList_Params params;
	params.LoadId = LoadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ObjectLoader.BPC_ObjectLoader_C.AddLoadingList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPC_ObjectLoader_C::AddLoadingList(const struct FString& LoadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ObjectLoader.BPC_ObjectLoader_C.AddLoadingList");

	UBPC_ObjectLoader_C_AddLoadingList_Params params;
	params.LoadId = LoadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ObjectLoader.BPC_ObjectLoader_C.OnLoaded_066D0130431550B75D2FBDB198B97FBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ObjectLoader_C::OnLoaded_066D0130431550B75D2FBDB198B97FBC(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ObjectLoader.BPC_ObjectLoader_C.OnLoaded_066D0130431550B75D2FBDB198B97FBC");

	UBPC_ObjectLoader_C_OnLoaded_066D0130431550B75D2FBDB198B97FBC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ObjectLoader.BPC_ObjectLoader_C.RequestLoadObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPC_ObjectLoader_C::RequestLoadObject(const struct FString& LoadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ObjectLoader.BPC_ObjectLoader_C.RequestLoadObject");

	UBPC_ObjectLoader_C_RequestLoadObject_Params params;
	params.LoadId = LoadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ObjectLoader.BPC_ObjectLoader_C.StartLoadObject
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ObjectLoadInfo      LoadObjInfo                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPC_ObjectLoader_C::StartLoadObject(const struct FST_ObjectLoadInfo& LoadObjInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ObjectLoader.BPC_ObjectLoader_C.StartLoadObject");

	UBPC_ObjectLoader_C_StartLoadObject_Params params;
	params.LoadObjInfo = LoadObjInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ObjectLoader.BPC_ObjectLoader_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ObjectLoader_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ObjectLoader.BPC_ObjectLoader_C.ReceiveTick");

	UBPC_ObjectLoader_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ObjectLoader.BPC_ObjectLoader_C.ExecuteUbergraph_BPC_ObjectLoader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ObjectLoader_C::ExecuteUbergraph_BPC_ObjectLoader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ObjectLoader.BPC_ObjectLoader_C.ExecuteUbergraph_BPC_ObjectLoader");

	UBPC_ObjectLoader_C_ExecuteUbergraph_BPC_ObjectLoader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ObjectLoader.BPC_ObjectLoader_C.OnLoadedObjectDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ObjectLoader_C::OnLoadedObjectDispatcher__DelegateSignature(const struct FString& LoadId, class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ObjectLoader.BPC_ObjectLoader_C.OnLoadedObjectDispatcher__DelegateSignature");

	UBPC_ObjectLoader_C_OnLoadedObjectDispatcher__DelegateSignature_Params params;
	params.LoadId = LoadId;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
