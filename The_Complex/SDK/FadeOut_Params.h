#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function FadeOut.FadeOut_C.Construct
	 */
	struct UFadeOut_C_Construct_Params
	{	};

	/**
	 * Function FadeOut.FadeOut_C.ExecuteUbergraph_FadeOut
	 */
	struct UFadeOut_C_ExecuteUbergraph_FadeOut_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JVSI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
