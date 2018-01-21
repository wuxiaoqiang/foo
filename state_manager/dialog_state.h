#include "state.h"

class DialogState: State {
  public:
    DialogState(StateManager *manager);
    virtual ~DialogState();
  public:
    virtual void do_action(Cmd &cmd);
    virtual void do_cmd(Cmd &cmd);
    virtual void do_message(Cmd &cmd);
};

