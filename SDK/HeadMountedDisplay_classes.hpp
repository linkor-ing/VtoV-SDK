#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeadMountedDisplay

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "HeadMountedDisplay_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void BreakKey(const struct FKey& InKey, class FString* InteractionProfile, EControllerHand* Hand, class FName* MotionSource, class FString* Indentifier, class FString* Component);
	static void CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
	static void ClearXRTimedInputActionDelegate(const class FName& ActionPath);
	static bool ConfigureGestures(const struct FXRGestureConfig& GestureConfig);
	static EXRDeviceConnectionResult ConnectRemoteXRDevice(const class FString& IpAddress, const int32 BitRate);
	static void DisconnectRemoteXRDevice();
	static bool EnableHMD(bool bEnable);
	static void EnableLowPersistenceMode(bool bEnable);
	static TArray<struct FXRDeviceId> EnumerateTrackedDevices(const class FName SystemId, EXRTrackedDeviceType DeviceType);
	static bool GetControllerTransformForTime(class UObject* WorldContext, const int32 ControllerIndex, const class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec);
	static void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static void GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static void GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData);
	static class FName GetHMDDeviceName();
	static EHMDWornState GetHMDWornState();
	static void GetMotionControllerData(class UObject* WorldContext, const EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData);
	static int32 GetNumOfTrackingSensors();
	static void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	static float GetPixelDensity();
	static struct FVector2D GetPlayAreaBounds(EHMDTrackingOrigin Origin);
	static void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	static float GetScreenPercentage();
	static EHMDTrackingOrigin GetTrackingOrigin();
	static void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32 Param_Index);
	static struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	static class FString GetVersionString();
	static void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	static float GetWorldToMetersScale(class UObject* WorldContext);
	static int32 GetXRSystemFlags();
	static bool HasValidTrackingPosition();
	static bool IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	static bool IsHeadMountedDisplayConnected();
	static bool IsHeadMountedDisplayEnabled();
	static bool IsInLowPersistenceMode();
	static bool IsSpectatorScreenModeControllable();
	static void ResetOrientationAndPosition(float Yaw, EOrientPositionSelector Options);
	static void SetClippingPlanes(float Near, float Far);
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	static void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	static void SetSpectatorScreenTexture(class UTexture* InTexture);
	static void SetTrackingOrigin(EHMDTrackingOrigin Origin);
	static void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	static void SetXRDisconnectDelegate(const TDelegate<void(class FString& OutReason)>& InDisconnectedDelegate);
	static void SetXRTimedInputActionDelegate(const class FName& ActionName, const TDelegate<void(float Value, struct FTimespan& Time)>& InDelegate);
	static void UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HeadMountedDisplayFunctionLibrary">();
	}
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeadMountedDisplayFunctionLibrary>();
	}
};
static_assert(alignof(UHeadMountedDisplayFunctionLibrary) == 0x000008, "Wrong alignment on UHeadMountedDisplayFunctionLibrary");
static_assert(sizeof(UHeadMountedDisplayFunctionLibrary) == 0x000028, "Wrong size on UHeadMountedDisplayFunctionLibrary");

// Class HeadMountedDisplay.HandKeypointConversion
// 0x0000 (0x0028 - 0x0028)
class UHandKeypointConversion final : public UBlueprintFunctionLibrary
{
public:
	static int32 Conv_HandKeypointToInt32(EHandKeypoint Input);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HandKeypointConversion">();
	}
	static class UHandKeypointConversion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHandKeypointConversion>();
	}
};
static_assert(alignof(UHandKeypointConversion) == 0x000008, "Wrong alignment on UHandKeypointConversion");
static_assert(sizeof(UHandKeypointConversion) == 0x000028, "Wrong size on UHandKeypointConversion");

