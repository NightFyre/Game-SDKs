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
	 * 		Name   -> Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_InventoryBar_EmptyPouchSlot_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.GetVisibility_1");
		
		UWBP_InventoryBar_EmptyPouchSlot_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.SetInventorySlotItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_EmptyPouchSlot_C::SetInventorySlotItem(class AGBItem* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.SetInventorySlotItem");
		
		UWBP_InventoryBar_EmptyPouchSlot_C_SetInventorySlotItem_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.EquipInventorySlotItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMainhand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_EmptyPouchSlot_C::EquipInventorySlotItem(bool bMainhand, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.EquipInventorySlotItem");
		
		UWBP_InventoryBar_EmptyPouchSlot_C_EquipInventorySlotItem_Params params {};
		params.bMainhand = bMainhand;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_EmptyPouchSlot_C::BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_InventoryBar_EmptyPouchSlot_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.InternalSetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryBar_EmptyPouchSlot_C::InternalSetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.InternalSetSelected");
		
		UWBP_InventoryBar_EmptyPouchSlot_C_InternalSetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryBar_EmptyPouchSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.Construct");
		
		UWBP_InventoryBar_EmptyPouchSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.OnIconLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_EmptyPouchSlot_C::OnIconLoaded(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.OnIconLoaded");
		
		UWBP_InventoryBar_EmptyPouchSlot_C_OnIconLoaded_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryBar_EmptyPouchSlot_C::ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C.ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot");
		
		UWBP_InventoryBar_EmptyPouchSlot_C_ExecuteUbergraph_WBP_InventoryBar_EmptyPouchSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryBar_EmptyPouchSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryBar_EmptyPouchSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryBar_EmptyPouchSlot.WBP_InventoryBar_EmptyPouchSlot_C");
		return ptr;
	}

}


