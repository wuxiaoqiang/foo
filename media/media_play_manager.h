
class AudioPlayer;

class MediaPlayManager {
  public:
    MediaPlayManager();
    ~MediaPlayManager();

  public:
    void add_source(); 
    void remove_source();
    void forword();
    void backwork();

  public:
    void prepare_asyn();
    void start();
    void seek(float msc);
    void pause();
    void stop();

  public:
    bool is_playing() const;

  protected:
    const char *device_name() const;
  
  protected:
    AudioPlayer *mPlayer;
};

