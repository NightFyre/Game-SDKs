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
	 * 		Name   -> PredefinedFunction UTitle_NoteworthyArtist_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_NoteworthyArtist_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Title_NoteworthyArtist.Title_NoteworthyArtist_C");
		return ptr;
	}

}