// Class HeadMountedDisplay.MotionControllerComponent
// 0x00C0 (0x0510 - 0x0450)
class UMotionControllerComponent final : public UPrimitiveComponent
{
public:
	int32                                         PlayerIndex;                                       // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EControllerHand                               Hand;                                              // 0x0454(0x0001)(BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_455[0x3];                                      // 0x0455(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MotionSource;                                      // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDisableLowLatencyUpdate : 1;                      // 0x0460(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_461[0x3];                                      // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ETrackingStatus                               CurrentTrackingStatus;                             // 0x0464(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayDeviceModel;                               // 0x0465(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_466[0x2];                                      // 0x0466(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DisplayModelSource;                                // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                            CustomDisplayMesh;                                 // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             DisplayMeshMaterialOverrides;                      // 0x0478(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_488[0x68];                                     // 0x0488(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    DisplayComponent;                                  // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4F8[0x18];                                     // 0x04F8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FVector GetHandJointPosition(int32 JointIndex, bool* bValueFound);
	float GetParameterValue(class FName InName, bool* bValueFound);
	void OnMotionControllerUpdated();
	void SetAssociatedPlayerIndex(const int32 NewPlayer);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetDisplayModelSource(const class FName NewDisplayModelSource);
	void SetShowDeviceModel(const bool bShowControllerModel);
	void SetTrackingMotionSource(const class FName NewSource);
	void SetTrackingSource(const EControllerHand NewSource);

