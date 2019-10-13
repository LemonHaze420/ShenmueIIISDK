
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

// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.MakeString_EN
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         String                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_CreateMemoTexture_C::MakeString_EN(TArray<struct FString>* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.MakeString_EN");

	ABP_CreateMemoTexture_C_MakeString_EN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.SetRowCountAndTexturePos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Front                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMemoFlag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Arrayndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uwgt_MemoPageBase_C*     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CreateMemoTexture_C::SetRowCountAndTexturePos(bool Front, bool IsMemoFlag, int Arrayndex, class Uwgt_MemoPageBase_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.SetRowCountAndTexturePos");

	ABP_CreateMemoTexture_C_SetRowCountAndTexturePos_Params params;
	params.Front = Front;
	params.IsMemoFlag = IsMemoFlag;
	params.Arrayndex = Arrayndex;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.PrintErrorLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MemoIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CreateMemoTexture_C::PrintErrorLog(int MemoIndex, int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.PrintErrorLog");

	ABP_CreateMemoTexture_C_PrintErrorLog_Params params;
	params.MemoIndex = MemoIndex;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.GetMemoLabel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MemoIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CreateMemoTexture_C::GetMemoLabel(int MemoIndex, struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.GetMemoLabel");

	ABP_CreateMemoTexture_C_GetMemoLabel_Params params;
	params.MemoIndex = MemoIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.SetTexture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    MemoNo                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CreateMemoTexture_C::SetTexture(bool Right, TArray<int>* MemoNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.SetTexture");

	ABP_CreateMemoTexture_C_SetTexture_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemoNo != nullptr)
		*MemoNo = params.MemoNo;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.RenderContactInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uwgt_S3Memopad_textContentBase_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CreateMemoTexture_C::RenderContactInfo(int RowCount, class Uwgt_S3Memopad_textContentBase_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.RenderContactInfo");

	ABP_CreateMemoTexture_C_RenderContactInfo_Params params;
	params.RowCount = RowCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.GetMemoNo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PageNo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    MemoNo                         (Parm, OutParm, ZeroConstructor)

void ABP_CreateMemoTexture_C::GetMemoNo(int PageNo, TArray<int>* MemoNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.GetMemoNo");

	ABP_CreateMemoTexture_C_GetMemoNo_Params params;
	params.PageNo = PageNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemoNo != nullptr)
		*MemoNo = params.MemoNo;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.DestroyActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CreateMemoTexture_C::DestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.DestroyActor");

	ABP_CreateMemoTexture_C_DestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CreateMemoTexture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.UserConstructionScript");

	ABP_CreateMemoTexture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CreateMemoTexture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.ReceiveBeginPlay");

	ABP_CreateMemoTexture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.Update
// (BlueprintCallable, BlueprintEvent)

void ABP_CreateMemoTexture_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.Update");

	ABP_CreateMemoTexture_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.ExecuteUbergraph_BP_CreateMemoTexture
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CreateMemoTexture_C::ExecuteUbergraph_BP_CreateMemoTexture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CreateMemoTexture.BP_CreateMemoTexture_C.ExecuteUbergraph_BP_CreateMemoTexture");

	ABP_CreateMemoTexture_C_ExecuteUbergraph_BP_CreateMemoTexture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
