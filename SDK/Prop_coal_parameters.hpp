#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_coal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_coal.prop_coal_C.ExecuteUbergraph_prop_coal
// 0x0070 (0x0070 - 0x0000)
struct Prop_coal_C_ExecuteUbergraph_prop_coal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlammable_C*                           CallFunc_AddComponent_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_damage;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_fuel;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        CallFunc_fireDamage_self_CastInput;                // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_coal_C_ExecuteUbergraph_prop_coal) == 0x000010, "Wrong alignment on Prop_coal_C_ExecuteUbergraph_prop_coal");
static_assert(sizeof(Prop_coal_C_ExecuteUbergraph_prop_coal) == 0x000070, "Wrong size on Prop_coal_C_ExecuteUbergraph_prop_coal");
static_assert(offsetof(Prop_coal_C_ExecuteUbergraph_prop_coal, EntryPoint) == 0x000000, "Member 'Prop_coal_C_ExecuteUbergraph_prop_coal::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_coal_C_ExecuteUbergraph_prop_coal, Temp_struct_Variable) == 0x000010, "Member 'Prop_coal_C_ExecuteUbergraph_prop_coal::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Prop_coal_C_ExecuteUbergraph_prop_coal, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'Prop_coal_C_ExecuteUbergraph_prop_coal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coal_C_ExecuteUbergraph_prop_coal, CallFunc_AddComponent_ReturnValue) == 0x000048, "Member 'Prop_coal_C_ExecuteUbergraph_prop_coal::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coal_C_ExecuteUbergraph_prop_coal, K2Node_Event_damage) == 0x000050, "Member 'Prop_coal_C_ExecuteUbergraph_prop_coal::K2Node_Event_damage' has a wrong offset!");
static_assert(offsetof(Prop_coal_C_ExecuteUbergraph_prop_coal, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000054, "Member 'Prop_coal_C_ExecuteUbergraph_prop_coal::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coal_C_ExecuteUbergraph_prop_coal, K2Node_Event_fuel) == 0x000058, "Member 'Prop_coal_C_ExecuteUbergraph_prop_coal::K2Node_Event_fuel' has a wrong offset!");
static_assert(offsetof(Prop_coal_C_ExecuteUbergraph_prop_coal, CallFunc_fireDamage_self_CastInput) == 0x000060, "Member 'Prop_coal_C_ExecuteUbergraph_prop_coal::CallFunc_fireDamage_self_CastInput' has a wrong offset!");

// Function prop_coal.prop_coal_C.ignite
// 0x0004 (0x0004 - 0x0000)
struct Prop_coal_C_Ignite final
{
public:
	float                                         Fuel;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_coal_C_Ignite) == 0x000004, "Wrong alignment on Prop_coal_C_Ignite");
static_assert(sizeof(Prop_coal_C_Ignite) == 0x000004, "Wrong size on Prop_coal_C_Ignite");
static_assert(offsetof(Prop_coal_C_Ignite, Fuel) == 0x000000, "Member 'Prop_coal_C_Ignite::Fuel' has a wrong offset!");

// Function prop_coal.prop_coal_C.fireDamage
// 0x0004 (0x0004 - 0x0000)
struct Prop_coal_C_FireDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_coal_C_FireDamage) == 0x000004, "Wrong alignment on Prop_coal_C_FireDamage");
static_assert(sizeof(Prop_coal_C_FireDamage) == 0x000004, "Wrong size on Prop_coal_C_FireDamage");
static_assert(offsetof(Prop_coal_C_FireDamage, Damage) == 0x000000, "Member 'Prop_coal_C_FireDamage::Damage' has a wrong offset!");

}
