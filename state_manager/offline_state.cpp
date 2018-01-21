#include "offline_state.h"
#include "state_manager.h"

OfflineState::OfflineState(StateManager *manager)
  : State(manager) {
} 

OfflineState::~OfflineState() {
}

void OfflineState::do_cmd(Cmd &cmd) {
}

void OfflineState::do_action(Cmd &cmd) {
}

void OfflineState::do_message(Cmd &cmd) {
}

