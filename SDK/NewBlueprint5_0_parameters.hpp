#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint5_0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "Slate_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NewBlueprint5.NewBlueprint5_C.ExecuteUbergraph_NewBlueprint5
// 0x02E0 (0x02E0 - 0x0000)
struct NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNewWidgetBlueprint_C*                  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UblackScreen_C*                         CallFunc_Create_ReturnValue_1;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0020(0x0010)(NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0038(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWeightedBlendable>             K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0060(0x0010)()
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGamePaused_ReturnValue;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x00A0(0x0010)(ReferenceParm, ContainsInstancedReference)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ToRounded2D_ReturnValue;                  // 0x0124(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Vector2DInterpTo_ReturnValue;             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0164(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x016C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_175[0x3];                                      // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default;                             // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x0180(0x001C)(NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x019C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x01B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x01C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CD[0x3];                                      // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VInterpTo_Constant_ReturnValue;           // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E9[0x3];                                      // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VInterpTo_Constant_ReturnValue_1;         // 0x01EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x01F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0204(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGlobalTimeDilation_ReturnValue;        // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x0214(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29D[0x3];                                      // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x3];                                      // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_5;        // 0x02C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x02CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5) == 0x000008, "Wrong alignment on NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5");
static_assert(sizeof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5) == 0x0002E0, "Wrong size on NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, EntryPoint) == 0x000000, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::EntryPoint' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, Temp_int_Variable) == 0x000004, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Create_ReturnValue) == 0x000008, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Create_ReturnValue_1) == 0x000018, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, K2Node_MakeStruct_Anchors) == 0x000020, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, Temp_bool_Variable) == 0x000030, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, K2Node_MakeStruct_WeightedBlendable) == 0x000038, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, K2Node_MakeArray_Array) == 0x000050, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, K2Node_MakeStruct_WeightedBlendables) == 0x000060, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000070, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00007C, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_GetPlayerPawn_ReturnValue) == 0x000088, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_SetGamePaused_ReturnValue) == 0x000090, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_SetGamePaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000094, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x0000A0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_FindLookAtRotation_ReturnValue) == 0x0000B0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_BreakRotator_Roll) == 0x0000C8, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_BreakRotator_Pitch) == 0x0000CC, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_BreakRotator_Yaw) == 0x0000D0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000D4, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_MakeRotator_ReturnValue) == 0x0000DC, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_GetPlayerController_ReturnValue) == 0x0000F0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, K2Node_Event_DeltaSeconds) == 0x0000F8, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x0000FC, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_RandomFloatInRange_ReturnValue) == 0x000100, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000104, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_MakeVector2D_ReturnValue) == 0x000108, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000110, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000114, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000118, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000120, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_ToRounded2D_ReturnValue) == 0x000124, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_ToRounded2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00012C, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000130, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_RandomFloat_ReturnValue) == 0x000138, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x00013C, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000140, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Lerp_ReturnValue) == 0x000144, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1) == 0x000148, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_FTrunc_ReturnValue) == 0x00014C, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Vector2DInterpTo_ReturnValue) == 0x000150, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Vector2DInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x000158, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x00015C, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x000160, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_MakeVector2D_ReturnValue_1) == 0x000164, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_MakeVector2D_ReturnValue_2) == 0x00016C, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_RandomBool_ReturnValue) == 0x000174, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, K2Node_Select_Default) == 0x000178, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, K2Node_MakeStruct_WidgetTransform) == 0x000180, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x00019C, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x0001A8, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Percent_FloatFloat_ReturnValue) == 0x0001B0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x0001B4, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0001C0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0001CC, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_VInterpTo_Constant_ReturnValue) == 0x0001D0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_VInterpTo_Constant_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001DC, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x0001E8, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_VInterpTo_Constant_ReturnValue_1) == 0x0001EC, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_VInterpTo_Constant_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0001F8, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Add_VectorVector_ReturnValue) == 0x000204, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_GetGlobalTimeDilation_ReturnValue) == 0x000210, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_GetGlobalTimeDilation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000214, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x00029C, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0002A0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, Temp_int_Variable_1) == 0x0002A4, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0002A8, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002AC, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0002B0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_GetPlayerCameraManager_ReturnValue_1) == 0x0002B8, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_GetPlayerCameraManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_K2_GetActorLocation_ReturnValue_5) == 0x0002C0, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_K2_GetActorLocation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x0002CC, "Member 'NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");

// Function NewBlueprint5.NewBlueprint5_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct NewBlueprint5_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint5_C_ReceiveTick) == 0x000004, "Wrong alignment on NewBlueprint5_C_ReceiveTick");
static_assert(sizeof(NewBlueprint5_C_ReceiveTick) == 0x000004, "Wrong size on NewBlueprint5_C_ReceiveTick");
static_assert(offsetof(NewBlueprint5_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'NewBlueprint5_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

