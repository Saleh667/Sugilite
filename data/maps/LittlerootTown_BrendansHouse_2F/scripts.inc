LittlerootTown_BrendansHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_UNUSED_0x404E, 0, EventScript_Sugilite_Start_Boy
	.2byte 0


EventScript_Sugilite_Start_Boy::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, LittlerootTown_BrendansHouse_2F_Movement_RivalAngry
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_Sugilite_Start_Boy_2
	msgbox Kurosiba_Intro_Girl2
EventScript_Sugilite_Start_Boy_1:
	closemessage
	applymovement 1, Rival_MakeWay_Movement
	applymovement OBJ_EVENT_ID_PLAYER, Player_OutOfBed_Movement
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerGloom
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_Sugilite_Start_Boy_6
	msgbox Kurosiba_Intro_Girl3
EventScript_Sugilite_Start_Boy_5:
	closemessage
	applymovement 1, Eirika_Runs_Down_Stairs
	waitmovement 0
	playse SE_EXIT
	removeobject 1
	setvar VAR_UNUSED_0x404E, 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	setflag FLAG_KUROSIBA_TOWN_HIDE_LITTLE_GIRL
	return

EventScript_Sugilite_Start_Boy_2:
	msgbox Kurosiba_Intro_Boy2
	goto EventScript_Sugilite_Start_Boy_1

EventScript_Sugilite_Start_Boy_6:
	msgbox Kurosiba_Intro_Boy3
	goto EventScript_Sugilite_Start_Boy_5


PlayerToDoList_EventScript::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq PlayerToDoList_EventScript_2
	msgbox ToDoList_Text_Girl
PlayerToDoList_EventScript_1:
	closemessage
	end

PlayerToDoList_EventScript_2:
	msgbox ToDoList_Text_Boy
	goto PlayerToDoList_EventScript_1


LittlerootTown_BrendansHouse_2F_Movement_RivalAngry:
	emote_angry
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerGloom:
	emote_gloom
	step_end

LittlerootTown_BrendansHouse_2F_OnTransition: @ 81F83EE
	call Common_EventScript_SetupRivalGfxId
	end

LittlerootTown_BrendansHouse_2F_OnWarp: @ 81F846A
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
	.2byte 0

LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor:: @ 81F8474
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SecretBase_EventScript_InitDecorations
	end

Player_OutOfBed_Movement:
	walk_right
	walk_right
	step_end

Rival_MakeWay_Movement:
	walk_right
	walk_right
	face_left
	step_end

Eirika_Runs_Down_Stairs:
	//walk_fast_right
	//walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	face_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters: @ 81F85BC
	walk_down
	walk_down
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth: @ 81F85C0
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth: @ 81F85C6
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth: @ 81F85CF
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth: @ 81F85D7
	walk_left
	walk_left
	walk_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth: @ 81F85DB
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth: @ 81F85E2
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest: @ 81F85E8
	walk_left
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest: @ 81F85ED
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest: @ 81F85F6
	delay_8
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast: @ 81F85FD
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast: @ 81F8604
	walk_up
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end

@ Unused, the player is already facing this direction so its unneeded
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast: @ 81F8609
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_2F_EventScript_PC:: @ 81F860D
	lockall
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC:: @ 81F8626
	setvar VAR_0x8004, 1
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC:: @ 81F863F
	setvar VAR_0x8004, 1
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC:: @ 81F864C
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
	releaseall
	end

PlayersHouse_2F_EventScript_Notebook:: @ 81F8656
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	end

PlayersHouse_2F_EventScript_GameCube:: @ 81F865F
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
	end

BeanBagChair_EventScript::
	msgbox BeanBagChair_Text, MSGBOX_SIGN
	end

PlayerTv_EventScript::
	msgbox PlayerTv_Text, MSGBOX_SIGN
	end

PlayersHouse_2F_Text_ClockIsStopped: @ 81F8668
	.string "The clock is stopped…\p"
	.string "Better set it and start it!$"

PlayersHouse_2F_Text_HowDoYouLikeYourRoom: @ 81F869A
	.string "MOM: {PLAYER}, how do you like your\n"
	.string "new room?\p"
	.string "Good! Everything's put away neatly!\p"
	.string "They finished moving everything in\n"
	.string "downstairs, too.\p"
	.string "POKéMON movers are so convenient!\p"
	.string "Oh, you should make sure that\n"
	.string "everything's all there on your desk.$"

PlayersHouse_2F_Text_Notebook: @ 81F877F
	.string "A bookshelf with lots of books.\p"
	.string "There are a lot of comics and fashion\n"
	.string "magazines.$"

Common_Text_LookCloserAtMap: @ 81F8820
	.string "{PLAYER} took a closer look at the\n"
	.string "HOENN region map.$"

PlayersHouse_2F_Text_ItsAGameCube: @ 81F884F
	.string "A special Nintendo Switch is on the floor.\n"
	.string "It has a picture of three cute \l"
	.string "characters.$"

Kurosiba_Intro_Boy2:
	.string "Eirika: We're gonna be late {PLAYER},\n"
	.string "and I certainly don't want that!\p"
	.string "If you're not gonna get up,\n"
	.string "then I'm going without you.\p"
	.string "Sheesh...$"

Kurosiba_Intro_Boy3:
	.string "Eirika: Rise and shine, sleepyhead.\n"
	.string "Let's go, let's go!\p"
	.string "It's time to get our first Pokémon!$"

BeanBagChair_Text:
	.string "It's a bean bag. Pretty comfy to rest on!$"

PlayerTv_Text:
	.string "It's a curved screen TV.\n"
	.string "Really good for playing games, right?$"

Kurosiba_Intro_Girl2::
	.string "Eric: {PLAYER}. I thought you wanted\n"
	.string "to get your first POKéMON, but\l"
	.string "but here you are, dozing off.\p"
	.string "Let's go already!$"

Kurosiba_Intro_Girl3::
	.string "Eric: {PLAYER}. I'm pretty\n"
	.string "excited for this myself, so\l"
	.string "don't keep me waiting too long, okay?$"

ToDoList_Text_Boy::
	.string "Eirika's to do list: \p"
	.string "- Get a POKéMON!\n"
	.string "- Get a POKéMON!\l"
	.string "- Get a POKéMON!\l"
	.string "(Well, that's quite the list...)$"

ToDoList_Text_Girl::
	.string "Eric's to do list: \p"
	.string "Get a POKéMON,\n"
	.string "get the POKèDEX,\l"
	.string "and start my adventure.\p"
	.string "(Well, he certainly knows\nwhat he wants...)$"
