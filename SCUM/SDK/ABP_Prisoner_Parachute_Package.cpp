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
	 * 		Name   -> Function ABP_Prisoner_Parachute.ABP_Prisoner_Parachute_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Prisoner_Parachute_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_Parachute.ABP_Prisoner_Parachute_C.AnimGraph");
		
		UABP_Prisoner_Parachute_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Prisoner_Parachute.ABP_Prisoner_Parachute_C.ExecuteUbergraph_ABP_Prisoner_Parachute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Prisoner_Parachute_C::ExecuteUbergraph_ABP_Prisoner_Parachute(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_Parachute.ABP_Prisoner_Parachute_C.ExecuteUbergraph_ABP_Prisoner_Parachute");
		
		UABP_Prisoner_Parachute_C_ExecuteUbergraph_ABP_Prisoner_Parachute_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Prisoner_Parachute_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Prisoner_Parachute_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Prisoner_Parachute.ABP_Prisoner_Parachute_C");
		return ptr;
	}

}


