#include "offline_state.h"
#include "state_manager.h"

StableState::StableState(StateManager *manager)
  : State(manager) {
} 

StableState::~StableState() {
}

void StableState::do_cmd(Cmd &cmd) {
}

void StableState::do_action(Cmd &cmd) {
}

void StableState::do_message(Cmd &cmd) {
}

