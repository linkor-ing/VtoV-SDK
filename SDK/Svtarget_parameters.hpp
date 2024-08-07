#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Svtarget

#include "Basic.hpp"


namespace SDK::Params
{

// Function svtarget.svtarget_C.ExecuteUbergraph_svtarget
// 0x0040 (0x0040 - 0x0000)
struct Svtarget_C_ExecuteUbergraph_svtarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Svtarget_C_ExecuteUbergraph_svtarget) == 0x000008, "Wrong alignment on Svtarget_C_ExecuteUbergraph_svtarget");
static_assert(sizeof(Svtarget_C_ExecuteUbergraph_svtarget) == 0x000040, "Wrong size on Svtarget_C_ExecuteUbergraph_svtarget");
static_assert(offsetof(Svtarget_C_ExecuteUbergraph_svtarget, EntryPoint) == 0x000000, "Member 'Svtarget_C_ExecuteUbergraph_svtarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(Svtarget_C_ExecuteUbergraph_svtarget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Svtarget_C_ExecuteUbergraph_svtarget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Svtarget_C_ExecuteUbergraph_svtarget, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'Svtarget_C_ExecuteUbergraph_svtarget::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Svtarget_C_ExecuteUbergraph_svtarget, K2Node_CustomEvent_DestroyedActor) == 0x000020, "Member 'Svtarget_C_ExecuteUbergraph_svtarget::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(Svtarget_C_ExecuteUbergraph_svtarget, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000028, "Member 'Svtarget_C_ExecuteUbergraph_svtarget::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Svtarget_C_ExecuteUbergraph_svtarget, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x000030, "Member 'Svtarget_C_ExecuteUbergraph_svtarget::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(Svtarget_C_ExecuteUbergraph_svtarget, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'Svtarget_C_ExecuteUbergraph_svtarget::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Svtarget_C_ExecuteUbergraph_svtarget, CallFunc_Array_RemoveItem_ReturnValue) == 0x00003C, "Member 'Svtarget_C_ExecuteUbergraph_svtarget::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function svtarget.svtarget_C.Dest
// 0x0008 (0x0008 - 0x0000)
struct Svtarget_C_Dest final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Svtarget_C_Dest) == 0x000008, "Wrong alignment on Svtarget_C_Dest");
static_assert(sizeof(Svtarget_C_Dest) == 0x000008, "Wrong size on Svtarget_C_Dest");
static_assert(offsetof(Svtarget_C_Dest, DestroyedActor) == 0x000000, "Member 'Svtarget_C_Dest::DestroyedActor' has a wrong offset!");

}

