#include "state_manager.h"
#include <stdlib.h>

StateManager::StateManager() {
    mIdleState    = new IdleState(this);
    mOfflineState = new OfflineState(this);
    mDialogState  = new DialogState(this);
    mStableState  = new StableState(this);

    mCurrentState = (State*)mIdleState;
}

StateManager::~StateManager() {
    delete mIdleState;
    delete mOfflineState;
    delete mDialogState;
    delete mStableState;
}

void StateManager::do_cmd(Cmd &cmd) {
  current_state()->do_cmd(cmd);
}

void StateManager::do_action(Cmd &cmd) {
  current_state()->do_action(cmd);
}

void StateManager::do_message(Cmd &cmd) {
  current_state()->do_message(cmd);
}

State *StateManager::current_state() {
  return mCurrentState;
}

void StateManager::set_current_state(State *state) {
  mCurrentState = state;
}

State *StateManager::idle_state() {
  return (State*)mIdleState;
}

State *StateManager::stable_state() {
  return (State*)mStableState;
}

State *StateManager::offline_state() {
  return (State*)mOfflineState;
}

State *StateManager::dialog_state() {
  return (State*)mDialogState;
}

