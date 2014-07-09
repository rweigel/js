// keycode definitions from winuser.h

#ifndef VK_BACK

#define VK_BACK           0x08
#define VK_TAB            0x09

/*
 * 0x0A - 0x0B : reserved
 */

#define VK_CLEAR          0x0C
#define VK_RETURN         0x0D

#define VK_SHIFT          0x10
#define VK_CONTROL        0x11
#define VK_MENU           0x12
#define VK_PAUSE          0x13
#define VK_CAPITAL        0x14

#define VK_KANA           0x15
#define VK_HANGEUL        0x15  /* old name - should be here for compatibility */
#define VK_HANGUL         0x15
#define VK_JUNJA          0x17
#define VK_FINAL          0x18
#define VK_HANJA          0x19
#define VK_KANJI          0x19

#define VK_ESCAPE         0x1B

#define VK_CONVERT        0x1C
#define VK_NONCONVERT     0x1D
#define VK_ACCEPT         0x1E
#define VK_MODECHANGE     0x1F

#define VK_SPACE          0x20
#define VK_PRIOR          0x21
#define VK_NEXT           0x22
#define VK_END            0x23
#define VK_HOME           0x24
#define VK_LEFT           0x25
#define VK_UP             0x26
#define VK_RIGHT          0x27
#define VK_DOWN           0x28
#define VK_SELECT         0x29
#define VK_PRINT          0x2A
#define VK_EXECUTE        0x2B
#define VK_SNAPSHOT       0x2C
#define VK_INSERT         0x2D
#define VK_DELETE         0x2E
#define VK_HELP           0x2F

/*
 * VK_0 - VK_9 are the same as ASCII '0' - '9' (0x30 - 0x39)
 * 0x40 : unassigned
 * VK_A - VK_Z are the same as ASCII 'A' - 'Z' (0x41 - 0x5A)
 */

#define VK_LWIN           0x5B
#define VK_RWIN           0x5C
#define VK_APPS           0x5D

/*
 * 0x5E : reserved
 */

#define VK_SLEEP          0x5F

#define VK_NUMPAD0        0x60
#define VK_NUMPAD1        0x61
#define VK_NUMPAD2        0x62
#define VK_NUMPAD3        0x63
#define VK_NUMPAD4        0x64
#define VK_NUMPAD5        0x65
#define VK_NUMPAD6        0x66
#define VK_NUMPAD7        0x67
#define VK_NUMPAD8        0x68
#define VK_NUMPAD9        0x69
#define VK_MULTIPLY       0x6A
#define VK_ADD            0x6B
#define VK_SEPARATOR      0x6C
#define VK_SUBTRACT       0x6D
#define VK_DECIMAL        0x6E
#define VK_DIVIDE         0x6F
#define VK_F1             0x70
#define VK_F2             0x71
#define VK_F3             0x72
#define VK_F4             0x73
#define VK_F5             0x74
#define VK_F6             0x75
#define VK_F7             0x76
#define VK_F8             0x77
#define VK_F9             0x78
#define VK_F10            0x79
#define VK_F11            0x7A
#define VK_F12            0x7B
#define VK_F13            0x7C
#define VK_F14            0x7D
#define VK_F15            0x7E
#define VK_F16            0x7F
#define VK_F17            0x80
#define VK_F18            0x81
#define VK_F19            0x82
#define VK_F20            0x83
#define VK_F21            0x84
#define VK_F22            0x85
#define VK_F23            0x86
#define VK_F24            0x87

/*
 * 0x88 - 0x8F : unassigned
 */

#define VK_NUMLOCK        0x90
#define VK_SCROLL         0x91

/*
 * NEC PC-9800 kbd definitions
 */
#define VK_OEM_NEC_EQUAL  0x92   // '=' key on numpad

/*
 * Fujitsu/OASYS kbd definitions
 */
#define VK_OEM_FJ_JISHO   0x92   // 'Dictionary' key
#define VK_OEM_FJ_MASSHOU 0x93   // 'Unregister word' key
#define VK_OEM_FJ_TOUROKU 0x94   // 'Register word' key
#define VK_OEM_FJ_LOYA    0x95   // 'Left OYAYUBI' key
#define VK_OEM_FJ_ROYA    0x96   // 'Right OYAYUBI' key

