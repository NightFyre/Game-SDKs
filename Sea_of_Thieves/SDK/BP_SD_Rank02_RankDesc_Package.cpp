/**
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
	 * 		Name   -> PredefinedFunction UBP_SD_Rank02_RankDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SD_Rank02_RankDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SD_Rank02_RankDesc.BP_SD_Rank02_RankDesc_C");
		return ptr;
	}

}


