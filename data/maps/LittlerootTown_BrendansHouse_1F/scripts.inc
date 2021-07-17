LittlerootTown_BrendansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LITTLEROOT_RIVAL_STATE, 0, PlayersHouse_Eirika_Waiting
	.2byte 0


PlayersHouse_Eirika_Waiting::
	lockall
	applymovement 2, KurosibaTown_ProfessorsLab_Movement_JumpInPlaceRight
	waitmovement 0
	applymovement 2, KurosibaTown_ProfessorsLab_Movement_JumpInPlaceRight
	waitmovement 0
	msgbox PlayersHouse_Eirika_Waiting_Text, MSGBOX_DEFAULT
	closemessage
	applymovement 2, Rival_Leaves_House_Movement
	waitmovement 0
	playse SE_EXIT
	setvar VAR_LITTLEROOT_RIVAL_STATE, 1
	removeobject 2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
	end


PlayerHouse_MaidJinky_EventScript::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_FRESH_WATER_JINKY, PlayerHouse_MaidJinky_EventScript_2
	goto_if_set FLAG_MAID_GIFT_READY, PlayerHouse_MaidJinky_EventScript_5
	msgbox PlayerHouse_MaidJinky_GreetingText
PlayerHouse_MaidJinky_EventScript_1:
	closemessage
	release
	end

PlayerHouse_MaidJinky_EventScript_2:
	goto PlayersHouse_MaidJinky_FreshWater
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_5:
	goto PlayersHouse_MaidJinky_BadgeItem
	goto PlayerHouse_MaidJinky_EventScript_1


PlayersHouse_MaidJinky_FreshWater::
	msgbox PlayerHouse_MaidJinky_FreshWater_Text
	giveitem ITEM_FRESH_WATER
	setflag FLAG_RECEIVED_FRESH_WATER_JINKY
	msgbox PlayerHouse_MaidJinky_GreetingText
	closemessage
	release
	end


PlayersHouse_MaidJinky_BadgeItem::
	msgbox PlayerHouse_MaidJinky_Badges_Text
	switch VAR_NO_OF_BADGES
	case 1, PlayersHouse_MaidJinky_BadgeItem_3
	case 2, PlayersHouse_MaidJinky_BadgeItem_4
	case 3, PlayersHouse_MaidJinky_BadgeItem_5
	case 4, PlayersHouse_MaidJinky_BadgeItem_6
	case 5, PlayersHouse_MaidJinky_BadgeItem_7
	case 6, PlayersHouse_MaidJinky_BadgeItem_8
	case 7, PlayersHouse_MaidJinky_BadgeItem_9
	case 8, PlayersHouse_MaidJinky_BadgeItem_10
	msgbox PlayerHouse_MaidJinky_GreetingText
PlayersHouse_MaidJinky_BadgeItem_1:
	clearflag FLAG_MAID_GIFT_READY
	msgbox PlayerHouse_MaidJinky_GreetingText_Badges
	closemessage
	release
	end

PlayersHouse_MaidJinky_BadgeItem_3:
	giveitem ITEM_RARE_CANDY
	goto PlayersHouse_MaidJinky_BadgeItem_1

PlayersHouse_MaidJinky_BadgeItem_4:
	giveitem ITEM_ANTIDOTE, 10
	goto PlayersHouse_MaidJinky_BadgeItem_1

PlayersHouse_MaidJinky_BadgeItem_5:
	giveitem ITEM_AWAKENING, 10
	goto PlayersHouse_MaidJinky_BadgeItem_1

PlayersHouse_MaidJinky_BadgeItem_6:
	giveitem ITEM_NUGGET
	goto PlayersHouse_MaidJinky_BadgeItem_1

PlayersHouse_MaidJinky_BadgeItem_7:
	giveitem ITEM_ULTRA_BALL, 10
	goto PlayersHouse_MaidJinky_BadgeItem_1

