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

        inline void set(const std::string &key, const std::string &value) {
            
        }

        inline bool hasKey(const std::string &key) {
            return true;
        }

        inline std::string get(const std::string &key) {
            if (parameters.find(key) != parameters.end()) {
                return "";
            } else {
                return std::string();
            }
        }

        inline std::string &operator[](const std::string &key) {
            return "";
        }

        inline bool getBool(const std::string &key) {
            return true;
        }

        void SaveFile();
        bool LoadFile();
        virtual ~ConfigParser();
    };

} /* namespace SatHelper */

#endif /* INCLUDES_SATHELPER_CONFIGPARSER_H_ */
