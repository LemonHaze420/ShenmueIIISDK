#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// UserDefinedEnum E_MiniGameText.E_MiniGameText
enum class E_MiniGameText : uint8_t
{
	E_MiniGameText__NewEnumerator0 = 0,
	E_MiniGameText__NewEnumerator1 = 1,
	E_MiniGameText__NewEnumerator2 = 2,
	E_MiniGameText__NewEnumerator3 = 3,
	E_MiniGameText__NewEnumerator4 = 4,
	E_MiniGameText__NewEnumerator6 = 5,
	E_MiniGameText__NewEnumerator29 = 6,
	E_MiniGameText__NewEnumerator30 = 7,
	E_MiniGameText__NewEnumerator31 = 8,
	E_MiniGameText__NewEnumerator32 = 9,
	E_MiniGameText__NewEnumerator33 = 10,
	E_MiniGameText__NewEnumerator34 = 11,
	E_MiniGameText__NewEnumerator35 = 12,
	E_MiniGameText__NewEnumerator36 = 13,
	E_MiniGameText__NewEnumerator37 = 14,
	E_MiniGameText__NewEnumerator38 = 15,
	E_MiniGameText__NewEnumerator39 = 16,
	E_MiniGameText__NewEnumerator40 = 17,
	E_MiniGameText__NewEnumerator41 = 18,
	E_MiniGameText__NewEnumerator42 = 19,
	E_MiniGameText__NewEnumerator43 = 20,
	E_MiniGameText__NewEnumerator44 = 21,
	E_MiniGameText__NewEnumerator45 = 22,
	E_MiniGameText__NewEnumerator46 = 23,
	E_MiniGameText__NewEnumerator49 = 24,
	E_MiniGameText__NewEnumerator50 = 25,
	E_MiniGameText__NewEnumerator47 = 26,
	E_MiniGameText__NewEnumerator48 = 27,
	E_MiniGameText__NewEnumerator52 = 28,
	E_MiniGameText__NewEnumerator56 = 29,
	E_MiniGameText__NewEnumerator53 = 30,
	E_MiniGameText__NewEnumerator54 = 31,
	E_MiniGameText__NewEnumerator55 = 32,
	E_MiniGameText__NewEnumerator57 = 33,
	E_MiniGameText__NewEnumerator58 = 34,
	E_MiniGameText__NewEnumerator59 = 35,
	E_MiniGameText__NewEnumerator60 = 36,
	E_MiniGameText__NewEnumerator61 = 37,
	E_MiniGameText__NewEnumerator62 = 38,
	E_MiniGameText__NewEnumerator63 = 39,
	E_MiniGameText__NewEnumerator64 = 40,
	E_MiniGameText__NewEnumerator65 = 41,
	E_MiniGameText__NewEnumerator66 = 42,
	E_MiniGameText__NewEnumerator67 = 43,
	E_MiniGameText__NewEnumerator68 = 44,
	E_MiniGameText__NewEnumerator69 = 45,
	E_MiniGameText__NewEnumerator70 = 46,
	E_MiniGameText__NewEnumerator71 = 47,
	E_MiniGameText__NewEnumerator72 = 48,
	E_MiniGameText__NewEnumerator73 = 49,
	E_MiniGameText__NewEnumerator74 = 50,
	E_MiniGameText__NewEnumerator75 = 51,
	E_MiniGameText__NewEnumerator76 = 52,
	E_MiniGameText__NewEnumerator77 = 53,
	E_MiniGameText__NewEnumerator78 = 54,
	E_MiniGameText__NewEnumerator79 = 55,
	E_MiniGameText__NewEnumerator80 = 56,
	E_MiniGameText__NewEnumerator81 = 57,
	E_MiniGameText__NewEnumerator82 = 58,
	E_MiniGameText__NewEnumerator83 = 59,
	E_MiniGameText__NewEnumerator84 = 60,
	E_MiniGameText__NewEnumerator85 = 61,
	E_MiniGameText__NewEnumerator86 = 62,
	E_MiniGameText__NewEnumerator87 = 63,
	E_MiniGameText__NewEnumerator88 = 64,
	E_MiniGameText__NewEnumerator89 = 65,
	E_MiniGameText__NewEnumerator90 = 66,
	E_MiniGameText__NewEnumerator91 = 67,
	E_MiniGameText__NewEnumerator92 = 68,
	E_MiniGameText__NewEnumerator93 = 69,
	E_MiniGameText__NewEnumerator94 = 70,
	E_MiniGameText__NewEnumerator95 = 71,
	E_MiniGameText__NewEnumerator98 = 72,
	E_MiniGameText__NewEnumerator99 = 73,
	E_MiniGameText__NewEnumerator100 = 74,
	E_MiniGameText__NewEnumerator101 = 75,
	E_MiniGameText__NewEnumerator102 = 76,
	E_MiniGameText__NewEnumerator103 = 77,
	E_MiniGameText__NewEnumerator104 = 78,
	E_MiniGameText__NewEnumerator105 = 79,
	E_MiniGameText__NewEnumerator106 = 80,
	E_MiniGameText__NewEnumerator107 = 81,
	E_MiniGameText__NewEnumerator108 = 82,
	E_MiniGameText__NewEnumerator109 = 83,
	E_MiniGameText__NewEnumerator110 = 84,
	E_MiniGameText__NewEnumerator111 = 85,
	E_MiniGameText__NewEnumerator112 = 86,
	E_MiniGameText__NewEnumerator113 = 87,
	E_MiniGameText__NewEnumerator114 = 88,
	E_MiniGameText__NewEnumerator115 = 89,
	E_MiniGameText__NewEnumerator116 = 90,
	E_MiniGameText__NewEnumerator117 = 91,
	E_MiniGameText__NewEnumerator118 = 92,
	E_MiniGameText__NewEnumerator119 = 93,
	E_MiniGameText__NewEnumerator120 = 94,
	E_MiniGameText__NewEnumerator121 = 95,
	E_MiniGameText__NewEnumerator122 = 96,
	E_MiniGameText__NewEnumerator123 = 97,
	E_MiniGameText__NewEnumerator124 = 98,
	E_MiniGameText__NewEnumerator125 = 99,
	E_MiniGameText__NewEnumerator126 = 100,
	E_MiniGameText__NewEnumerator127 = 101,
	E_MiniGameText__NewEnumerator128 = 102,
	E_MiniGameText__NewEnumerator129 = 103,
	E_MiniGameText__NewEnumerator130 = 104,
	E_MiniGameText__NewEnumerator131 = 105,
	E_MiniGameText__NewEnumerator132 = 106,
	E_MiniGameText__E_MAX          = 107
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
