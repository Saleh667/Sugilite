Route103_MapScripts::
	.byte 0


Route103_LittleGirl::
	lock
	faceplayer
	msgbox Route103_LittleGirl_Text_0
	closemessage
	release
	return


Route103_LittleGirl_Text_0:
	.string "You should look at the ground carefully.\nYou might find some cool stuff!$"
