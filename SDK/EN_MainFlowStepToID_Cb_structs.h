#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// UserDefinedEnum EN_MainFlowStepToID_Cb.EN_MainFlowStepToID_Cb
enum class EN_MainFlowStepToID_Cb : uint8_t
{
	EN_MainFlowStepToID_Cb__NewEnumerator0 = 0,
	EN_MainFlowStepToID_Cb__NewEnumerator17 = 1,
	EN_MainFlowStepToID_Cb__NewEnumerator18 = 2,
	EN_MainFlowStepToID_Cb__NewEnumerator19 = 3,
	EN_MainFlowStepToID_Cb__NewEnumerator20 = 4,
	EN_MainFlowStepToID_Cb__NewEnumerator21 = 5,
	EN_MainFlowStepToID_Cb__NewEnumerator22 = 6,
	EN_MainFlowStepToID_Cb__NewEnumerator23 = 7,
	EN_MainFlowStepToID_Cb__NewEnumerator24 = 8,
	EN_MainFlowStepToID_Cb__NewEnumerator25 = 9,
	EN_MainFlowStepToID_Cb__NewEnumerator26 = 10,
	EN_MainFlowStepToID_Cb__NewEnumerator27 = 11,
	EN_MainFlowStepToID_Cb__NewEnumerator28 = 12,
	EN_MainFlowStepToID_Cb__NewEnumerator29 = 13,
	EN_MainFlowStepToID_Cb__NewEnumerator32 = 14,
	EN_MainFlowStepToID_Cb__NewEnumerator33 = 15,
	EN_MainFlowStepToID_Cb__NewEnumerator34 = 16,
	EN_MainFlowStepToID_Cb__NewEnumerator35 = 17,
	EN_MainFlowStepToID_Cb__NewEnumerator36 = 18,
	EN_MainFlowStepToID_Cb__NewEnumerator37 = 19,
	EN_MainFlowStepToID_Cb__NewEnumerator38 = 20,
	EN_MainFlowStepToID_Cb__NewEnumerator39 = 21,
	EN_MainFlowStepToID_Cb__NewEnumerator40 = 22,
	EN_MainFlowStepToID_Cb__NewEnumerator41 = 23,
	EN_MainFlowStepToID_Cb__NewEnumerator42 = 24,
	EN_MainFlowStepToID_Cb__NewEnumerator43 = 25,
	EN_MainFlowStepToID_Cb__NewEnumerator44 = 26,
	EN_MainFlowStepToID_Cb__NewEnumerator45 = 27,
	EN_MainFlowStepToID_Cb__NewEnumerator46 = 28,
	EN_MainFlowStepToID_Cb__NewEnumerator47 = 29,
	EN_MainFlowStepToID_Cb__NewEnumerator48 = 30,
	EN_MainFlowStepToID_Cb__NewEnumerator49 = 31,
	EN_MainFlowStepToID_Cb__NewEnumerator50 = 32,
	EN_MainFlowStepToID_Cb__NewEnumerator51 = 33,
	EN_MainFlowStepToID_Cb__NewEnumerator52 = 34,
	EN_MainFlowStepToID_Cb__NewEnumerator53 = 35,
	EN_MainFlowStepToID_Cb__NewEnumerator54 = 36,
	EN_MainFlowStepToID_Cb__NewEnumerator55 = 37,
	EN_MainFlowStepToID_Cb__NewEnumerator56 = 38,
	EN_MainFlowStepToID_Cb__NewEnumerator57 = 39,
	EN_MainFlowStepToID_Cb__NewEnumerator58 = 40,
	EN_MainFlowStepToID_Cb__NewEnumerator59 = 41,
	EN_MainFlowStepToID_Cb__NewEnumerator60 = 42,
	EN_MainFlowStepToID_Cb__NewEnumerator61 = 43,
	EN_MainFlowStepToID_Cb__NewEnumerator62 = 44,
	EN_MainFlowStepToID_Cb__NewEnumerator63 = 45,
	EN_MainFlowStepToID_Cb__NewEnumerator64 = 46,
	EN_MainFlowStepToID_Cb__NewEnumerator65 = 47,
	EN_MainFlowStepToID_Cb__NewEnumerator66 = 48,
	EN_MainFlowStepToID_Cb__NewEnumerator67 = 49,
	EN_MainFlowStepToID_Cb__NewEnumerator68 = 50,
	EN_MainFlowStepToID_Cb__NewEnumerator69 = 51,
	EN_MainFlowStepToID_Cb__NewEnumerator70 = 52,
	EN_MainFlowStepToID_Cb__NewEnumerator71 = 53,
	EN_MainFlowStepToID_Cb__NewEnumerator72 = 54,
	EN_MainFlowStepToID_Cb__NewEnumerator73 = 55,
	EN_MainFlowStepToID_Cb__NewEnumerator74 = 56,
	EN_MainFlowStepToID_Cb__NewEnumerator75 = 57,
	EN_MainFlowStepToID_Cb__NewEnumerator76 = 58,
	EN_MainFlowStepToID_Cb__NewEnumerator77 = 59,
	EN_MainFlowStepToID_Cb__NewEnumerator78 = 60,
	EN_MainFlowStepToID_Cb__NewEnumerator79 = 61,
	EN_MainFlowStepToID_Cb__NewEnumerator80 = 62,
	EN_MainFlowStepToID_Cb__NewEnumerator81 = 63,
	EN_MainFlowStepToID_Cb__NewEnumerator82 = 64,
	EN_MainFlowStepToID_Cb__NewEnumerator83 = 65,
	EN_MainFlowStepToID_Cb__NewEnumerator84 = 66,
	EN_MainFlowStepToID_Cb__NewEnumerator85 = 67,
	EN_MainFlowStepToID_Cb__NewEnumerator86 = 68,
	EN_MainFlowStepToID_Cb__NewEnumerator88 = 69,
	EN_MainFlowStepToID_Cb__NewEnumerator87 = 70,
	EN_MainFlowStepToID_Cb__NewEnumerator113 = 71,
	EN_MainFlowStepToID_Cb__NewEnumerator114 = 72,
	EN_MainFlowStepToID_Cb__NewEnumerator89 = 73,
	EN_MainFlowStepToID_Cb__NewEnumerator90 = 74,
	EN_MainFlowStepToID_Cb__NewEnumerator91 = 75,
	EN_MainFlowStepToID_Cb__NewEnumerator116 = 76,
	EN_MainFlowStepToID_Cb__NewEnumerator115 = 77,
	EN_MainFlowStepToID_Cb__NewEnumerator117 = 78,
	EN_MainFlowStepToID_Cb__NewEnumerator92 = 79,
	EN_MainFlowStepToID_Cb__NewEnumerator93 = 80,
	EN_MainFlowStepToID_Cb__NewEnumerator94 = 81,
	EN_MainFlowStepToID_Cb__NewEnumerator95 = 82,
	EN_MainFlowStepToID_Cb__NewEnumerator96 = 83,
	EN_MainFlowStepToID_Cb__NewEnumerator97 = 84,
	EN_MainFlowStepToID_Cb__NewEnumerator98 = 85,
	EN_MainFlowStepToID_Cb__NewEnumerator99 = 86,
	EN_MainFlowStepToID_Cb__NewEnumerator122 = 87,
	EN_MainFlowStepToID_Cb__NewEnumerator118 = 88,
	EN_MainFlowStepToID_Cb__NewEnumerator119 = 89,
	EN_MainFlowStepToID_Cb__NewEnumerator123 = 90,
	EN_MainFlowStepToID_Cb__NewEnumerator100 = 91,
	EN_MainFlowStepToID_Cb__NewEnumerator101 = 92,
	EN_MainFlowStepToID_Cb__NewEnumerator120 = 93,
	EN_MainFlowStepToID_Cb__NewEnumerator121 = 94,
	EN_MainFlowStepToID_Cb__NewEnumerator102 = 95,
	EN_MainFlowStepToID_Cb__NewEnumerator103 = 96,
	EN_MainFlowStepToID_Cb__NewEnumerator104 = 97,
	EN_MainFlowStepToID_Cb__NewEnumerator105 = 98,
	EN_MainFlowStepToID_Cb__NewEnumerator106 = 99,
	EN_MainFlowStepToID_Cb__NewEnumerator107 = 100,
	EN_MainFlowStepToID_Cb__NewEnumerator108 = 101,
	EN_MainFlowStepToID_Cb__NewEnumerator31 = 102,
	EN_MainFlowStepToID_Cb__EN_MainFlowStepToID_MAX = 103
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
