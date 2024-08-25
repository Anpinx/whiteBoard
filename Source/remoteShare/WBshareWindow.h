#ifndef WBDOCUMENTCONTAINER_H_
#include <cstdlib>  // for system()
using namespace std;

class remoteInte {
public:
    virtual void cmd_windows() = 0;
};
class WBshareWindow :protected remoteInte
{
public:
    virtual void cmd_windows() override;
    WBshareWindow();
};
#endif
