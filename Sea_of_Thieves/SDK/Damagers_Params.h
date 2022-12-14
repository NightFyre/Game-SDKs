#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function Damagers.RadialDamagerComponent.SetDamageRadius
	 */
	struct URadialDamagerComponent_SetDamageRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Damagers.RadialDamagerComponent.EndDamage
	 */
	struct URadialDamagerComponent_EndDamage_Params
	{	};

	/**
	 * Function Damagers.RadialDamagerComponent.BeginDamage
	 */
	struct URadialDamagerComponent_BeginDamage_Params
	{	};

	/**
	 * Function Damagers.ShockwaveDamagerInterface.StartShockwaveAtLocation
	 */
	struct UShockwaveDamagerInterface_StartShockwaveAtLocation_Params
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Damagers.ShockwaveDamagerInterface.StartShockwave
	 */
	struct UShockwaveDamagerInterface_StartShockwave_Params
	{	};

	/**
	 * Function Damagers.ShockwaveDamagerInterface.IgnoreGhostShip
	 */
	struct UShockwaveDamagerInterface_IgnoreGhostShip_Params
	{
	public:
		class AAggressiveGhostShip*                                Ship;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Damagers.ShockwaveDamagerInterface.GetShockwaveRadius
	 */
	struct UShockwaveDamagerInterface_GetShockwaveRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Damagers.ShockwaveDamagerInterface.GetShockwaveDuration
	 */
	struct UShockwaveDamagerInterface_GetShockwaveDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Damagers.ShockwaveDamagerComponent.Multi_StartShockwave
	 */
	struct UShockwaveDamagerComponent_Multi_StartShockwave_Params
	{
	public:
		struct FVector                                             InStartLocation;                                         // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Damagers.ShipDamagerComponent.SetShape
	 */
	struct UShipDamagerComponent_SetShape_Params
	{
	public:
		class UPrimitiveComponent*                                 InShape;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Damagers.ShipDamagerComponent.EndDamage
	 */
	struct UShipDamagerComponent_EndDamage_Params
	{	};

	/**
	 * Function Damagers.ShipDamagerComponent.BeginDamage
	 */
	struct UShipDamagerComponent_BeginDamage_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
