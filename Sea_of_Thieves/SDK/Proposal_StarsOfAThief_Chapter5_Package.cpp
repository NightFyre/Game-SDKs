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
	 * 		Name   -> PredefinedFunction UProposal_StarsOfAThief_Chapter5_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProposal_StarsOfAThief_Chapter5_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proposal_StarsOfAThief_Chapter5.Proposal_StarsOfAThief_Chapter5_C");
		return ptr;
	}

}


