
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

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.IsTalking
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3CharacterBase_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.IsTalking");

	ABP_S3CharacterBase_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetEnableIK
// (Net, NetRequest, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIKEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::GetEnableIK(bool* bIKEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetEnableIK");

	ABP_S3CharacterBase_C_GetEnableIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIKEnabled != nullptr)
		*bIKEnabled = params.bIKEnabled;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.SetEnableIK
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bInIKEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::STATIC_SetEnableIK(bool bInIKEnabled, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.SetEnableIK");

	ABP_S3CharacterBase_C_SetEnableIK_Params params;
	params.bInIKEnabled = bInIKEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHandedness
// (Net, Native, Event, NetResponse, Static, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ES3HandednessType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ES3HandednessType> ABP_S3CharacterBase_C::STATIC_GetProfileHandedness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHandedness");

	ABP_S3CharacterBase_C_GetProfileHandedness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReturnOutOfWorld
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3CharacterBase_C::ReturnOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReturnOutOfWorld");

	ABP_S3CharacterBase_C_ReturnOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.IsInShelter
// (Net, NetRequest, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Sheltered                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::IsInShelter(bool* Sheltered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.IsInShelter");

	ABP_S3CharacterBase_C_IsInShelter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sheltered != nullptr)
		*Sheltered = params.Sheltered;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileCharaName
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_S3CharacterBase_C::STATIC_GetProfileCharaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileCharaName");

	ABP_S3CharacterBase_C_GetProfileCharaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileDisplayName
// (NetReliable, Native, Event, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Display_Name                   (Parm, OutParm, ZeroConstructor)
// struct FString                 Display_Rubi                   (Parm, OutParm, ZeroConstructor)
// struct FString                 Display_Name_Alphabet          (Parm, OutParm, ZeroConstructor)

void ABP_S3CharacterBase_C::GetProfileDisplayName(struct FString* Display_Name, struct FString* Display_Rubi, struct FString* Display_Name_Alphabet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileDisplayName");

	ABP_S3CharacterBase_C_GetProfileDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Display_Name != nullptr)
		*Display_Name = params.Display_Name;
	if (Display_Rubi != nullptr)
		*Display_Rubi = params.Display_Rubi;
	if (Display_Name_Alphabet != nullptr)
		*Display_Name_Alphabet = params.Display_Name_Alphabet;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileGender
// (Net, NetRequest, Native, Event, NetResponse, Static, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ES3CharacterGender> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ES3CharacterGender> ABP_S3CharacterBase_C::STATIC_GetProfileGender()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileGender");

	ABP_S3CharacterBase_C_GetProfileGender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileWeight
// (NetRequest, Native, Event, NetResponse, Static, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3CharacterBase_C::STATIC_GetProfileWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileWeight");

	ABP_S3CharacterBase_C_GetProfileWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHeight
// (NetReliable, Native, Event, NetResponse, Static, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_S3CharacterBase_C::STATIC_GetProfileHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHeight");

	ABP_S3CharacterBase_C_GetProfileHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileAge
// (Native, Event, NetResponse, Static, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3CharacterBase_C::STATIC_GetProfileAge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileAge");

	ABP_S3CharacterBase_C_GetProfileAge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfile
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FS3CharacterProfile     Profile                        (Parm, OutParm)

void ABP_S3CharacterBase_C::GetProfile(struct FS3CharacterProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfile");

	ABP_S3CharacterBase_C_GetProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.DestroyComponentByTag
// (Exec, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::DestroyComponentByTag(class UClass* ComponentClass, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.DestroyComponentByTag");

	ABP_S3CharacterBase_C_DestroyComponentByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.UserConstructionScript
// (Net, NetRequest, Native, Event, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3CharacterBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.UserConstructionScript");

	ABP_S3CharacterBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.OnTalkStart
// (Net, NetRequest, Exec, Event, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3CharacterBase_C::OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.OnTalkStart");

	ABP_S3CharacterBase_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.OnTalkFinished
// (NetRequest, Exec, Native, Event, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.OnTalkFinished");

	ABP_S3CharacterBase_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_Player
// (Net, Event, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3CharacterBase_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_Player");

	ABP_S3CharacterBase_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_NPC
// (Net, Event, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3CharacterBase_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_NPC");

	ABP_S3CharacterBase_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReceiveTick
// (NetRequest, Exec, Event, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReceiveTick");

	ABP_S3CharacterBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReceiveBeginPlay
// (Event, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3CharacterBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReceiveBeginPlay");

	ABP_S3CharacterBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.TagCharaCheck
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3CharacterBase_C::TagCharaCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.TagCharaCheck");

	ABP_S3CharacterBase_C_TagCharaCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.LoadFaceAnimAsset
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3CharacterBase_C::LoadFaceAnimAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.LoadFaceAnimAsset");

	ABP_S3CharacterBase_C_LoadFaceAnimAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.SetFaceAnimData
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3FaceAnimDataAsset*    InFaceMontageData              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::SetFaceAnimData(class US3FaceAnimDataAsset* InFaceMontageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.SetFaceAnimData");

	ABP_S3CharacterBase_C_SetFaceAnimData_Params params;
	params.InFaceMontageData = InFaceMontageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.StartCharaFadeOut
// (NetRequest, Event, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::StartCharaFadeOut(class AActor* Executor, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.StartCharaFadeOut");

	ABP_S3CharacterBase_C_StartCharaFadeOut_Params params;
	params.Executor = Executor;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.StartCharaFadeIn
// (Net, Exec, Native, Event, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::StartCharaFadeIn(class AActor* Executor, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.StartCharaFadeIn");

	ABP_S3CharacterBase_C_StartCharaFadeIn_Params params;
	params.Executor = Executor;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ExecuteUbergraph_BP_S3CharacterBase
// (NetReliable, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::ExecuteUbergraph_BP_S3CharacterBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.ExecuteUbergraph_BP_S3CharacterBase");

	ABP_S3CharacterBase_C_ExecuteUbergraph_BP_S3CharacterBase_Params params;
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
