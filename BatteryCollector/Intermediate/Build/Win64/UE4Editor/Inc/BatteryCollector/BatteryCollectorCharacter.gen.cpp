// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BatteryCollectorCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorCharacter() {}
// Cross Module References
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABatteryCollectorCharacter_PowerChangeEffect = FName(TEXT("PowerChangeEffect"));
	void ABatteryCollectorCharacter::PowerChangeEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABatteryCollectorCharacter_PowerChangeEffect),NULL);
	}
	void ABatteryCollectorCharacter::StaticRegisterNativesABatteryCollectorCharacter()
	{
		UClass* Class = ABatteryCollectorCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CollectPickups", (Native)&ABatteryCollectorCharacter::execCollectPickups },
			{ "GetCurrentPower", (Native)&ABatteryCollectorCharacter::execGetCurrentPower },
			{ "GetInitialPower", (Native)&ABatteryCollectorCharacter::execGetInitialPower },
			{ "UpdatePower", (Native)&ABatteryCollectorCharacter::execUpdatePower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups()
	{
		UObject* Outer = Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CollectPickups"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickups"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when we press a key to collect any pickups inside the sphere"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower()
	{
		struct BatteryCollectorCharacter_eventGetCurrentPower_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(BatteryCollectorCharacter_eventGetCurrentPower_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorCharacter_eventGetCurrentPower_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("accessor function for current power"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower()
	{
		struct BatteryCollectorCharacter_eventGetInitialPower_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetInitialPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(BatteryCollectorCharacter_eventGetInitialPower_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorCharacter_eventGetInitialPower_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("accessor function for initial power"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect()
	{
		UObject* Outer = Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PowerChangeEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08080800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower()
	{
		struct BatteryCollectorCharacter_eventUpdatePower_Parms
		{
			float PowerChange;
		};
		UObject* Outer = Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdatePower"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(BatteryCollectorCharacter_eventUpdatePower_Parms));
			UProperty* NewProp_PowerChange = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PowerChange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PowerChange, BatteryCollectorCharacter_eventUpdatePower_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("function to update the characters power @param PowerChange amount to change the power by negativly or positivly"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister()
	{
		return ABatteryCollectorCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = ABatteryCollectorCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower());

				UProperty* NewProp_CharacterPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CharacterPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CharacterPower, ABatteryCollectorCharacter), 0x0040000000020001);
				UProperty* NewProp_BaseSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseSpeed, ABatteryCollectorCharacter), 0x0020080000000005);
				UProperty* NewProp_SpeedFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpeedFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpeedFactor, ABatteryCollectorCharacter), 0x0020080000000005);
				UProperty* NewProp_InitialPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitialPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InitialPower, ABatteryCollectorCharacter), 0x0020080000000005);
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, ABatteryCollectorCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, ABatteryCollectorCharacter), 0x0010000000020015);
				UProperty* NewProp_CollectionSphere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollectionSphere"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollectionSphere, ABatteryCollectorCharacter), 0x00400000000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, ABatteryCollectorCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ABatteryCollectorCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups(), "CollectPickups"); // 3361719169
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower(), "GetCurrentPower"); // 1259018945
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower(), "GetInitialPower"); // 3841388147
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect(), "PowerChangeEffect"); // 4165131443
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower(), "UpdatePower"); // 335285438
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABatteryCollectorCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_CharacterPower, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_CharacterPower, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_CharacterPower, TEXT("ToolTip"), TEXT("current power level of our character"));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("ToolTip"), TEXT("speed when the power level is 0"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("ToolTip"), TEXT("multiplier for the character speed"));
				MetaData->SetValue(NewProp_InitialPower, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_InitialPower, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_InitialPower, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_InitialPower, TEXT("ToolTip"), TEXT("the starting power level of our character"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("ToolTip"), TEXT("Collection sphere"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryCollectorCharacter, 736159751);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorCharacter(Z_Construct_UClass_ABatteryCollectorCharacter, &ABatteryCollectorCharacter::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ABatteryCollectorCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
