//
// Created by Hà Tường Nguyên on 9/20/23.
//

#include "ClassLecturePackage.h"

struct YouTubeChannel{
    string Name;
    int SubscriberCount;

    YouTubeChannel(string name, int subscriberCount){
        Name = name;
        SubscriberCount = subscriberCount;
    }
};

ostream& operator<<(ostream& COUT, YouTubeChannel &ytChannel){
    COUT << "Name: " << ytChannel.Name << std::endl;
    COUT << "Subscriber: " << ytChannel.SubscriberCount << std::endl;
    return COUT;
}

struct MyCollection{
    list<YouTubeChannel> myList;

    void operator+=(YouTubeChannel& channel){
        this->myList.push_back(channel);
    }
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection){
    for (YouTubeChannel element : myCollection.myList){
        COUT << element << " ";
    }
    return COUT;
}

void ClassLec8(){
    std::cout << "\t\tORIENTED OBJECT PROGRAMMING" << std::endl << "Lecture 8: Operator Overloading\n" << std::endl;

    YouTubeChannel yt1 = YouTubeChannel("Nguyen", 100);
    YouTubeChannel yt2 = YouTubeChannel("Tuong Nguyen", 10000);

    std::cout << yt1;
    std::cout << yt1 << yt2;

    // Second way
    operator<<(std::cout, yt1);

    cout << setw(20) << setfill('-') << "" << endl;

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    std::cout << myCollection;
}