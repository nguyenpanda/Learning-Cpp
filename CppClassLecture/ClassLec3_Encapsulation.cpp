//
// Created by Hà Tường Nguyên on 9/20/23.
//

#include <list>
#include "ClassLecturePackage.h"

class YouTubeChannel_Lec3{
    // ENCAPSULATION = đóng gói
    // To access this variable, we need getter
    // To change this variable, we need setter
    string Name;
    string OwnerName;
    int SubscriberCout{};
    list<string> PublishedVideoTitles;

public:
    // THIS IS CALLED CONSTRUCTOR
    YouTubeChannel_Lec3(string Name, string OwnerName, int SubscriberCout=0){
        this->Name = std::move(Name); // std::move(): Transfer ownership of the value from Name to this->, avoiding copy it
        this->OwnerName = std::move(OwnerName);
        this->SubscriberCout = SubscriberCout;
    }

    void info() const{ // Const member function not allow us to change the values of the instance
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscriberCout: " << SubscriberCout << endl;
        cout << "Video: ";
        for (const string& videoTitle : PublishedVideoTitles) {
            cout << videoTitle << ", ";
        }
    }

    void addPublishVideo(const string& videoTitle){
        PublishedVideoTitles.push_back(videoTitle);
    }
    void Subscribe(){
        SubscriberCout++;
    }
    void UnSubscribe(){
        if (SubscriberCout>0)
            SubscriberCout--;
    }
};

void ClassLec3(){
    std::cout << "\t\tORIENTED OBJECT PROGRAMMING" << endl << "Lecture 3: ENCAPSULATION\n" << std::endl;

    YouTubeChannel_Lec3 ytChannel("CodeBeauty", "Saldina", 1800);
    ytChannel.addPublishVideo("C++ for beginners Video 1");
    ytChannel.addPublishVideo("HTML & CSS 1");
    ytChannel.addPublishVideo("C++ OOP Video");

    ytChannel.info();

    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.UnSubscribe();
    ytChannel.UnSubscribe();
    ytChannel.UnSubscribe();

    ytChannel.info();
}