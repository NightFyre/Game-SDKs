#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Ansel.EUIControlEffectTarget
	 */
	enum class EUIControlEffectTarget : uint8_t
	{
		Bloom               = 0,
		DepthOfField        = 1,
		ChromaticAberration = 2,
		MotionBlur          = 3,
		MAX                 = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
