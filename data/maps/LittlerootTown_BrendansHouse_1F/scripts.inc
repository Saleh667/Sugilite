LittlerootTown_BrendansHouse_1F_MapScripts::
	.byte 0


PlayerHouse_MaidJinky_EventScript::
	lock
	faceplayer
	switch VAR_NO_OF_BADGES
	case 0, PlayerHouse_MaidJinky_EventScript_3
	case 1, PlayerHouse_MaidJinky_EventScript_4
	case 2, PlayerHouse_MaidJinky_EventScript_5
	case 3, PlayerHouse_MaidJinky_EventScript_6
	case 4, PlayerHouse_MaidJinky_EventScript_7
	case 5, PlayerHouse_MaidJinky_EventScript_8
	case 6, PlayerHouse_MaidJinky_EventScript_9
	case 7, PlayerHouse_MaidJinky_EventScript_10
	case 8, PlayerHouse_MaidJinky_EventScript_11
	msgbox PlayerHouse_MaidJinky_GreetingText
PlayerHouse_MaidJinky_EventScript_1:
	release
	end

PlayerHouse_MaidJinky_EventScript_3:
	goto_if_unset FLAG_RECEIVED_FRESH_WATER_JINKY, PlayerHouse_MaidJinky_EventScript_13
	msgbox PlayerHouse_MaidJinky_GreetingText
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_4:
	goto_if_set FLAG_MAID_GIFT_READY, PlayerHouse_MaidJinky_EventScript_16
	msgbox PlayerHouse_MaidJinky_GreetingText
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_5:
	goto_if_set FLAG_MAID_GIFT_READY, PlayerHouse_MaidJinky_EventScript_19
	msgbox PlayerHouse_MaidJinky_GreetingText
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_6:
	goto_if_set FLAG_MAID_GIFT_READY, PlayerHouse_MaidJinky_EventScript_22
	msgbox PlayerHouse_MaidJinky_GreetingText
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_7:
	goto_if_set FLAG_MAID_GIFT_READY, PlayerHouse_MaidJinky_EventScript_25
	msgbox PlayerHouse_MaidJinky_GreetingText
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_8:
	goto_if_set FLAG_MAID_GIFT_READY, PlayerHouse_MaidJinky_EventScript_28
	msgbox PlayerHouse_MaidJinky_GreetingText
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_9:
	goto_if_set FLAG_MAID_GIFT_READY, PlayerHouse_MaidJinky_EventScript_31
	msgbox PlayerHouse_MaidJinky_GreetingText
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_10:
	goto_if_set FLAG_MAID_GIFT_READY, PlayerHouse_MaidJinky_EventScript_34
	msgbox PlayerHouse_MaidJinky_GreetingText
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_11:
	goto_if_set FLAG_MAID_GIFT_READY, PlayerHouse_MaidJinky_EventScript_37
	msgbox PlayerHouse_MaidJinky_GreetingText
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_13:
	goto PlayersHouse_MaidJinky_FreshWater
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_16:
	goto PlayersHouse_MaidJinky_BadgeItem
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_19:
	goto PlayersHouse_MaidJinky_BadgeItem
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_22:
	goto PlayersHouse_MaidJinky_BadgeItem
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_25:
	goto PlayersHouse_MaidJinky_BadgeItem
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_28:
	goto PlayersHouse_MaidJinky_BadgeItem
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_31:
	goto PlayersHouse_MaidJinky_BadgeItem
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_34:
	goto PlayersHouse_MaidJinky_BadgeItem
	goto PlayerHouse_MaidJinky_EventScript_1

PlayerHouse_MaidJinky_EventScript_37:
	goto PlayersHouse_MaidJinky_BadgeItem
	goto PlayerHouse_MaidJinky_EventScript_1


PlayersHouse_MaidJinky_FreshWater::
	msgbox PlayerHouse_MaidJinky_FreshWater_Text
	giveitem ITEM_FRESH_WATER
	setflag FLAG_RECEIVED_FRESH_WATER_JINKY
	msgbox PlayerHouse_MaidJinky_GreetingText
	end


PlayersHouse_MaidJinky_BadgeItem::
	msgbox PlayerHouse_MaidJinky_Badges_Text
	giveitem ITEM_FRESH_WATER
	clearflag FLAG_MAID_GIFT_READY
	msgbox PlayerHouse_MaidJinky_GreetingText
	end


PlayersHouse_Eirika_Waiting::
	lockall
	msgbox PlayersHouse_Eirika_Waiting_Text, MSGBOX_DEFAULT
	closemessage
	applymovement 2, Rival_Leaves_House_Movement
	waitmovement 0
	playse SE_EXIT
	setvar VAR_LITTLEROOT_RIVAL_STATE, 1
	removeobject 2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
	end

Rival_Leaves_House_Movement:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	step_end

PlayersHouse_Eirika_Waiting_Text:
	.string "Y'know what, I'll just meet you at the lab.\n"
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
	.string "Jinky: Oh, hello {PLAYER}!\n"
	.string "So many badges already? \n"
	.string "You're doing very well! \p"
	.string "Here, take this and keep \l"
	.string "going strong! \p$"
