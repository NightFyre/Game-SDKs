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
	 * 		Name   -> PredefinedFunction UALK_ThirdPerson_Male_Unfit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALK_ThirdPerson_Male_Unfit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALK_ThirdPerson_Male_Unfit.ALK_ThirdPerson_Male_Unfit_C");
		return ptr;
	}

}


