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
	 * 		Name   -> PredefinedFunction UARandom_DigiClone_Idle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARandom_DigiClone_Idle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_DigiClone_Idle.ARandom_DigiClone_Idle_C");
		return ptr;
	}

}

