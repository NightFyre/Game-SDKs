﻿#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Scum_Shirt_Supporter_Pack_Black.Scum_Shirt_Supporter_Pack_Black_C
	 * Size -> 0x0008 (FullSize[0x0A20] - InheritedSize[0x0A18])
	 */
	class AScum_Shirt_Supporter_Pack_Black_C : public AClothesItem
	{
	public:
		unsigned char                                              UnknownData_WN0X[0x8];                                   // 0x0A18(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
