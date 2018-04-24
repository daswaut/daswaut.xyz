#pragma once

#include <string>

#define OPTION(type, var, val) type var = val

class Config
{
public:
#pragma region Visuals
	OPTION(bool, VIS_Chams, true);
	OPTION(bool, VIS_ESP, true);
	OPTION(bool, VIS_ESP_Box, false);
	OPTION(bool, VIS_ESP_Bone, true);
	OPTION(bool, VIS_ESP_Name, true);
	OPTION(bool, VIS_ESP_Health, true);
	OPTION(bool, VIS_ESP_Weapon, true);
#pragma endregion
#pragma region Misc
	OPTION(bool, MISC_Bunnyhop, false);
	OPTION(bool, MISC_AutoAccept, true);
	OPTION(bool, MISC_RankReveal, true);
	OPTION(bool, MISC_Backtrack, true);
	OPTION(int, MISC_ViewmodelFOV, 30);
	OPTION(std::wstring, MISC_ClanTag, L"daswaut.xyz");
#pragma endregion
};

extern Config g_Options;
