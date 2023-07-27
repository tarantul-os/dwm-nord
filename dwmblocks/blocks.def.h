//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" [ BAT: ", " echo $(cat /sys/class/power_supply/BAT1/capacity)% ]",	30,		0},

	{"[ TIME: ", " echo $(date '+%I:%M %p') ] ",					5,		0},

	{"[ SSID: ", " echo $(iwgetid -r) ] ",					5,		0},

    {"[ VOL: ",  " echo $(pamixer --get-volume)% ] ", 1, 0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
