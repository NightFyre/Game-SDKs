﻿/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction ASpaceReplicationVolume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceReplicationVolume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceReplicationVolume.SpaceReplicationVolume_C");
		return ptr;
	}

}


