﻿/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function A_TacticalRetreat.A_TacticalRetreat_C.checkProceduralPrecondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UA_TacticalRetreat_C::checkProceduralPrecondition(class ARaidGOAPController* P)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_TacticalRetreat.A_TacticalRetreat_C.checkProceduralPrecondition");
		
		UA_TacticalRetreat_C_checkProceduralPrecondition_Params params {};
		params.P = P;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_TacticalRetreat.A_TacticalRetreat_C.MoveInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     atLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveRequest                                       Branches                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_TacticalRetreat_C::MoveInfo(const struct FVector& atLocation, EMoveRequest Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_TacticalRetreat.A_TacticalRetreat_C.MoveInfo");
		
		UA_TacticalRetreat_C_MoveInfo_Params params {};
		params.atLocation = atLocation;
		params.Branches = Branches;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_TacticalRetreat.A_TacticalRetreat_C.StartAction
	 * 		Flags  -> ()
	 */
	void UA_TacticalRetreat_C::StartAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_TacticalRetreat.A_TacticalRetreat_C.StartAction");
		
		UA_TacticalRetreat_C_StartAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_TacticalRetreat.A_TacticalRetreat_C.LookTowardsTarget
	 * 		Flags  -> ()
	 */
	void UA_TacticalRetreat_C::LookTowardsTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_TacticalRetreat.A_TacticalRetreat_C.LookTowardsTarget");
		
		UA_TacticalRetreat_C_LookTowardsTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_TacticalRetreat.A_TacticalRetreat_C.ShootAtPlayer
	 * 		Flags  -> ()
	 */
	void UA_TacticalRetreat_C::ShootAtPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_TacticalRetreat.A_TacticalRetreat_C.ShootAtPlayer");
		
		UA_TacticalRetreat_C_ShootAtPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_TacticalRetreat.A_TacticalRetreat_C.CleanupAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_TacticalRetreat_C::CleanupAction(class ARaidGOAPController* P)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_TacticalRetreat.A_TacticalRetreat_C.CleanupAction");
		
		UA_TacticalRetreat_C_CleanupAction_Params params {};
		params.P = P;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_TacticalRetreat.A_TacticalRetreat_C.ExecuteUbergraph_A_TacticalRetreat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_TacticalRetreat_C::ExecuteUbergraph_A_TacticalRetreat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_TacticalRetreat.A_TacticalRetreat_C.ExecuteUbergraph_A_TacticalRetreat");
		
		UA_TacticalRetreat_C_ExecuteUbergraph_A_TacticalRetreat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_TacticalRetreat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_TacticalRetreat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_TacticalRetreat.A_TacticalRetreat_C");
		return ptr;
	}

}


