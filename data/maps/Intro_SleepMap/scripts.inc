Intro_SleepMap_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Intro_SleepMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Intro_SleepMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_UNUSED_0x404E, 0, Intro_SleepMap_EventScript_Text
	.2byte 0


Intro_SleepMap_EventScript_Text::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Intro_SleepMap_EventScript_Text_2
	msgbox Kurosiba_Intro_Girl1
Intro_SleepMap_EventScript_Text_1:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 255, 1, 6
	return

Intro_SleepMap_EventScript_Text_2:
	msgbox Kurosiba_Intro_Boy1
	goto Intro_SleepMap_EventScript_Text_1


Kurosiba_Intro_Boy1::
	.string "...\p"
	.string "...\p"
	.string "???: ... Wake up! Come on!$"

Kurosiba_Intro_Girl1::
	.string "...\p"
	.string "...\p"
	.string "???: ...\nIt's time to get up already.$"
