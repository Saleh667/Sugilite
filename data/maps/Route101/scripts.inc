Route101_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROUTE_401_STATE, 0, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	call Common_EventScript_SetupRivalGfxId
	goto Route401_Catching_Tutorial_Start
	return


Route401_Catching_Tutorial_Start::
	setvar VAR_ROUTE_401_STATE, 1
	end


Route401_Sign::
	lock
	msgbox Route401_Sign_Text_0, MSGBOX_SIGN
	closemessage
	release
	end


Route401_NPC_Youngster::
	lock
	faceplayer
	msgbox Route401_NPC_Youngster_Text_0
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	closemessage
	release
	end


Route401_NPC_Dragby::
	lock
	faceplayer
	msgbox Route401_NPC_Dragby_Text_0
	applymovement 4, Common_Movement_FaceRight
	waitmovement 0
	closemessage
	release
	end


Route401_NPC_Man::
	lock
	faceplayer
	msgbox Route401_NPC_Man_Text_0
	closemessage
	release
	end


Route401_CatchingTest::
	lock
	faceplayer
	msgbox Route401_CatchingTest_Text_0
	closemessage
	release
	end


Route401_MoveUp::
	lock
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_EmoteQuestionMark
	delay 60
	goto Route401_DoMovement
	return


Route401_MoveRight::
	lock
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_EmoteQuestionMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	goto Route401_DoMovement
	return


Route401_MoveLeft::
	lock
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_EmoteQuestionMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto Route401_DoMovement
	return


Route401_MoveLeftLeft::
	lock
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_EmoteQuestionMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto Route401_DoMovement
	return


Route401_DoMovement::
	applymovement OBJ_EVENT_ID_PLAYER, Route401_WalkToSim_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_EmoteExclamation
	delay 60
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Route401_CamUp
	waitmovement 0
	applymovement 1, Common_Movement_JumpInPlaceDown
	waitmovement 0
	applymovement 1, Common_Movement_EmoteFlex
	delay 60
	msgbox Route401_DoMovement_Text_0
	closemessage
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route401_DoMovement_2
	applymovement 2, Common_Movement_EmoteEllipsis
	delay 60
	msgbox Route401_DoMovement_Text_4
	msgbox Route401_DoMovement_Text_5
	msgbox Route401_DoMovement_Text_6
Route401_DoMovement_1:
	closemessage
	applymovement 1, Common_Movement_EmoteSweat
	delay 60
	msgbox Route401_DoMovement_Text_7
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, Route401_CamDown
	waitmovement 0
	special RemoveCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Route401_WalkToSim_2
	waitmovement 0
	delay 16
	applymovement 2, Common_Movement_EmoteExclamation
	delay 60
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	applymovement 2, Common_Movement_EmoteHappy
	delay 60
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route401_DoMovement_6
	msgbox Route401_DoMovement_Text_9
Route401_DoMovement_5:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route401_DoMovement_10
	msgbox Route401_DoMovement_Text_11
Route401_DoMovement_9:
	closemessage
	applymovement 1, Common_Movement_SimmerLaugh
	waitmovement 0
	msgbox Route401_DoMovement_Text_12
	closemessage
	applymovement 1, Route401_SimmerToGras
	waitmovement 0
	applymovement 2, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Route401_PlayerToSimmer
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Route401_CamToSim
	waitmovement 0
	special RemoveCameraObject
	msgbox Route401_DoMovement_Text_13
	closemessage
	applymovement 1, Route401_SimmerInGras
	waitmovement 0
	delay 30
	applymovement 1, Common_Movement_EmoteEllipsis
	delay 60
	msgbox Route401_DoMovement_Text_14
	closemessage
	special SavePlayerParty
	special PutZigzagoonInPlayerParty
	special StartWallyTutorialBattle
	waitstate
	delay 30
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	msgbox Route401_DoMovement_Text_15
	closemessage
	special LoadPlayerParty
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route401_DoMovement_14
	applymovement 2, Common_Movement_EmoteSweat
	delay 60
	msgbox Route401_DoMovement_Text_17
