﻿/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPAmmoItem_Shotgun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPAmmoItem_Shotgun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPAmmoItem_Shotgun.BPAmmoItem_Shotgun_C");
		return ptr;
	}

}

