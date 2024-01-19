//
// Created by Hà Tường Nguyên on 9/20/23.
//

#include <utility>

#include "ClassLecturePackage.h"
// std::move(): Transfer ownership of the value from Name to this ->, avoiding copy it

class YouTubeChannel_Lec5 {
    // Encapsulation = dong goi
    // To access this variable, we need getter
    // To change this variable, we need setter
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected: // Allow all children class access, but not the external code
    string OwnerName;
    int ContentQuality;
public:
    // THIS IS CALLED CONSTRUCTOR
    YouTubeChannel_Lec5(string name, string ownerName) {
        this->Name = std::move(name);
        this->OwnerName = std::move(ownerName);
        this->ContentQuality = 0;
        this->SubscribersCount = 0;
    }

    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (const string &videoTitle: PublishedVideoTitles) {
            cout << videoTitle << endl;
        }
    }

    // Setter
    void Subscribe() {
        SubscribersCount++;
    }

    void Unsubscribe() {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(const string &title) {
        PublishedVideoTitles.push_back(title);
    }

    // This is a getter
    string GetChannelName() {
        return Name;
    }

    string GetOwnerName() {
        return OwnerName;
    }

    void CheckAnalytics() const {
        if (ContentQuality < 6) {
            cout << Name << " is a bad content channel" << endl;
        } else {
            cout << Name << " is a great content channel" << endl;
        }
    }
};

class CookingYouTubeChannel_Lec5 : public YouTubeChannel_Lec5 {
public:
    CookingYouTubeChannel_Lec5(string name, string OwnerName) : YouTubeChannel_Lec5(std::move(name), std::move(OwnerName)) {

    }

    // Polymorphism
    void Practice() {
        cout << OwnerName << " taking a cooking class, learning ingredient, learn how to make sushi..." << endl;
        ContentQuality++;
    }
};

class SingerYouTubeChannel_Lec5 : public YouTubeChannel_Lec5 {
public:
    SingerYouTubeChannel_Lec5(string name, string OwnerName) : YouTubeChannel_Lec5(std::move(name), std::move(OwnerName)) {

    }

    // Polymorphism
    void Practice() {
        cout << OwnerName << " taking a singing class, learning new songs, learn how to dance..." << endl;
        ContentQuality++;
    }
};

void ClassLec5() {
    std::cout << "\t\tORIENTED OBJECT PROGRAMMING" << endl << "Lecture 5: POLYMORPHISM\n" << std::endl;

    /*
     * Polymorphism is related to pointer
     * A pointer of base class can assign the pointer of the children class
     */
    CookingYouTubeChannel_Lec5 CookingYbChannel1("Amy's Kitchen", "Amy");
    CookingYbChannel1.PublishVideo("Apple pie");
    CookingYbChannel1.PublishVideo("Potato");
    CookingYbChannel1.Practice();

    SingerYouTubeChannel_Lec5 SingingYbChannel1("JohnSings", "John");
    SingingYbChannel1.PublishVideo("I Love U so much and U will know that");
    SingingYbChannel1.PublishVideo("Picture");
    SingingYbChannel1.Practice();
    SingingYbChannel1.Practice();
    SingingYbChannel1.Practice();
    SingingYbChannel1.Practice();
    SingingYbChannel1.Practice();
    SingingYbChannel1.Practice();
    SingingYbChannel1.Practice();

    // Using reference to access the method in Class
    CookingYbChannel1.CheckAnalytics();
    SingingYbChannel1.CheckAnalytics();

    // Using pointer to access the method in Class
    YouTubeChannel_Lec5 *yt1 = &CookingYbChannel1;
    YouTubeChannel_Lec5 *yt2 = &SingingYbChannel1;
    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

}