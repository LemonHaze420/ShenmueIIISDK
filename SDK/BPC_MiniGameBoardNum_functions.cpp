
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

// Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.Update
// (Net, NetMulticast, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent)

void UBPC_MiniGameBoardNum_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.Update");

	UBPC_MiniGameBoardNum_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.SetNumber
// (Net, Exec, Native, Static, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameBoardNum_C::STATIC_SetNumber(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.SetNumber");

	UBPC_MiniGameBoardNum_C_SetNumber_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.SetList
// (NetReliable, NetRequest, Native, Event, NetMulticast, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UStaticMeshComponent*> MeshList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInstanceDynamic*> MaterialList                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_MiniGameBoardNum_C::SetList(TArray<class UStaticMeshComponent*>* MeshList, TArray<class UMaterialInstanceDynamic*>* MaterialList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.SetList");

	UBPC_MiniGameBoardNum_C_SetList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeshList != nullptr)
		*MeshList = params.MeshList;
	if (MaterialList != nullptr)
		*MaterialList = params.MaterialList;
}


// Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.InitializeMesh
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_MiniGameBoardNum_C::STATIC_InitializeMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBoardNum.BPC_MiniGameBoardNum_C.InitializeMesh");

	UBPC_MiniGameBoardNum_C_InitializeMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
