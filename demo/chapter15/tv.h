//
// Created by admin on 2021/11/30.
//

#ifndef CPLUSPLUSBASIC_TV_H
#define CPLUSPLUSBASIC_TV_H
class Tv;
class Remote {
    friend class Tv;
private:
    int mode;
    enum {
        Off, On
    };
    enum {
        MinVal, MaxVal = 20
    };
    enum {
        Antenna, Cable
    };
    enum {
        TV, DVD
    };
public:
    Remote(int m = TV) : mode(m) {}

    bool volup(Tv &t);
    bool voldown(Tv &tv) ;

    void onoff(Tv &tv);

    void chanup(Tv &tv) ;

    void chandown(Tv &tv);

    void set_chan(Tv &tv, int c);

    void set_mode(Tv &tv);

    void set_input(Tv &tv);

};

class Tv {
    friend class Remote;
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    friend void Remote::set_chan(Tv&tv,int c);

    void buzz(Remote& remote);

    enum {
        Off, On
    };
    enum {
        MinVal, MaxVal = 20
    };
    enum {
        Antenna, Cable
    };
    enum {
        TV, DVD
    };

    Tv(int s = Off, int mac = 125) : state(s), volume(5), maxchannel(mac), channel(2),
                                     mode(Cable), input(TV) {}

    void onoff() { state = (state == On) ? Off : On; }

    bool ison() const { return state == On; }

    bool volup();

    bool voldown();

    void chanup();

    void chandown();

    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }

    void set_input() { input = (input == TV) ? DVD : TV; }

    void settings() const;
};



class Outer{
private:
    int a;
    class PrivateInner{

    };

protected:
    int proa;
    class ProInner{

    };

public:
    int puba;
    class PubInner{

    };
};



#endif //CPLUSPLUSBASIC_TV_H
