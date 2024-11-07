#include "WelcomeScreen.h"
#include <chrono>
#include <ctime>  


void WelcomeScreen::Intro()
{
    time_t timestamp;
    time(&timestamp);

    struct tm timeInfo;
    localtime_s(&timeInfo, &timestamp); 

    char timeString[26];
    asctime_s(timeString, sizeof(timeString), &timeInfo);  

    srand(time(NULL));
    int RandomQuote = rand() % 20;  
    std::string ASCII = R"(


                                                                                       
   _|_|_|                                 _|_|_|                                       
 _|         _|    _|   _|_|_|  _|_|     _|         _|    _|   _|_|_|       _|_|_|      
 _|  _|_|   _|    _|   _|    _|    _|     _|_|     _|    _|   _|    _|   _|            
 _|    _|   _|    _|   _|    _|    _|         _|   _|    _|   _|    _|   _|            
   _|_|_|     _|_|_|   _|    _|    _|   _|_|_|       _|_|_|   _|    _|     _|_|_|      
                  _|                                     _|                            
              _|_|                                   _|_|                              v0.10_git

                                                                                         
)";
    std::string Quotes[] = { "This shit works OFFLINE!", "Greetings From Amsterdam!", "Hit that new PR Today!", "one more scoop of pre-workout sire", "windows-only", "Made with Love", "Never Gonna Give You Up!", "tell everyon' bout us", "What are we listening today? Metal? Rap? Girly Music? Tiktok Songs? Voicemessages from a ex?", "Did you take enough protein today?", "Eat a banana once in a while!", "WinterArc Has Started..", "Did you know that this is an array?", "i just killed my ex... i still love him THOUGH?", "Quality over Quanity! (with your reps ofcourse)", "Now without MicroTransactions!", "sending shitty ad data to google... jk", "GYMRATS ASSEMBLE!", "Don't Skip Legday!", "Track all those damn calories!", "50 Notifications from your phone warning that your headphones are too loud..." };
    int consoleWidth = 90; 

    std::string text = "GymSync Console DEV - Windows Build.";
    int padding = (consoleWidth - text.size()) / 2;
    std::cout << std::string(padding, ' ') << text << " " << timeString << std::endl;
    Sleep(1000);

    std::cout << ASCII << std::endl;
    Sleep(300);
    std::cout << Quotes[RandomQuote] << std::endl;
    Sleep(1000);
    std::cout << "Please wait";

    /* INIT PROCESS */

    /* INIT END*/

    for (int i = 0; i < 5; i++) {
        std::cout << ".";
        Sleep(500);        
    }
}
