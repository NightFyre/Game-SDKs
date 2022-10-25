﻿#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Water.BuoyancyComponent
	 * Size -> 0x00F8 (FullSize[0x01A8] - InheritedSize[0x00B0])
	 */
	class UBuoyancyComponent : public UActorComponent
	{
	public:
		TArray<struct FSphericalPontoon>                           Pontoons;                                                // 0x00B0(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnteredWaterDelegate;                                  // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitedWaterDelegate;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FBuoyancyData                                       BuoyancyData;                                            // 0x00E0(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class AWaterBody*>                                  CurrentWaterBodies;                                      // 0x0130(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UPrimitiveComponent*                                 SimulatingComponent;                                     // 0x0140(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7ATZ[0x60];                                  // 0x0148(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon);
		void OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon);
		bool IsInWaterBody();
		void GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32_t* OutWaterBodyIdx, struct FVector* OutWaterVelocity);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.ConvertWaterBodyActorsCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UConvertWaterBodyActorsCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.EnvQueryTest_InsideWaterBody
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
	{
	public:
		bool                                                       bIncludeWaves;                                           // 0x01F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimpleWaves;                                            // 0x01F9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreExclusionVolumes;                                 // 0x01FA(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QER4[0x5];                                   // 0x01FB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaveGeneratorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGerstnerWaterWaveGeneratorBase : public UObject
	{
	public:
		void GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaveGeneratorSimple
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
	{
	public:
		int32_t                                                    NumWaves;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Randomness;                                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWavelength;                                           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWavelength;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WavelengthFalloff;                                       // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAmplitude;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAmplitude;                                            // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmplitudeFalloff;                                        // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindAngleDeg;                                            // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionAngularSpreadDeg;                               // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmallWaveSteepness;                                      // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LargeWaveSteepness;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SteepnessFalloff;                                        // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaveGeneratorSpectrum
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
	{
	public:
		EWaveSpectrumType                                          SpectrumType;                                            // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5HS[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGerstnerWaveOctave>                         Octaves;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterWavesBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterWavesBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterWaves
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterWaves : public UWaterWavesBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaves
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGerstnerWaterWaves : public UWaterWaves
	{
	public:
		class UGerstnerWaterWaveGeneratorBase*                     GerstnerWaveGenerator;                                   // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGerstnerWave>                               GerstnerWaves;                                           // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      MaxWaveHeight;                                           // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N5AT[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.GerstnerWaterWaveSubsystem
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_BA8C[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.LakeCollisionComponent
	 * Size -> 0x0020 (FullSize[0x0460] - InheritedSize[0x0440])
	 */
	class ULakeCollisionComponent : public UPrimitiveComponent
	{
	public:
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             BoxExtent;                                               // 0x0448(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5QIT[0xC];                                   // 0x0454(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.NiagaraDataInterfaceWater
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
	{
	public:
		class AWaterBody*                                          SourceBody;                                              // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.NiagaraWaterFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody);
		static UClass* StaticClass();
	};

	/**
	 * Class Water.OceanCollisionComponent
	 * Size -> 0x0030 (FullSize[0x0470] - InheritedSize[0x0440])
	 */
	class UOceanCollisionComponent : public UPrimitiveComponent
	{
	public:
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IFE9[0x28];                                  // 0x0448(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.OceanBoxCollisionComponent
	 * Size -> 0x0000 (FullSize[0x0470] - InheritedSize[0x0470])
	 */
	class UOceanBoxCollisionComponent : public UBoxComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBody
	 * Size -> 0x0BB0 (FullSize[0x0DD0] - InheritedSize[0x0220])
	 */
	class AWaterBody : public AActor
	{
	public:
		unsigned char                                              UnknownData_GFNR[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetWaveMaskDepth;                                     // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWaveHeightOffset;                                     // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WaterBodyIndex;                                          // 0x0240(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillCollisionUnderWaterBodiesForNavmesh;                // 0x0244(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRE0[0xB];                                   // 0x0245(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUnderwaterPostProcessSettings                      UnderwaterPostProcessSettings;                           // 0x0250(0x0570) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EWaterBodyType                                             WaterBodyType;                                           // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN4G[0x7];                                   // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWaterCurveSettings                                 CurveSettings;                                           // 0x07C8(0x0020) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  WaterMaterial;                                           // 0x07E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  UnderwaterPostProcessMaterial;                           // 0x07F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsLandscape;                                       // 0x07F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateCollisions;                                     // 0x07F9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideWaterMesh;                                      // 0x07FA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4GGC[0x5];                                   // 0x07FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         WaterMeshOverride;                                       // 0x0800(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    OverlapMaterialPriority;                                 // 0x0808(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                CollisionProfileName;                                    // 0x080C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4461[0x4];                                   // 0x0814(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWaterSplineComponent*                               SplineComp;                                              // 0x0818(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWaterSplineMetadata*                                WaterSplineMetadata;                                     // 0x0820(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            WaterMID;                                                // 0x0828(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            UnderwaterPostProcessMID;                                // 0x0830(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<TLazyObjectPtr<class AWaterBodyIsland>>             Islands;                                                 // 0x0838(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<TLazyObjectPtr<class AWaterBodyExclusionVolume>>    ExclusionVolumes;                                        // 0x0848(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TWeakObjectPtr<class ALandscapeProxy>                      Landscape;                                               // 0x0858(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPostProcessSettings                                CurrentPostProcessSettings;                              // 0x0860(0x0550) Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       bCanAffectNavigation;                                    // 0x0DB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EXJD[0x7];                                   // 0x0DB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WaterNavAreaClass;                                       // 0x0DB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWaterWavesBase*                                     WaterWaves;                                              // 0x0DC0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasWaveSpectrumSettings;                                // 0x0DC8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasTerrainCarvingSettingsSettings;                      // 0x0DC9(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G51J[0x6];                                   // 0x0DCA(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
		void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
		class UWaterSplineComponent* GetWaterSpline();
		class UMaterialInstanceDynamic* GetWaterMaterialInstance();
		class UMaterialInterface* GetWaterMaterial();
		class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
		class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
		class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
		float GetMaxWaveHeight();
		TArray<class AWaterBodyIsland*> GetIslands();
		TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterBodyGenerator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.CustomMeshGenerator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCustomMeshGenerator : public UWaterBodyGenerator
	{
	public:
		class UStaticMeshComponent*                                MeshComp;                                                // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyCustom
	 * Size -> 0x0010 (FullSize[0x0DE0] - InheritedSize[0x0DD0])
	 */
	class AWaterBodyCustom : public AWaterBody
	{
	public:
		class UCustomMeshGenerator*                                CustomGenerator;                                         // 0x0DD0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QWGU[0x8];                                   // 0x0DD8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyExclusionVolume
	 * Size -> 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
	 */
	class AWaterBodyExclusionVolume : public APhysicsVolume
	{
	public:
		bool                                                       bIgnoreAllOverlappingWaterBodies;                        // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAGK[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AWaterBody*>                                  WaterBodiesToIgnore;                                     // 0x0270(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyIsland
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AWaterBodyIsland : public AActor
	{
	public:
		unsigned char                                              UnknownData_PEBZ[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWaterSplineComponent*                               SplineComp;                                              // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UWaterSplineComponent* GetWaterSpline();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.LakeGenerator
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULakeGenerator : public UWaterBodyGenerator
	{
	public:
		class UStaticMeshComponent*                                LakeMeshComp;                                            // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       LakeCollisionComp;                                       // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULakeCollisionComponent*                             LakeCollision;                                           // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyLake
	 * Size -> 0x0010 (FullSize[0x0DE0] - InheritedSize[0x0DD0])
	 */
	class AWaterBodyLake : public AWaterBody
	{
	public:
		class ULakeGenerator*                                      LakeGenerator;                                           // 0x0DD0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_71P6[0x8];                                   // 0x0DD8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.OceanGenerator
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOceanGenerator : public UWaterBodyGenerator
	{
	public:
		TArray<class UOceanBoxCollisionComponent*>                 CollisionBoxes;                                          // 0x0028(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate
		TArray<class UOceanCollisionComponent*>                    CollisionHullSets;                                       // 0x0038(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyOcean
	 * Size -> 0x0020 (FullSize[0x0DF0] - InheritedSize[0x0DD0])
	 */
	class AWaterBodyOcean : public AWaterBody
	{
	public:
		class UOceanGenerator*                                     OceanGenerator;                                          // 0x0DD0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             CollisionExtents;                                        // 0x0DD8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeightOffset;                                            // 0x0DE4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LW40[0x8];                                   // 0x0DE8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.RiverGenerator
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URiverGenerator : public UWaterBodyGenerator
	{
	public:
		TArray<class USplineMeshComponent*>                        SplineMeshComponents;                                    // 0x0028(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBodyRiver
	 * Size -> 0x0030 (FullSize[0x0E00] - InheritedSize[0x0DD0])
	 */
	class AWaterBodyRiver : public AWaterBody
	{
	public:
		class URiverGenerator*                                     RiverGenerator;                                          // 0x0DD0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  LakeTransitionMaterial;                                  // 0x0DD8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            LakeTransitionMID;                                       // 0x0DE0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OceanTransitionMaterial;                                 // 0x0DE8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            OceanTransitionMID;                                      // 0x0DF0(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RY1L[0x8];                                   // 0x0DF8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterBrushActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWaterBrushActorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterMeshActor
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AWaterMeshActor : public AActor
	{
	public:
		class UTexture2D*                                          WaterVelocityTexture;                                    // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWaterMeshComponent*                                 WaterMesh;                                               // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterMeshComponent
	 * Size -> 0x0128 (FullSize[0x0590] - InheritedSize[0x0468])
	 */
	class UWaterMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_AOCA[0x4];                                   // 0x0468(0x0004) Fix Super Size
		float                                                      TileSize;                                                // 0x046C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           ExtentInTiles;                                           // 0x0470(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  FarDistanceMaterial;                                     // 0x0478(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarDistanceMeshExtent;                                   // 0x0480(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RTWorldLocation;                                         // 0x0484(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RTWorldSizeVector;                                       // 0x0490(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDWY[0xE4];                                  // 0x049C(0x00E4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TessellationFactor;                                      // 0x0580(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LODScale;                                                // 0x0584(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KAIN[0x8];                                   // 0x0588(0x0008) MISSED OFFSET (PADDING)

	public:
		bool IsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterRuntimeSettings
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UWaterRuntimeSettings : public UDeveloperSettings
	{
	public:
		ECollisionChannel                                          CollisionChannelForWaterTraces;                          // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WO3I[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MaterialParameterCollection[0x28];                       // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      WaterBodyIconWorldSize;                                  // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterBodyIconWorldZOffset;                               // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultWaterCollisionProfileName;                        // 0x0070(0x0008) Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterSplineComponent
	 * Size -> 0x0028 (FullSize[0x0560] - InheritedSize[0x0538])
	 */
	class UWaterSplineComponent : public USplineComponent
	{
	public:
		struct FWaterSplineCurveDefaults                           WaterSplineDefaults;                                     // 0x0538(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FWaterSplineCurveDefaults                           PreviousWaterSplineDefaults;                             // 0x0548(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G04T[0x8];                                   // 0x0558(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterSplineMetadata
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UWaterSplineMetadata : public USplineMetadata
	{
	public:
		struct FInterpCurveFloat                                   Depth;                                                   // 0x0028(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveFloat                                   WaterVelocityScalar;                                     // 0x0040(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveFloat                                   RiverWidth;                                              // 0x0058(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveFloat                                   AudioIntensity;                                          // 0x0070(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveVector                                  WaterVelocity;                                           // 0x0088(0x0018) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterSubsystem
	 * Size -> 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
	 */
	class UWaterSubsystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_HBBU[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCameraUnderwaterStateChanged;                          // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWaterScalabilityChanged;                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UStaticMesh*                                         DefaultRiverMesh;                                        // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         DefaultLakeMesh;                                         // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AWaterMeshActor*                                     WaterMeshActor;                                          // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5VKQ[0x28];                                  // 0x00A8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialParameterCollection*                        MaterialParameterCollection;                             // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0S3M[0x20];                                  // 0x00D8(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetOceanFloodHeight(float InFloodHeight);
		void PrintToWaterLog(const class FString& Message, bool bWarning);
		bool IsWaterRenderingEnabled();
		bool IsUnderwaterPostProcessEnabled();
		bool IsShallowWaterSimulationEnabled();
		float GetWaterTimeSeconds();
		float GetSmoothedWorldTimeSeconds();
		int32_t GetShallowWaterSimulationRenderTargetSize();
		int32_t GetShallowWaterMaxImpulseForces();
		int32_t GetShallowWaterMaxDynamicForces();
		float GetOceanTotalHeight();
		float GetOceanFloodHeight();
		float GetOceanBaseHeight();
		float GetCameraUnderwaterDepth();
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterWavesAsset
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UWaterWavesAsset : public UObject
	{
	public:
		class UWaterWaves*                                         WaterWaves;                                              // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Water.WaterWavesAssetReference
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UWaterWavesAssetReference : public UWaterWavesBase
	{
	public:
		class UWaterWavesAsset*                                    WaterWavesAsset;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
