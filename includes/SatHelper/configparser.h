/*
 * ConfigParser.h
 *
 *  Created on: 31/01/2017
 *      Author: Lucas Teske
 */

#ifndef INCLUDES_SATHELPER_CONFIGPARSER_H_
#define INCLUDES_SATHELPER_CONFIGPARSER_H_

#include <string>


namespace SatHelper {

    class ConfigParser {
    private:
 
        std::string filename;

    public:
        ConfigParser(const std::string &filename);

 

        void SaveFile();
        bool LoadFile();
        virtual ~ConfigParser();
    };

} /* namespace SatHelper */

#endif /* INCLUDES_SATHELPER_CONFIGPARSER_H_ */
