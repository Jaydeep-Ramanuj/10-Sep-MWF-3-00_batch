#include <iostream>

using namespace std;

class InstaUser
{
    int secret = 6584152;
    string userId;

    string makeProfileLink()
    {
        return "https://www.instagram.com/" + userId + "secret:" + to_string(secret);
    }

public:
    string userName;
    int followersCount;
    int followingCount;

    InstaUser(
        string _userId, string _userName, int _followersCount, int _followingCount)
    {
        followersCount = _followersCount;
        followingCount = _followingCount;
        userId = _userId;
        userName = _userName;
    }

    void post()
    {
        cout << "Posted on feed";
    }
    string getProfileLink()
    {
        return makeProfileLink();
    }

    string getUserId(string apiKey)
    {
        return apiKey == "abcd1324" ? userId : "Wrong API key";
    }
};

int main()
{
    InstaUser kishan("kishan354131", "kishan_cool", 250, 25);

    cout << kishan.getUserId("abcd1324") << endl;

    cout << kishan.getProfileLink();
    return 0;
}