Route401_DoMovement_13:
	closemessage
	applymovement 1, Common_Movement_EmoteAngry
	delay 60
	msgbox Route401_DoMovement_Text_18
	closemessage
	delay 30
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	applymovement 1, Common_Movement_EmoteSweat
	delay 60
	msgbox Route401_DoMovement_Text_19
	closemessage
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	delay 30
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route401_DoMovement_18
	applymovement 2, Common_Movement_EmoteEllipsis
	delay 60
	msgbox Route401_DoMovement_Text_24
	msgbox Route401_DoMovement_Text_25
	msgbox Route401_DoMovement_Text_22
	msgbox Route401_DoMovement_Text_26
Route401_DoMovement_17:
	closemessage
	applymovement 1, Route401_SimmerLeave
	waitmovement 0
	removeobject 1
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Route401_CamFromSim
	waitmovement 0
	special RemoveCameraObject
	applymovement 2, Route401_SiblingToPlayer
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route401_DoMovement_22
	msgbox Route401_DoMovement_Text_29
	msgbox Route401_DoMovement_Text_30
	closemessage
	applymovement 2, Route401_SiblingLeave_Eric
	waitmovement 0
Route401_DoMovement_21:
	removeobject 2
	setflag FLAG_CATCHING_TUTORIAL_DONE
	setvar VAR_CATCHING_TUTORIAL_STATE, 1
	release
	end

Route401_DoMovement_2:
	applymovement 2, Common_Movement_JumpInPlaceUp
	waitmovement 0
	msgbox Route401_DoMovement_Text_1
	msgbox Route401_DoMovement_Text_2
	msgbox Route401_DoMovement_Text_3
	goto Route401_DoMovement_1

Route401_DoMovement_6:
	msgbox Route401_DoMovement_Text_8
	goto Route401_DoMovement_5

Route401_DoMovement_10:
	msgbox Route401_DoMovement_Text_10
	goto Route401_DoMovement_9

Route401_DoMovement_14:
	applymovement 2, Common_Movement_EmoteMusic
	delay 60
	msgbox Route401_DoMovement_Text_16
	goto Route401_DoMovement_13

Route401_DoMovement_18:
	applymovement 2, Common_Movement_EmoteMusic
	delay 60
	msgbox Route401_DoMovement_Text_20
	msgbox Route401_DoMovement_Text_21
	msgbox Route401_DoMovement_Text_22
	msgbox Route401_DoMovement_Text_23
	goto Route401_DoMovement_17

Route401_DoMovement_22:
	msgbox Route401_DoMovement_Text_27
	msgbox Route401_DoMovement_Text_28
	closemessage
	applymovement 2, Route401_SiblingLeave_Eirika
	waitmovement 0
	goto Route401_DoMovement_21


Route401_WalkToSim_1:
	walk_up
	walk_up
	step_end

Route401_WalkToSim_2:
	walk_up
	walk_up
	walk_left
	walk_left
	face_up
	step_end

Route401_CamUp:
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

Route401_CamDown:
	walk_right
	walk_right
	walk_down
	walk_down
	delay_16
	step_end

Route401_CamToSim:
	walk_left
	step_end

Route401_CamFromSim:
	walk_right
	step_end

Route401_SimmerToGras:
	walk_left
	walk_left
	walk_left
	face_down
	step_end

Route401_SimmerInGras:
	walk_left
	walk_down
	walk_right
	walk_up
	walk_left
	face_down
	delay_16
	step_end

Route401_PlayerToSimmer:
	walk_up
	walk_left
	step_end

Route401_SimmerLeave:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route401_SiblingToPlayer:
	walk_left
	walk_up
	face_right
	delay_16
	step_end

Route401_SiblingLeave_Eirika:
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Route401_SiblingLeave_Eric:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route401_Sign_Text_0:
	.string "Route 401$"

Route401_NPC_Youngster_Text_0:
	.string "Catching your first POKéMON\nis lots of fun!\pThat's how I met my partner,\nDragby!$"

Route401_NPC_Dragby_Text_0:
	.string "Bebebee!$"

Route401_NPC_Man_Text_0:
	.string "Oh, me? I'm not a trainer.\pBut keep your eyes peeled out\nfor some!$"

Route401_CatchingTest_Text_0:
	.string "Let's learn how to catch!$"

