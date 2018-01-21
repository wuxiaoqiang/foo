#include "cmd.h"

class StateManager;

class State {
  State(StateManager *manager);
  virtual ~State();

public:
  virtual void do_action(Cmd &cmd) = 0;
  virtual void do_cmd(Cmd &cmd) = 0;
  virtual void do_message(Cmd &cmd) = 0;

protected :
  StateManager *mStateManager;
};

