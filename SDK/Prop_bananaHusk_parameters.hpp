#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bananaHusk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_bananaHusk.prop_bananaHusk_C.ExecuteUbergraph_prop_bananaHusk
// 0x00C8 (0x00C8 - 0x0000)
struct Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk) == 0x000008, "Wrong alignment on Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk");
static_assert(sizeof(Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk) == 0x0000C8, "Wrong size on Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk");
static_assert(offsetof(Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk, EntryPoint) == 0x000000, "Member 'Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk, K2Node_Event_player) == 0x000008, "Member 'Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk, K2Node_Event_hit) == 0x000010, "Member 'Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk, CallFunc_GetActorForwardVector_ReturnValue) == 0x000098, "Member 'Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000A4, "Member 'Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000B0, "Member 'Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0000BC, "Member 'Prop_bananaHusk_C_ExecuteUbergraph_prop_bananaHusk::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");

// Function prop_bananaHusk.prop_bananaHusk_C.steppedOn
// 0x0090 (0x0090 - 0x0000)
struct Prop_bananaHusk_C_SteppedOn final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_bananaHusk_C_SteppedOn) == 0x000008, "Wrong alignment on Prop_bananaHusk_C_SteppedOn");
static_assert(sizeof(Prop_bananaHusk_C_SteppedOn) == 0x000090, "Wrong size on Prop_bananaHusk_C_SteppedOn");
static_assert(offsetof(Prop_bananaHusk_C_SteppedOn, Player) == 0x000000, "Member 'Prop_bananaHusk_C_SteppedOn::Player' has a wrong offset!");
static_assert(offsetof(Prop_bananaHusk_C_SteppedOn, Param_Hit) == 0x000008, "Member 'Prop_bananaHusk_C_SteppedOn::Param_Hit' has a wrong offset!");

}

