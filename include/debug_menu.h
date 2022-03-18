#ifndef GUARD_DEBUG_MENU_H
#define GUARD_DEBUG_MENU_H

#if DEBUG_MODE == TRUE
extern const u8 Debug_Script_1[];
extern const u8 Debug_Script_2[];

extern const u8 PlayersHouse_2F_EventScript_CheckWallClock[];
extern const u8 PlayersHouse_2F_EventScript_SetWallClock[];

extern const u8 Debug_ShowFieldMessageStringVar4[];

void Debug_ShowMainMenu(void);

#endif

#endif // GUARD_DEBUG_MENU_H
