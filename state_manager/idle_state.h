#include "state.h"

class IdleState: State {
public:
    IdleState(StateManager *manager);
    virtual ~IdleState();

public:
    virtual void do_action(Cmd &cmd);
    virtual void do_cmd(Cmd &cmd);
    virtual void do_message(Cmd &cmd);
};

