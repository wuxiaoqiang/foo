#include "state.h"

class OfflineState: State {
  public:
    OfflineState(StateManager *manager);
    virtual ~OfflineState();

  public:
    virtual void do_action(Cmd &cmd);
    virtual void do_cmd(Cmd &cmd);
    virtual void do_message(Cmd &cmd);
};
