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
	 * 		Name   -> PredefinedFunction UBP_MaidenVoyage_GoldInHold_Entitlement3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MaidenVoyage_GoldInHold_Entitlement3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MaidenVoyage_GoldInHold_Entitlement3.BP_MaidenVoyage_GoldInHold_Entitlement3_C");
		return ptr;
	}

}


