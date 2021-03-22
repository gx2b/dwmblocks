#define CMDLENGTH 50
#define delimiter "|"

static const Block blocks[] = {
    /*Command*/        /*Update Interval*/    /*Update Signal*/
    { "music",         0,    11 },
    { "moonphase", 18000,     4 },
    { "weather",   18000,     5 },
    { "volume",        0,    10 },
    { "nettraf",      10,    16 },
    { "clock",        10,     6 },
    { "killwin",       0,    15 },
};