PlayersHouse_MaidJinky_BadgeItem_8:
	giveitem ITEM_PARALYZE_HEAL, 10
	goto PlayersHouse_MaidJinky_BadgeItem_1

PlayersHouse_MaidJinky_BadgeItem_9:
	giveitem ITEM_REVIVE, 10
	goto PlayersHouse_MaidJinky_BadgeItem_1

PlayersHouse_MaidJinky_BadgeItem_10:
	giveitem ITEM_MAX_REVIVE, 3
	goto PlayersHouse_MaidJinky_BadgeItem_1


Rival_Leaves_House_Movement:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_16
	delay_16
	step_end

PlayersHouse_Eirika_Waiting_Text:
	.string "Eirika: Y'know what?\n"
	.string "I'll just meet you at the lab.\p"
	.string "You're as slow as ever, {PLAYER}!$"

Cupboards_EventScript::
	msgbox Cupboard_Message, MSGBOX_SIGN
	end

Cupboard_Message:
	.string "There seem to be a lot of antiques in \n"
	.string "this cupboard.\p"
	.string "Better leave them as they are.$"

Plants_EventScript::
	msgbox Plants_Message, MSGBOX_SIGN

Plants_Message:
	.string "It's always nice to have plants around.\n"
	.string "They keep the atmosphere fresh.$"

KitchenSet_EventScript::
	msgbox KitchenSet_Message, MSGBOX_SIGN
	end

KitchenSet_Message:
	.string "A state of the art kitchen set.\n"
	.string "The oven and stove are electrical,\l"
	.string "making cooking a bit easier.$"

TrashCan_EventScript::
	msgbox TrashCan_Message, MSGBOX_SIGN
	end

TrashCan_Message:
	.string "It's a trash can full of food\n"
	.string "packet and other residues.\p"
	.string "Smells pretty bad!$"

Bookshelves_EventScript::
	msgbox Bookshelves_Message, MSGBOX_SIGN
	end

Bookshelves_Message:
	.string "It's a bookshelf with a nice\n"
	.string "assortment of books.$"

MomsMessage_EventScript::
	msgbox MomsMessage_Text, MSGBOX_SIGN
	end

MomsMessage_Text:
	.string "Make sure to check your computer\n"
	.string "before leaving.\p"
	.string "Don't waste electricity!\p"
	.string "- Love, Mom.$"

MomsComputer_EventScript::
	msgbox MomsComputer_Text, MSGBOX_SIGN
	end

MomsComputer_Text:
	.string "Mom's computer.\p"
	.string "It's locked with a password that\n"
	.string "you don't know.\p"
	.string "No messing around!$"

MomsBookshelves_EventScript::
	msgbox MomsBookshelves_Text, MSGBOX_SIGN
	end

MomsBookshelves_Text:
	.string "A bookshelf with lots of books on\n"
	.string "Pokémon research, organized in\l"
	.string "alphabetical order!$"

PlayersHouse_Fridge_EventScript::
	msgbox PlayersHouse_Fridge_Text, MSGBOX_SIGN
	end

PlayersHouse_Fridge_Text:
	.string "The fridge contains a lot of healthy\n"
	.string "food.\p"
	.string "There's a pack of opened yoghurt left\n"
	.string "inside.\p"
	.string "Who would do such a thing?$"

PlayerHouse_MaidJinky_FreshWater_Text::
	.string "Jinky: Oh, hello {PLAYER}!\n"
	.string "Would you like a bottle of water for \l"
	.string "your journey?$"

PlayerHouse_MaidJinky_GreetingText::
	.string "Safe Travels!\n"
	.string "Say hello to Madame Stephanie!$"

PlayerHouse_MaidJinky_Badges_Text::
	.string "Jinky: Oh, if it isn't {PLAYER}!\p"
	.string "I was cleaning your room,\nand found this!\p"
	.string "You might want to use it.\p$"

PlayerHouse_MaidJinky_GreetingText_Badges::
	.string "Don't mind me!\n"
	.string "I'm just taking care of the house\nwhile you're all growing\nand glowing!$"
