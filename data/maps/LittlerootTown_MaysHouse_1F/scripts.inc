LittlerootTown_MaysHouse_1F_MapScripts::
	.byte 0


Neighbours_House_OldLady_EventScript::
	lock
	faceplayer
	msgbox Neighbours_House_OldLady_Text
	closemessage
	release
	end


OldLady_Television_EventScript::
	msgbox OldLady_Television_Text
	closemessage
	end


RivalsHouse_2F_EventScript_Rival::
	end


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
