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

// Enum FuzzySystem.EDefuzzifyMethod
enum class EDefuzzifyMethod : uint8_t
{
	EDefuzzifyMethod__MaxAV        = 0,
	EDefuzzifyMethod__Centroid     = 1,
	EDefuzzifyMethod__EDefuzzifyMethod_MAX = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
