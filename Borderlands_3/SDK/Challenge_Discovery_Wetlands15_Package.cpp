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
	 * 		Name   -> PredefinedFunction UChallenge_Discovery_Wetlands15_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Discovery_Wetlands15_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Discovery_Wetlands15.Challenge_Discovery_Wetlands15_C");
		return ptr;
	}

}

