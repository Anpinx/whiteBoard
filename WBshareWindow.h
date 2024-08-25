#include <cstdlib>  // for system()
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
