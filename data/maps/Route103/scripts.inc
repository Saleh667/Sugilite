Route103_MapScripts::
	.byte 0


Route402_LittleGirl::
	lock
	faceplayer
	msgbox Route402_LittleGirl_Text_0
	closemessage
	release
	return


Route402_Fight_Killian::
	trainerbattle_single TRAINER_KILLIAN, Route402_Fight_Killian_Text_0, Route402_Fight_Killian_Text_1
	msgbox Route402_Fight_Killian_Text_2, MSGBOX_AUTOCLOSE
	end


Route402_Fight_Thaley::
	trainerbattle_single TRAINER_THALEY, Route402_Fight_Thaley_Text_0, Route402_Fight_Thaley_Text_1
	msgbox Route402_Fight_Thaley_Text_2, MSGBOX_AUTOCLOSE
	end


Route402_Fight_Cindy::
	trainerbattle_single TRAINER_CINDY, Route402_Fight_Cindy_Text_0, Route402_Fight_Cindy_Text_1
	msgbox Route402_Fight_Cindy_Text_2, MSGBOX_AUTOCLOSE
	end


Route402_Sign::
	lock
	msgbox Route402_Sign_Text_0
	closemessage
	release
	return


Route402_LittleGirl_Text_0:
	.string "You should look at the ground carefully.\nYou might find some cool stuff!$"

Route402_Fight_Killian_Text_0:
	.string "Haha, a trainer!\pWhen our eyes meet, you know\nwhat comes next!$"

Route402_Fight_Killian_Text_1:
	.string "Darn it!$"

Route402_Fight_Killian_Text_2:
	.string "I'll win battles if I train harder!$"

Route402_Fight_Thaley_Text_0:
	.string "Oh. Em. Gee.\nAre you a trainer?\pLet's like, battle!$"

Route402_Fight_Thaley_Text_1:
	.string "Tots ridic!$"

Route402_Fight_Thaley_Text_2:
	.string "Like, I really adore cute Pokemon!$"

Route402_Fight_Cindy_Text_0:
	.string "Fufufu...\nWant to take a closer look at my bugs?$"

Route402_Fight_Cindy_Text_1:
	.string "Eeeek!$"

Route402_Fight_Cindy_Text_2:
	.string "M-My bugs...\nYou'll pay for this...$"

Route402_Sign_Text_0:
	.string "Route 402\nIvywood Town: East\lEldrifell City: North$"
