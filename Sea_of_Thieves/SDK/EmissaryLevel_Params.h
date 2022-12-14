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
	 * Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay
	 */
	struct UEmissaryActiveTableVisualiserComponent_OnControllerEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel
	 */
	struct UEmissaryParticipantComponent_OnRep_EmissaryLevel_Params
	{	};

	/**
	 * Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany
	 */
	struct UEmissaryParticipantComponent_OnRep_AffiliatedCompany_Params
	{
	public:
		class FName                                                PreviousId;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount
	 */
	struct UEmissaryShipAffiliationTrackerComponent_OnRep_EmissaryCount_Params
	{	};

	/**
	 * Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes
	 */
	struct UEmissaryVoyageInlineVoteConsumerBase_OnRep_Votes_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
