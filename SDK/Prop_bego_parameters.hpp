#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bego

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_bego.prop_bego_C.ExecuteUbergraph_prop_bego
// 0x00C0 (0x00C0 - 0x0000)
struct Prop_bego_C_ExecuteUbergraph_prop_bego final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_bego_C_ExecuteUbergraph_prop_bego) == 0x000008, "Wrong alignment on Prop_bego_C_ExecuteUbergraph_prop_bego");
static_assert(sizeof(Prop_bego_C_ExecuteUbergraph_prop_bego) == 0x0000C0, "Wrong size on Prop_bego_C_ExecuteUbergraph_prop_bego");
static_assert(offsetof(Prop_bego_C_ExecuteUbergraph_prop_bego, EntryPoint) == 0x000000, "Member 'Prop_bego_C_ExecuteUbergraph_prop_bego::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_bego_C_ExecuteUbergraph_prop_bego, CallFunc_MakeVector_ReturnValue) == 0x000004, "Member 'Prop_bego_C_ExecuteUbergraph_prop_bego::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_bego_C_ExecuteUbergraph_prop_bego, K2Node_Event_player) == 0x000010, "Member 'Prop_bego_C_ExecuteUbergraph_prop_bego::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_bego_C_ExecuteUbergraph_prop_bego, K2Node_Event_hit) == 0x000018, "Member 'Prop_bego_C_ExecuteUbergraph_prop_bego::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_bego_C_ExecuteUbergraph_prop_bego, CallFunc_GetVelocity_ReturnValue) == 0x0000A0, "Member 'Prop_bego_C_ExecuteUbergraph_prop_bego::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_bego_C_ExecuteUbergraph_prop_bego, CallFunc_VSize_ReturnValue) == 0x0000AC, "Member 'Prop_bego_C_ExecuteUbergraph_prop_bego::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_bego_C_ExecuteUbergraph_prop_bego, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000B0, "Member 'Prop_bego_C_ExecuteUbergraph_prop_bego::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_bego_C_ExecuteUbergraph_prop_bego, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000B4, "Member 'Prop_bego_C_ExecuteUbergraph_prop_bego::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_bego_C_ExecuteUbergraph_prop_bego, CallFunc_FMin_ReturnValue) == 0x0000B8, "Member 'Prop_bego_C_ExecuteUbergraph_prop_bego::CallFunc_FMin_ReturnValue' has a wrong offset!");

// Function prop_bego.prop_bego_C.steppedOn
// 0x0090 (0x0090 - 0x0000)
struct Prop_bego_C_SteppedOn final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_bego_C_SteppedOn) == 0x000008, "Wrong alignment on Prop_bego_C_SteppedOn");
static_assert(sizeof(Prop_bego_C_SteppedOn) == 0x000090, "Wrong size on Prop_bego_C_SteppedOn");
static_assert(offsetof(Prop_bego_C_SteppedOn, Player) == 0x000000, "Member 'Prop_bego_C_SteppedOn::Player' has a wrong offset!");
static_assert(offsetof(Prop_bego_C_SteppedOn, Param_Hit) == 0x000008, "Member 'Prop_bego_C_SteppedOn::Param_Hit' has a wrong offset!");

}