Route401_DoMovement_Text_0:
	.string "Simmerman: Alright, step aside.\nLet the grown-up show you\lhow it's done.$"

Route401_DoMovement_Text_1:
	.string "Eirika: How am I supposed to learn if\nyou're just going to catch a POKéMON\lwithout teaching me anything?$"

Route401_DoMovement_Text_2:
	.string "Simmerman: Look, do you want\nto catch one or not?$"

Route401_DoMovement_Text_3:
	.string "Eirika: I do, but how do we even know\nit's safe?$"

Route401_DoMovement_Text_4:
	.string "Eric: Are you sure this is\nhow we should be learning?$"

Route401_DoMovement_Text_5:
	.string "Simmerman: Look, do you want\nto catch a POKéMON or not?$"

Route401_DoMovement_Text_6:
	.string "Eric: I do, but how do we even know\nit's safe?$"

Route401_DoMovement_Text_7:
	.string "Simmerman: You already have a\nPOKéMON, quit your whining!\lSheesh...$"

Route401_DoMovement_Text_8:
	.string "Eirika: Oh, {PLAYER}!\nYou're just in time!$"

Route401_DoMovement_Text_9:
	.string "Eric: Look. {PLAYER}'s here!\nYou're just in time.$"

Route401_DoMovement_Text_10:
	.string "Eirika: Mr. Simmerman is gonna\nteach us how to catch a POKéMON!$"

Route401_DoMovement_Text_11:
	.string "Eric: Mr.Simmerman is going to\nteach us how to catch a POKéMON!$"

Route401_DoMovement_Text_12:
	.string "Simmerman: Okay kids, so it's actually\npretty easy.$"

Route401_DoMovement_Text_13:
	.string "Simmerman: You just take a little walk in\nthe grass...$"

Route401_DoMovement_Text_14:
	.string "Simmerman: See? Nothing to worry about...\nWOAH!$"

Route401_DoMovement_Text_15:
	.string "Simmerman: Okay, not gonna lie,\nthat kind of caught me off guard!$"

Route401_DoMovement_Text_16:
	.string "Eirika: Hahahahaha!\nYou're so stupid, Mr.Simmerman!$"

Route401_DoMovement_Text_17:
	.string "Eric: You ought to be more cautious.\nHmph!$"

Route401_DoMovement_Text_18:
	.string "Simmerman: R-Respect your elders,\nyou little...!$"

Route401_DoMovement_Text_19:
	.string "Simmerman: ...\nSigh.\pOkay, well, clearly you have to use\nyour POKéMON to fight before\lcatching something.$"

Route401_DoMovement_Text_20:
	.string "Eirika: Gotcha.\nAny other tips?\pOh, I got one for you.\nDon't be reckless.$"

Route401_DoMovement_Text_21:
	.string "Simmerman: ...\nVery funny.$"

Route401_DoMovement_Text_22:
	.string "Simmerman: Welp!\nI guess my work is done here.\pYou've got a ways to go, kids.\nI'll see you again when you're stronger.\lDon't count on it though, I'm usually\lvery busy.$"

Route401_DoMovement_Text_23:
	.string "Eirika: Okay then, bye Mr. Simmerman!$"

Route401_DoMovement_Text_24:
	.string "Eric: Right, and maybe\nproceed with caution as well.$"

Route401_DoMovement_Text_25:
	.string "Simmerman: ...\nYeah, yeah, whatever.$"

Route401_DoMovement_Text_26:
	.string "Eric: Okay then, bye Mr. Simmerman!$"

Route401_DoMovement_Text_27:
	.string "Eirika: I never knew that some adults\ncould be absolute airheads.\lI hope I don't end up like that!$"

Route401_DoMovement_Text_28:
	.string "Eirika: Well, {PLAYER},\nguess I'll see you around!\lDon't be too slow though!\pWe should battle again when we\nhave more POKéMON!$"

Route401_DoMovement_Text_29:
	.string "Eric: I wouldn't want to be like him.\nNot at all.$"

Route401_DoMovement_Text_30:
	.string "Eric: Well, {PLAYER},\nguess I'll see you around!\pThere's a lot to do now that we're\ltrainers!$"
