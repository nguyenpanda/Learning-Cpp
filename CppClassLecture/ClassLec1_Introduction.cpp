//
// Created by Hà Tường Nguyên on 9/20/23.
//

#include <list>
#include "ClassLecturePackage.h"

class YouTubeChannel_Lec1{
public:
    string Name;
    string OwnerName;
    int SubscriberCout{};
    list<string> PublishedVideoTitles;
};

void ClassLec1(){
    std::cout << "\tORIENTED OBJECT PROGRAMMING" << endl << "Lecture 1: INTRODUCTION TO CLASSES AND OBJECTS\n" << std::endl;

    YouTubeChannel_Lec1 ytChannel;
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saladin";
    ytChannel.SubscriberCout = 1800;
    ytChannel.PublishedVideoTitles = {"C++ for beginners Video 1", "HTML & CSS 1", "C++ OOP Video"};
    
    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscriberCout: " << ytChannel.SubscriberCout << endl;
    cout << "Video: " << endl;
    for (const string& videoTitle : ytChannel.PublishedVideoTitles) {
        cout << videoTitle << " ";
    }
}