/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 30;

/* default message */
static const char * message = "Screen locked. Type password to unlock.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-adobe-helvetica-*-r-*-*-24-*-*-*-*-*-*-*";


/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 40;
/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 20;

static XRectangle rectangles[9] = {
	/* x    y       w       h */
	{ 0,    3,      1,      3 },
	{ 1,    3,      2,      1 },
	{ 0,    5,      8,      1 },
	{ 3,    0,      1,      5 },
	{ 5,    3,      1,      2 },
	{ 7,    3,      1,      2 },
	{ 8,    3,      4,      1 },
	{ 9,    4,      1,      2 },
	{ 11,   4,      1,      2 },
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=20;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=10;

