/*
*****************************
Files Size Calculator:
    https://docs.google.com/document/d/1DUynaGDCayOF0VwstIWPk2B-xVlembN0q3L0CIoFd6Y/edit
*****************************
*/

#include <iostream>
#include <sstream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::stringstream;
using std::string;
using std::cin;
using std::getline;




int main(void)
{
    //stringstream music("mp3 aac flac");
    string music("mp3 aac flac");
    string image("jpg bmp gif");
    string movie("mp4 avi mkv");
    string other("7z txt zip");
    
    string::size_type idx;
    string firstInputLine;
    string filename;
    int num;
    int caseCounter = 1;
    // create a Vector to store numbers of firstInputLine
    std::vector<int> vec_res;
    
    getline(cin, firstInputLine);
    // convert input to stringstring to be used easily
    stringstream ss(firstInputLine);
    int musicsSize, moviesSize, imagesSize, othersSize;
    
    
    while(ss >> num)
    {
        vec_res.push_back(num);
    }
    
    while(vec_res[0]--)
    {
        // reset sizes every new testcase
        musicsSize = 0, moviesSize = 0, imagesSize = 0, othersSize = 0;

    while(vec_res[caseCounter]--)
    {
        cin.clear();
        getline(cin, filename);
        stringstream streamname(filename);
        string word;
        idx = filename.rfind('.');
        string extension;
        stringstream filenamestream(filename);
        int size;
        // make those stringstream to be iterated on easily
        // make those every loop to reset the pointer after using ">>"
        stringstream musicStream(music);
        stringstream movieStream(movie);
        stringstream imageStream(image);
        stringstream otherStream(other);
        
        
        
        if(idx != string::npos)
        {
            extension = filename.substr(idx+1);
        } else
        {
            cout << "No extension found";
        }
        
        // finding the size of file
        while(filenamestream>>word)
        {
            if(stringstream(word)>>size)
            {
                break;
            }
        }
        
        stringstream ext(extension);
        ext>>extension;
        
        //cout << "Extension: " << extension << endl;
        //cout << "size: "<< size << endl;
        
        
        while(musicStream >> word)
        {
            if(word==extension)
            {
                musicsSize += size;
                //cout <<"music found";
            }
        }
        while(movieStream >> word)
        {
            if(word==extension)
            {
                moviesSize += size;
                //cout <<"movie found";
            }
            
        }
        while(imageStream >> word)
        {
            if(word==extension)
            {
                imagesSize += size;
                //cout <<"image found";
            }
        }
        while(otherStream >> word)
        {
            if(word==extension)
            {
                othersSize += size;
                //cout <<"other found";
            }
        }    
    }
    
    cout << "Case "<<caseCounter<< ": music " << musicsSize << "b images " << imagesSize 
        << "b movies " << moviesSize << "b other " << othersSize << "b" << endl;
    ++caseCounter;
    
    }
    

}  