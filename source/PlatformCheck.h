#ifndef PLATFORMCHECK_H
#define PLATFORMCHECK_H

class PlatformCheck
{
public:
   static bool isWin();
   static bool isMac();
   static bool isX11();
};

#endif // PLATFORMCHECK_H
