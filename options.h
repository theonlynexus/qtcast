#ifndef OPTIONS_H
#define OPTIONS_H

class Options
{
public:
    Options();

    bool useALSA;
    bool useJACK;
    bool useWDM;
    bool useOSS;
};

#endif // OPTIONS_H
