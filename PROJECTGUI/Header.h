#pragma once
//#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<fstream>
#include<string>
#include<conio.h>
#include<algorithm>
#include<msclr\marshal_cppstd.h>
//#pragma comment(lib, "Winmm.lib")


using namespace std;

class storage_media {
    string manufacture;
    string modelno;

protected:
    int mou;
    string song[5];

    int counter;


public:

    //void mount();
    void setter(int);
    
    int getter();

    void source();

    void USB();

    void CD();
    //string,int
    string playlist(int i);

    //void playlistUSB();

    void play();

    void close(int i);

    void pause(int i);

    void resume(int i);

    void next(int i);

    void pervious(int i);

    void shifl(int i);   

    void remove(int i, int h);

    string title(int i);

    string title2(int i);

    void search(int i, int h);
    //System::String^ search(System::String^ i);
};


void storage_media::setter(int i) {
    counter = i;
}

int storage_media::getter() {
    return counter;
}
//void storage_media::mount() {
//    //cout << "\n\n  Press 1 to Mount your device\n  Prees 0 to unmount your Device ";
//    //cin >> mou;
//
//    if (mou == 1) {
//
//        //cout << "  \n\n Audio Player is mounted. ";
//        source();
//    }
//    else if (mou == 0)
//    {
//        //cout << "\n\n  You have unmounted the Device.\n";
//        exit(0);
//    }
//
//}

void storage_media::source() {
    /* int c;*/
     //cout << "\n\n  Add USB or CD source. (1 for USB , 2 for CD)";
     //cin >> c;

     //if (c == 1) {
     //    //cout << "\n  USB source";
     //    USB();
     //}
     //if (c == 2) {
     //    //cout << "\n  CD source";
     //    CD();
     //}
     //else
         //cout << "\n Invalid Source";


     //else                        // If there is No such Data Exists
     //    //cout << "\n  ----- There is no such record Exist.----- \n";
}

void storage_media::USB() {

    fstream file("USBsource.txt", ios::in);
    string line; // String variable has been Declared
    if (file.is_open())
    {
        //cout << endl;

        while (!file.eof()) // Using While loop which reads the files contents
        {

            for (int i = 0; i < 5; i++)
            {
                getline(file, song[i]);      
                playlist(i);
                   //cout << endl << song[i];


            }
            //  //cout << line << endl;  // Data from the console has been Displayed

        }

        file.close(); // Closing of the file to stop the loss of Data .
        play();
    }

}

void storage_media::CD() {

    fstream file("CDsource.txt", ios::in);
    string line; // String variable has been Declared
    if (file.is_open())
    {
        //cout << endl;

        while (!file.eof()) // Using While loop which reads the files contents
        {



            for (int i = 0; i < 5; i++)
            {
                getline(file, song[i]);
                /*int k = 0;
                if (k <= 3)
                {
                    k++;
                    return song[i - 1];
                }*/

                //cout << endl << song[i];

                /*  //cin.get(0);*/
            }
            //  //cout << line << endl;  // Data from the console has been Displayed

        }

        file.close(); // Closing of the file to stop the loss of Data .
        play();
        
    }


}
string storage_media::title(int i) { 
    setter(getter());
    return song[getter()];

}
string storage_media::title2(int i) {

    return song[i];

}

string storage_media::playlist(int i) {
    setter(getter());
    return song[i];
   

}
void storage_media::play() {
 
    
        string openAudioCommand = "open " + string(song[0]);
        mciSendStringA(openAudioCommand.c_str(), nullptr, 0, nullptr);

        string playAudioCommand = "play " + string(song[0]);
        mciSendStringA(playAudioCommand.c_str(), nullptr, 0, nullptr);
  
  /*      string closeAudioCommand = "close " + string(song[i]);
        mciSendStringA(closeAudioCommand.c_str(), nullptr, 0, nullptr);
  */
        
    
}

void storage_media::search(int i, int h)
{
    string closeAudioCommand = "close " + string(song[i]);
    mciSendStringA(closeAudioCommand.c_str(), nullptr, 0, nullptr);

    string playAudioCommand = "play " + string(song[h]);
    mciSendStringA(playAudioCommand.c_str(), nullptr, 0, nullptr);
}

void storage_media::pause(int i)
{
   /* bool resume = false;
    char a;
    while (!resume)
    {*/
        setter(getter());
        string pauseAudioCommand = "pause " + string(song[getter()]);
        mciSendStringA(pauseAudioCommand.c_str(), nullptr, 0, nullptr);
    //}
}

void storage_media::resume(int i) {
    setter(getter());
    string resumeAudioCommand = "resume " + string(song[getter()]);
    mciSendStringA(resumeAudioCommand.c_str(), nullptr, 0, nullptr);
}

void storage_media::next(int i) {
    string closeAudioCommand = "close " + string(song[i]);
    mciSendStringA(closeAudioCommand.c_str(), nullptr, 0, nullptr);

    setter(getter()+1);
          string playAudioCommand = "play " + string(song[getter()]);
          mciSendStringA(playAudioCommand.c_str(), nullptr, 0, nullptr);
}

void storage_media::pervious(int i) {
    if (i == 0) {
        //cout << "\n  No Pervious recorde\n";
        string closeAudioCommand = "close " + string(song[i]);
        mciSendStringA(closeAudioCommand.c_str(), nullptr, 0, nullptr);
        
        string playAudioCommand = "play " + string(song[i]);
        mciSendStringA(playAudioCommand.c_str(), nullptr, 0, nullptr);
    }
    else {
        string closeAudioCommand = "close " + string(song[i]);
        mciSendStringA(closeAudioCommand.c_str(), nullptr, 0, nullptr);
        setter(getter() - 1);
        string playAudioCommand = "play " + string(song[getter()]);
        mciSendStringA(playAudioCommand.c_str(), nullptr, 0, nullptr);
    }
}

void storage_media::shifl(int i) {
    setter(getter());
    string closeAudioCommand = "close " + string(song[getter()]);
    mciSendStringA(closeAudioCommand.c_str(), nullptr, 0, nullptr);

    std::srand(std::time(0));
    random_shuffle(&song[0], &song[5]);  
    play();
}

void storage_media::remove(int i, int h){
    setter(getter());
    //string closeAudioCommand = "close " + string(song[i]);
    //mciSendStringA(closeAudioCommand.c_str(), nullptr, 0, nullptr);
    song[i] = ' ';

}

void storage_media::close(int i) {
    setter(getter());
    string closeAudioCommand = "close " + string(song[getter()]);
    mciSendStringA(closeAudioCommand.c_str(), nullptr, 0, nullptr);

}
//System::String^ storage_media::search(System::String^ i)
//String^ storage_media:: search(String^ i)
//{
//    for (int x = 0; x < 4; x++)
//    {
//        
//        if (String.Equals(String ^ i, String song[x]))
//        {
//            return"Song has been found";
//        }
//        else
//        {
//            return"Song not foumd";
//        }
//    }
//}