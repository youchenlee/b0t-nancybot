#include "api.h"
#ifdef CONSOLE_BOT
int
main (int argc, char **argv)
{
    NancyBot *b;
    if(argv[1] != NULL)
    {
    	b = new NancyBot(argv[1]);
    }
    else
	b = new NancyBot();
#ifdef ADV_BOT_DEBUG
    b->debug();
#endif
     for (std::string line; std::getline(std::cin, line);) {
        if (line == "exit") {
	    // cout << "bye bye" << endl;
            break;
        }
	cout << b->askNancy (line) << endl;
    }
    // ask_nancy return "PCManX-NancyBot" when initial error ( no config file found )
    delete b;
    return 0;
}

#endif // define CONSOLE_BOT
