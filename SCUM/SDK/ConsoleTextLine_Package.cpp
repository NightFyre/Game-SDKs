/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function ConsoleTextLine.ConsoleTextLine_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        textToSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                textColorToSet                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleTextLine_C::SetText(const class FText& textToSet, const struct FLinearColor& textColorToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.SetText");
		
		UConsoleTextLine_C_SetText_Params params {};
		params.textToSet = textToSet;
		params.textColorToSet = textColorToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleTextLine.ConsoleTextLine_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleTextLine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.Construct");
		
		UConsoleTextLine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleTextLine_C::ExecuteUbergraph_ConsoleTextLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine");
		
		UConsoleTextLine_C_ExecuteUbergraph_ConsoleTextLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleTextLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleTextLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleTextLine.ConsoleTextLine_C");
		return ptr;
	}

}


