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
