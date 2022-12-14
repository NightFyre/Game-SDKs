#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.GetKey
	 */
	struct UWBP_Config_ResolutionScale_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.IsDirty
	 */
	struct UWBP_Config_ResolutionScale_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PC45[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.GetText_1
	 */
	struct UWBP_Config_ResolutionScale_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.GetValue
	 */
	struct UWBP_Config_ResolutionScale_C_GetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.SetInitialValue
	 */
	struct UWBP_Config_ResolutionScale_C_SetInitialValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.SetValue
	 */
	struct UWBP_Config_ResolutionScale_C_SetValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.SetKeyValue
	 */
	struct UWBP_Config_ResolutionScale_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.Construct
	 */
	struct UWBP_Config_ResolutionScale_C_Construct_Params
	{	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.SetConfigValue
	 */
	struct UWBP_Config_ResolutionScale_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.RevertToInitialValue
	 */
	struct UWBP_Config_ResolutionScale_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.BndEvt__Slider_Config_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWBP_Config_ResolutionScale_C_BndEvt__Slider_Config_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.Refresh
	 */
	struct UWBP_Config_ResolutionScale_C_Refresh_Params
	{	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.SetDefaultValue
	 */
	struct UWBP_Config_ResolutionScale_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_Config_ResolutionScale.WBP_Config_ResolutionScale_C.ExecuteUbergraph_WBP_Config_ResolutionScale
	 */
	struct UWBP_Config_ResolutionScale_C_ExecuteUbergraph_WBP_Config_ResolutionScale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WQTC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
