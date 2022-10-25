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
	 * 		Name   -> PredefinedFunction ABPClass_Emote_v2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPClass_Emote_v2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_Emote_v2.BPClass_Emote_v2_C");
		return ptr;
	}

}

