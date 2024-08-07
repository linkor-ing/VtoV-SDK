#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CordSocket

#include "Basic.hpp"

#include "Struct_triggerSave_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Struct_settings_structs.hpp"
#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function cordSocket.cordSocket_C.ExecuteUbergraph_cordSocket
// 0x0260 (0x0260 - 0x0000)
struct CordSocket_C_ExecuteUbergraph_cordSocket final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F98[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_owner;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_NewParam;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F99[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACord_C*                                K2Node_Event_cord_1;                               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          K2Node_Event_socket_1;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACord_C*                                K2Node_Event_cord;                                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          K2Node_Event_socket;                               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0040(0x00CC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9A[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Event_key;                                  // 0x0110(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9B[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_color;                                // 0x012C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9C[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9D[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0160(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ACord_C*                                K2Node_DynamicCast_AsCord;                         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9E[0x5];                                     // 0x01F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChildActor_ReturnValue;                 // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9F[0x3];                                     // 0x0215(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetParentActor_ReturnValue;               // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x0220(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FA0[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_sentFrom;                             // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_active;                               // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FA1[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_ExecuteUbergraph_cordSocket) == 0x000008, "Wrong alignment on CordSocket_C_ExecuteUbergraph_cordSocket");
static_assert(sizeof(CordSocket_C_ExecuteUbergraph_cordSocket) == 0x000260, "Wrong size on CordSocket_C_ExecuteUbergraph_cordSocket");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, EntryPoint) == 0x000000, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::EntryPoint' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_owner) == 0x000008, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_index) == 0x000010, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_NewParam) == 0x000014, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_NewParam' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_cord_1) == 0x000018, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_cord_1' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_socket_1) == 0x000020, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_socket_1' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_cord) == 0x000028, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_cord' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_socket) == 0x000030, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_socket' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_gamemode) == 0x000038, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_settings) == 0x000040, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_key) == 0x000110, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_pressed) == 0x000128, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_color) == 0x00012C, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000140, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000148, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000150, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000158, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_bFromSweep) == 0x00015C, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_SweepResult) == 0x000160, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_DynamicCast_AsCord) == 0x0001E8, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_DynamicCast_AsCord' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, CallFunc_IsValid_ReturnValue) == 0x0001F1, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, CallFunc_IsValid_ReturnValue_1) == 0x0001F2, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0001F8, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_OtherActor) == 0x000200, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_OtherComp) == 0x000208, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000210, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, CallFunc_IsChildActor_ReturnValue) == 0x000214, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::CallFunc_IsChildActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, CallFunc_GetParentActor_ReturnValue) == 0x000218, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::CallFunc_GetParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_DynamicCast_AsInt_Player) == 0x000220, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_DynamicCast_bSuccess_1) == 0x000230, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, CallFunc_asProp_return) == 0x000238, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_sentFrom) == 0x000240, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_sentFrom' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, K2Node_Event_active) == 0x000248, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::K2Node_Event_active' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000250, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(CordSocket_C_ExecuteUbergraph_cordSocket, CallFunc_Array_Add_ReturnValue) == 0x000258, "Member 'CordSocket_C_ExecuteUbergraph_cordSocket::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function cordSocket.cordSocket_C.setActiveTrigger
// 0x0010 (0x0010 - 0x0000)
struct CordSocket_C_SetActiveTrigger final
{
public:
	class AActor*                                 SentFrom;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CordSocket_C_SetActiveTrigger) == 0x000008, "Wrong alignment on CordSocket_C_SetActiveTrigger");
static_assert(sizeof(CordSocket_C_SetActiveTrigger) == 0x000010, "Wrong size on CordSocket_C_SetActiveTrigger");
static_assert(offsetof(CordSocket_C_SetActiveTrigger, SentFrom) == 0x000000, "Member 'CordSocket_C_SetActiveTrigger::SentFrom' has a wrong offset!");
static_assert(offsetof(CordSocket_C_SetActiveTrigger, Active) == 0x000008, "Member 'CordSocket_C_SetActiveTrigger::Active' has a wrong offset!");

// Function cordSocket.cordSocket_C.BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function cordSocket.cordSocket_C.BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FA2[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'CordSocket_C_BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function cordSocket.cordSocket_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct CordSocket_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_ApplyColor) == 0x000004, "Wrong alignment on CordSocket_C_ApplyColor");
static_assert(sizeof(CordSocket_C_ApplyColor) == 0x000010, "Wrong size on CordSocket_C_ApplyColor");
static_assert(offsetof(CordSocket_C_ApplyColor, Color) == 0x000000, "Member 'CordSocket_C_ApplyColor::Color' has a wrong offset!");

// Function cordSocket.cordSocket_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct CordSocket_C_AnyKey final
{
public:
	struct FKey                                   Param_Key;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CordSocket_C_AnyKey) == 0x000008, "Wrong alignment on CordSocket_C_AnyKey");
