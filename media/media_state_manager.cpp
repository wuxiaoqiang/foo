#include "media_state_manager.h"

void MediaStateManager::set_current_state(State *state) {
  mCurrentState = state;
}

void MediaStateManager::play_alert(char *uri) {
  mCurrentState->do_play_alert();
}

void MediaStateManager::play_media(char *uri) {
  mCurrentState->do_play_media();
}

void MediaStateManager::play_tts(char *uri) {
  mCurrentState->do_play_tts();
}

void MediaStateManager::stop_play() {
  mCurrentState->do_stop_play();
}
