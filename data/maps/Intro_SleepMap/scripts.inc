Intro_SleepMap_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Intro_SleepMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Intro_SleepMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_UNUSED_0x404E, 0, Intro_SleepMap_EventScript_Text
	.2byte 0


Intro_SleepMap_EventScript_Text::
	msgbox Kurosiba_Intro_Boy1
	closemessage
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 255, 1, 6
	return


Kurosiba_Intro_Boy1::
	.string "...\p"
	.string "...\p"
	.string "???: ... Wake up! Come on!$"