/*
 * 0x97 - 0x9F : unassigned
 */

/*
 * VK_L* & VK_R* - left and right Alt, Ctrl and Shift virtual keys.
 * Used only as parameters to GetAsyncKeyState() and GetKeyState().
 * No other API or message will distinguish left and right keys in this way.
 */
#define VK_LSHIFT         0xA0
#define VK_RSHIFT         0xA1
#define VK_LCONTROL       0xA2
#define VK_RCONTROL       0xA3
#define VK_LMENU          0xA4
#define VK_RMENU          0xA5

#if(_WIN32_WINNT >= 0x0500)
#define VK_BROWSER_BACK        0xA6
#define VK_BROWSER_FORWARD     0xA7
#define VK_BROWSER_REFRESH     0xA8
#define VK_BROWSER_STOP        0xA9
#define VK_BROWSER_SEARCH      0xAA
#define VK_BROWSER_FAVORITES   0xAB
#define VK_BROWSER_HOME        0xAC

#define VK_VOLUME_MUTE         0xAD
#define VK_VOLUME_DOWN         0xAE
#define VK_VOLUME_UP           0xAF
#define VK_MEDIA_NEXT_TRACK    0xB0
#define VK_MEDIA_PREV_TRACK    0xB1
#define VK_MEDIA_STOP          0xB2
#define VK_MEDIA_PLAY_PAUSE    0xB3
#define VK_LAUNCH_MAIL         0xB4
#define VK_LAUNCH_MEDIA_SELECT 0xB5
#define VK_LAUNCH_APP1         0xB6
#define VK_LAUNCH_APP2         0xB7

#endif /* _WIN32_WINNT >= 0x0500 */

/*
 * 0xB8 - 0xB9 : reserved
 */

#define VK_OEM_1          0xBA   // ';:' for US
#define VK_OEM_PLUS       0xBB   // '+' any country
#define VK_OEM_COMMA      0xBC   // ',' any country
#define VK_OEM_MINUS      0xBD   // '-' any country
#define VK_OEM_PERIOD     0xBE   // '.' any country
#define VK_OEM_2          0xBF   // '/?' for US
#define VK_OEM_3          0xC0   // '`~' for US

/*
 * 0xC1 - 0xD7 : reserved
 */

/*
 * 0xD8 - 0xDA : unassigned
 */

#define VK_OEM_4          0xDB  //  '[{' for US
#define VK_OEM_5          0xDC  //  '\|' for US
#define VK_OEM_6          0xDD  //  ']}' for US
#define VK_OEM_7          0xDE  //  ''"' for US
#define VK_OEM_8          0xDF

#endif

#ifndef VK_OEM_PLUS
#define VK_OEM_PLUS       0xBB   // '+' any country
#define VK_OEM_MINUS      0xBD   // '-' any country
#endif

struct Input {
	enum { eKup, eKdown };
	struct { int code; char updn; wchar_t unichar; } key;
};

struct AwKeyState {
	enum {
		eShift, eShiftL, eShiftR,
		eCtrl, eCtrlL, eCtrlR,
		eAlt, eAltL, eAltR,
		eWinL, eWinR,
		eCaps,
		eShiftEnd
	};

	void init() { memset(mShifts, 0, sizeof(mShifts)); }
	void FillinChar(Input* ioIn);

	bool mShifts[eShiftEnd];
};

static size_t asc2Uni(wchar_t* oUni, const char* iAsc, size_t iMax, bool iCap = false)
{
	size_t aC = 0;
	while (*iAsc != '\0' && aC < iMax)
		oUni[aC++] = *iAsc++;
	if (aC && iCap)
		oUni[0] = toupper(oUni[0]);
	return aC;
}

static int sNumShift[] = { ')', '!', '@', '#', '$', '%', '^', '&', '*', '(' };

