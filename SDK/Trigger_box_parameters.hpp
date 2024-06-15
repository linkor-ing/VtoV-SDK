#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_box

#include "Basic.hpp"

#include "Struct_triggerSave_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"


namespace SDK::Params
{

// Function trigger_box.trigger_box_C.ExecuteUbergraph_trigger_box
// 0x00C8 (0x00C8 - 0x0000)
struct Trigger_box_C_ExecuteUbergraph_trigger_box final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F0E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F0F[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_owner;                                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Trigger_box_C_ExecuteUbergraph_trigger_box) == 0x000008, "Wrong alignment on Trigger_box_C_ExecuteUbergraph_trigger_box");
static_assert(sizeof(Trigger_box_C_ExecuteUbergraph_trigger_box) == 0x0000C8, "Wrong size on Trigger_box_C_ExecuteUbergraph_trigger_box");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, EntryPoint) == 0x000000, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, CallFunc_GetObjectClass_ReturnValue) == 0x0000B0, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, K2Node_Event_owner) == 0x0000B8, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, K2Node_Event_index) == 0x0000C0, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, K2Node_SwitchInteger_CmpSuccess) == 0x0000C4, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000C5, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_ExecuteUbergraph_trigger_box, CallFunc_Array_Contains_ReturnValue) == 0x0000C6, "Member 'Trigger_box_C_ExecuteUbergraph_trigger_box::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function trigger_box.trigger_box_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_box_C_RunTrigger final
{
public:
	class AActor*                                 Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_box_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_box_C_RunTrigger");
static_assert(sizeof(Trigger_box_C_RunTrigger) == 0x000010, "Wrong size on Trigger_box_C_RunTrigger");
static_assert(offsetof(Trigger_box_C_RunTrigger, Param_Owner) == 0x000000, "Member 'Trigger_box_C_RunTrigger::Param_Owner' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_RunTrigger, Param_Index) == 0x000008, "Member 'Trigger_box_C_RunTrigger::Param_Index' has a wrong offset!");

// Function trigger_box.trigger_box_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F10[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Trigger_box_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function trigger_box.trigger_box_C.setColls
// 0x0018 (0x0018 - 0x0000)
struct Trigger_box_C_SetColls final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionChannel                             CallFunc_Array_Get_Item;                           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F11[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Trigger_box_C_SetColls) == 0x000004, "Wrong alignment on Trigger_box_C_SetColls");
static_assert(sizeof(Trigger_box_C_SetColls) == 0x000018, "Wrong size on Trigger_box_C_SetColls");
static_assert(offsetof(Trigger_box_C_SetColls, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Trigger_box_C_SetColls::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_SetColls, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Trigger_box_C_SetColls::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_SetColls, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Trigger_box_C_SetColls::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_SetColls, CallFunc_Array_Get_Item) == 0x00000C, "Member 'Trigger_box_C_SetColls::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_SetColls, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'Trigger_box_C_SetColls::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_SetColls, CallFunc_Less_IntInt_ReturnValue) == 0x000014, "Member 'Trigger_box_C_SetColls::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function trigger_box.trigger_box_C.loadTriggerData
// 0x0120 (0x0120 - 0x0000)
struct Trigger_box_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadTriggerData_return;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F12[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F13[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Array_Get_Item_1;                         // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F14[0x2];                                     // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F15[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_box_C_LoadTriggerData) == 0x000010, "Wrong alignment on Trigger_box_C_LoadTriggerData");
static_assert(sizeof(Trigger_box_C_LoadTriggerData) == 0x000120, "Wrong size on Trigger_box_C_LoadTriggerData");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, Data) == 0x000000, "Member 'Trigger_box_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, Return) == 0x0000F0, "Member 'Trigger_box_C_LoadTriggerData::Return' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, CallFunc_loadTriggerData_return) == 0x0000F1, "Member 'Trigger_box_C_LoadTriggerData::CallFunc_loadTriggerData_return' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, CallFunc_Array_Length_ReturnValue) == 0x0000F4, "Member 'Trigger_box_C_LoadTriggerData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'Trigger_box_C_LoadTriggerData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, Temp_int_Array_Index_Variable) == 0x0000FC, "Member 'Trigger_box_C_LoadTriggerData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, CallFunc_Array_Get_Item_1) == 0x000100, "Member 'Trigger_box_C_LoadTriggerData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, CallFunc_GetValidValue_ReturnValue) == 0x000101, "Member 'Trigger_box_C_LoadTriggerData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, Temp_int_Loop_Counter_Variable) == 0x000104, "Member 'Trigger_box_C_LoadTriggerData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, CallFunc_Less_IntInt_ReturnValue) == 0x000108, "Member 'Trigger_box_C_LoadTriggerData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, CallFunc_Add_IntInt_ReturnValue) == 0x00010C, "Member 'Trigger_box_C_LoadTriggerData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_LoadTriggerData, CallFunc_Array_Add_ReturnValue) == 0x000110, "Member 'Trigger_box_C_LoadTriggerData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function trigger_box.trigger_box_C.getTriggerData
// 0x02E0 (0x02E0 - 0x0000)
struct Trigger_box_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	struct FStruct_triggerSave                    CallFunc_getTriggerData_data;                      // 0x0100(0x00F0)(HasGetValueTypeHash)
	struct FStruct_triggerSave                    K2Node_SetFieldsInStruct_StructOut;                // 0x01F0(0x00F0)(HasGetValueTypeHash)
};
static_assert(alignof(Trigger_box_C_GetTriggerData) == 0x000010, "Wrong alignment on Trigger_box_C_GetTriggerData");
static_assert(sizeof(Trigger_box_C_GetTriggerData) == 0x0002E0, "Wrong size on Trigger_box_C_GetTriggerData");
static_assert(offsetof(Trigger_box_C_GetTriggerData, Data) == 0x000000, "Member 'Trigger_box_C_GetTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_GetTriggerData, K2Node_MakeArray_Array) == 0x0000F0, "Member 'Trigger_box_C_GetTriggerData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_GetTriggerData, CallFunc_getTriggerData_data) == 0x000100, "Member 'Trigger_box_C_GetTriggerData::CallFunc_getTriggerData_data' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_GetTriggerData, K2Node_SetFieldsInStruct_StructOut) == 0x0001F0, "Member 'Trigger_box_C_GetTriggerData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function trigger_box.trigger_box_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Trigger_box_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_box_C_DreamInv) == 0x000008, "Wrong alignment on Trigger_box_C_DreamInv");
static_assert(sizeof(Trigger_box_C_DreamInv) == 0x000018, "Wrong size on Trigger_box_C_DreamInv");
static_assert(offsetof(Trigger_box_C_DreamInv, Invv) == 0x000000, "Member 'Trigger_box_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Trigger_box_C_DreamInv, Base) == 0x000010, "Member 'Trigger_box_C_DreamInv::Base' has a wrong offset!");

}

