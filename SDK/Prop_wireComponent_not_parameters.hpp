#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_not

#include "Basic.hpp"


namespace SDK::Params
{

// Function prop_wireComponent_not.prop_wireComponent_not_C.ExecuteUbergraph_prop_wireComponent_not
// 0x0038 (0x0038 - 0x0000)
struct Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D46[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_Event_wire_2;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWire_C*                                K2Node_Event_wire_1;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_side_1;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D47[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_Event_wire;                                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_side;                                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D48[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not) == 0x000008, "Wrong alignment on Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not");
static_assert(sizeof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not) == 0x000038, "Wrong size on Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, EntryPoint) == 0x000000, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, K2Node_Event_wire_2) == 0x000008, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::K2Node_Event_wire_2' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, K2Node_Event_wire_1) == 0x000010, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::K2Node_Event_wire_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, K2Node_Event_side_1) == 0x000018, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::K2Node_Event_side_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, K2Node_Event_wire) == 0x000020, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::K2Node_Event_wire' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, K2Node_Event_side) == 0x000028, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::K2Node_Event_side' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, K2Node_Event_DeltaSeconds) == 0x00002C, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000031, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not, CallFunc_IsValid_ReturnValue_1) == 0x000032, "Member 'Prop_wireComponent_not_C_ExecuteUbergraph_prop_wireComponent_not::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function prop_wireComponent_not.prop_wireComponent_not_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_wireComponent_not_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_not_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_wireComponent_not_C_ReceiveTick");
static_assert(sizeof(Prop_wireComponent_not_C_ReceiveTick) == 0x000004, "Wrong size on Prop_wireComponent_not_C_ReceiveTick");
static_assert(offsetof(Prop_wireComponent_not_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_wireComponent_not_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_wireComponent_not.prop_wireComponent_not_C.wireDisconnected
// 0x0010 (0x0010 - 0x0000)
struct Prop_wireComponent_not_C_WireDisconnected final
{
public:
	class AWire_C*                                Param_Wire;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Side;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_wireComponent_not_C_WireDisconnected) == 0x000008, "Wrong alignment on Prop_wireComponent_not_C_WireDisconnected");
static_assert(sizeof(Prop_wireComponent_not_C_WireDisconnected) == 0x000010, "Wrong size on Prop_wireComponent_not_C_WireDisconnected");
static_assert(offsetof(Prop_wireComponent_not_C_WireDisconnected, Param_Wire) == 0x000000, "Member 'Prop_wireComponent_not_C_WireDisconnected::Param_Wire' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_WireDisconnected, Side) == 0x000008, "Member 'Prop_wireComponent_not_C_WireDisconnected::Side' has a wrong offset!");

// Function prop_wireComponent_not.prop_wireComponent_not_C.wireConnected
// 0x0010 (0x0010 - 0x0000)
struct Prop_wireComponent_not_C_WireConnected final
{
public:
	class AWire_C*                                Param_Wire;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Side;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_wireComponent_not_C_WireConnected) == 0x000008, "Wrong alignment on Prop_wireComponent_not_C_WireConnected");
static_assert(sizeof(Prop_wireComponent_not_C_WireConnected) == 0x000010, "Wrong size on Prop_wireComponent_not_C_WireConnected");
static_assert(offsetof(Prop_wireComponent_not_C_WireConnected, Param_Wire) == 0x000000, "Member 'Prop_wireComponent_not_C_WireConnected::Param_Wire' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_not_C_WireConnected, Side) == 0x000008, "Member 'Prop_wireComponent_not_C_WireConnected::Side' has a wrong offset!");

// Function prop_wireComponent_not.prop_wireComponent_not_C.wirePass
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireComponent_not_C_WirePass final
{
public:
	class AWire_C*                                Param_Wire;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_not_C_WirePass) == 0x000008, "Wrong alignment on Prop_wireComponent_not_C_WirePass");
static_assert(sizeof(Prop_wireComponent_not_C_WirePass) == 0x000008, "Wrong size on Prop_wireComponent_not_C_WirePass");
static_assert(offsetof(Prop_wireComponent_not_C_WirePass, Param_Wire) == 0x000000, "Member 'Prop_wireComponent_not_C_WirePass::Param_Wire' has a wrong offset!");

}