static int sSymk[] = {
	';', '=', ',', '-', '.', '/', '`', 
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, // gap in vk_oem sequence
	'[', '\\', ']', '\''
};
static int sSyms[] = {
	':', '+', '<', '_', '>', '?', '~',
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	'{', '|', '}', '"'
};
static unsigned int sArrow[] = {
	0x21d1, 0x21d3, 0x21d2, 0x21d0, 0x2190, 0x2191, 0x2192, 0x2193
};

static int sShiftCode[AwKeyState::eShiftEnd] = {
	VK_SHIFT, VK_LSHIFT, VK_RSHIFT,
	VK_CONTROL, VK_LCONTROL, VK_RCONTROL,
	VK_MENU, VK_LMENU, VK_RMENU,
	VK_LWIN, VK_RWIN,
	VK_CAPITAL
};

#ifndef VK_OEM_1
#define VK_OEM_1 0xBA
#endif
#ifndef VK_OEM_7
#define VK_OEM_7 0xDE
#endif

void
AwKeyState::FillinChar(Input* ioIn)
{
	switch(ioIn->key.code) { // do nothing for shift keys
	case VK_SHIFT:   case VK_LSHIFT:   case VK_RSHIFT:
	case VK_CONTROL: case VK_LCONTROL: case VK_RCONTROL:
	case VK_MENU:    case VK_LMENU:    case VK_RMENU:
	case VK_LWIN:    case VK_RWIN:
	case VK_CAPITAL: {
		int aType;
		for (aType = 0; sShiftCode[aType] != ioIn->key.code; ++aType) ;
		if (ioIn->key.code != VK_CAPITAL)
			mShifts[aType] = !!ioIn->key.updn;
		else if (ioIn->key.updn == Input::eKup)
			mShifts[aType] = !mShifts[aType];
	} // fall through
	case 0:
		ioIn->key.unichar = 0;
		return;
	}

	if (ioIn->key.updn == Input::eKup) {
		ioIn->key.unichar = 0;
		return;
	}

	bool aShift = mShifts[eShift] || mShifts[eShiftL] || mShifts[eShiftR];
	bool aCtrl = mShifts[eCtrl] || mShifts[eCtrlL] || mShifts[eCtrlR];
	bool aAlt = mShifts[eAlt] || mShifts[eAltL] || mShifts[eAltR];
	bool aWin = mShifts[eWinL] || mShifts[eWinR];
	bool aCaps = mShifts[eCaps];

	if (ioIn->key.code >= 'A' && ioIn->key.code <= 'Z')
		ioIn->key.unichar = (aShift && !aCaps) || (aCaps && !aShift) ? ioIn->key.code : tolower(ioIn->key.code);

	else if (ioIn->key.code >= '0' && ioIn->key.code <= '9')
		ioIn->key.unichar = aShift ? sNumShift[ioIn->key.code-'0'] : ioIn->key.code;

	else if (ioIn->key.code >= VK_OEM_1 && ioIn->key.code <= VK_OEM_7)
		ioIn->key.unichar = aShift ? sSyms[ioIn->key.code-VK_OEM_1] : sSymk[ioIn->key.code-VK_OEM_1];

	else if (ioIn->key.code >= VK_PRIOR && ioIn->key.code <= VK_DOWN)
		ioIn->key.unichar = sArrow[ioIn->key.code - VK_PRIOR];

	else if (ioIn->key.code >= VK_F1 && ioIn->key.code <= VK_F24)
		ioIn->key.unichar = 0x222b;

	else switch(ioIn->key.code) {
		case VK_RETURN:
			ioIn->key.unichar = '\n'; break;
		case VK_SPACE:
			ioIn->key.unichar = ' '; break;
		case VK_ESCAPE:
			ioIn->key.unichar = 0x25b; break;
		case VK_TAB:
			ioIn->key.unichar = 0x22a5; break;
		case VK_INSERT:
			ioIn->key.unichar = 0x21b4; break;
		case VK_DELETE:
			ioIn->key.unichar = 0x25b9; break;
		case VK_BACK:
			ioIn->key.unichar = 0xd7; break;
		case VK_APPS:
			ioIn->key.unichar = 0x2261; break;
		default:
			ioIn->key.unichar = 0xbf; break;
	}
}
