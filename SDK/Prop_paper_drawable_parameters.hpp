#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_paper_drawable

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_byteImage_structs.hpp"
#include "Struct_mInt_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_paper_drawable.prop_paper_drawable_C.ExecuteUbergraph_prop_paper_drawable
// 0x0098 (0x0098 - 0x0000)
struct Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveSlot_C*                            CallFunc_getSaveSlot_saveSlot;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvas*                                CallFunc_BeginDrawCanvasToRenderTarget_Canvas;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_BeginDrawCanvasToRenderTarget_Size;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext             CallFunc_BeginDrawCanvasToRenderTarget_Context;    // 0x0030(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_byteImage                      Temp_struct_Variable;                              // 0x0048(0x0010)(ConstParm, HasGetValueTypeHash)
	class USaveSlot_C*                            CallFunc_getSaveSlot_saveSlot_1;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_byteImage                      CallFunc_Array_Get_Item;                           // 0x0068(0x0010)(HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_LoadImageBytes_texture;                   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_LoadImageBytes_errorCode;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_LoadImageBytes_errorMessage;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable) == 0x000008, "Wrong alignment on Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable");
static_assert(sizeof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable) == 0x000098, "Wrong size on Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, EntryPoint) == 0x000000, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_getSaveSlot_saveSlot) == 0x000008, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_getSaveSlot_saveSlot' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000018, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_BeginDrawCanvasToRenderTarget_Canvas) == 0x000020, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_BeginDrawCanvasToRenderTarget_Canvas' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_BeginDrawCanvasToRenderTarget_Size) == 0x000028, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_BeginDrawCanvasToRenderTarget_Size' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_BeginDrawCanvasToRenderTarget_Context) == 0x000030, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_BeginDrawCanvasToRenderTarget_Context' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, Temp_struct_Variable) == 0x000048, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_getSaveSlot_saveSlot_1) == 0x000058, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_getSaveSlot_saveSlot_1' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_Array_Get_Item) == 0x000068, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_LoadImageBytes_texture) == 0x000078, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_LoadImageBytes_texture' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_LoadImageBytes_errorCode) == 0x000080, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_LoadImageBytes_errorCode' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable, CallFunc_LoadImageBytes_errorMessage) == 0x000088, "Member 'Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable::CallFunc_LoadImageBytes_errorMessage' has a wrong offset!");

