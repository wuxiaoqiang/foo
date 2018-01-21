

class AudioPlayer {
  public:
    AudioPlayer();
    ~AudioPlayer()

  public:
    void set_data_source(char *uri);
    void prepare_asyn();
    void start();
    void stop();
    void seek(float msc);
    void reset();
    void release();

  public:
    float get_current_postion(); 
    bool is_playing();
};

