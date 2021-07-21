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
	special SavePlayerParty
	special PutZigzagoonInPlayerParty
	special StartWallyTutorialBattle
	closemessage
	release
	end


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
