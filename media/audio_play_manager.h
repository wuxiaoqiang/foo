
class AudioSession;

class AudioPlayManager {
  public:
    AudioSession *create_audio_session(char *uri, bool mix);
    void remove_audio_session(AudioSession *session);

  public:
    void do_action();
    void do_message();
};
