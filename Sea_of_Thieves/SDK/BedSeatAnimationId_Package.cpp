﻿/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UBedSeatAnimationId_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBedSeatAnimationId_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BedSeatAnimationId.BedSeatAnimationId_C");
		return ptr;
	}

}


