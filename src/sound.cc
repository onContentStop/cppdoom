//
// Created by kyle on 9/20/20.
//

#include "sound.hh"
#include "info.hh"

sound::MusicInfo sound::music[]{{""},
                                {"e1m1", 0},
                                {"e1m2", 0},
                                {"e1m3", 0},
                                {"e1m4", 0},
                                {"e1m5", 0},
                                {"e1m6", 0},
                                {"e1m7", 0},
                                {"e1m8", 0},
                                {"e1m9", 0},
                                {"e2m1", 0},
                                {"e2m2", 0},
                                {"e2m3", 0},
                                {"e2m4", 0},
                                {"e2m5", 0},
                                {"e2m6", 0},
                                {"e2m7", 0},
                                {"e2m8", 0},
                                {"e2m9", 0},
                                {"e3m1", 0},
                                {"e3m2", 0},
                                {"e3m3", 0},
                                {"e3m4", 0},
                                {"e3m5", 0},
                                {"e3m6", 0},
                                {"e3m7", 0},
                                {"e3m8", 0},
                                {"e3m9", 0},
                                {"inter", 0},
                                {"intro", 0},
                                {"bunny", 0},
                                {"victor", 0},
                                {"introa", 0},
                                {"runnin", 0},
                                {"stalks", 0},
                                {"countd", 0},
                                {"betwee", 0},
                                {"doom", 0},
                                {"the_da", 0},
                                {"shawn", 0},
                                {"ddtblu", 0},
                                {"in_cit", 0},
                                {"dead", 0},
                                {"stlks2", 0},
                                {"theda2", 0},
                                {"doom2", 0},
                                {"ddtbl2", 0},
                                {"runni2", 0},
                                {"dead2", 0},
                                {"stlks3", 0},
                                {"romero", 0},
                                {"shawn2", 0},
                                {"messag", 0},
                                {"count2", 0},
                                {"ddtbl3", 0},
                                {"ampie", 0},
                                {"theda3", 0},
                                {"adrian", 0},
                                {"messg2", 0},
                                {"romer2", 0},
                                {"tense", 0},
                                {"shawn3", 0},
                                {"openin", 0},
                                {"evil", 0},
                                {"ultima", 0},
                                {"read_m", 0},
                                {"dm2ttl", 0},
                                {"dm2int", 0},

                                // custom music from MUSINFO lump
                                {"musinfo", 0}};

