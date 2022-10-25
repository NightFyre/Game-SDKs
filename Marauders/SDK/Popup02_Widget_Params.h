﻿#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function Popup02_Widget.Popup02_Widget_C.RunPopup
	 */
	struct UPopup02_Widget_C_RunPopup_Params
	{
	public:
		class FText                                                Popup_Title;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Popup_Desc;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USoundCue*                                           SoundToPlay;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                RightButtonText;                                         // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       OnlyShowOneButton;                                       // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Popup02_Widget.Popup02_Widget_C.BndEvt__MM_GenericSmallBtn01_Cancel_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UPopup02_Widget_C_BndEvt__MM_GenericSmallBtn01_Cancel_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Popup02_Widget.Popup02_Widget_C.BndEvt__MM_GenericSmallBtn01_Accept_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UPopup02_Widget_C_BndEvt__MM_GenericSmallBtn01_Accept_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Popup02_Widget.Popup02_Widget_C.ExecuteUbergraph_Popup02_Widget
	 */
	struct UPopup02_Widget_C_ExecuteUbergraph_Popup02_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_90HD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Popup02_Widget.Popup02_Widget_C.ED_Accept__DelegateSignature
	 */
	struct UPopup02_Widget_C_ED_Accept__DelegateSignature_Params
	{	};

	/**
	 * Function Popup02_Widget.Popup02_Widget_C.ED_Cancel__DelegateSignature
	 */
	struct UPopup02_Widget_C_ED_Cancel__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
