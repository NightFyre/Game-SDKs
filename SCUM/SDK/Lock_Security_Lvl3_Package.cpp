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
	 * 		Name   -> PredefinedFunction ALock_Security_Lvl3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALock_Security_Lvl3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Lock_Security_Lvl3.Lock_Security_Lvl3_C");
		return ptr;
	}

}


