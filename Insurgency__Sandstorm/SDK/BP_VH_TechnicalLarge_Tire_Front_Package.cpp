/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UBP_VH_TechnicalLarge_Tire_Front_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_VH_TechnicalLarge_Tire_Front_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_VH_TechnicalLarge_Tire_Front.BP_VH_TechnicalLarge_Tire_Front_C");
		return ptr;
	}

}


