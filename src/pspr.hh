//
// Created by kyle on 9/19/20.
//

#ifndef DOOM_PSPR_HH
#define DOOM_PSPR_HH

#include "defs.hh"
#include "fixed.hh"
#include "gsl_aliases.hh"
#include "info.hh"
#include "tables.hh"

namespace info
{
struct State;
}

namespace pspr
{

extern int weapon_attack_alignment;
extern std::array<std::array<int, 10>, 2> weapon_preferences;

constexpr const auto WEAPONTOP = fixed::FRACUNIT * 32;
constexpr const auto WEAPONBOTTOM = fixed::FRACUNIT * 128;
constexpr const auto LOWER_SPEED = fixed::FRACUNIT * 6;
constexpr const auto RAISE_SPEED = fixed::FRACUNIT * 6;

enum class PSprEnum
{
    PS_WEAPON,
    PS_FLASH,
    NUMPSPRITES,
};

struct PSpDef
{
    info::State* state;
    int32_t tics;
    fixed::Fixed sx;
    fixed::Fixed sy;
};

constexpr const std::array recoil_values{
    10,  // wp_fist
    10,  // wp_pistol
    30,  // wp_shotgun
    10,  // wp_chaingun
    100, // wp_missile
    20,  // wp_plasma
    100, // wp_bfg
    0,   // wp_chainsaw
    80,  // wp_supershotgun
};

bool checkAmmo(player::Player& player);
defs::WeaponType switchWeapon(player::Player& player);
void setPsprite(player::Player& player, PSprEnum position, info::StateEnum state);
void fireWeapon(player::Player& player);
void thrust(player::Player& player, tables::Angle angle, fixed::Fixed move);
void bringUpWeapon(player::Player& player);

} // namespace pspr

#endif // DOOM_PSPR_HH
