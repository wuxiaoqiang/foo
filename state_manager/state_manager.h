#include "state.h"
#include "idle_state.h"
#include "offline_state.h"
#include "stable_state.h"
#include "dialog_state.h"

class StateManager {
  public:
    StateManager();
    ~StateManager();

  public:
    void do_action(Cmd &cmd);
    void do_cmd(Cmd& cmd);
    void do_message(Cmd& cmd);

  public:
    State *current_state();
    void set_current_state(State *state);

  public:
    State *idle_state();
    State *offline_state();
    State *stable_state();
    State *dialog_state();

  private:
    State         *mCurrentState;
    IdleState     *mIdleState;
    OfflineState  *mOfflineState;
    StableState   *mStableState;
    DialogState   *mDialogState;
};

