//
// Created by admin on 2021/11/30.
//

#include "tv.h"
#include <iostream>

bool Tv::volup() {
    if (volume < MaxVal) {
        volume++;
        return true;
    } else
        return false;
}

bool Tv::voldown() {
    if (volume > MinVal) {
        volume--;
        return true;
    } else {
        return false;
    }
}

void Tv::chanup() {
    if (channel < maxchannel) {
        channel++;
    } else
        channel = 1;
}

void Tv::chandown() {
    if (channel > 1) {
        channel--;
    } else {
        channel = maxchannel;
    }
}

inline void Tv::buzz(Remote &remote) {

}

void Tv::settings() const {
    using namespace std;
    cout << "TV is " << (state == Off ? "Off" : "On") << endl;
    if (state == On) {
        cout << " Volume settings = " << volume << endl;
        cout << " Channel settings = " << channel << endl;
        cout << " Mode settings = " << (mode == Antenna ? " antenna" : " cable") << endl;
        cout << " Input = " << (input == TV ? " TV" : " DVD") << endl;
    }
}


bool Remote::volup(Tv &t) {
    return t.volup();
}

bool Remote::voldown(Tv &tv) { return tv.voldown(); }

void Remote::onoff(Tv &tv) { tv.onoff(); }

void Remote::chanup(Tv &tv) { tv.chanup(); };

void Remote::chandown(Tv &tv) { tv.chandown(); };

void Remote::set_chan(Tv &tv, int c) { tv.channel = c; }

void Remote::set_mode(Tv &tv) { tv.set_mode(); }

void Remote::set_input(Tv &tv) { tv.set_input(); }