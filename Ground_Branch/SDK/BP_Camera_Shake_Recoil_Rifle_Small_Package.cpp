/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> PredefinedFunction UBP_Camera_Shake_Recoil_Rifle_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Camera_Shake_Recoil_Rifle_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Camera_Shake_Recoil_Rifle_Small.BP_Camera_Shake_Recoil_Rifle_Small_C");
		return ptr;
	}

}


