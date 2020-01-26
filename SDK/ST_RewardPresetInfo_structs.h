#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_RewardPresetInfo.ST_RewardPresetInfo
// 0x0025
struct FST_RewardPresetInfo
{
	struct FName                                       IncludePreset_58_D84338C045C6AA8F0612D6AD32C1AE15;        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3RewardCategory                                  Category_61_91881F064D618C98C4D2EF98D49C80FE;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERewardPurchaseType>                   PurchaseType_90_83E7B1E84D2DFCB5F9C47BA1A621CA28;         // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WorldTelecom_26_320B86DF400CCFBDA0B3699BB9D9AFD2;         // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EndCredits_30_3FED0D6B48D7D060D93000A8B6F18301;           // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EndCreditsSpecial_84_FA9501384EC11EFF1013A6ACD046928C;    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RyoJacket_32_3049A8E44B894343EA647B97E0E5E2BA;            // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GachaTicket_33_B29901964B07946B37719A8565453654;          // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CapsuleToyOne_35_8789A30B426CA3534C5B4DB7A5B19BE6;        // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CapsuleToyAll_34_82886FEB4F62E5A78F1A5C96E33CD344;        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScrollAdvanced_36_029A23B74EBCF79B920BD2AB1EBF8167;       // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScrollSpecialP_42_C5D4678947F3B31E39B77F8D878A64AF;       // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScrollSpecialH_41_51A6BDFD461E6813E2E4DEBD1669E0C0;       // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScrollArcane_43_9EF37B0940023B18EE9732917A1089F6;         // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DreamsComeTrue_44_668C764446485A6DD6BBB38A6381B055;       // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RodAndLure_51_EF5C197140091E6D5FF20CB8910ECE9B;           // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IamShenmue_52_EF808D504359BDC3BC9050BBF804DF92;           // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OtoshidamaTicket_53_926BE17249F7D5F10361B1AB43E0869F;     // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Hanamoji_54_2E26AAFA4F011A72339E53AE8BE03172;             // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Senjafuda_55_D1090AFB4B718600DF8F40AAFF5F02D3;            // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DiceMan_71_E892D28247E876800C2BC1A5ACAA3E02;              // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ChibiChara_72_C4E156204BA1B524A104999FE7DCC627;           // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ChibiChara2_73_4552BCA74B08A18A336058B5E3D672CD;          // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HandBook_74_ECE52D204E694633852B36A6BD88929D;             // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GuestBook_75_5AAC3A0449C7DF83CEDDD5810163481C;            // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FreeBook_76_4A1C85FB47C1D99EADB104A85ED90FC1;             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TravellerNPC_77_D6B269A44731413314153986795E5E37;         // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BattleNPC_78_F11083AA46821DA45FAF81BC3CE2EFA2;            // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               YataiName_81_BD5E6E8F4D4BA4E4E1EABA893F8C4A27;            // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OtoshidamaFace_82_480814F6419FB752C847C3B10495760B;       // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
