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
	 * 		Name   -> PredefinedFunction UALK_Siren_Queen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALK_Siren_Queen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALK_Siren_Queen.ALK_Siren_Queen_C");
		return ptr;
	}

}


