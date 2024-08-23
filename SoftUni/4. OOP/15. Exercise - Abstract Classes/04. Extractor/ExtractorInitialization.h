#ifndef _ExtractorInitialization_h_
#define _ExtractorInitialization_h_

#include <memory>
#include <string>
#include <sstream>

#include "BufferedExtractor.h"

class DigitsExtractor : public Extractor {

    public:
        DigitsExtractor(std::istringstream & istr) : Extractor(istr) {}

        virtual bool process(char symbol, std::string& output) override {

            if (symbol >= '0' && symbol <= '9') {
                output = std::string(1, symbol);
                return true;
            }

            return false;
        }

};

class NumbersExtractor : public BufferedExtractor {

    public:
        NumbersExtractor(std::istringstream & istr) : BufferedExtractor(istr) {}

        virtual bool shouldBuffer(char symbol) override {
            return symbol >= '0' && symbol <= '9';
        }

};

class QuotedExtractor : public BufferedExtractor {

    bool isBuffering;

    public:
        QuotedExtractor(std::istringstream & istr) : BufferedExtractor(istr), isBuffering(false) {}

        virtual bool shouldBuffer(char symbol) override {
            if (symbol == '"') {
                isBuffering = !isBuffering;
                return false;
            }
            else {
                return isBuffering;
            }
        }

};

std::shared_ptr<Extractor> getExtractor(const std::string & extractType, std::istringstream & lineIn) {

    switch (extractType[0])
    {
        case 'd': return std::make_shared<DigitsExtractor>(lineIn);
        case 'n': return std::make_shared<NumbersExtractor>(lineIn);
        default : return std::make_shared<QuotedExtractor>(lineIn);
    }

    return std::shared_ptr<Extractor>();
}


#endif  // _ExtractorInitialization_h_