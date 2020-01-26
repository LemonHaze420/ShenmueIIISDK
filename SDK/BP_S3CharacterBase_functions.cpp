
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

// Function BP_S3CharacterBase.BP_S3CharacterBase_C.IsTalking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3CharacterBase_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.IsTalking");

	ABP_S3CharacterBase_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetEnableIK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInIKEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::SetEnableIK(bool bInIKEnabled, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.SetEnableIK");

	ABP_S3CharacterBase_C_SetEnableIK_Params params;
	params.bInIKEnabled = bInIKEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHandedness
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ES3HandednessType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ES3HandednessType> ABP_S3CharacterBase_C::GetProfileHandedness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHandedness");

	ABP_S3CharacterBase_C_GetProfileHandedness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReturnOutOfWorld
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3CharacterBase_C::ReturnOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReturnOutOfWorld");

	ABP_S3CharacterBase_C_ReturnOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.IsInShelter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_S3CharacterBase_C::GetProfileCharaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileCharaName");

	ABP_S3CharacterBase_C_GetProfileCharaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileDisplayName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 Display_Name                   (Parm, OutParm, ZeroConstructor)
// struct FString                 Display_Rubi                   (Parm, OutParm, ZeroConstructor)
// struct FString                 Display_Name_Alphabet          (Parm, OutParm, ZeroConstructor)

void ABP_S3CharacterBase_C::GetProfileDisplayName(struct FString* Display_Name, struct FString* Display_Rubi, struct FString* Display_Name_Alphabet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileDisplayName");

	ABP_S3CharacterBase_C_GetProfileDisplayName_Params params;

	auto flags = fn->FunctionFlags;

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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ES3CharacterGender> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ES3CharacterGender> ABP_S3CharacterBase_C::GetProfileGender()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileGender");

	ABP_S3CharacterBase_C_GetProfileGender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileWeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3CharacterBase_C::GetProfileWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileWeight");

	ABP_S3CharacterBase_C_GetProfileWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_S3CharacterBase_C::GetProfileHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileHeight");

	ABP_S3CharacterBase_C_GetProfileHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileAge
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3CharacterBase_C::GetProfileAge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfileAge");

	ABP_S3CharacterBase_C_GetProfileAge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.GetProfile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3CharacterBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.UserConstructionScript");

	ABP_S3CharacterBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.OnTalkStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_Player
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3CharacterBase_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_Player");

	ABP_S3CharacterBase_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_NPC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3CharacterBase_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.Screen_NPC");

	ABP_S3CharacterBase_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
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
// (Event, Protected, BlueprintEvent)

void ABP_S3CharacterBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.ReceiveBeginPlay");

	ABP_S3CharacterBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.TagCharaCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_S3CharacterBase_C::TagCharaCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.TagCharaCheck");

	ABP_S3CharacterBase_C_TagCharaCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.LoadFaceAnimAsset
// (BlueprintCallable, BlueprintEvent)

void ABP_S3CharacterBase_C::LoadFaceAnimAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.LoadFaceAnimAsset");

	ABP_S3CharacterBase_C_LoadFaceAnimAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.SetFaceAnimData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3FaceAnimDataAsset*    InFaceMontageData              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::SetFaceAnimData(class US3FaceAnimDataAsset* InFaceMontageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.SetFaceAnimData");

	ABP_S3CharacterBase_C_SetFaceAnimData_Params params;
	params.InFaceMontageData = InFaceMontageData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.StartCharaFadeOut
// (Event, Public, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CharacterBase.BP_S3CharacterBase_C.ExecuteUbergraph_BP_S3CharacterBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3CharacterBase_C::ExecuteUbergraph_BP_S3CharacterBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CharacterBase.BP_S3CharacterBase_C.ExecuteUbergraph_BP_S3CharacterBase");

	ABP_S3CharacterBase_C_ExecuteUbergraph_BP_S3CharacterBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
