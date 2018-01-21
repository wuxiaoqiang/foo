#include "state.h"

class StableState: State{
  public:
    StableState(StateManager *manager);
    virtual ~StableState();
  public:
    virtual void do_action(Cmd &cmd);
    virtual void do_cmd(Cmd &cmd);
    virtual void do_message(Cmd &cmd);
};

