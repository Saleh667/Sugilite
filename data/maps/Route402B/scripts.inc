Route402B_MapScripts::
	.byte 0


Route402B_Dragby::
	lock
	msgbox Route402B_Dragby_Text_0
	msgbox Route402B_Dragby_Text_1
	msgbox Route402B_Dragby_Text_2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	release
	return


Route402B_LittleBoy::
	lock
	faceplayer
	msgbox Route402B_LittleBoy_Text_0
	closemessage
	release
	return


Route402B_Fight_Annie::
	trainerbattle_single TRAINER_ANNIE, Route402B_Fight_Annie_Text_0, Route402B_Fight_Annie_Text_1
	msgbox Route402B_Fight_Annie_Text_2, MSGBOX_AUTOCLOSE
	end


Route402B_Fight_Geoffrey::
	trainerbattle_single TRAINER_GEOFFREY, Route402B_Fight_Geoffrey_Text_0, Route402B_Fight_Geoffrey_Text_1
	msgbox Route402B_Fight_Geoffrey_Text_2, MSGBOX_AUTOCLOSE
	end


Route402B_Dragby_Text_0:
	.string "Dragby: ZZZ...\nZZZ...\lZZZ...$"

Route402B_Dragby_Text_1:
	.string "...$"

Route402B_Dragby_Text_2:
	.string "There seem to be a pair of\nDragby sleeping here.\lBest not to wake them up!$"

Route402B_LittleBoy_Text_0:
	.string "Eldrifell City is sooo big!\nI heard there's a gym leader there!$"

Route402B_Fight_Annie_Text_0:
	.string "You wanna play too?\nIt'll be fun...$"

Route402B_Fight_Annie_Text_1:
	.string "Tibbers...$"

Route402B_Fight_Annie_Text_2:
	.string "Hop, skip, jump!$"

Route402B_Fight_Geoffrey_Text_0:
	.string "Hey, you!\nLet's battle!$"

Route402B_Fight_Geoffrey_Text_1:
	.string "Aw shucks!$"

Route402B_Fight_Geoffrey_Text_2:
	.string "I felt like that was a bit unfair...$"
