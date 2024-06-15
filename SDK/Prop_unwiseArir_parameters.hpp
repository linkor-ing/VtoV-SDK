#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_unwiseArir

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_unwiseArir.prop_unwiseArir_C.ExecuteUbergraph_prop_unwiseArir
// 0x02B0 (0x02B0 - 0x0000)
struct Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38E1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         K2Node_Event_index;                                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38E2[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38E3[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x00D4(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_38E4[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0160(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsProp_Varg;               // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38E5[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsProp_Food_Shrimp;        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38E6[0x3];                                     // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorBounds_Origin;                    // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;                 // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player_1;            // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x01F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue;              // 0x0218(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38E7[0x3];                                     // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x022C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_Origin_1;                  // 0x0234(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_BoxExtent_1;               // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x024C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0258(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0264(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0270(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_varg_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir) == 0x000010, "Wrong alignment on Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir");
static_assert(sizeof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir) == 0x0002B0, "Wrong size on Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, EntryPoint) == 0x000000, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_Event_player) == 0x000008, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_Event_hit) == 0x000010, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_Event_index) == 0x000098, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_Event_action) == 0x00009C, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_SwitchEnum_CmpSuccess) == 0x00009D, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, Temp_int_Variable) == 0x0000A0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000A4, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A8, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x0000AC, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_ComponentBoundEvent_HitComponent) == 0x0000B0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_ComponentBoundEvent_OtherActor) == 0x0000B8, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_ComponentBoundEvent_OtherComp) == 0x0000C0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0000C8, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_ComponentBoundEvent_Hit) == 0x0000D4, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_GetTransform_ReturnValue) == 0x000160, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000190, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_GetObjectClass_ReturnValue) == 0x000198, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001A0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_ClassDynamicCast_AsProp_Varg) == 0x0001A8, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_ClassDynamicCast_AsProp_Varg' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_ClassDynamicCast_bSuccess) == 0x0001B0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_ClassDynamicCast_AsProp_Food_Shrimp) == 0x0001B8, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_ClassDynamicCast_AsProp_Food_Shrimp' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, K2Node_ClassDynamicCast_bSuccess_1) == 0x0001C0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_GetActorBounds_Origin) == 0x0001C4, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_GetActorBounds_BoxExtent) == 0x0001D0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_Add_IntInt_ReturnValue) == 0x0001DC, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_getMainPlayer_AsMain_Player) == 0x0001E0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_getMainPlayer_AsMain_Player_1) == 0x0001E8, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_getMainPlayer_AsMain_Player_1' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0001F0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001FC, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000208, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_GetDistanceTo_ReturnValue) == 0x000214, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_SetVectorLength_ReturnValue) == 0x000218, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_SetVectorLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_Less_FloatFloat_ReturnValue) == 0x000224, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_RandomFloatInRange_ReturnValue) == 0x000228, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, Temp_name_Variable) == 0x00022C, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_GetActorBounds_Origin_1) == 0x000234, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_GetActorBounds_Origin_1' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_GetActorBounds_BoxExtent_1) == 0x000240, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_GetActorBounds_BoxExtent_1' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_RandomUnitVector_ReturnValue) == 0x00024C, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000258, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_Add_VectorVector_ReturnValue) == 0x000264, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_MakeTransform_ReturnValue) == 0x000270, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0002A0, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0002A8, "Member 'Prop_unwiseArir_C_ExecuteUbergraph_prop_unwiseArir::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");

// Function prop_unwiseArir.prop_unwiseArir_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_unwiseArir_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Param_Index;                                       // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       Action;                                            // 0x0094(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_unwiseArir_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_unwiseArir_C_ActionOptionIndex");
static_assert(sizeof(Prop_unwiseArir_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_unwiseArir_C_ActionOptionIndex");
static_assert(offsetof(Prop_unwiseArir_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_unwiseArir_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ActionOptionIndex, Param_Hit) == 0x000008, "Member 'Prop_unwiseArir_C_ActionOptionIndex::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ActionOptionIndex, Param_Index) == 0x000090, "Member 'Prop_unwiseArir_C_ActionOptionIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_ActionOptionIndex, Action) == 0x000094, "Member 'Prop_unwiseArir_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_unwiseArir.prop_unwiseArir_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Param_Hit) == 0x000024, "Member 'Prop_unwiseArir_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Param_Hit' has a wrong offset!");

// Function prop_unwiseArir.prop_unwiseArir_C.lookAt
// 0x00D8 (0x00D8 - 0x0000)
struct Prop_unwiseArir_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38E8[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_unwiseArir_C_LookAt) == 0x000008, "Wrong alignment on Prop_unwiseArir_C_LookAt");
static_assert(sizeof(Prop_unwiseArir_C_LookAt) == 0x0000D8, "Wrong size on Prop_unwiseArir_C_LookAt");
static_assert(offsetof(Prop_unwiseArir_C_LookAt, Player) == 0x000000, "Member 'Prop_unwiseArir_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_LookAt, Param_Hit) == 0x000008, "Member 'Prop_unwiseArir_C_LookAt::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_LookAt, Return) == 0x000090, "Member 'Prop_unwiseArir_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_LookAt, Text) == 0x000098, "Member 'Prop_unwiseArir_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_unwiseArir_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B0, "Member 'Prop_unwiseArir_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C8, "Member 'Prop_unwiseArir_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function prop_unwiseArir.prop_unwiseArir_C.getActionOptions
// 0x0058 (0x0058 - 0x0000)
struct Prop_unwiseArir_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
};
static_assert(alignof(Prop_unwiseArir_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_unwiseArir_C_GetActionOptions");
static_assert(sizeof(Prop_unwiseArir_C_GetActionOptions) == 0x000058, "Wrong size on Prop_unwiseArir_C_GetActionOptions");
static_assert(offsetof(Prop_unwiseArir_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_unwiseArir_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_unwiseArir_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_unwiseArir_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_unwiseArir_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_unwiseArir_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_unwiseArir_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_unwiseArir_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000048, "Member 'Prop_unwiseArir_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}

