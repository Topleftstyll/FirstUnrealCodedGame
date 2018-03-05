// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BatteryCollectorGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorGameMode() {}
// Cross Module References
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ABatteryCollectorGameMode::StaticRegisterNativesABatteryCollectorGameMode()
	{
		UClass* Class = ABatteryCollectorGameMode::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetPowerToWin", (Native)&ABatteryCollectorGameMode::execGetPowerToWin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin()
	{
		struct BatteryCollectorGameMode_eventGetPowerToWin_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ABatteryCollectorGameMode();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPowerToWin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(BatteryCollectorGameMode_eventGetPowerToWin_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorGameMode_eventGetPowerToWin_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("returns power needed to win for the hud"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister()
	{
		return ABatteryCollectorGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = ABatteryCollectorGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin());

				UProperty* NewProp_CurrentWidget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentWidget, ABatteryCollectorGameMode), 0x0020080000080008, Z_Construct_UClass_UUserWidget_NoRegister());
				UProperty* NewProp_HUDWidgetClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HUDWidgetClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(HUDWidgetClass, ABatteryCollectorGameMode), 0x0024080000010005, Z_Construct_UClass_UUserWidget_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_PowerToWin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PowerToWin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PowerToWin, ABatteryCollectorGameMode), 0x0020080000010005);
				UProperty* NewProp_DecayRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DecayRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DecayRate, ABatteryCollectorGameMode), 0x0020080000010005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin(), "GetPowerToWin"); // 42742538
				static TCppClassTypeInfo<TCppClassTypeTraits<ABatteryCollectorGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("ToolTip"), TEXT("the instance of the hud"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("BlueprintProtected"), TEXT("True"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("ToolTip"), TEXT("the widget class to use for our hud screen"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("BlueprintProtected"), TEXT("True"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("ToolTip"), TEXT("power needed to win the game"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("BlueprintProtected"), TEXT("True"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("ToolTip"), TEXT("the rate at which the character loses power"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryCollectorGameMode, 2950221771);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorGameMode(Z_Construct_UClass_ABatteryCollectorGameMode, &ABatteryCollectorGameMode::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ABatteryCollectorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
