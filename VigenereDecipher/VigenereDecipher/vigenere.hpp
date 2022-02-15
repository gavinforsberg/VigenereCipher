//
//  vigenere.hpp
//  VigenereDecipher
//
//  Created by Gavin Forsberg on 2/10/22.
//

#ifndef vigenere_hpp
#define vigenere_hpp
#include <string>
#include <stdio.h>

class vigenere
{
public:
    std::string fileRead(std::string textFile);
    void indexofcoincidence();
    std::string encrypt(std::string plaintext);
    std::string noKey(std::string ciphertext);
    std::string withKey(std::string ciphertext, std::string key);
    
private:
};

#endif /* vigenere_hpp */