sound::SfxInfo sound::sfx[]{
    // S_sfx[0] needs to be a dummy for odd reasons.
    {"none", false, 0, nullptr, -1, -1, nullptr},

    {"pistol", false, 64, nullptr, -1, -1, nullptr},
    {"shotgn", false, 64, nullptr, -1, -1, nullptr},
    {"sgcock", false, 64, nullptr, -1, -1, nullptr},
    {"dshtgn", false, 64, nullptr, -1, -1, nullptr},
    {"dbopn", false, 64, nullptr, -1, -1, nullptr},
    {"dbcls", false, 64, nullptr, -1, -1, nullptr},
    {"dbload", false, 64, nullptr, -1, -1, nullptr},
    {"plasma", false, 64, nullptr, -1, -1, nullptr},
    {"bfg", false, 64, nullptr, -1, -1, nullptr},
    {"sawup", false, 64, nullptr, -1, -1, nullptr},
    {"sawidl", false, 118, nullptr, -1, -1, nullptr},
    {"sawful", false, 64, nullptr, -1, -1, nullptr},
    {"sawhit", false, 64, nullptr, -1, -1, nullptr},
    {"rlaunc", false, 64, nullptr, -1, -1, nullptr},
    {"rxplod", false, 70, nullptr, -1, -1, nullptr},
    {"firsht", false, 70, nullptr, -1, -1, nullptr},
    {"firxpl", false, 70, nullptr, -1, -1, nullptr},
    {"pstart", false, 100, nullptr, -1, -1, nullptr},
    {"pstop", false, 100, nullptr, -1, -1, nullptr},
    {"doropn", false, 100, nullptr, -1, -1, nullptr},
    {"dorcls", false, 100, nullptr, -1, -1, nullptr},
    {"stnmov", false, 119, nullptr, -1, -1, nullptr},
    {"swtchn", false, 78, nullptr, -1, -1, nullptr},
    {"swtchx", false, 78, nullptr, -1, -1, nullptr},
    {"plpain", false, 96, nullptr, -1, -1, nullptr},
    {"dmpain", false, 96, nullptr, -1, -1, nullptr},
    {"popain", false, 96, nullptr, -1, -1, nullptr},
    {"vipain", false, 96, nullptr, -1, -1, nullptr},
    {"mnpain", false, 96, nullptr, -1, -1, nullptr},
    {"pepain", false, 96, nullptr, -1, -1, nullptr},
    {"slop", false, 78, nullptr, -1, -1, nullptr},
    {"itemup", true, 78, nullptr, -1, -1, nullptr},
    {"wpnup", true, 78, nullptr, -1, -1, nullptr},
    {"oof", false, 96, nullptr, -1, -1, nullptr},
    {"telept", false, 32, nullptr, -1, -1, nullptr},
    {"posit1", true, 98, nullptr, -1, -1, nullptr},
    {"posit2", true, 98, nullptr, -1, -1, nullptr},
    {"posit3", true, 98, nullptr, -1, -1, nullptr},
    {"bgsit1", true, 98, nullptr, -1, -1, nullptr},
    {"bgsit2", true, 98, nullptr, -1, -1, nullptr},
    {"sgtsit", true, 98, nullptr, -1, -1, nullptr},
    {"cacsit", true, 98, nullptr, -1, -1, nullptr},
    {"brssit", true, 94, nullptr, -1, -1, nullptr},
    {"cybsit", true, 92, nullptr, -1, -1, nullptr},
    {"spisit", true, 90, nullptr, -1, -1, nullptr},
    {"bspsit", true, 90, nullptr, -1, -1, nullptr},
    {"kntsit", true, 90, nullptr, -1, -1, nullptr},
    {"vilsit", true, 90, nullptr, -1, -1, nullptr},
    {"mansit", true, 90, nullptr, -1, -1, nullptr},
    {"pesit", true, 90, nullptr, -1, -1, nullptr},
    {"sklatk", false, 70, nullptr, -1, -1, nullptr},
    {"sgtatk", false, 70, nullptr, -1, -1, nullptr},
    {"skepch", false, 70, nullptr, -1, -1, nullptr},
    {"vilatk", false, 70, nullptr, -1, -1, nullptr},
    {"claw", false, 70, nullptr, -1, -1, nullptr},
    {"skeswg", false, 70, nullptr, -1, -1, nullptr},
    {"pldeth", false, 32, nullptr, -1, -1, nullptr},
    {"pdiehi", false, 32, nullptr, -1, -1, nullptr},
    {"podth1", false, 70, nullptr, -1, -1, nullptr},
    {"podth2", false, 70, nullptr, -1, -1, nullptr},
    {"podth3", false, 70, nullptr, -1, -1, nullptr},
    {"bgdth1", false, 70, nullptr, -1, -1, nullptr},
    {"bgdth2", false, 70, nullptr, -1, -1, nullptr},
    {"sgtdth", false, 70, nullptr, -1, -1, nullptr},
    {"cacdth", false, 70, nullptr, -1, -1, nullptr},
    {"skldth", false, 70, nullptr, -1, -1, nullptr},
    {"brsdth", false, 32, nullptr, -1, -1, nullptr},
    {"cybdth", false, 32, nullptr, -1, -1, nullptr},
    {"spidth", false, 32, nullptr, -1, -1, nullptr},
    {"bspdth", false, 32, nullptr, -1, -1, nullptr},
    {"vildth", false, 32, nullptr, -1, -1, nullptr},
    {"kntdth", false, 32, nullptr, -1, -1, nullptr},
    {"pedth", false, 32, nullptr, -1, -1, nullptr},
    {"skedth", false, 32, nullptr, -1, -1, nullptr},
    {"posact", true, 120, nullptr, -1, -1, nullptr},
    {"bgact", true, 120, nullptr, -1, -1, nullptr},
    {"dmact", true, 120, nullptr, -1, -1, nullptr},
    {"bspact", true, 100, nullptr, -1, -1, nullptr},
    {"bspwlk", true, 100, nullptr, -1, -1, nullptr},
    {"vilact", true, 100, nullptr, -1, -1, nullptr},
    {"noway", false, 78, nullptr, -1, -1, nullptr},
    {"barexp", false, 60, nullptr, -1, -1, nullptr},
    {"punch", false, 64, nullptr, -1, -1, nullptr},
    {"hoof", false, 70, nullptr, -1, -1, nullptr},
    {"metal", false, 70, nullptr, -1, -1, nullptr},
    {"chgun", false, 64,
     &sound::sfx[static_cast<size_t>(info::Sfx::sfx_pistol)], 150, 0, nullptr},
    {"tink", false, 60, nullptr, -1, -1, nullptr},
    {"bdopn", false, 100, nullptr, -1, -1, nullptr},
    {"bdcls", false, 100, nullptr, -1, -1, nullptr},
    {"itmbk", false, 100, nullptr, -1, -1, nullptr},
    {"flame", false, 32, nullptr, -1, -1, nullptr},
    {"flamst", false, 32, nullptr, -1, -1, nullptr},
    {"getpow", false, 60, nullptr, -1, -1, nullptr},
    {"bospit", false, 70, nullptr, -1, -1, nullptr},
    {"boscub", false, 70, nullptr, -1, -1, nullptr},
    {"bossit", false, 70, nullptr, -1, -1, nullptr},
    {"bospn", false, 70, nullptr, -1, -1, nullptr},
    {"bosdth", false, 70, nullptr, -1, -1, nullptr},
    {"manatk", false, 70, nullptr, -1, -1, nullptr},
    {"mandth", false, 70, nullptr, -1, -1, nullptr},
    {"sssit", false, 70, nullptr, -1, -1, nullptr},
    {"ssdth", false, 70, nullptr, -1, -1, nullptr},
    {"keenpn", false, 70, nullptr, -1, -1, nullptr},
    {"keendt", false, 70, nullptr, -1, -1, nullptr},
    {"skeact", false, 70, nullptr, -1, -1, nullptr},
    {"skesit", false, 70, nullptr, -1, -1, nullptr},
    {"skeatk", false, 70, nullptr, -1, -1, nullptr},
    {"radio", false, 60, nullptr, -1, -1, nullptr},

    // killough 11/98: dog sounds
    {"dgsit", false, 98, nullptr, -1, -1, nullptr},
    {"dgatk", false, 70, nullptr, -1, -1, nullptr},
    {"dgact", false, 120, nullptr, -1, -1, nullptr},
    {"dgdth", false, 70, nullptr, -1, -1, nullptr},
    {"dgpain", false, 96, nullptr, -1, -1, nullptr},

    // e6y
    {"secret", false, 60, nullptr, -1, -1, nullptr},
    {"gibdth", false, 60, nullptr, -1, -1, nullptr},
};

std::string sound::snd_midiplayer;
std::vector<std::string> sound::midiplayers = {"sdl", "fluidsynth", "opl2",
                                               "portmidi"};
void sound::startSound(NotNull<mobj::MapObject*> mobj, info::Sfx sound)
{
  // TODO(kyle)
}
