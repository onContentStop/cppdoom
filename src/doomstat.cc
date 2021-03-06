//
// Created by kyle on 9/19/20.
//

#include "doomstat.hh"

bool doomstat::doom_weapon_toggles;
bool doomstat::flashing_hom;
bool doomstat::modifiedGame;
int doomstat::levelTime;
int doomstat::gametic;
int doomstat::basetic;

bool doomstat::allow_pushers;
bool doomstat::default_allow_pushers;

std::array<bool, static_cast<std::size_t>(doomstat::CompFlag::COMP_TOTAL)> doomstat::comp;
std::array<bool, static_cast<std::size_t>(doomstat::CompFlag::COMP_TOTAL)> doomstat::default_comp;

doomstat::CompLevel doomstat::compatibility_level;
doomstat::CompLevel doomstat::default_compatibility_level;

doomstat::DemoInsurance doomstat::demo_insurance;
doomstat::DemoInsurance doomstat::default_demo_insurance;

int doomstat::distfriend;
int doomstat::default_distfriend;

bool doomstat::dog_jumping;
bool doomstat::default_dog_jumping;

int doomstat::dogs;
int doomstat::default_dogs;

bool doomstat::help_friends;
bool doomstat::default_help_friends;

bool doomstat::monkeys;
bool doomstat::default_monkeys;

bool doomstat::monster_avoid_hazards;
bool doomstat::default_monster_avoid_hazards;

bool doomstat::monster_backing;
bool doomstat::default_monster_backing;

bool doomstat::monster_friction;
bool doomstat::default_monster_friction;

doomstat::MonsterInfightingLevel doomstat::monster_infighting;
doomstat::MonsterInfightingLevel doomstat::default_monster_infighting;

bool doomstat::monsters_remember;
bool doomstat::default_monsters_remember;

bool doomstat::player_bobbing;
bool doomstat::default_player_bobbing;

bool doomstat::variable_friction;
bool doomstat::default_variable_friction;

bool doomstat::weapon_recoil;
bool doomstat::default_weapon_recoil;

defs::GameMission doomstat::gamemission;
defs::GameMode doomstat::gamemode = defs::GameMode::UNDETERMINED;
defs::Language doomstat::language = defs::Language::ENGLISH;

bool doomstat::mbfFeatures()
{
    return compatibility_level >= doomstat::CompLevel::Mbf;
}
bool doomstat::demo_compatibility()
{
    return compatibility_level < CompLevel::Boom;
}
