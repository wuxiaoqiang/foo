
class MediaStateManager;

namespace media {
  class State {
    public:
      State(MediaStateManager *manager);
      virtual ~State();

    public:
      virtual void do_play_alert() = 0;
      virtual void do_play_media() = 0;
      virtual void do_play_tts() = 0;
      virtual void do_stop_play() = 0;

    protected:
      MediaStateManager *mStateManager;
  };
}
