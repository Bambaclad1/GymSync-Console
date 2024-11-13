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
    int RandomQuote = rand() % 21;  
    std::string ASCII = R"(


                                                                                       
   _|_|_|                                 _|_|_|                                       
 _|         _|    _|   _|_|_|  _|_|     _|         _|    _|   _|_|_|       _|_|_|      
 _|  _|_|   _|    _|   _|    _|    _|     _|_|     _|    _|   _|    _|   _|            
 _|    _|   _|    _|   _|    _|    _|         _|   _|    _|   _|    _|   _|            
   _|_|_|     _|_|_|   _|    _|    _|   _|_|_|       _|_|_|   _|    _|     _|_|_|      
                  _|                                     _|                            
              _|_|                                   _|_|                              v0.2_git⌂

                                                                                         
)";
    std::string Quotes[] = { "Works without the need of a connection!", "Greetings From Amsterdam!", "Hit that new PR Today!", "one more scoop of pre-workout sire", "windows-only. mac? linux? only NT Technology.", "Made with Love", "Never Gonna Give You Up!", "tell everyon' bout us", "What are we listening today? Metal? Rap? Girly Music? Tiktok Songs? Voicemessages from a ex?", "Did you take enough protein today?", "Eat a banana once in a while!", "WinterArc Has Started..", "Did you know that this is an array?", "i just killed my ex... i still love him THOUGH? - SZA", "Quality over Quanity! (with your reps ofcourse)", "Now without MicroTransactions!", "sending ad statics data to google...../s", "GYMRATS ASSEMBLE!", "Don't Skip Legday!", "Track all those damn calories!", "50 Notifications from your phone warning that your headphones are too loud..." };
    int consoleWidth = 90; 

    std::string text = "GymSync Console - Windows Build.";
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
