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
	 * 		Name   -> PredefinedFunction UAD_ThirdPerson_PlayerPirate_Female_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAD_ThirdPerson_PlayerPirate_Female_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Large.AD_ThirdPerson_PlayerPirate_Female_Large_C");
		return ptr;
	}

}


