#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_wispSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ticker_wispSpawner.ticker_wispSpawner_C.ExecuteUbergraph_ticker_wispSpawner
// 0x00C0 (0x00C0 - 0x0000)
struct Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInst_C*                            CallFunc_getMainGameInstance_AsGame_Inst;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RandomBool_ReturnValue_1;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 CallFunc_Map_Values_Values;                        // 0x0048(0x0010)(ReferenceParm)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_weightedRandomV2_index;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         CallFunc_Map_Keys_Keys;                            // 0x0098(0x0010)(ReferenceParm)
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner) == 0x000010, "Wrong alignment on Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner");
static_assert(sizeof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner) == 0x0000C0, "Wrong size on Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, EntryPoint) == 0x000000, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_getMainGameInstance_AsGame_Inst) == 0x000008, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_getMainGameInstance_AsGame_Inst' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_RandomBool_ReturnValue) == 0x000010, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_RandomFloatInRange_ReturnValue) == 0x000014, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00001C, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000020, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_SelectFloat_ReturnValue) == 0x000024, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_BooleanOR_ReturnValue) == 0x000028, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_RandomBool_ReturnValue_1) == 0x000029, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_RandomBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x00002C, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000030, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000034, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_SelectFloat_ReturnValue_1) == 0x000038, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_MakeVector_ReturnValue) == 0x00003C, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_Map_Values_Values) == 0x000048, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_weightedRandomV2_index) == 0x000090, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_weightedRandomV2_index' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_Map_Keys_Keys) == 0x000098, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B8, "Member 'Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function ticker_wispSpawner.ticker_wispSpawner_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Ticker_wispSpawner_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_wispSpawner_C_ReceiveTick) == 0x000004, "Wrong alignment on Ticker_wispSpawner_C_ReceiveTick");
static_assert(sizeof(Ticker_wispSpawner_C_ReceiveTick) == 0x000004, "Wrong size on Ticker_wispSpawner_C_ReceiveTick");
static_assert(offsetof(Ticker_wispSpawner_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Ticker_wispSpawner_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

