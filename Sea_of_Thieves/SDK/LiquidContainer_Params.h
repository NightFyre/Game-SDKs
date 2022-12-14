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
	 * Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel
	 */
	struct ULiquidContainerInterface_SetLiquidLevel_Params
	{
	public:
		float                                                      Level;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel
	 */
	struct ULiquidContainerInterface_GetWantedLiquidLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount
	 */
	struct ULiquidContainerInterface_GetMaxLiquidCollectionAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel
	 */
	struct ULiquidContainerInterface_GetLiquidLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount
	 */
	struct ULiquidContainerInterface_CollectLiquidAmount_Params
	{
	public:
		float                                                      DesiredAmount;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LiquidContainer.LiquidContainerComponent.SetLiquidType
	 */
	struct ULiquidContainerComponent_SetLiquidType_Params
	{
	public:
		ELiquidType                                                LiquidType;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel
	 */
	struct ULiquidContainerComponent_SetLiquidLevel_Params
	{
	public:
		float                                                      Level;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel
	 */
	struct ULiquidContainerComponent_GetLiquidLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials
	 */
	struct ULiquidContainerComponent_CollectLiquidMaterials_Params
	{
	public:
		class UMeshComponent*                                      MeshComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
