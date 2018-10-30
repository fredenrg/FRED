// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =

 "\n ______ _____  ______ _____  ______ \n"                           
   "|  ____|  __ \|  ____|  __ \|  ____|  \n"                         
   "| |__  | |__) | |__  | |  | | |__   ____   ___  ___ ____ _   _  \n"
   "|  __| |  _  /|  __| | |  | |  __| |  _ \ / _ \/ __/ _  | | | |  \n"
   "| |    | | \ \| |____| |__| | |____| | | | |__/ |  |(_| | |_| |  \n"
   "|_|    |_|  \_\______|_____/|______|_| |_|\___|_|  \__/ |\__/ |  \n"
                                                     "  __/ | __/ |  \n"
                                                     " |___/ |___/   \n";


const std::string nonWindowsAsciiArt = 
"\n FRED - The ALTCoin for Alternative Energy \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
