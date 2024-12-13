#include "include/SDL2/SDL.h"
#include "Keys.h"
#include <vector>
using namespace std;
using key_arr = std::array<std::array<bool, 2>, 233>;


void update_keys(key_arr& keys, SDL_Event event)
{
    switch (event.key.keysym.sym)
    {
    SDLK_BACKSPACE:
        keys[K_BACKSPACE][0] = true;
        break;
    SDLK_TAB:
        keys[K_TAB] = {true, true};
        break;
    SDLK_RETURN:
        keys[K_RETURN] = {true, true};
        break;
    SDLK_ESCAPE:
        keys[K_ESCAPE] = {true, true};
        break;
    SDLK_SPACE:
        keys[K_SPACE] = {true, true};
        break;
    SDLK_EXCLAIM:
        keys[K_EXCLAIM] = {true, true};
        break;
    SDLK_QUOTEDBL:
        keys[K_QUOTEDBL] = {true, true};
        break;
    SDLK_HASH:
        keys[K_HASH] = {true, true};
        break;
    SDLK_DOLLAR:
        keys[K_DOLLAR] = {true, true};
        break;
    SDLK_PERCENT:
        keys[K_PERCENT] = {true, true};
        break;
    SDLK_AMPERSAND:
        keys[K_AMPERSAND] = {true, true};
        break;
    SDLK_QUOTE:
        keys[K_QUOTE] = {true, true};
        break;
    SDLK_LEFTPAREN:
        keys[K_LEFTPAREN] = {true, true};
        break;
    SDLK_RIGHTPAREN:
        keys[K_RIGHTPAREN] = {true, true};
        break;
    SDLK_ASERISK:
        keys[K_ASERISK] = {true, true};
        break;
    SDLK_PLUS:
        keys[K_PLUS] = {true, true};
        break;
    SDLK_MINUS:
        keys[K_MINUS] = {true, true};
        break;
    SDLK_PERIOD:
        keys[K_PERIOD] = {true, true};
        break;
    SDLK_SLASH:
        keys[K_SLASH] = {true, true};
        break;
    SDLK_0:
        keys[K_0] = {true, true};
        break;
    SDLK_1:
        keys[K_1] = {true, true};
        break;
    SDLK_2:
        keys[K_2] = {true, true};
        break;
    SDLK_3:
        keys[K_3] = {true, true};
        break;
    SDLK_4:
        keys[K_4] = {true, true};
        break;
    SDLK_5:
        keys[K_5] = {true, true};
        break;
    SDLK_6:
        keys[K_6] = {true, true};
        break;
    SDLK_7:
        keys[K_7] = {true, true};
        break;
    SDLK_8:
        keys[K_8] = {true, true};
        break;
    SDLK_9:
        keys[K_9] = {true, true};
        break;
    SDLK_COLON:
        keys[K_COLON] = {true, true};
        break;
    SDLK_SEMICOLON:
        keys[K_SEMICOLON] = {true, true};
        break;
    SDLK_LESS:
        keys[K_LESS] = {true, true};
        break;
    SDLK_EQUALS:
        keys[K_EQUALS] = {true, true};
        break;
    SDLK_QUESTION:
        keys[K_QUESTION] = {true, true};
        break;
    SDLK_AT:
        keys[K_AT] = {true, true};
        break;
    SDLK_LEFTBRACKET:
        keys[K_LEFTBRACKET] = {true, true};
        break;
    SDLK_BACKSLASH:
        keys[K_BACKSLASH] = {true, true};
        break;
    SDLK_RIGHTBRACKET:
        keys[K_RIGHTBRACKET] = {true, true};
        break;
    SDLK_CARET:
        keys[K_CARET] = {true, true};
        break;
    SDLK_UNDERSCORE:
        keys[K_UNDERSCORE] = {true, true};
        break;
    SDLK_BACKQUOTE:
        keys[K_BACKQUOTE] = {true, true};
        break;
    SDLK_a:
        keys[K_a] = {true, true};
        break;
    SDLK_b:
        keys[K_b] = {true, true};
        break;
    SDLK_c:
        keys[K_c] = {true, true};
        break;
    SDLK_d:
        keys[K_d] = {true, true};
        break;
    SDLK_e:
        keys[K_e] = {true, true};
        break;
    SDLK_f:
        keys[K_f] = {true, true};
        break;
    SDLK_g:
        keys[K_g] = {true, true};
        break;
    SDLK_h:
        keys[K_h] = {true, true};
        break;
    SDLK_i:
        keys[K_i] = {true, true};
        break;
    SDLK_j:
        keys[K_j] = {true, true};
        break;
    SDLK_k:
        keys[K_k] = {true, true};
        break;
    SDLK_l:
        keys[K_l] = {true, true};
        break;
    SDLK_m:
        keys[K_m] = {true, true};
        break;
    SDLK_n:
        keys[K_n] = {true, true};
        break;
    SDLK_o:
        keys[K_o] = {true, true};
        break;
    SDLK_p:
        keys[K_p] = {true, true};
        break;
    SDLK_q:
        keys[K_q] = {true, true};
        break;
    SDLK_r:
        keys[K_r] = {true, true};
        break;
    SDLK_s:
        keys[K_s] = {true, true};
        break;
    SDLK_t:
        keys[K_t] = {true, true};
        break;
    SDLK_u:
        keys[K_u] = {true, true};
        break;
    SDLK_v:
        keys[K_v] = {true, true};
        break;
    SDLK_w:
        keys[K_w] = {true, true};
        break;
    SDLK_x:
        keys[K_x] = {true, true};
        break;
    SDLK_y:
        keys[K_y] = {true, true};
        break;
    SDLK_z:
        keys[K_z] = {true, true};
        break;
    SDLK_DELETE:
        keys[K_DELETE] = {true, true};
        break;
    SDLK_CAPSLOCK:
        keys[K_CAPSLOCK] = {true, true};
        break;
    SDLK_F1:
        keys[K_F1] = {true, true};
        break;
    SDLK_F2:
        keys[K_F2] = {true, true};
        break;
    SDLK_F3:
        keys[K_F3] = {true, true};
        break;
    SDLK_F4:
        keys[K_F4] = {true, true};
        break;
    SDLK_F5:
        keys[K_F5] = {true, true};
        break;
    SDLK_F6:
        keys[K_F6] = {true, true};
        break;
    SDLK_F7:
        keys[K_F7] = {true, true};
        break;
    SDLK_F8:
        keys[K_F8] = {true, true};
        break;
    SDLK_F9:
        keys[K_F9] = {true, true};
        break;
    SDLK_F10:
        keys[K_F10] = {true, true};
        break;
    SDLK_F11:
        keys[K_F11] = {true, true};
        break;
    SDLK_F12:
        keys[K_F12] = {true, true};
        break;
    SDLK_F13:
        keys[K_F13] = {true, true};
        break;
    SDLK_F14:
        keys[K_F14] = {true, true};
        break;
    SDLK_F15:
        keys[K_F15] = {true, true};
        break;
    SDLK_F16:
        keys[K_F16] = {true, true};
        break;
    SDLK_F17:
        keys[K_F17] = {true, true};
        break;
    SDLK_F18:
        keys[K_F18] = {true, true};
        break;
    SDLK_F19:
        keys[K_F19] = {true, true};
        break;
    SDLK_F20:
        keys[K_F20] = {true, true};
        break;
    SDLK_F21:
        keys[K_F21] = {true, true};
        break;
    SDLK_F22:
        keys[K_F22] = {true, true};
        break;
    SDLK_F23:
        keys[K_F23] = {true, true};
        break;
    SDLK_F24:
        keys[K_F24] = {true, true};
        break;
    SDLK_PRINTSCREEN:
        keys[K_PRINTSCREEN] = {true, true};
        break;
    SDLK_SCROLLLOCK:
        keys[K_SCROLLLOCK] = {true, true};
        break;
    SDLK_PAUSE:
        keys[K_PAUSE] = {true, true};
        break;
    SDLK_INSERT:
        keys[K_INSERT] = {true, true};
        break;
    SDLK_HOME:
        keys[K_HOME] = {true, true};
        break;
    SDLK_PAGEUP:
        keys[K_PAGEUP] = {true, true};
        break;
    SDLK_END:
        keys[K_END] = {true, true};
        break;
    SDLK_PAGEDOWN:
        keys[K_PAGEDOWN] = {true, true};
        break;
    SDLK_RIGHT:
        keys[K_RIGHT] = {true, true};
        break;
    SDLK_LEFT:
        keys[K_LEFT] = {true, true};
        break;
    SDLK_DOWN:
        keys[K_DOWN] = {true, true};
        break;
    SDLK_UP:
        keys[K_UP] = {true, true};
        break;
    SDLK_NUMLOCKCLEAR:
        keys[K_NUMLOCKCLEAR] = {true, true};
        break;
    SDLKP_DIVIDE:
        keys[KP_DIVIDE] = {true, true};
        break;
    SDLKP_MULTIPLY:
        keys[KP_MULTIPLY] = {true, true};
        break;
    SDLKP_MINUS:
        keys[KP_MINUS] = {true, true};
        break;
    SDLKP_PLUS:
        keys[KP_PLUS] = {true, true};
        break;
    SDLKP_ENTER:
        keys[KP_ENTER] = {true, true};
        break;
    SDLKP_0:
        keys[KP_0] = {true, true};
        break;
    SDLKP_1:
        keys[KP_1] = {true, true};
        break;
    SDLKP_2:
        keys[KP_2] = {true, true};
        break;
    SDLKP_3:
        keys[KP_3] = {true, true};
        break;
    SDLKP_4:
        keys[KP_4] = {true, true};
        break;
    SDLKP_5:
        keys[KP_5] = {true, true};
        break;
    SDLKP_6:
        keys[KP_6] = {true, true};
        break;
    SDLKP_7:
        keys[KP_7] = {true, true};
        break;
    SDLKP_8:
        keys[KP_8] = {true, true};
        break;
    SDLKP_9:
        keys[KP_9] = {true, true};
        break;
    SDLKP_PERIOD:
        keys[KP_PERIOD] = {true, true};
        break;
    SDLK_POWER:
        keys[K_POWER] = {true, true};
        break;
    SDLKP_EQUALS:
        keys[KP_EQUALS] = {true, true};
        break;
    SDLK_EXECUTE:
        keys[K_EXECUTE] = {true, true};
        break;
    SDLK_HELP:
        keys[K_HELP] = {true, true};
        break;
    SDLK_MENU:
        keys[K_MENU] = {true, true};
        break;
    SDLK_SELECT:
        keys[K_SELECT] = {true, true};
        break;
    SDLK_STOP:
        keys[K_STOP] = {true, true};
        break;
    SDLK_AGAIN:
        keys[K_AGAIN] = {true, true};
        break;
    SDLK_UNDO:
        keys[K_UNDO] = {true, true};
        break;
    SDLK_CUT:
        keys[K_CUT] = {true, true};
        break;
    SDLK_COPY:
        keys[K_COPY] = {true, true};
        break;
    SDLK_PASTE:
        keys[K_PASTE] = {true, true};
        break;
    SDLK_FIND:
        keys[K_FIND] = {true, true};
        break;
    SDLK_MUTE:
        keys[K_MUTE] = {true, true};
        break;
    SDLK_VOLUMEUP:
        keys[K_VOLUMEUP] = {true, true};
        break;
    SDLK_VOLUMEDOWN:
        keys[K_VOLUMEDOWN] = {true, true};
        break;
    SDLKP_COMMA:
        keys[KP_COMMA] = {true, true};
        break;
    SDLKP_EQUALSAS400:
        keys[KP_EQUALSAS400] = {true, true};
        break;
    SDLK_ALTERASE:
        keys[K_ALTERASE] = {true, true};
        break;
    SDLK_SYSREQ:
        keys[K_SYSREQ] = {true, true};
        break;
    SDLK_CANCEL:
        keys[K_CANCEL] = {true, true};
        break;
    SDLK_CLEAR:
        keys[K_CLEAR] = {true, true};
        break;
    SDLK_PRIOR:
        keys[K_PRIOR] = {true, true};
        break;
    SDLK_RETURN2:
        keys[K_RETURN2] = {true, true};
        break;
    SDLK_SEPERATOR:
        keys[K_SEPERATOR] = {true, true};
        break;
    SDLK_OUT:
        keys[K_OUT] = {true, true};
        break;
    SDLK_OPER:
        keys[K_OPER] = {true, true};
        break;
    SDLK_CLEARAGAIN:
        keys[K_CLEARAGAIN] = {true, true};
        break;
    SDLK_CRSEL:
        keys[K_CRSEL] = {true, true};
        break;
    SDLK_EXSEL:
        keys[K_EXSEL] = {true, true};
        break;
    SDLKP_00:
        keys[KP_00] = {true, true};
        break;
    SDLKP_000:
        keys[KP_000] = {true, true};
        break;
    SDLK_THOUSANDSSEPERATOR:
        keys[K_THOUSANDSSEPERATOR] = {true, true};
        break;
    SDLK_DECIMALSEPERATOR:
        keys[K_DECIMALSEPERATOR] = {true, true};
        break;
    SDLK_CURRENCYUNIT:
        keys[K_CURRENCYUNIT] = {true, true};
        break;
    SDLK_CURRENCYSUBUNIT:
        keys[K_CURRENCYSUBUNIT] = {true, true};
        break;
    SDLKP_LEFTPAREN:
        keys[KP_LEFTPAREN] = {true, true};
        break;
    SDLKP_RIGHTPAREN:
        keys[KP_RIGHTPAREN] = {true, true};
        break;
    SDLKP_LEFTBRACE:
        keys[KP_LEFTBRACE] = {true, true};
        break;
    SDLKP_RIGHTBRACE:
        keys[KP_RIGHTBRACE] = {true, true};
        break;
    SDLKP_TAB:
        keys[KP_TAB] = {true, true};
        break;
    SDLKP_TAB:
        keys[KP_TAB] = {true, true};
        break;
    SDLKP_BACKSPACE:
        keys[KP_BACKSPACE] = {true, true};
        break;
    SDLKP_A:
        keys[KP_A] = {true, true};
        break;
    SDLKP_B:
        keys[KP_B] = {true, true};
        break;
    SDLKP_C:
        keys[KP_C] = {true, true};
        break;
    SDLKP_D:
        keys[KP_D] = {true, true};
        break;
    SDLKP_E:
        keys[KP_E] = {true, true};
        break;
    SDLKP_F:
        keys[KP_F] = {true, true};
        break;
    SDLKP_XOR:
        keys[KP_XOR] = {true, true};
        break;
    SDLKP_POWER:
        keys[KP_POWER] = {true, true};
        break;
    SDLKP_PERCENT:
        keys[KP_PERCENT] = {true, true};
        break;
    SDLKP_LESS:
        keys[KP_LESS] = {true, true};
        break;
    SDLKP_GREATER:
        keys[KP_GREATER] = {true, true};
        break;
    SDLKP_AMPERSAND:
        keys[KP_AMPERSAND] = {true, true};
        break;
    SDLKP_DBLAMBERSAND:
        keys[KP_DBLAMBERSAND] = {true, true};
        break;
    SDLKP_VERTICALBAR:
        keys[KP_VERTICALBAR] = {true, true};
        break;
    SDLKP_DBLVERTICALBAR:
        keys[KP_DBLVERTICALBAR] = {true, true};
        break;
    SDLKP_COLON:
        keys[KP_COLON] = {true, true};
        break;
    SDLKP_HASH:
        keys[KP_HASH] = {true, true};
        break;
    SDLKP_SPACE:
        keys[KP_SPACE] = {true, true};
        break;
    SDLKP_AT:
        keys[KP_AT] = {true, true};
        break;
    SDLKP_EXCLAM:
        keys[KP_EXCLAM] = {true, true};
        break;
    SDLKP_MEMSTORE:
        keys[KP_MEMSTORE] = {true, true};
        break;
    SDLKP_MEMRECALL:
        keys[KP_MEMRECALL] = {true, true};
        break;
    SDLKP_MEMCLEAR:
        keys[KP_MEMCLEAR] = {true, true};
        break;
    SDLKP_MEMADD:
        keys[KP_MEMADD] = {true, true};
        break;
    SDLKP_MEMSUBTRACT:
        keys[KP_MEMSUBTRACT] = {true, true};
        break;
    SDLKP_MEMMULTIPLY:
        keys[KP_MEMMULTIPLY] = {true, true};
        break;
    SDLKP_MEMDIVIDE:
        keys[KP_MEMDIVIDE] = {true, true};
        break;
    SDLKP_PLUSMINUS:
        keys[KP_PLUSMINUS] = {true, true};
        break;
    SDLKP_CLEAR:
        keys[KP_CLEAR] = {true, true};
        break;
    SDLKP_CLEARENTRY:
        keys[KP_CLEARENTRY] = {true, true};
        break;
    SDLKP_BINARY:
        keys[KP_BINARY] = {true, true};
        break;
    SDLKP_OCTAL:
        keys[KP_OCTAL] = {true, true};
        break;
    SDLKP_DECIMAL:
        keys[KP_DECIMAL] = {true, true};
        break;
    SDLKP_HEXADECIMAL:
        keys[KP_HEXADECIMAL] = {true, true};
        break;
    SDLK_LCRTL:
        keys[K_LCRTL] = {true, true};
        break;
    SDLK_LSHIFT:
        keys[K_LSHIFT] = {true, true};
        break;
    SDLK_LALT:
        keys[K_LALT] = {true, true};
        break;
    SDLK_LGUI:
        keys[K_LGUI] = {true, true};
        break;
    SDLK_RCTRL:
        keys[K_RCTRL] = {true, true};
        break;
    SDLK_RSHIFT:
        keys[K_RSHIFT] = {true, true};
        break;
    SDLK_RALT:
        keys[K_RALT] = {true, true};
        break;
    SDLK_RGUI:
        keys[K_RGUI] = {true, true};
        break;
    SDLK_MODE:
        keys[K_MODE] = {true, true};
        break;
    SDLK_AUDIONEXT:
        keys[K_AUDIONEXT] = {true, true};
        break;
    SDLK_AUDIOPREV:
        keys[K_AUDIOPREV] = {true, true};
        break;
    SDLK_AUDIOSTOP:
        keys[K_AUDIOSTOP] = {true, true};
        break;
    SDLK_AUDIOPLAY:
        keys[K_AUDIOPLAY] = {true, true};
        break;
    SDLK_AUDIOMUTE:
        keys[K_AUDIOMUTE] = {true, true};
        break;
    SDLK_MEDIASELECT:
        keys[K_MEDIASELECT] = {true, true};
        break;
    SDLK_WWW:
        keys[K_WWW] = {true, true};
        break;
    SDLK_MAIL:
        keys[K_MAIL] = {true, true};
        break;
    SDLK_CALCULATOR:
        keys[K_CALCULATOR] = {true, true};
        break;
    SDLK_COMPUTER:
        keys[K_COMPUTER] = {true, true};
        break;
    SDLK_AC_SEARCH:
        keys[K_AC_SEARCH] = {true, true};
        break;
    SDLK_AC_HOME:
        keys[K_AC_HOME] = {true, true};
        break;
    SDLK_AC_BACK:
        keys[K_AC_BACK] = {true, true};
        break;
    SDLK_AC_FORWARD:
        keys[K_AC_FORWARD] = {true, true};
        break;
    SDLK_AC_STOP:
        keys[K_AC_STOP] = {true, true};
        break;
    SDLK_AC_REFRESH:
        keys[K_AC_REFRESH] = {true, true};
        break;
    SDLK_AC_BOOKMARKS:
        keys[K_AC_BOOKMARKS] = {true, true};
        break;
    SDLK_BRIGHTNESSDOWN:
        keys[K_BRIGHTNESSDOWN] = {true, true};
        break;
    SDLK_BRIGHTNESSUP:
        keys[K_BRIGHTNESSUP] = {true, true};
        break;
    SDLK_DISPLAYSWITCH:
        keys[K_DISPLAYSWITCH] = {true, true};
        break;
    SDLK_KBDILLUMTOGGLE:
        keys[K_KBDILLUMTOGGLE] = {true, true};
        break;
    SDLK_KBDILLUMDOWN:
        keys[K_KBDILLUMDOWN] = {true, true};
        break;
    SDLK_KBDILLUMUP:
        keys[K_KBDILLUMUP] = {true, true};
        break;
    SDLK_EJECT:
        keys[K_EJECT] = {true, true};
        break;
    SDLK_SLEEP:
        keys[K_SLEEP] = {true, true};
        break;
    }
    switch (event.keys.keysym.sym)
    {
    SDLK_BACKSPACE:
        keys[K_BACKSPACE] = {false, true};
        break;
    SDLK_TAB:
        keys[K_TAB] = {false, true};
        break;
    SDLK_RETURN:
        keys[K_RETURN] = {false, true};
        break;
    SDLK_ESCAPE:
        keys[K_ESCAPE] = {false, true};
        break;
    SDLK_SPACE:
        keys[K_SPACE] = {false, true};
        break;
    SDLK_EXCLAIM:
        keys[K_EXCLAIM] = {false, true};
        break;
    SDLK_QUOTEDBL:
        keys[K_QUOTEDBL] = {false, true};
        break;
    SDLK_HASH:
        keys[K_HASH] = {false, true};
        break;
    SDLK_DOLLAR:
        keys[K_DOLLAR] = {false, true};
        break;
    SDLK_PERCENT:
        keys[K_PERCENT] = {false, true};
        break;
    SDLK_AMPERSAND:
        keys[K_AMPERSAND] = {false, true};
        break;
    SDLK_QUOTE:
        keys[K_QUOTE] = {false, true};
        break;
    SDLK_LEFTPAREN:
        keys[K_LEFTPAREN] = {false, true};
        break;
    SDLK_RIGHTPAREN:
        keys[K_RIGHTPAREN] = {false, true};
        break;
    SDLK_ASERISK:
        keys[K_ASERISK] = {false, true};
        break;
    SDLK_PLUS:
        keys[K_PLUS] = {false, true};
        break;
    SDLK_MINUS:
        keys[K_MINUS] = {false, true};
        break;
    SDLK_PERIOD:
        keys[K_PERIOD] = {false, true};
        break;
    SDLK_SLASH:
        keys[K_SLASH] = {false, true};
        break;
    SDLK_0:
        keys[K_0] = {false, true};
        break;
    SDLK_1:
        keys[K_1] = {false, true};
        break;
    SDLK_2:
        keys[K_2] = {false, true};
        break;
    SDLK_3:
        keys[K_3] = {false, true};
        break;
    SDLK_4:
        keys[K_4] = {false, true};
        break;
    SDLK_5:
        keys[K_5] = {false, true};
        break;
    SDLK_6:
        keys[K_6] = {false, true};
        break;
    SDLK_7:
        keys[K_7] = {false, true};
        break;
    SDLK_8:
        keys[K_8] = {false, true};
        break;
    SDLK_9:
        keys[K_9] = {false, true};
        break;
    SDLK_COLON:
        keys[K_COLON] = {false, true};
        break;
    SDLK_SEMICOLON:
        keys[K_SEMICOLON] = {false, true};
        break;
    SDLK_LESS:
        keys[K_LESS] = {false, true};
        break;
    SDLK_EQUALS:
        keys[K_EQUALS] = {false, true};
        break;
    SDLK_QUESTION:
        keys[K_QUESTION] = {false, true};
        break;
    SDLK_AT:
        keys[K_AT] = {false, true};
        break;
    SDLK_LEFTBRACKET:
        keys[K_LEFTBRACKET] = {false, true};
        break;
    SDLK_BACKSLASH:
        keys[K_BACKSLASH] = {false, true};
        break;
    SDLK_RIGHTBRACKET:
        keys[K_RIGHTBRACKET] = {false, true};
        break;
    SDLK_CARET:
        keys[K_CARET] = {false, true};
        break;
    SDLK_UNDERSCORE:
        keys[K_UNDERSCORE] = {false, true};
        break;
    SDLK_BACKQUOTE:
        keys[K_BACKQUOTE] = {false, true};
        break;
    SDLK_a:
        keys[K_a] = {false, true};
        break;
    SDLK_b:
        keys[K_b] = {false, true};
        break;
    SDLK_c:
        keys[K_c] = {false, true};
        break;
    SDLK_d:
        keys[K_d] = {false, true};
        break;
    SDLK_e:
        keys[K_e] = {false, true};
        break;
    SDLK_f:
        keys[K_f] = {false, true};
        break;
    SDLK_g:
        keys[K_g] = {false, true};
        break;
    SDLK_h:
        keys[K_h] = {false, true};
        break;
    SDLK_i:
        keys[K_i] = {false, true};
        break;
    SDLK_j:
        keys[K_j] = {false, true};
        break;
    SDLK_k:
        keys[K_k] = {false, true};
        break;
    SDLK_l:
        keys[K_l] = {false, true};
        break;
    SDLK_m:
        keys[K_m] = {false, true};
        break;
    SDLK_n:
        keys[K_n] = {false, true};
        break;
    SDLK_o:
        keys[K_o] = {false, true};
        break;
    SDLK_p:
        keys[K_p] = {false, true};
        break;
    SDLK_q:
        keys[K_q] = {false, true};
        break;
    SDLK_r:
        keys[K_r] = {false, true};
        break;
    SDLK_s:
        keys[K_s] = {false, true};
        break;
    SDLK_t:
        keys[K_t] = {false, true};
        break;
    SDLK_u:
        keys[K_u] = {false, true};
        break;
    SDLK_v:
        keys[K_v] = {false, true};
        break;
    SDLK_w:
        keys[K_w] = {false, true};
        break;
    SDLK_x:
        keys[K_x] = {false, true};
        break;
    SDLK_y:
        keys[K_y] = {false, true};
        break;
    SDLK_z:
        keys[K_z] = {false, true};
        break;
    SDLK_DELETE:
        keys[K_DELETE] = {false, true};
        break;
    SDLK_CAPSLOCK:
        keys[K_CAPSLOCK] = {false, true};
        break;
    SDLK_F1:
        keys[K_F1] = {false, true};
        break;
    SDLK_F2:
        keys[K_F2] = {false, true};
        break;
    SDLK_F3:
        keys[K_F3] = {false, true};
        break;
    SDLK_F4:
        keys[K_F4] = {false, true};
        break;
    SDLK_F5:
        keys[K_F5] = {false, true};
        break;
    SDLK_F6:
        keys[K_F6] = {false, true};
        break;
    SDLK_F7:
        keys[K_F7] = {false, true};
        break;
    SDLK_F8:
        keys[K_F8] = {false, true};
        break;
    SDLK_F9:
        keys[K_F9] = {false, true};
        break;
    SDLK_F10:
        keys[K_F10] = {false, true};
        break;
    SDLK_F11:
        keys[K_F11] = {false, true};
        break;
    SDLK_F12:
        keys[K_F12] = {false, true};
        break;
    SDLK_F13:
        keys[K_F13] = {false, true};
        break;
    SDLK_F14:
        keys[K_F14] = {false, true};
        break;
    SDLK_F15:
        keys[K_F15] = {false, true};
        break;
    SDLK_F16:
        keys[K_F16] = {false, true};
        break;
    SDLK_F17:
        keys[K_F17] = {false, true};
        break;
    SDLK_F18:
        keys[K_F18] = {false, true};
        break;
    SDLK_F19:
        keys[K_F19] = {false, true};
        break;
    SDLK_F20:
        keys[K_F20] = {false, true};
        break;
    SDLK_F21:
        keys[K_F21] = {false, true};
        break;
    SDLK_F22:
        keys[K_F22] = {false, true};
        break;
    SDLK_F23:
        keys[K_F23] = {false, true};
        break;
    SDLK_F24:
        keys[K_F24] = {false, true};
        break;
    SDLK_PRINTSCREEN:
        keys[K_PRINTSCREEN] = {false, true};
        break;
    SDLK_SCROLLLOCK:
        keys[K_SCROLLLOCK] = {false, true};
        break;
    SDLK_PAUSE:
        keys[K_PAUSE] = {false, true};
        break;
    SDLK_INSERT:
        keys[K_INSERT] = {false, true};
        break;
    SDLK_HOME:
        keys[K_HOME] = {false, true};
        break;
    SDLK_PAGEUP:
        keys[K_PAGEUP] = {false, true};
        break;
    SDLK_END:
        keys[K_END] = {false, true};
        break;
    SDLK_PAGEDOWN:
        keys[K_PAGEDOWN] = {false, true};
        break;
    SDLK_RIGHT:
        keys[K_RIGHT] = {false, true};
        break;
    SDLK_LEFT:
        keys[K_LEFT] = {false, true};
        break;
    SDLK_DOWN:
        keys[K_DOWN] = {false, true};
        break;
    SDLK_UP:
        keys[K_UP] = {false, true};
        break;
    SDLK_NUMLOCKCLEAR:
        keys[K_NUMLOCKCLEAR] = {false, true};
        break;
    SDLKP_DIVIDE:
        keys[KP_DIVIDE] = {false, true};
        break;
    SDLKP_MULTIPLY:
        keys[KP_MULTIPLY] = {false, true};
        break;
    SDLKP_MINUS:
        keys[KP_MINUS] = {false, true};
        break;
    SDLKP_PLUS:
        keys[KP_PLUS] = {false, true};
        break;
    SDLKP_ENTER:
        keys[KP_ENTER] = {false, true};
        break;
    SDLKP_0:
        keys[KP_0] = {false, true};
        break;
    SDLKP_1:
        keys[KP_1] = {false, true};
        break;
    SDLKP_2:
        keys[KP_2] = {false, true};
        break;
    SDLKP_3:
        keys[KP_3] = {false, true};
        break;
    SDLKP_4:
        keys[KP_4] = {false, true};
        break;
    SDLKP_5:
        keys[KP_5] = {false, true};
        break;
    SDLKP_6:
        keys[KP_6] = {false, true};
        break;
    SDLKP_7:
        keys[KP_7] = {false, true};
        break;
    SDLKP_8:
        keys[KP_8] = {false, true};
        break;
    SDLKP_9:
        keys[KP_9] = {false, true};
        break;
    SDLKP_PERIOD:
        keys[KP_PERIOD] = {false, true};
        break;
    SDLK_POWER:
        keys[K_POWER] = {false, true};
        break;
    SDLKP_EQUALS:
        keys[KP_EQUALS] = {false, true};
        break;
    SDLK_EXECUTE:
        keys[K_EXECUTE] = {false, true};
        break;
    SDLK_HELP:
        keys[K_HELP] = {false, true};
        break;
    SDLK_MENU:
        keys[K_MENU] = {false, true};
        break;
    SDLK_SELECT:
        keys[K_SELECT] = {false, true};
        break;
    SDLK_STOP:
        keys[K_STOP] = {false, true};
        break;
    SDLK_AGAIN:
        keys[K_AGAIN] = {false, true};
        break;
    SDLK_UNDO:
        keys[K_UNDO] = {false, true};
        break;
    SDLK_CUT:
        keys[K_CUT] = {false, true};
        break;
    SDLK_COPY:
        keys[K_COPY] = {false, true};
        break;
    SDLK_PASTE:
        keys[K_PASTE] = {false, true};
        break;
    SDLK_FIND:
        keys[K_FIND] = {false, true};
        break;
    SDLK_MUTE:
        keys[K_MUTE] = {false, true};
        break;
    SDLK_VOLUMEUP:
        keys[K_VOLUMEUP] = {false, true};
        break;
    SDLK_VOLUMEDOWN:
        keys[K_VOLUMEDOWN] = {false, true};
        break;
    SDLKP_COMMA:
        keys[KP_COMMA] = {false, true};
        break;
    SDLKP_EQUALSAS400:
        keys[KP_EQUALSAS400] = {false, true};
        break;
    SDLK_ALTERASE:
        keys[K_ALTERASE] = {false, true};
        break;
    SDLK_SYSREQ:
        keys[K_SYSREQ] = {false, true};
        break;
    SDLK_CANCEL:
        keys[K_CANCEL] = {false, true};
        break;
    SDLK_CLEAR:
        keys[K_CLEAR] = {false, true};
        break;
    SDLK_PRIOR:
        keys[K_PRIOR] = {false, true};
        break;
    SDLK_RETURN2:
        keys[K_RETURN2] = {false, true};
        break;
    SDLK_SEPERATOR:
        keys[K_SEPERATOR] = {false, true};
        break;
    SDLK_OUT:
        keys[K_OUT] = {false, true};
        break;
    SDLK_OPER:
        keys[K_OPER] = {false, true};
        break;
    SDLK_CLEARAGAIN:
        keys[K_CLEARAGAIN] = {false, true};
        break;
    SDLK_CRSEL:
        keys[K_CRSEL] = {false, true};
        break;
    SDLK_EXSEL:
        keys[K_EXSEL] = {false, true};
        break;
    SDLKP_00:
        keys[KP_00] = {false, true};
        break;
    SDLKP_000:
        keys[KP_000] = {false, true};
        break;
    SDLK_THOUSANDSSEPERATOR:
        keys[K_THOUSANDSSEPERATOR] = {false, true};
        break;
    SDLK_DECIMALSEPERATOR:
        keys[K_DECIMALSEPERATOR] = {false, true};
        break;
    SDLK_CURRENCYUNIT:
        keys[K_CURRENCYUNIT] = {false, true};
        break;
    SDLK_CURRENCYSUBUNIT:
        keys[K_CURRENCYSUBUNIT] = {false, true};
        break;
    SDLKP_LEFTPAREN:
        keys[KP_LEFTPAREN] = {false, true};
        break;
    SDLKP_RIGHTPAREN:
        keys[KP_RIGHTPAREN] = {false, true};
        break;
    SDLKP_LEFTBRACE:
        keys[KP_LEFTBRACE] = {false, true};
        break;
    SDLKP_RIGHTBRACE:
        keys[KP_RIGHTBRACE] = {false, true};
        break;
    SDLKP_TAB:
        keys[KP_TAB] = {false, true};
        break;
    SDLKP_TAB:
        keys[KP_TAB] = {false, true};
        break;
    SDLKP_BACKSPACE:
        keys[KP_BACKSPACE] = {false, true};
        break;
    SDLKP_A:
        keys[KP_A] = {false, true};
        break;
    SDLKP_B:
        keys[KP_B] = {false, true};
        break;
    SDLKP_C:
        keys[KP_C] = {false, true};
        break;
    SDLKP_D:
        keys[KP_D] = {false, true};
        break;
    SDLKP_E:
        keys[KP_E] = {false, true};
        break;
    SDLKP_F:
        keys[KP_F] = {false, true};
        break;
    SDLKP_XOR:
        keys[KP_XOR] = {false, true};
        break;
    SDLKP_POWER:
        keys[KP_POWER] = {false, true};
        break;
    SDLKP_PERCENT:
        keys[KP_PERCENT] = {false, true};
        break;
    SDLKP_LESS:
        keys[KP_LESS] = {false, true};
        break;
    SDLKP_GREATER:
        keys[KP_GREATER] = {false, true};
        break;
    SDLKP_AMPERSAND:
        keys[KP_AMPERSAND] = {false, true};
        break;
    SDLKP_DBLAMBERSAND:
        keys[KP_DBLAMBERSAND] = {false, true};
        break;
    SDLKP_VERTICALBAR:
        keys[KP_VERTICALBAR] = {false, true};
        break;
    SDLKP_DBLVERTICALBAR:
        keys[KP_DBLVERTICALBAR] = {false, true};
        break;
    SDLKP_COLON:
        keys[KP_COLON] = {false, true};
        break;
    SDLKP_HASH:
        keys[KP_HASH] = {false, true};
        break;
    SDLKP_SPACE:
        keys[KP_SPACE] = {false, true};
        break;
    SDLKP_AT:
        keys[KP_AT] = {false, true};
        break;
    SDLKP_EXCLAM:
        keys[KP_EXCLAM] = {false, true};
        break;
    SDLKP_MEMSTORE:
        keys[KP_MEMSTORE] = {false, true};
        break;
    SDLKP_MEMRECALL:
        keys[KP_MEMRECALL] = {false, true};
        break;
    SDLKP_MEMCLEAR:
        keys[KP_MEMCLEAR] = {false, true};
        break;
    SDLKP_MEMADD:
        keys[KP_MEMADD] = {false, true};
        break;
    SDLKP_MEMSUBTRACT:
        keys[KP_MEMSUBTRACT] = {false, true};
        break;
    SDLKP_MEMMULTIPLY:
        keys[KP_MEMMULTIPLY] = {false, true};
        break;
    SDLKP_MEMDIVIDE:
        keys[KP_MEMDIVIDE] = {false, true};
        break;
    SDLKP_PLUSMINUS:
        keys[KP_PLUSMINUS] = {false, true};
        break;
    SDLKP_CLEAR:
        keys[KP_CLEAR] = {false, true};
        break;
    SDLKP_CLEARENTRY:
        keys[KP_CLEARENTRY] = {false, true};
        break;
    SDLKP_BINARY:
        keys[KP_BINARY] = {false, true};
        break;
    SDLKP_OCTAL:
        keys[KP_OCTAL] = {false, true};
        break;
    SDLKP_DECIMAL:
        keys[KP_DECIMAL] = {false, true};
        break;
    SDLKP_HEXADECIMAL:
        keys[KP_HEXADECIMAL] = {false, true};
        break;
    SDLK_LCRTL:
        keys[K_LCRTL] = {false, true};
        break;
    SDLK_LSHIFT:
        keys[K_LSHIFT] = {false, true};
        break;
    SDLK_LALT:
        keys[K_LALT] = {false, true};
        break;
    SDLK_LGUI:
        keys[K_LGUI] = {false, true};
        break;
    SDLK_RCTRL:
        keys[K_RCTRL] = {false, true};
        break;
    SDLK_RSHIFT:
        keys[K_RSHIFT] = {false, true};
        break;
    SDLK_RALT:
        keys[K_RALT] = {false, true};
        break;
    SDLK_RGUI:
        keys[K_RGUI] = {false, true};
        break;
    SDLK_MODE:
        keys[K_MODE] = {false, true};
        break;
    SDLK_AUDIONEXT:
        keys[K_AUDIONEXT] = {false, true};
        break;
    SDLK_AUDIOPREV:
        keys[K_AUDIOPREV] = {false, true};
        break;
    SDLK_AUDIOSTOP:
        keys[K_AUDIOSTOP] = {false, true};
        break;
    SDLK_AUDIOPLAY:
        keys[K_AUDIOPLAY] = {false, true};
        break;
    SDLK_AUDIOMUTE:
        keys[K_AUDIOMUTE] = {false, true};
        break;
    SDLK_MEDIASELECT:
        keys[K_MEDIASELECT] = {false, true};
        break;
    SDLK_WWW:
        keys[K_WWW] = {false, true};
        break;
    SDLK_MAIL:
        keys[K_MAIL] = {false, true};
        break;
    SDLK_CALCULATOR:
        keys[K_CALCULATOR] = {false, true};
        break;
    SDLK_COMPUTER:
        keys[K_COMPUTER] = {false, true};
        break;
    SDLK_AC_SEARCH:
        keys[K_AC_SEARCH] = {false, true};
        break;
    SDLK_AC_HOME:
        keys[K_AC_HOME] = {false, true};
        break;
    SDLK_AC_BACK:
        keys[K_AC_BACK] = {false, true};
        break;
    SDLK_AC_FORWARD:
        keys[K_AC_FORWARD] = {false, true};
        break;
    SDLK_AC_STOP:
        keys[K_AC_STOP] = {false, true};
        break;
    SDLK_AC_REFRESH:
        keys[K_AC_REFRESH] = {false, true};
        break;
    SDLK_AC_BOOKMARKS:
        keys[K_AC_BOOKMARKS] = {false, true};
        break;
    SDLK_BRIGHTNESSDOWN:
        keys[K_BRIGHTNESSDOWN] = {false, true};
        break;
    SDLK_BRIGHTNESSUP:
        keys[K_BRIGHTNESSUP] = {false, true};
        break;
    SDLK_DISPLAYSWITCH:
        keys[K_DISPLAYSWITCH] = {false, true};
        break;
    SDLK_KBDILLUMTOGGLE:
        keys[K_KBDILLUMTOGGLE] = {false, true};
        break;
    SDLK_KBDILLUMDOWN:
        keys[K_KBDILLUMDOWN] = {false, true};
        break;
    SDLK_KBDILLUMUP:
        keys[K_KBDILLUMUP] = {false, true};
        break;
    SDLK_EJECT:
        keys[K_EJECT] = {false, true};
        break;
    SDLK_SLEEP:
        keys[K_SLEEP] = {false, true};
        break;
    }
}