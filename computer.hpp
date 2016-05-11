//
//  computer.hpp
//  Projet
//
//  Created by Rémi Di Vita on 26/04/2016.
//  Copyright © 2016 Rémi Di Vita. All rights reserved.
//

#ifndef computer_hpp
#define computer_hpp

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class ComputerException {
private:
    string info;
public:
    ComputerException(const string& str):info(str){}
    string getInfo() const { return info; }
};
class Literale{

}
class LiteraleNumeric{

};

class Entier:public LiteraleNumeric{
private:
    int value;
};
class Rationel:public LiteraleNumeric{
private:
    int numerateur;
    int denominateur;
public: 
};
#endif /* computer_hpp */