// Function prop_paper_drawable.prop_paper_drawable_C.setRT
// 0x0010 (0x0010 - 0x0000)
struct Prop_paper_drawable_C_SetRT final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_paper_drawable_C_SetRT) == 0x000008, "Wrong alignment on Prop_paper_drawable_C_SetRT");
static_assert(sizeof(Prop_paper_drawable_C_SetRT) == 0x000010, "Wrong size on Prop_paper_drawable_C_SetRT");
static_assert(offsetof(Prop_paper_drawable_C_SetRT, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'Prop_paper_drawable_C_SetRT::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_SetRT, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000008, "Member 'Prop_paper_drawable_C_SetRT::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");

// Function prop_paper_drawable.prop_paper_drawable_C.initDraw
// 0x0020 (0x0020 - 0x0000)
struct Prop_paper_drawable_C_InitDraw final
{
public:
	struct FStruct_byteImage                      Temp_struct_Variable;                              // 0x0000(0x0010)(ConstParm, HasGetValueTypeHash)
	class USaveSlot_C*                            CallFunc_getSaveSlot_saveSlot;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_paper_drawable_C_InitDraw) == 0x000008, "Wrong alignment on Prop_paper_drawable_C_InitDraw");
static_assert(sizeof(Prop_paper_drawable_C_InitDraw) == 0x000020, "Wrong size on Prop_paper_drawable_C_InitDraw");
static_assert(offsetof(Prop_paper_drawable_C_InitDraw, Temp_struct_Variable) == 0x000000, "Member 'Prop_paper_drawable_C_InitDraw::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_InitDraw, CallFunc_getSaveSlot_saveSlot) == 0x000010, "Member 'Prop_paper_drawable_C_InitDraw::CallFunc_getSaveSlot_saveSlot' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_InitDraw, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'Prop_paper_drawable_C_InitDraw::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_InitDraw, CallFunc_Array_Add_ReturnValue) == 0x00001C, "Member 'Prop_paper_drawable_C_InitDraw::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function prop_paper_drawable.prop_paper_drawable_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_paper_drawable_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_paper_drawable_C_LoadData) == 0x000010, "Wrong alignment on Prop_paper_drawable_C_LoadData");
static_assert(sizeof(Prop_paper_drawable_C_LoadData) == 0x0000E0, "Wrong size on Prop_paper_drawable_C_LoadData");
static_assert(offsetof(Prop_paper_drawable_C_LoadData, Data) == 0x000000, "Member 'Prop_paper_drawable_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_LoadData, Return) == 0x0000C0, "Member 'Prop_paper_drawable_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_paper_drawable_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_paper_drawable_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_paper_drawable_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_paper_drawable.prop_paper_drawable_C.getData
// 0x02C0 (0x02C0 - 0x0000)
struct Prop_paper_drawable_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_textureRenderTarget2D_ToByteArray_success; // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_textureRenderTarget2D_ToByteArray_errorMessage; // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<uint8>                                 CallFunc_textureRenderTarget2D_ToByteArray_ReturnValue; // 0x00D8(0x0010)(ReferenceParm)
	struct FStruct_byteImage                      K2Node_MakeStruct_struct_byteImage;                // 0x00E8(0x0010)(HasGetValueTypeHash)
	class USaveSlot_C*                            CallFunc_getSaveSlot_saveSlot;                     // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	struct FStruct_mInt                           K2Node_MakeStruct_struct_mInt;                     // 0x0110(0x0010)(HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x0120(0x00C0)(HasGetValueTypeHash)
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x01E0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mInt>                   K2Node_MakeArray_Array_1;                          // 0x01F0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x0200(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_paper_drawable_C_GetData) == 0x000010, "Wrong alignment on Prop_paper_drawable_C_GetData");
static_assert(sizeof(Prop_paper_drawable_C_GetData) == 0x0002C0, "Wrong size on Prop_paper_drawable_C_GetData");
static_assert(offsetof(Prop_paper_drawable_C_GetData, Data) == 0x000000, "Member 'Prop_paper_drawable_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'Prop_paper_drawable_C_GetData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, CallFunc_textureRenderTarget2D_ToByteArray_success) == 0x0000C1, "Member 'Prop_paper_drawable_C_GetData::CallFunc_textureRenderTarget2D_ToByteArray_success' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, CallFunc_textureRenderTarget2D_ToByteArray_errorMessage) == 0x0000C8, "Member 'Prop_paper_drawable_C_GetData::CallFunc_textureRenderTarget2D_ToByteArray_errorMessage' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, CallFunc_textureRenderTarget2D_ToByteArray_ReturnValue) == 0x0000D8, "Member 'Prop_paper_drawable_C_GetData::CallFunc_textureRenderTarget2D_ToByteArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, K2Node_MakeStruct_struct_byteImage) == 0x0000E8, "Member 'Prop_paper_drawable_C_GetData::K2Node_MakeStruct_struct_byteImage' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, CallFunc_getSaveSlot_saveSlot) == 0x0000F8, "Member 'Prop_paper_drawable_C_GetData::CallFunc_getSaveSlot_saveSlot' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, K2Node_MakeArray_Array) == 0x000100, "Member 'Prop_paper_drawable_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, K2Node_MakeStruct_struct_mInt) == 0x000110, "Member 'Prop_paper_drawable_C_GetData::K2Node_MakeStruct_struct_mInt' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, CallFunc_getData_data) == 0x000120, "Member 'Prop_paper_drawable_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, CallFunc_Array_Get_Item) == 0x0001E0, "Member 'Prop_paper_drawable_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, K2Node_MakeArray_Array_1) == 0x0001F0, "Member 'Prop_paper_drawable_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_paper_drawable_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x000200, "Member 'Prop_paper_drawable_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}

