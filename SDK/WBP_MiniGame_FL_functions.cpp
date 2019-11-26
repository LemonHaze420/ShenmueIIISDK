
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

// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.Get_BorderContainerNum_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MiniGame_FL_C::Get_BorderContainerNum_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.Get_BorderContainerNum_Text_1");

	UWBP_MiniGame_FL_C_Get_BorderContainerNum_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.Get_CurrentContainerNum_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_MiniGame_FL_C::Get_CurrentContainerNum_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.Get_CurrentContainerNum_Text_1");

	UWBP_MiniGame_FL_C_Get_CurrentContainerNum_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetCarriedNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CarriedNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_FL_C::SetCarriedNum(int CarriedNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetCarriedNum");

	UWBP_MiniGame_FL_C_SetCarriedNum_Params params;
	params.CarriedNum = CarriedNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetTimeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_FL_C::SetTimeProgress(float Time, float MaxTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetTimeProgress");

	UWBP_MiniGame_FL_C_SetTimeProgress_Params params;
	params.Time = Time;
	params.MaxTime = MaxTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetProgressCircle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_FL_C::SetProgressCircle(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetProgressCircle");

	UWBP_MiniGame_FL_C_SetProgressCircle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetMapAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_FL_C::SetMapAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetMapAngle");

	UWBP_MiniGame_FL_C_SetMapAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.ResetMapScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_FL_C::ResetMapScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.ResetMapScale");

	UWBP_MiniGame_FL_C_ResetMapScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.ChangeMapScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_FL_C::ChangeMapScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.ChangeMapScale");

	UWBP_MiniGame_FL_C_ChangeMapScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.RotateMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_FL_C::RotateMap(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.RotateMap");

	UWBP_MiniGame_FL_C_RotateMap_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetMapVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_FL_C::SetMapVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetMapVisible");

	UWBP_MiniGame_FL_C_SetMapVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetMapTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_FL_C::SetMapTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.SetMapTexture");

	UWBP_MiniGame_FL_C_SetMapTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGame_FL_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.Construct");

	UWBP_MiniGame_FL_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.ExecuteUbergraph_WBP_MiniGame_FL
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_FL_C::ExecuteUbergraph_WBP_MiniGame_FL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_FL.WBP_MiniGame_FL_C.ExecuteUbergraph_WBP_MiniGame_FL");

	UWBP_MiniGame_FL_C_ExecuteUbergraph_WBP_MiniGame_FL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
