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
	 * 		Name   -> PredefinedFunction UBP_msc_hurdygurdy_pio_01_a_ItemDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_msc_hurdygurdy_pio_01_a_ItemDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_msc_hurdygurdy_pio_01_a_ItemDesc.BP_msc_hurdygurdy_pio_01_a_ItemDesc_C");
		return ptr;
	}

}


