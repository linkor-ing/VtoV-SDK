#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: badSun

#include "Basic.hpp"


namespace SDK::Params
{

// Function badSun.badSun_C.ExecuteUbergraph_badSun
// 0x0038 (0x0038 - 0x0000)
struct badSun_C_ExecuteUbergraph_badSun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EE1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_badSun_C*                          CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EE2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EE3[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_2;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(badSun_C_ExecuteUbergraph_badSun) == 0x000008, "Wrong alignment on badSun_C_ExecuteUbergraph_badSun");
static_assert(sizeof(badSun_C_ExecuteUbergraph_badSun) == 0x000038, "Wrong size on badSun_C_ExecuteUbergraph_badSun");
static_assert(offsetof(badSun_C_ExecuteUbergraph_badSun, EntryPoint) == 0x000000, "Member 'badSun_C_ExecuteUbergraph_badSun::EntryPoint' has a wrong offset!");
static_assert(offsetof(badSun_C_ExecuteUbergraph_badSun, CallFunc_Create_ReturnValue) == 0x000008, "Member 'badSun_C_ExecuteUbergraph_badSun::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(badSun_C_ExecuteUbergraph_badSun, CallFunc_RandomFloatInRange_ReturnValue) == 0x000010, "Member 'badSun_C_ExecuteUbergraph_badSun::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(badSun_C_ExecuteUbergraph_badSun, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000018, "Member 'badSun_C_ExecuteUbergraph_badSun::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(badSun_C_ExecuteUbergraph_badSun, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'badSun_C_ExecuteUbergraph_badSun::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(badSun_C_ExecuteUbergraph_badSun, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000021, "Member 'badSun_C_ExecuteUbergraph_badSun::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(badSun_C_ExecuteUbergraph_badSun, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'badSun_C_ExecuteUbergraph_badSun::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(badSun_C_ExecuteUbergraph_badSun, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x000028, "Member 'badSun_C_ExecuteUbergraph_badSun::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(badSun_C_ExecuteUbergraph_badSun, CallFunc_getMainGamemode_AsMain_Gamemode_2) == 0x000030, "Member 'badSun_C_ExecuteUbergraph_badSun::CallFunc_getMainGamemode_AsMain_Gamemode_2' has a wrong offset!");

}

