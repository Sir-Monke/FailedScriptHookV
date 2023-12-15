#include "pch.h"
#include <windows.h>
#include <main.h>
#include <natives.h>
#include "script.h"

void mainLoop() {
	while (1) {
		if (GetAsyncKeyState(VK_NUMPAD2) & 1) {
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		}
		else {
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(),0,0);
		}
	}
}