//
//  vigenere.cpp
//  VigenereDecipher
//
//  Created by Gavin Forsberg on 2/10/22.
//

#include "vigenere.hpp"
#include <iostream>
#include <fstream>
#include <random>
using namespace std;

//vigenere cipher;

string vigenere::fileRead(string textFile)
{ // Adapted from https://www.tutorialspoint.com/read-data-from-a-text-file-using-cplusplus
    
    ifstream cipherfile(textFile);
       
    string fileString = "";
    cout << textFile << endl;
    
    if(cipherfile)
    {
        cout << "inside 'is open' if statement\n\n";
        while(getline(cipherfile, fileString))
        {  //read data into string
            cout << "inside while loop\n\n";
            cout << fileString << "\n\n";
        }
        cout << "finished if 'is open', closing file\n\n";
        cipherfile.close();
    }
    else
        cout << "\nerror\n\n";
    
    return(fileString);
}

void vigenere::indexofcoincidence()
{
    cout << "successful coincidence";
}

string vigenere::encrypt(string plaintext)
{
    
    return "encrypt() finished runnning";
}

string vigenere::noKey(string ciphertext)
{
    cout << "successful nokey";
    return 0;
}

string vigenere::withKey(string ciphertext, string key)
{
    cout << "successful withkey";
    return 0;
}

//    //random number generator
//    random_device rng;
//    const auto seed = rng.entropy() ? rng() : time(NULL);
//    mt19937_64 rnd(seed);
//    uniform_int_distribution<int>dist{65,90};
