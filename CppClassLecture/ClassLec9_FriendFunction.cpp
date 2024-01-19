//
// Created by Hà Tường Nguyên on 9/20/23.
//

#include "ClassLecturePackage.h"

class YouTubeChannel_Lec10 {
    string Name;
    int SubscribersCount;
public:
    YouTubeChannel_Lec10(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }

    bool operator==(const YouTubeChannel_Lec10& channel) const {
        return this->Name == channel.Name;
    }

    friend ostream& operator<<(ostream& COUT, YouTubeChannel_Lec10& ytChannel);
};
ostream& operator<<(ostream& COUT, YouTubeChannel_Lec10& ytChannel) {
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

class MyCollection_Lec10 {
    list<YouTubeChannel_Lec10>myChannels;
public:
    void operator+=(YouTubeChannel_Lec10& channel) {
        this->myChannels.push_back(channel);
    }

    void operator-=(YouTubeChannel_Lec10& channel) {
        this->myChannels.remove(channel);
    }

    friend ostream& operator<<(ostream& COUT, MyCollection_Lec10& myCollection);
};
ostream& operator<<(ostream& COUT, MyCollection_Lec10& myCollection) {
    for (YouTubeChannel_Lec10 ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}

void ClassLec9(){
    std::cout << "\t\tORIENTED OBJECT PROGRAMMING" << endl << "Lecture 9: Friend Function\n" << std::endl;

    YouTubeChannel_Lec10 yt1 = YouTubeChannel_Lec10("CodeBeauty", 75000);
    YouTubeChannel_Lec10 yt2 = YouTubeChannel_Lec10("My second channel", 80000);

    MyCollection_Lec10 myCollection;
    myCollection += yt1;
    myCollection += yt2;
    //myCollection -= yt2;

    cout << myCollection;

    cin.get();
}