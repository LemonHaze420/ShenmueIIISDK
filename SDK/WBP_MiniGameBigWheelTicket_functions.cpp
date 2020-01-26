
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BigImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SmallNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheelTicket_C::SetVisible(bool BigImage, int SmallNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.SetVisible");

	UWBP_MiniGameBigWheelTicket_C_SetVisible_Params params;
	params.BigImage = BigImage;
	params.SmallNum = SmallNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheelTicket_C::SetTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.SetTexture");

	UWBP_MiniGameBigWheelTicket_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.SetSmallImagePos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MiniGameBigWheelTicket_C::SetSmallImagePos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.SetSmallImagePos");

	UWBP_MiniGameBigWheelTicket_C_SetSmallImagePos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheelTicket_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.PreConstruct");

	UWBP_MiniGameBigWheelTicket_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.PlayChangeSmallAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGameBigWheelTicket_C::PlayChangeSmallAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.PlayChangeSmallAnimation");

	UWBP_MiniGameBigWheelTicket_C_PlayChangeSmallAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.ExecuteUbergraph_WBP_MiniGameBigWheelTicket
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheelTicket_C::ExecuteUbergraph_WBP_MiniGameBigWheelTicket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheelTicket.WBP_MiniGameBigWheelTicket_C.ExecuteUbergraph_WBP_MiniGameBigWheelTicket");

	UWBP_MiniGameBigWheelTicket_C_ExecuteUbergraph_WBP_MiniGameBigWheelTicket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
