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
	 * 		Name   -> Function ABP_AKS_74U_Magazine.ABP_AKS_74U_Magazine_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_AKS_74U_Magazine_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_AKS_74U_Magazine.ABP_AKS_74U_Magazine_C.AnimGraph");
		
		UABP_AKS_74U_Magazine_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_AKS_74U_Magazine.ABP_AKS_74U_Magazine_C.ExecuteUbergraph_ABP_AKS_74U_Magazine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_AKS_74U_Magazine_C::ExecuteUbergraph_ABP_AKS_74U_Magazine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_AKS_74U_Magazine.ABP_AKS_74U_Magazine_C.ExecuteUbergraph_ABP_AKS_74U_Magazine");
		
		UABP_AKS_74U_Magazine_C_ExecuteUbergraph_ABP_AKS_74U_Magazine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_AKS_74U_Magazine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_AKS_74U_Magazine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AKS_74U_Magazine.ABP_AKS_74U_Magazine_C");
		return ptr;
	}

}


