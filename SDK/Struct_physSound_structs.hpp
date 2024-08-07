#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_physSound

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct struct_physSound.struct_physSound
// 0x0040 (0x0040 - 0x0000)
struct FStruct_physSound final
{
public:
	class USoundBase*                             Step_2_264EF62E47692AC3EC4D1DB1D2EFDB37;           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Impact_4_B669AE3D4B8D794F27201B972A9C256C;         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Damaged_7_BE976D7C45CF1D5F920305B1CB262187;        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Destroyed_9_755C91FF493AF4A154B5AFA566C4EDB4;      // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Scrape_12_D33ECAAF4F65CE405E09C693C27B7C40;        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Particles_damage_16_95FC380F43EFC12B3D6D898494E55ADC; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Particles_destroy_18_931F4A3B4D11F18EEB1F9CA953CE116C; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StaticSound_20_882C181F4ED7AD6803CAC3A3B025613D;   // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FStruct_physSound) == 0x000008, "Wrong alignment on FStruct_physSound");
static_assert(sizeof(FStruct_physSound) == 0x000040, "Wrong size on FStruct_physSound");
static_assert(offsetof(FStruct_physSound, Step_2_264EF62E47692AC3EC4D1DB1D2EFDB37) == 0x000000, "Member 'FStruct_physSound::Step_2_264EF62E47692AC3EC4D1DB1D2EFDB37' has a wrong offset!");
static_assert(offsetof(FStruct_physSound, Impact_4_B669AE3D4B8D794F27201B972A9C256C) == 0x000008, "Member 'FStruct_physSound::Impact_4_B669AE3D4B8D794F27201B972A9C256C' has a wrong offset!");
static_assert(offsetof(FStruct_physSound, Damaged_7_BE976D7C45CF1D5F920305B1CB262187) == 0x000010, "Member 'FStruct_physSound::Damaged_7_BE976D7C45CF1D5F920305B1CB262187' has a wrong offset!");
static_assert(offsetof(FStruct_physSound, Destroyed_9_755C91FF493AF4A154B5AFA566C4EDB4) == 0x000018, "Member 'FStruct_physSound::Destroyed_9_755C91FF493AF4A154B5AFA566C4EDB4' has a wrong offset!");
static_assert(offsetof(FStruct_physSound, Scrape_12_D33ECAAF4F65CE405E09C693C27B7C40) == 0x000020, "Member 'FStruct_physSound::Scrape_12_D33ECAAF4F65CE405E09C693C27B7C40' has a wrong offset!");
static_assert(offsetof(FStruct_physSound, Particles_damage_16_95FC380F43EFC12B3D6D898494E55ADC) == 0x000028, "Member 'FStruct_physSound::Particles_damage_16_95FC380F43EFC12B3D6D898494E55ADC' has a wrong offset!");
static_assert(offsetof(FStruct_physSound, Particles_destroy_18_931F4A3B4D11F18EEB1F9CA953CE116C) == 0x000030, "Member 'FStruct_physSound::Particles_destroy_18_931F4A3B4D11F18EEB1F9CA953CE116C' has a wrong offset!");
static_assert(offsetof(FStruct_physSound, StaticSound_20_882C181F4ED7AD6803CAC3A3B025613D) == 0x000038, "Member 'FStruct_physSound::StaticSound_20_882C181F4ED7AD6803CAC3A3B025613D' has a wrong offset!");

}
