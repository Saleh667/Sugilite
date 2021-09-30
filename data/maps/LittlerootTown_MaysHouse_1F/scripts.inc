LittlerootTown_MaysHouse_1F_MapScripts::
	.byte 0


Neighbours_House_OldLady_EventScript::
	lock
	faceplayer
	msgbox Neighbours_House_OldLady_Text
	closemessage
	release
	end


Neighbours_House_Klaus_EventScript::
	lock
	faceplayer
	checkitem ITEM_CHESTKEY, 1
	compare VAR_RESULT, YES
	goto_if_eq Neighbours_House_Klaus_EventScript_2
	goto_if_set FLAG_DEBUG_CHEST, Neighbours_House_Klaus_EventScript_5
	msgbox Neighbours_House_Klaus_Text, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Neighbours_House_Klaus_EventScript_8
	msgbox Neighbours_House_Bye_Text, MSGBOX_AUTOCLOSE
	warp MAP_LITTLEROOT_TOWN, 0, 0, 0
Neighbours_House_Klaus_EventScript_7:
	release
	end

Neighbours_House_Klaus_EventScript_2:
	msgbox Neighbours_House_Klaus_EventScript_Text_0, MSGBOX_AUTOCLOSE
	release
	end

Neighbours_House_Klaus_EventScript_5:
	msgbox Neighbours_House_Klaus_EventScript_Text_1, MSGBOX_AUTOCLOSE
	release
	end

Neighbours_House_Klaus_EventScript_8:
	msgbox Neighbours_House_KeyGet_Text, MSGBOX_AUTOCLOSE
	giveitem ITEM_CHESTKEY, 1
	goto Neighbours_House_Klaus_EventScript_7


Neighbours_House_Chest_EventScript::
	lock
	goto_if_set FLAG_DEBUG_CHEST, Neighbours_House_Chest_EventScript_2
	msgbox Chest_Text
	checkitem ITEM_CHESTKEY, 1
	compare VAR_RESULT, YES
	goto_if_eq Neighbours_House_Chest_EventScript_5
	msgbox Chest_NoKey_Text, MSGBOX_AUTOCLOSE
Neighbours_House_Chest_EventScript_4:
	release
	end

Neighbours_House_Chest_EventScript_2:
	msgbox Chest_HasBeenOpened_Text, MSGBOX_AUTOCLOSE
	release
	end

Neighbours_House_Chest_EventScript_5:
	msgbox Chest_WantToOpen_Text, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Neighbours_House_Chest_EventScript_8
	release
	end

Neighbours_House_Chest_EventScript_8:
	removeitem ITEM_CHESTKEY, 1
	msgbox Chest_Opens_Text
	msgbox Chest_Kerchunk_Text, MSGBOX_AUTOCLOSE
	applymovement 3, Common_Movement_FaceUp
	playse SE_APPLAUSE
	waitse
	msgbox Chest_Opened_Text
	giveitem ITEM_ABILITY_CAPSULE, 1
	setflag FLAG_DEBUG_CHEST
	closemessage
	goto Neighbours_House_Chest_EventScript_4


Neighbours_House_Trashcan_EventScript::
	lock
	msgbox Common_Trashcan_Empty, MSGBOX_AUTOCLOSE
	release
	end


Neighbours_House_Trashcan_Item_EventScript::
	lock
	goto_if_set FLAG_DEBUG_TRASHCAN, Neighbours_House_Trashcan_Item_EventScript_2
	msgbox Common_Trashcan_Item, MSGBOX_AUTOCLOSE
	checkitemspace ITEM_BLACK_SLUDGE, 1
	compare VAR_RESULT, 0
	goto_if_eq Script_NotEnoughSpaceInBag
	giveitem ITEM_BLACK_SLUDGE, 1
	setflag FLAG_DEBUG_TRASHCAN
Neighbours_House_Trashcan_Item_EventScript_1:
	release
	end

