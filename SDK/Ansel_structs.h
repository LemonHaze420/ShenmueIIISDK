#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Ansel.EUIControlEffectTarget
enum class EUIControlEffectTarget : uint8_t
{
	Bloom                          = 0,
	DepthOfField                   = 1,
	ChromaticAberration            = 2,
	MotionBlur                     = 3,
	EUIControlEffectTarget_MAX     = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
