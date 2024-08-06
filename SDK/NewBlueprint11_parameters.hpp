#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint11

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NewBlueprint11.NewBlueprint11_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct NewBlueprint11_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint11_C_ReceiveTick) == 0x000004, "Wrong alignment on NewBlueprint11_C_ReceiveTick");
static_assert(sizeof(NewBlueprint11_C_ReceiveTick) == 0x000004, "Wrong size on NewBlueprint11_C_ReceiveTick");
static_assert(offsetof(NewBlueprint11_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'NewBlueprint11_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function NewBlueprint11.NewBlueprint11_C.ExecuteUbergraph_NewBlueprint11
// 0x01B0 (0x01B0 - 0x0000)
struct NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0020(0x0010)(ConstParm, ReferenceParm)
	TArray<EObjectTypeQuery>                      CallFunc_obj_phys_obj;                             // 0x0030(0x0010)(ReferenceParm)
	TArray<struct FVector>                        K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x0060(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      CallFunc_obj_phys_obj_1;                           // 0x0080(0x0010)(ReferenceParm)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInst_C*                            CallFunc_getMainGameInstance_AsGame_Inst;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E3[0x5];                                       // 0x00E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x00E8(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors_1;          // 0x0100(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue_1;        // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0120(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_154[0xC];                                      // 0x0154(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0160(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_argy_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11) == 0x000010, "Wrong alignment on NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11");
static_assert(sizeof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11) == 0x0001B0, "Wrong size on NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, EntryPoint) == 0x000000, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::EntryPoint' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, Temp_int_Variable) == 0x000004, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, Temp_object_Variable) == 0x000020, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_obj_phys_obj) == 0x000030, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_obj_phys_obj' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, K2Node_MakeArray_Array) == 0x000040, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Array_Get_Item) == 0x000050, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_SphereOverlapActors_OutActors) == 0x000060, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_SphereOverlapActors_ReturnValue) == 0x000070, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Less_IntInt_ReturnValue) == 0x000071, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_obj_phys_obj_1) == 0x000080, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_obj_phys_obj_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000090, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000098, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0000A8, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000B0, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Array_Add_ReturnValue_1) == 0x0000BC, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Array_Get_Item_2) == 0x0000C0, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Array_Length_ReturnValue_1) == 0x0000C8, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000CC, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x0000D0, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_getMainGameInstance_AsGame_Inst) == 0x0000D8, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_getMainGameInstance_AsGame_Inst' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E0, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000E1, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000E2, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, Temp_object_Variable_1) == 0x0000E8, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_BooleanOR_ReturnValue) == 0x0000F8, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_SphereOverlapActors_OutActors_1) == 0x000100, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_SphereOverlapActors_OutActors_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_SphereOverlapActors_ReturnValue_1) == 0x000110, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_SphereOverlapActors_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Array_Get_Item_3) == 0x000118, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, Temp_bool_Variable) == 0x000120, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000124, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Array_Contains_ReturnValue) == 0x000130, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Vector_Distance_ReturnValue) == 0x000134, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000138, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_FindLookAtRotation_ReturnValue) == 0x00013C, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_ComposeRotators_ReturnValue) == 0x000148, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_MakeTransform_ReturnValue) == 0x000160, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_WasRecentlyRendered_ReturnValue) == 0x000190, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000198, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001A0, "Member 'NewBlueprint11_C_ExecuteUbergraph_NewBlueprint11::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}