static_assert(sizeof(CordSocket_C_AnyKey) == 0x000020, "Wrong size on CordSocket_C_AnyKey");
static_assert(offsetof(CordSocket_C_AnyKey, Param_Key) == 0x000000, "Member 'CordSocket_C_AnyKey::Param_Key' has a wrong offset!");
static_assert(offsetof(CordSocket_C_AnyKey, Pressed) == 0x000018, "Member 'CordSocket_C_AnyKey::Pressed' has a wrong offset!");

// Function cordSocket.cordSocket_C.settingsApplied
// 0x00CC (0x00CC - 0x0000)
struct CordSocket_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x00CC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_SettingsApplied) == 0x000004, "Wrong alignment on CordSocket_C_SettingsApplied");
static_assert(sizeof(CordSocket_C_SettingsApplied) == 0x0000CC, "Wrong size on CordSocket_C_SettingsApplied");
static_assert(offsetof(CordSocket_C_SettingsApplied, Settings) == 0x000000, "Member 'CordSocket_C_SettingsApplied::Settings' has a wrong offset!");

// Function cordSocket.cordSocket_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct CordSocket_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        GameMode;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_StuffUpgraded) == 0x000008, "Wrong alignment on CordSocket_C_StuffUpgraded");
static_assert(sizeof(CordSocket_C_StuffUpgraded) == 0x000008, "Wrong size on CordSocket_C_StuffUpgraded");
static_assert(offsetof(CordSocket_C_StuffUpgraded, GameMode) == 0x000000, "Member 'CordSocket_C_StuffUpgraded::GameMode' has a wrong offset!");

// Function cordSocket.cordSocket_C.cordUnplugged
// 0x0010 (0x0010 - 0x0000)
struct CordSocket_C_CordUnplugged final
{
public:
	class ACord_C*                                Param_Cord;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          Socket;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_CordUnplugged) == 0x000008, "Wrong alignment on CordSocket_C_CordUnplugged");
static_assert(sizeof(CordSocket_C_CordUnplugged) == 0x000010, "Wrong size on CordSocket_C_CordUnplugged");
static_assert(offsetof(CordSocket_C_CordUnplugged, Param_Cord) == 0x000000, "Member 'CordSocket_C_CordUnplugged::Param_Cord' has a wrong offset!");
static_assert(offsetof(CordSocket_C_CordUnplugged, Socket) == 0x000008, "Member 'CordSocket_C_CordUnplugged::Socket' has a wrong offset!");

// Function cordSocket.cordSocket_C.cordPlugged
// 0x0010 (0x0010 - 0x0000)
struct CordSocket_C_CordPlugged final
{
public:
	class ACord_C*                                Param_Cord;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          Socket;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_CordPlugged) == 0x000008, "Wrong alignment on CordSocket_C_CordPlugged");
static_assert(sizeof(CordSocket_C_CordPlugged) == 0x000010, "Wrong size on CordSocket_C_CordPlugged");
static_assert(offsetof(CordSocket_C_CordPlugged, Param_Cord) == 0x000000, "Member 'CordSocket_C_CordPlugged::Param_Cord' has a wrong offset!");
static_assert(offsetof(CordSocket_C_CordPlugged, Socket) == 0x000008, "Member 'CordSocket_C_CordPlugged::Socket' has a wrong offset!");

// Function cordSocket.cordSocket_C.set_ignoreSave_trigger
// 0x0001 (0x0001 - 0x0000)
struct CordSocket_C_Set_ignoreSave_trigger final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CordSocket_C_Set_ignoreSave_trigger) == 0x000001, "Wrong alignment on CordSocket_C_Set_ignoreSave_trigger");
static_assert(sizeof(CordSocket_C_Set_ignoreSave_trigger) == 0x000001, "Wrong size on CordSocket_C_Set_ignoreSave_trigger");
static_assert(offsetof(CordSocket_C_Set_ignoreSave_trigger, NewParam) == 0x000000, "Member 'CordSocket_C_Set_ignoreSave_trigger::NewParam' has a wrong offset!");

// Function cordSocket.cordSocket_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct CordSocket_C_RunTrigger final
{
public:
	class AActor*                                 Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_RunTrigger) == 0x000008, "Wrong alignment on CordSocket_C_RunTrigger");
static_assert(sizeof(CordSocket_C_RunTrigger) == 0x000010, "Wrong size on CordSocket_C_RunTrigger");
static_assert(offsetof(CordSocket_C_RunTrigger, Param_Owner) == 0x000000, "Member 'CordSocket_C_RunTrigger::Param_Owner' has a wrong offset!");
static_assert(offsetof(CordSocket_C_RunTrigger, Param_Index) == 0x000008, "Member 'CordSocket_C_RunTrigger::Param_Index' has a wrong offset!");

