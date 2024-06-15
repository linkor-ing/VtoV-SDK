#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_eyers

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ticker_eyers.ticker_eyers_C.ExecuteUbergraph_ticker_eyers
// 0x00C0 (0x00C0 - 0x0000)
struct Ticker_eyers_C_ExecuteUbergraph_ticker_eyers final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F42[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInst_C*                            CallFunc_getMainGameInstance_AsGame_Inst;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F43[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F44[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F45[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_LowEntry_LocalVariable_Value__Object;       // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_ProjectPointToNavigation_ProjectedLocation; // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_ProjectPointToNavigation_ReturnValue;  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqualExactly_VectorVector_ReturnValue; // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F46[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F47[0xB];                                     // 0x0075(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEyer_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers) == 0x000010, "Wrong alignment on Ticker_eyers_C_ExecuteUbergraph_ticker_eyers");
static_assert(sizeof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers) == 0x0000C0, "Wrong size on Ticker_eyers_C_ExecuteUbergraph_ticker_eyers");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, EntryPoint) == 0x000000, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_RandomFloatInRange_ReturnValue) == 0x000004, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x00000C, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000010, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_getMainGameInstance_AsGame_Inst) == 0x000018, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_getMainGameInstance_AsGame_Inst' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000021, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_BooleanOR_ReturnValue) == 0x000022, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000023, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000028, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_BooleanOR_ReturnValue_1) == 0x00002C, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_RotateAngleAxis_ReturnValue) == 0x000030, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_BooleanAND_ReturnValue) == 0x00003C, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_Add_VectorVector_ReturnValue) == 0x000040, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, K2Node_LowEntry_LocalVariable_Value__Object) == 0x00004C, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::K2Node_LowEntry_LocalVariable_Value__Object' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_K2_ProjectPointToNavigation_ProjectedLocation) == 0x000058, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_K2_ProjectPointToNavigation_ProjectedLocation' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_K2_ProjectPointToNavigation_ReturnValue) == 0x000064, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_K2_ProjectPointToNavigation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_NotEqualExactly_VectorVector_ReturnValue) == 0x000065, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_NotEqualExactly_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000068, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_BooleanAND_ReturnValue_1) == 0x000074, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_eyers_C_ExecuteUbergraph_ticker_eyers, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B8, "Member 'Ticker_eyers_C_ExecuteUbergraph_ticker_eyers::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function ticker_eyers.ticker_eyers_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Ticker_eyers_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_eyers_C_ReceiveTick) == 0x000004, "Wrong alignment on Ticker_eyers_C_ReceiveTick");
static_assert(sizeof(Ticker_eyers_C_ReceiveTick) == 0x000004, "Wrong size on Ticker_eyers_C_ReceiveTick");
static_assert(offsetof(Ticker_eyers_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Ticker_eyers_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

