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
	 * Function Wind.WindZoneInterface.GetWindZoneParams
	 */
	struct UWindZoneInterface_GetWindZoneParams_Params
	{
	public:
		struct FWindZoneParams                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Wind.WindZoneInterface.GetWindZoneLocation
	 */
	struct UWindZoneInterface_GetWindZoneLocation_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wind.WindZoneInterface.GetTurbulence
	 */
	struct UWindZoneInterface_GetTurbulence_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FWindZoneTurbulence                                 ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Wind.WindInterface.UnregisterWindZone
	 */
	struct UWindInterface_UnregisterWindZone_Params
	{	};

	/**
	 * Function Wind.WindInterface.TriggerChange
	 */
	struct UWindInterface_TriggerChange_Params
	{
	public:
		bool                                                       ChangeInstantly;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wind.WindInterface.SetParams
	 */
	struct UWindInterface_SetParams_Params
	{
	public:
		struct FWindServiceParams                                  Params;                                                  // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Wind.WindInterface.SetGlobalWindVector
	 */
	struct UWindInterface_SetGlobalWindVector_Params
	{
	public:
		struct FVector                                             InWindVector;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wind.WindInterface.SetGlobalWindMagnitude
	 */
	struct UWindInterface_SetGlobalWindMagnitude_Params
	{
	public:
		float                                                      InWindMagnitude;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wind.WindInterface.SetGlobalWindDirection
	 */
	struct UWindInterface_SetGlobalWindDirection_Params
	{
	public:
		struct FVector                                             InWindDirection;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wind.WindInterface.SetGlobalWindAngle
	 */
	struct UWindInterface_SetGlobalWindAngle_Params
	{
	public:
		float                                                      InAngle;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wind.WindInterface.SetCustomMode
	 */
	struct UWindInterface_SetCustomMode_Params
	{
	public:
		bool                                                       InCustomMode;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wind.WindInterface.RegisterWindZone
	 */
	struct UWindInterface_RegisterWindZone_Params
	{	};

	/**
	 * Function Wind.WindInterface.GetWindZoneAtLocation
	 */
	struct UWindInterface_GetWindZoneAtLocation_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C5I9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Wind.WindInterface.GetWindVector
	 */
	struct UWindInterface_GetWindVector_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wind.WindInterface.GetWindMagnitude
	 */
	struct UWindInterface_GetWindMagnitude_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wind.WindInterface.GetWindDirection
	 */
	struct UWindInterface_GetWindDirection_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wind.WindInterface.GetWindAngle
	 */
	struct UWindInterface_GetWindAngle_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wind.WindInterface.GetTurbulenceForTrees
	 */
	struct UWindInterface_GetTurbulenceForTrees_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FWindZoneTurbulence                                 ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Wind.WindInterface.GetTurbulence
	 */
	struct UWindInterface_GetTurbulence_Params
	{
	public:
		struct FVector                                             SamplePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FWindZoneTurbulence                                 ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Wind.WindInterface.GetMaxWindMagnitude
	 */
	struct UWindInterface_GetMaxWindMagnitude_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wind.WindFunctions.SetDefaultWindBlowingNorth
	 */
	struct UWindFunctions_SetDefaultWindBlowingNorth_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Wind.WindFunctions.GetWindAtLocation
	 */
	struct UWindFunctions_GetWindAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldPosition;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wind.WindService.OnRep_WindMagnitude
	 */
	struct AWindService_OnRep_WindMagnitude_Params
	{	};

	/**
	 * Function Wind.WindService.OnRep_WindAngle
	 */
	struct AWindService_OnRep_WindAngle_Params
	{	};

	/**
	 * Function Wind.WindService.GetWindParams
	 */
	struct AWindService_GetWindParams_Params
	{
	public:
		struct FWindServiceParams                                  ReturnValue;                                             // 0x0000(0x0024)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
	 */
	struct UWindServiceParamsFunctionLibrary_AreWindServiceParamsEqual_Params
	{
	public:
		struct FWindServiceParams                                  Params1;                                                 // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FWindServiceParams                                  Params2;                                                 // 0x0024(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
