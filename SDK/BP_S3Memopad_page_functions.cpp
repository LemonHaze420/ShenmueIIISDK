
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

// Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetPhoto
// (NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          IsMaterialRender               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_page_C::SetPhoto(int Index, const struct FName& Name, class UTexture* Texture, float IsMaterialRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetPhoto");

	ABP_S3Memopad_page_C_SetPhoto_Params params;
	params.Index = Index;
	params.Name = Name;
	params.Texture = Texture;
	params.IsMaterialRender = IsMaterialRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetPageTexture
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Delegate, NetClient, Const)
// Parameters:
// int                            IndexR                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            IndexF                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_page_C::STATIC_SetPageTexture(int IndexR, int IndexF)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetPageTexture");

	ABP_S3Memopad_page_C_SetPageTexture_Params params;
	params.IndexR = IndexR;
	params.IndexF = IndexF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetTextMesh
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, Protected, NetClient, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           turning                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_page_C::STATIC_SetTextMesh(int Index, const struct FName& Name, class UTexture* Texture, bool turning, int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetTextMesh");

	ABP_S3Memopad_page_C_SetTextMesh_Params params;
	params.Index = Index;
	params.Name = Name;
	params.Texture = Texture;
	params.turning = turning;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.CanReady
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3Memopad_page_C::STATIC_CanReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.CanReady");

	ABP_S3Memopad_page_C_CanReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetTurnState
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_memopadTurntype> Turn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LastPage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_page_C::SetTurnState(TEnumAsByte<EN_memopadTurntype> Turn, bool LastPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.SetTurnState");

	ABP_S3Memopad_page_C_SetTurnState_Params params;
	params.Turn = Turn;
	params.LastPage = LastPage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.Initialize
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           CoverFlg                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_page_C::Initialize(bool CoverFlg, bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.Initialize");

	ABP_S3Memopad_page_C_Initialize_Params params;
	params.CoverFlg = CoverFlg;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.EndAnim
// (NetRequest, MulticastDelegate, Public, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3Memopad_page_C::EndAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.EndAnim");

	ABP_S3Memopad_page_C_EndAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.GetTurnState
// (Net, NetReliable, Exec, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_memopadTurntype> State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_page_C::GetTurnState(TEnumAsByte<EN_memopadTurntype>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.GetTurnState");

	ABP_S3Memopad_page_C_GetTurnState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.UserConstructionScript
// (NetRequest, Exec, Event, NetResponse, Static, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_S3Memopad_page_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.UserConstructionScript");

	ABP_S3Memopad_page_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3Memopad_page_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.ReceiveBeginPlay");

	ABP_S3Memopad_page_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.ViewPage
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3Memopad_page_C::ViewPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.ViewPage");

	ABP_S3Memopad_page_C_ViewPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.ReceiveTick
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_page_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.ReceiveTick");

	ABP_S3Memopad_page_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Memopad_page.BP_S3Memopad_page_C.ExecuteUbergraph_BP_S3Memopad_page
// (Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Memopad_page_C::ExecuteUbergraph_BP_S3Memopad_page(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Memopad_page.BP_S3Memopad_page_C.ExecuteUbergraph_BP_S3Memopad_page");

	ABP_S3Memopad_page_C_ExecuteUbergraph_BP_S3Memopad_page_Params params;
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
