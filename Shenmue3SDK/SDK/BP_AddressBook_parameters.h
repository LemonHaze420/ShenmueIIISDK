#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_AddressBook.BP_AddressBook_C.StartSelectAnim
struct ABP_AddressBook_C_StartSelectAnim_Params
{
	float                                              AnimTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AddressBook.BP_AddressBook_C.HiddenCursor
struct ABP_AddressBook_C_HiddenCursor_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AddressBook.BP_AddressBook_C.PushButton
struct ABP_AddressBook_C_PushButton_Params
{
	struct FVector2D                                   CursorPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_AddressBook.BP_AddressBook_C.AddressBook_NextPage
struct ABP_AddressBook_C_AddressBook_NextPage_Params
{
	bool                                               IsNext;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AddressBook.BP_AddressBook_C.UserConstructionScript
struct ABP_AddressBook_C_UserConstructionScript_Params
{
};

// Function BP_AddressBook.BP_AddressBook_C.򠪦􆖐񍳔_
struct ABP_AddressBook_C_UnknownFunc01__Params
{
};

// Function BP_AddressBook.BP_AddressBook_C.ReceiveBeginPlay
struct ABP_AddressBook_C_ReceiveBeginPlay_Params
{
};

// Function BP_AddressBook.BP_AddressBook_C.ReceiveTick
struct ABP_AddressBook_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AddressBook.BP_AddressBook_C.Destroy
struct ABP_AddressBook_C_Destroy_Params
{
};

// Function BP_AddressBook.BP_AddressBook_C.SetCaptureMempPAdPart
struct ABP_AddressBook_C_SetCaptureMempPAdPart_Params
{
};

// Function BP_AddressBook.BP_AddressBook_C.OpenBook
struct ABP_AddressBook_C_OpenBook_Params
{
};

// Function BP_AddressBook.BP_AddressBook_C.PushNewPage
struct ABP_AddressBook_C_PushNewPage_Params
{
	bool*                                              IsR2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AddressBook.BP_AddressBook_C.NextPage
struct ABP_AddressBook_C_NextPage_Params
{
	bool*                                              bRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsLast;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AddressBook.BP_AddressBook_C.NextPageContinueTurning
struct ABP_AddressBook_C_NextPageContinueTurning_Params
{
	bool*                                              bRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AddressBook.BP_AddressBook_C.ExecuteUbergraph_BP_AddressBook
struct ABP_AddressBook_C_ExecuteUbergraph_BP_AddressBook_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
