//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{"", "volume",  			3,		            10},

    {"",     "battery",         5,                  3},
	{" 💻 Memory", "memory | sed 's/-e//g'",			60,		            1},
	{" 💻 CPU Usage ", "cpu",			60,		            1},
	{" 🕑 ", "clock | sed 's/-e//g'",			2,		            1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