	EControllerHand GetTrackingSource() const;
	bool IsTracked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionControllerComponent">();
	}
	static class UMotionControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionControllerComponent>();
	}
};
static_assert(alignof(UMotionControllerComponent) == 0x000010, "Wrong alignment on UMotionControllerComponent");
static_assert(sizeof(UMotionControllerComponent) == 0x000510, "Wrong size on UMotionControllerComponent");
static_assert(offsetof(UMotionControllerComponent, PlayerIndex) == 0x000450, "Member 'UMotionControllerComponent::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, Hand) == 0x000454, "Member 'UMotionControllerComponent::Hand' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, MotionSource) == 0x000458, "Member 'UMotionControllerComponent::MotionSource' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, CurrentTrackingStatus) == 0x000464, "Member 'UMotionControllerComponent::CurrentTrackingStatus' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, bDisplayDeviceModel) == 0x000465, "Member 'UMotionControllerComponent::bDisplayDeviceModel' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, DisplayModelSource) == 0x000468, "Member 'UMotionControllerComponent::DisplayModelSource' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, CustomDisplayMesh) == 0x000470, "Member 'UMotionControllerComponent::CustomDisplayMesh' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, DisplayMeshMaterialOverrides) == 0x000478, "Member 'UMotionControllerComponent::DisplayMeshMaterialOverrides' has a wrong offset!");
static_assert(offsetof(UMotionControllerComponent, DisplayComponent) == 0x0004F0, "Member 'UMotionControllerComponent::DisplayComponent' has a wrong offset!");

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void DisableMotionTrackingForComponent(const class UMotionControllerComponent* MotionControllerComponent);
	static void DisableMotionTrackingOfAllControllers();
	static void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	static void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
	static void DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	static bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
	static bool EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	static TArray<class FName> EnumerateMotionSources();
	static class FName GetActiveTrackingSystemName();
	static int32 GetMaximumMotionTrackedControllerCount();
	static int32 GetMotionTrackingEnabledControllerCount();
	static bool IsMotionSourceTracking(int32 PlayerIndex, class FName SourceName);
	static bool IsMotionTrackedDeviceCountManagementNecessary();
	static bool IsMotionTrackingEnabledForComponent(const class UMotionControllerComponent* MotionControllerComponent);
	static bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand);
	static bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName);
	static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionTrackedDeviceFunctionLibrary">();
	}
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionTrackedDeviceFunctionLibrary>();
	}
};
static_assert(alignof(UMotionTrackedDeviceFunctionLibrary) == 0x000008, "Wrong alignment on UMotionTrackedDeviceFunctionLibrary");
static_assert(sizeof(UMotionTrackedDeviceFunctionLibrary) == 0x000028, "Wrong size on UMotionTrackedDeviceFunctionLibrary");

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x0140 - 0x00B0)
class UVRNotificationsComponent final : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_             HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             HMDTrackingInitializedDelegate;                    // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             HMDRecenteredDelegate;                             // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             HMDLostDelegate;                                   // 0x00E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             HMDReconnectedDelegate;                            // 0x00F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             HMDConnectCanceledDelegate;                        // 0x0100(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             HMDPutOnHeadDelegate;                              // 0x0110(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             HMDRemovedFromHeadDelegate;                        // 0x0120(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             VRControllerRecenteredDelegate;                    // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VRNotificationsComponent">();
	}
	static class UVRNotificationsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVRNotificationsComponent>();
	}
};
static_assert(alignof(UVRNotificationsComponent) == 0x000008, "Wrong alignment on UVRNotificationsComponent");
static_assert(sizeof(UVRNotificationsComponent) == 0x000140, "Wrong size on UVRNotificationsComponent");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate) == 0x0000B0, "Member 'UVRNotificationsComponent::HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializedDelegate) == 0x0000C0, "Member 'UVRNotificationsComponent::HMDTrackingInitializedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRecenteredDelegate) == 0x0000D0, "Member 'UVRNotificationsComponent::HMDRecenteredDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDLostDelegate) == 0x0000E0, "Member 'UVRNotificationsComponent::HMDLostDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDReconnectedDelegate) == 0x0000F0, "Member 'UVRNotificationsComponent::HMDReconnectedDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDConnectCanceledDelegate) == 0x000100, "Member 'UVRNotificationsComponent::HMDConnectCanceledDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDPutOnHeadDelegate) == 0x000110, "Member 'UVRNotificationsComponent::HMDPutOnHeadDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, HMDRemovedFromHeadDelegate) == 0x000120, "Member 'UVRNotificationsComponent::HMDRemovedFromHeadDelegate' has a wrong offset!");
static_assert(offsetof(UVRNotificationsComponent, VRControllerRecenteredDelegate) == 0x000130, "Member 'UVRNotificationsComponent::VRControllerRecenteredDelegate' has a wrong offset!");

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRAssetFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
	static class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const class FName SystemName, const class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XRAssetFunctionLibrary">();
	}
	static class UXRAssetFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXRAssetFunctionLibrary>();
	}
};
static_assert(alignof(UXRAssetFunctionLibrary) == 0x000008, "Wrong alignment on UXRAssetFunctionLibrary");
static_assert(sizeof(UXRAssetFunctionLibrary) == 0x000028, "Wrong size on UXRAssetFunctionLibrary");

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (0x0060 - 0x0030)
class UAsyncTask_LoadXRDeviceVisComponent final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnModelLoaded;                                     // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnLoadFailure;                                     // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    SpawnedComponent;                                  // 0x0058(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
	static class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const class FName SystemName, const class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncTask_LoadXRDeviceVisComponent">();
	}
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncTask_LoadXRDeviceVisComponent>();
	}
};
static_assert(alignof(UAsyncTask_LoadXRDeviceVisComponent) == 0x000008, "Wrong alignment on UAsyncTask_LoadXRDeviceVisComponent");
static_assert(sizeof(UAsyncTask_LoadXRDeviceVisComponent) == 0x000060, "Wrong size on UAsyncTask_LoadXRDeviceVisComponent");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, OnModelLoaded) == 0x000030, "Member 'UAsyncTask_LoadXRDeviceVisComponent::OnModelLoaded' has a wrong offset!");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, OnLoadFailure) == 0x000040, "Member 'UAsyncTask_LoadXRDeviceVisComponent::OnLoadFailure' has a wrong offset!");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, SpawnedComponent) == 0x000058, "Member 'UAsyncTask_LoadXRDeviceVisComponent::SpawnedComponent' has a wrong offset!");

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRLoadingScreenFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
	static void ClearLoadingScreenSplashes();
	static void HideLoadingScreen();
	static void SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	static void ShowLoadingScreen();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XRLoadingScreenFunctionLibrary">();
	}
	static class UXRLoadingScreenFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXRLoadingScreenFunctionLibrary>();
	}
};
static_assert(alignof(UXRLoadingScreenFunctionLibrary) == 0x000008, "Wrong alignment on UXRLoadingScreenFunctionLibrary");
static_assert(sizeof(UXRLoadingScreenFunctionLibrary) == 0x000028, "Wrong size on UXRLoadingScreenFunctionLibrary");

}

