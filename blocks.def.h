//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.config/dwm/baritem upgrades",		60 * 60,		0},
	{"", "~/.config/dwm/baritem cpu",			1,		0},
	{"", "~/.config/dwm/baritem vol",			1,		10},
	{"", "~/.config/dwm/baritem charge",		1,		0},
	{"", "~/.config/dwm/baritem kbd_layout",	1,		11},
	{"", "~/.config/dwm/baritem datetime",		1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
