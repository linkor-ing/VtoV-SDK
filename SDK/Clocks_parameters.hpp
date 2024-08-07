#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Clocks

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function clocks.clocks_C.ExecuteUbergraph_clocks
// 0x0078 (0x0078 - 0x0000)
struct Clocks_C_ExecuteUbergraph_clocks final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue_1;         // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Clocks_C_ExecuteUbergraph_clocks) == 0x000008, "Wrong alignment on Clocks_C_ExecuteUbergraph_clocks");
static_assert(sizeof(Clocks_C_ExecuteUbergraph_clocks) == 0x000078, "Wrong size on Clocks_C_ExecuteUbergraph_clocks");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, EntryPoint) == 0x000000, "Member 'Clocks_C_ExecuteUbergraph_clocks::EntryPoint' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, Temp_object_Variable) == 0x000008, "Member 'Clocks_C_ExecuteUbergraph_clocks::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, Temp_object_Variable_1) == 0x000010, "Member 'Clocks_C_ExecuteUbergraph_clocks::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'Clocks_C_ExecuteUbergraph_clocks::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000020, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000028, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000030, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000038, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000040, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_Add_FloatFloat_ReturnValue) == 0x000044, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, Temp_bool_Variable) == 0x000048, "Member 'Clocks_C_ExecuteUbergraph_clocks::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_Percent_FloatFloat_ReturnValue) == 0x00004C, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000050, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, K2Node_Select_Default) == 0x000058, "Member 'Clocks_C_ExecuteUbergraph_clocks::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000060, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_Percent_FloatFloat_ReturnValue_1) == 0x000064, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_Percent_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x000068, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(Clocks_C_ExecuteUbergraph_clocks, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'Clocks_C_ExecuteUbergraph_clocks::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function clocks.clocks_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Clocks_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Clocks_C_ReceiveTick) == 0x000004, "Wrong alignment on Clocks_C_ReceiveTick");
static_assert(sizeof(Clocks_C_ReceiveTick) == 0x000004, "Wrong size on Clocks_C_ReceiveTick");
static_assert(offsetof(Clocks_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Clocks_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function clocks.clocks_C.lookAt
// 0x0188 (0x0188 - 0x0000)
struct Clocks_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Number;                                            // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           Days;                                              // 0x00B8(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00E0(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0140(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Clocks_C_LookAt) == 0x000008, "Wrong alignment on Clocks_C_LookAt");
static_assert(sizeof(Clocks_C_LookAt) == 0x000188, "Wrong size on Clocks_C_LookAt");
static_assert(offsetof(Clocks_C_LookAt, Player) == 0x000000, "Member 'Clocks_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, Param_Hit) == 0x000008, "Member 'Clocks_C_LookAt::Param_Hit' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, Return) == 0x000090, "Member 'Clocks_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, Text) == 0x000098, "Member 'Clocks_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Clocks_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, Number) == 0x0000B0, "Member 'Clocks_C_LookAt::Number' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, Days) == 0x0000B8, "Member 'Clocks_C_LookAt::Days' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, K2Node_MakeArray_Array) == 0x0000C8, "Member 'Clocks_C_LookAt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x0000D8, "Member 'Clocks_C_LookAt::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000E0, "Member 'Clocks_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_Add_IntInt_ReturnValue) == 0x0000F8, "Member 'Clocks_C_LookAt::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x000100, "Member 'Clocks_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_Conv_IntToString_ReturnValue) == 0x000110, "Member 'Clocks_C_LookAt::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_Concat_StrStr_ReturnValue) == 0x000120, "Member 'Clocks_C_LookAt::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000130, "Member 'Clocks_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_Array_Get_Item) == 0x000140, "Member 'Clocks_C_LookAt::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000158, "Member 'Clocks_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000168, "Member 'Clocks_C_LookAt::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Clocks_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000178, "Member 'Clocks_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");

}

