﻿/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UInfection_Abdomen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInfection_Abdomen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Infection_Abdomen.Infection_Abdomen_C");
		return ptr;
	}

}


