#ifndef OPTIONS_H
#define OPTIONS_H

class Options
{
public:
    Options();

    QBool useALSA;
    QBool useJACK;
    QBool useWDM;
    QBool useOSS;
};

#endif // OPTIONS_H
