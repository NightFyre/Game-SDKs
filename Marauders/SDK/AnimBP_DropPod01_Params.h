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
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.AnimGraph
	 */
	struct UAnimBP_DropPod01_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Get_3ProngsValue
	 */
	struct UAnimBP_DropPod01_C_Get_3ProngsValue_Params
	{	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Get_LeanAndAccelerationValues
	 */
	struct UAnimBP_DropPod01_C_Get_LeanAndAccelerationValues_Params
	{	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.GetHealthState
	 */
	struct UAnimBP_DropPod01_C_GetHealthState_Params
	{	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Get_Speed
	 */
	struct UAnimBP_DropPod01_C_Get_Speed_Params
	{	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Get_Direction
	 */
	struct UAnimBP_DropPod01_C_Get_Direction_Params
	{	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Get_VarsFromPawn
	 */
	struct UAnimBP_DropPod01_C_Get_VarsFromPawn_Params
	{	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Frigate_SpeedAsApercentage
	 */
	struct UAnimBP_DropPod01_C_Frigate_SpeedAsApercentage_Params
	{
	public:
		float                                                      SpeedAsPercentage;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      XY_Speed;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z_Speed;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.PlayerUpDownInputAxis
	 */
	struct UAnimBP_DropPod01_C_PlayerUpDownInputAxis_Params
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Ship_ActorPitchAmount
	 */
	struct UAnimBP_DropPod01_C_Ship_ActorPitchAmount_Params
	{
	public:
		float                                                      PitchAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Turret_ControlAimPoint
	 */
	struct UAnimBP_DropPod01_C_Turret_ControlAimPoint_Params
	{
	public:
		struct FVector                                             ControlAimLoc;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DropPod01_AnimGraphNode_ModifyBone_03379852492D8E3E2E81CDBDE131959C
	 */
	struct UAnimBP_DropPod01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DropPod01_AnimGraphNode_ModifyBone_03379852492D8E3E2E81CDBDE131959C_Params
	{	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DropPod01_AnimGraphNode_RotateRootBone_B8579A784B208A16F9EFF79E9308747C
	 */
	struct UAnimBP_DropPod01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DropPod01_AnimGraphNode_RotateRootBone_B8579A784B208A16F9EFF79E9308747C_Params
	{	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.BlueprintUpdateAnimation
	 */
	struct UAnimBP_DropPod01_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Frigate_Damage_Engine
	 */
	struct UAnimBP_DropPod01_C_Frigate_Damage_Engine_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.DebugShipAnimations
	 */
	struct UAnimBP_DropPod01_C_DebugShipAnimations_Params
	{
	public:
		bool                                                       ShouldDebugAnimations;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.GearChange
	 */
	struct UAnimBP_DropPod01_C_GearChange_Params
	{
	public:
		int32_t                                                    WhatGear;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.PlayerLeftRightInputAxis
	 */
	struct UAnimBP_DropPod01_C_PlayerLeftRightInputAxis_Params
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Shoot
	 */
	struct UAnimBP_DropPod01_C_Shoot_Params
	{
	public:
		int32_t                                                    TurretID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.CameraRotation
	 */
	struct UAnimBP_DropPod01_C_CameraRotation_Params
	{
	public:
		struct FRotator                                            CameraRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotClamp_Min;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RotClamp_Max;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TurretAnimRotSpeed;                                      // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.DropPod_Movement
	 */
	struct UAnimBP_DropPod01_C_DropPod_Movement_Params
	{
	public:
		struct FRotator                                            RotMovementDelta;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentGear;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Frigate_Damage_Hull
	 */
	struct UAnimBP_DropPod01_C_Frigate_Damage_Hull_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Frigate_Damage_HelmGun
	 */
	struct UAnimBP_DropPod01_C_Frigate_Damage_HelmGun_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.DropPodBoosting
	 */
	struct UAnimBP_DropPod01_C_DropPodBoosting_Params
	{
	public:
		bool                                                       IsBoosting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.DropPodisBreaching
	 */
	struct UAnimBP_DropPod01_C_DropPodisBreaching_Params
	{
	public:
		bool                                                       isBreaching;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.Frigate_Damage_Turret
	 */
	struct UAnimBP_DropPod01_C_Frigate_Damage_Turret_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_DropPod01.AnimBP_DropPod01_C.ExecuteUbergraph_AnimBP_DropPod01
	 */
	struct UAnimBP_DropPod01_C_ExecuteUbergraph_AnimBP_DropPod01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SXVJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
