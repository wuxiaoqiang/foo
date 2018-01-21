#include "state.h"

using media::State;

class MediaStateManager {
  public:
    void play_alert(char *uri);
    void play_media(char *uri);
    void play_tts(char* uri);
    void stop_play();

  public:
    void set_current_state(State *state);

  private:
    State *mCurrentState;
};