// Function cordSocket.cordSocket_C.setActiveCord
// 0x0038 (0x0038 - 0x0000)
struct CordSocket_C_SetActiveCord final
{
public:
	bool                                          Plug;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FA3[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_ttrigger_C>       K2Node_DynamicCast_AsInt_Ttrigger;                 // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FA4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_ttrigger_C>       K2Node_DynamicCast_AsInt_Ttrigger_1;               // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CordSocket_C_SetActiveCord) == 0x000008, "Wrong alignment on CordSocket_C_SetActiveCord");
static_assert(sizeof(CordSocket_C_SetActiveCord) == 0x000038, "Wrong size on CordSocket_C_SetActiveCord");
static_assert(offsetof(CordSocket_C_SetActiveCord, Plug) == 0x000000, "Member 'CordSocket_C_SetActiveCord::Plug' has a wrong offset!");
static_assert(offsetof(CordSocket_C_SetActiveCord, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CordSocket_C_SetActiveCord::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CordSocket_C_SetActiveCord, K2Node_DynamicCast_AsInt_Ttrigger) == 0x000008, "Member 'CordSocket_C_SetActiveCord::K2Node_DynamicCast_AsInt_Ttrigger' has a wrong offset!");
static_assert(offsetof(CordSocket_C_SetActiveCord, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CordSocket_C_SetActiveCord::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CordSocket_C_SetActiveCord, K2Node_DynamicCast_AsInt_Ttrigger_1) == 0x000020, "Member 'CordSocket_C_SetActiveCord::K2Node_DynamicCast_AsInt_Ttrigger_1' has a wrong offset!");
static_assert(offsetof(CordSocket_C_SetActiveCord, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'CordSocket_C_SetActiveCord::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function cordSocket.cordSocket_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct CordSocket_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_DreamInv) == 0x000008, "Wrong alignment on CordSocket_C_DreamInv");
static_assert(sizeof(CordSocket_C_DreamInv) == 0x000018, "Wrong size on CordSocket_C_DreamInv");
static_assert(offsetof(CordSocket_C_DreamInv, Invv) == 0x000000, "Member 'CordSocket_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(CordSocket_C_DreamInv, Base) == 0x000010, "Member 'CordSocket_C_DreamInv::Base' has a wrong offset!");

// Function cordSocket.cordSocket_C.ignoreSave_trigger
// 0x0001 (0x0001 - 0x0000)
struct CordSocket_C_IgnoreSave_trigger final
{
public:
	bool                                          Ignore;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CordSocket_C_IgnoreSave_trigger) == 0x000001, "Wrong alignment on CordSocket_C_IgnoreSave_trigger");
static_assert(sizeof(CordSocket_C_IgnoreSave_trigger) == 0x000001, "Wrong size on CordSocket_C_IgnoreSave_trigger");
static_assert(offsetof(CordSocket_C_IgnoreSave_trigger, Ignore) == 0x000000, "Member 'CordSocket_C_IgnoreSave_trigger::Ignore' has a wrong offset!");

// Function cordSocket.cordSocket_C.loadTriggerData
// 0x0100 (0x0100 - 0x0000)
struct CordSocket_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CordSocket_C_LoadTriggerData) == 0x000010, "Wrong alignment on CordSocket_C_LoadTriggerData");
static_assert(sizeof(CordSocket_C_LoadTriggerData) == 0x000100, "Wrong size on CordSocket_C_LoadTriggerData");
static_assert(offsetof(CordSocket_C_LoadTriggerData, Data) == 0x000000, "Member 'CordSocket_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(CordSocket_C_LoadTriggerData, Return) == 0x0000F0, "Member 'CordSocket_C_LoadTriggerData::Return' has a wrong offset!");

// Function cordSocket.cordSocket_C.getTriggerData
// 0x00F0 (0x00F0 - 0x0000)
struct CordSocket_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(CordSocket_C_GetTriggerData) == 0x000010, "Wrong alignment on CordSocket_C_GetTriggerData");
static_assert(sizeof(CordSocket_C_GetTriggerData) == 0x0000F0, "Wrong size on CordSocket_C_GetTriggerData");
static_assert(offsetof(CordSocket_C_GetTriggerData, Data) == 0x000000, "Member 'CordSocket_C_GetTriggerData::Data' has a wrong offset!");

// Function cordSocket.cordSocket_C.ignoreSave
// 0x0001 (0x0001 - 0x0000)
struct CordSocket_C_IgnoreSave final
{
public:
	bool                                          Param_IgnoreSave;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CordSocket_C_IgnoreSave) == 0x000001, "Wrong alignment on CordSocket_C_IgnoreSave");
static_assert(sizeof(CordSocket_C_IgnoreSave) == 0x000001, "Wrong size on CordSocket_C_IgnoreSave");
static_assert(offsetof(CordSocket_C_IgnoreSave, Param_IgnoreSave) == 0x000000, "Member 'CordSocket_C_IgnoreSave::Param_IgnoreSave' has a wrong offset!");

// Function cordSocket.cordSocket_C.skipPreDelete
// 0x0001 (0x0001 - 0x0000)
struct CordSocket_C_SkipPreDelete final
{
public:
	bool                                          Skip;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CordSocket_C_SkipPreDelete) == 0x000001, "Wrong alignment on CordSocket_C_SkipPreDelete");
static_assert(sizeof(CordSocket_C_SkipPreDelete) == 0x000001, "Wrong size on CordSocket_C_SkipPreDelete");
static_assert(offsetof(CordSocket_C_SkipPreDelete, Skip) == 0x000000, "Member 'CordSocket_C_SkipPreDelete::Skip' has a wrong offset!");

}

