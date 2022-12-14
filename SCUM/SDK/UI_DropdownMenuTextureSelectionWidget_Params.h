#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.OnMouseButtonDown_1
	 */
	struct UUI_DropdownMenuTextureSelectionWidget_C_OnMouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.PreConstruct
	 */
	struct UUI_DropdownMenuTextureSelectionWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.Update
	 */
	struct UUI_DropdownMenuTextureSelectionWidget_C_Update_Params
	{	};

	/**
	 * Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget
	 */
	struct UUI_DropdownMenuTextureSelectionWidget_C_ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
