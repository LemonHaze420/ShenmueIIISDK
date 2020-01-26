
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

// Function BP_TextDataManager.BP_TextDataManager_C.FindClipperOnlyData
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Clipper                        (Parm, OutParm, ZeroConstructor)

void UBP_TextDataManager_C::FindClipperOnlyData(const struct FName& Label, struct FString* Clipper)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDataManager.BP_TextDataManager_C.FindClipperOnlyData");

	UBP_TextDataManager_C_FindClipperOnlyData_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Clipper != nullptr)
		*Clipper = params.Clipper;
}


// Function BP_TextDataManager.BP_TextDataManager_C.GetTalkTextData
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                FirstType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextDataType                TextType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS3TextData             TextData                       (Parm, OutParm)

void UBP_TextDataManager_C::GetTalkTextData(const struct FName& Label, ES3TextPathType FirstType, ES3TextDataType* TextType, struct FS3TextData* TextData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDataManager.BP_TextDataManager_C.GetTalkTextData");

	UBP_TextDataManager_C_GetTalkTextData_Params params;
	params.Label = Label;
	params.FirstType = FirstType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextType != nullptr)
		*TextType = params.TextType;
	if (TextData != nullptr)
		*TextData = params.TextData;
}


// Function BP_TextDataManager.BP_TextDataManager_C.GetTextDataStringAbridged 
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)
// struct FString                 ClipperString                  (Parm, OutParm, ZeroConstructor)

void UBP_TextDataManager_C::GetTextDataStringAbridged_(const struct FName& Label, ES3TextPathType Type, struct FString* OutString, struct FString* ClipperString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDataManager.BP_TextDataManager_C.GetTextDataStringAbridged ");

	UBP_TextDataManager_C_GetTextDataStringAbridged__Params params;
	params.Label = Label;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
	if (ClipperString != nullptr)
		*ClipperString = params.ClipperString;
}


// Function BP_TextDataManager.BP_TextDataManager_C.GetItemDataString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// struct FString                 Description                    (Parm, OutParm, ZeroConstructor)

void UBP_TextDataManager_C::GetItemDataString(const struct FName& Label, struct FString* Name, struct FString* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDataManager.BP_TextDataManager_C.GetItemDataString");

	UBP_TextDataManager_C_GetItemDataString_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Description != nullptr)
		*Description = params.Description;
}


// Function BP_TextDataManager.BP_TextDataManager_C.CreateRubyInfo
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_RubyInfo            OutInfo                        (Parm, OutParm)

void UBP_TextDataManager_C::CreateRubyInfo(const struct FString& Text, struct FST_RubyInfo* OutInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDataManager.BP_TextDataManager_C.CreateRubyInfo");

	UBP_TextDataManager_C_CreateRubyInfo_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;
}


// Function BP_TextDataManager.BP_TextDataManager_C.GetVoiceData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Voice                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TextDataManager_C::GetVoiceData(const struct FName& Label, ES3TextPathType Type, const struct FName& CharaName, class UObject** Voice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDataManager.BP_TextDataManager_C.GetVoiceData");

	UBP_TextDataManager_C_GetVoiceData_Params params;
	params.Label = Label;
	params.Type = Type;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voice != nullptr)
		*Voice = params.Voice;
}


// Function BP_TextDataManager.BP_TextDataManager_C.GetTextDataString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)
// struct FString                 ClipperString                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         TextArray                      (Parm, OutParm, ZeroConstructor)
// int                            LinefeedCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_RubyInfo>    RubyInfoArray                  (Parm, OutParm, ZeroConstructor)

void UBP_TextDataManager_C::GetTextDataString(const struct FName& Label, ES3TextPathType Type, struct FString* OutString, struct FString* ClipperString, TArray<struct FString>* TextArray, int* LinefeedCount, TArray<struct FST_RubyInfo>* RubyInfoArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDataManager.BP_TextDataManager_C.GetTextDataString");

	UBP_TextDataManager_C_GetTextDataString_Params params;
	params.Label = Label;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
	if (ClipperString != nullptr)
		*ClipperString = params.ClipperString;
	if (TextArray != nullptr)
		*TextArray = params.TextArray;
	if (LinefeedCount != nullptr)
		*LinefeedCount = params.LinefeedCount;
	if (RubyInfoArray != nullptr)
		*RubyInfoArray = params.RubyInfoArray;
}


// Function BP_TextDataManager.BP_TextDataManager_C.Reimport
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RootAssetPath                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TextDataManager_C::Reimport(const struct FName& Label, const struct FString& RootAssetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDataManager.BP_TextDataManager_C.Reimport");

	UBP_TextDataManager_C_Reimport_Params params;
	params.Label = Label;
	params.RootAssetPath = RootAssetPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TextDataManager.BP_TextDataManager_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_TextDataManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDataManager.BP_TextDataManager_C.UserConstructionScript");

	UBP_TextDataManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