Neighbours_House_Trashcan_Item_EventScript_2:
	msgbox Common_Trashcan_Empty, MSGBOX_AUTOCLOSE
	goto Neighbours_House_Trashcan_Item_EventScript_1


Neighbours_House_Juntrick_EventScript::
	lock
	call Common_Juntrick_EventScript
	setflag FLAG_DEBUG_JUNTRICK
	removeobject 4
	release
	end


Common_Juntrick_EventScript::
	msgbox Common_Juntrick, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	msgbox Common_Juntrick_Movement, MSGBOX_AUTOCLOSE
	applymovement 4, Common_Movement_FaceUp
	playmoncry 4, 2
	delay 40
	setwildbattle SPECIES_JUNTRICK, 8, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Common_Juntrick_Lost_EventScript
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Common_Juntrick_Lost_EventScript
	return


Common_Juntrick_Lost_EventScript::
	release
	end


Script_NotEnoughSpaceInBag::
	msgbox Script_NotEnoughSpaceInBag_Text_0, MSGBOX_AUTOCLOSE
	release
	end


OldLady_Television_EventScript::
	msgbox OldLady_Television_Text
	closemessage
	end


RivalsHouse_2F_EventScript_Rival::
	end


Neighbours_House_Klaus_EventScript_Text_0:
	.string "You already have a key, BIG SHOT!$"

Neighbours_House_Klaus_EventScript_Text_1:
	.string "Did it work, BIG SHOT?$"

Script_NotEnoughSpaceInBag_Text_0:
	.string "I'd take it, but my\nbag is full!$"

Common_Juntrick::
	.string "It's a trash can.\n...$"

Common_Juntrick_Movement::
	.string "The trash can started moving!$"

Common_Trashcan_Empty::
	.string "It's a trash can.\nNothing unusual here!$"

Common_Trashcan_Item::
	.string "It's a trash can.\nThere's something inside!$"

Chest_Text::
	.string "It's a chest that seems\n"
	.string "to be locked.$"

Chest_WantToOpen_Text::
	.string "Use a Chest Key?$"

Chest_Opens_Text::
	.string "{PLAYER} used a Chest Key.\n"
	.string "...$"

Chest_Kerchunk_Text::
	.string "Ker-Chunk!$"

Chest_Opened_Text::
	.string "The chest opened!$"

Chest_NoKey_Text::
	.string "I wonder where the key\nmight be...$"

Chest_HasBeenOpened_Text::
	.string "It's a chest that seems\n"
	.string "to have been emptied.$"

Neighbours_House_Klaus_Text::
	.string "Hi there! I'm Klaus,\n"
	.string "from the DEBUG hous(e).\p"
	.string "This room is for DEVS ONLY!\n"
	.string "You're a SUGI DEV, right?$"

Neighbours_House_KeyGet_Text::
	.string "Ah! I could see from the start\n"
	.string "start that you're a real BIG SHOT.\p"
	.string "Listen, we're testing the CHEST\n"
	.string "FEATURE at the moment.\p"
	.string "Here, take this and check\n"
	.string "out the chest back there, m'kay?$"

Neighbours_House_Bye_Text::
	.string "WHAT?!\p"
	.string "Sorry, but I'm going to\n"
	.string "have to ask you to leave.\p"
	.string "BYEEEEEE!$"

Neighbours_House_OldLady_Text::
	.string "Why hello there, dear.\n"
	.string "Thank you so much for stopping by.\p"
	.string "It's always nice having guests,\n"
	.string "so make yourself at home.$"

OldLady_Television_Text::
	.string "Looks like there's nothing on TV\n"
	.string "right now...$"

PlayersHouse_1F_Text_TheresAMovieOnTV::
	.string "That's not supposed to happen!$"

PlayersHouse_1F_Text_LatiEmergencyNewsFlash::
	.string "That's not supposed to happen!$"
