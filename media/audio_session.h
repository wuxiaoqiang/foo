
class AudioSessionObserver {
  public:
    virtual ~AudioSessionObserver();

  // 播放器状态回调
  public:
    virtual void did_prepared() = 0;

  // 声音打断处理
  public:
    virtual void interrupt_begin() = 0;
    virtual void interrupt_end() = 0;
};

class AudioSession {
  public:
    void add_session_observer(AudioSessionObserver *observer);
    void remove_session_observer(AudioSessionObserver *observer);

  public:
    void prepare_asyn();
    void start();
    void pause();
    void resume();
    void stop();
    void reset();
    void release();

  public:
    bool can_mix() const;
    char *play_url() const;
};

