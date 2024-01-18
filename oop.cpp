#include <iostream>
#include <list>

class YoutubeChannel
{
    protected:
    std::string name;
    std::string ownername;
    std::list<std::string> PublishedVideoTitles;
    int subs;
    public:
    YoutubeChannel(std::string n1, std::string n2, int sub);
    void get_info()
    {
        std::cout << name << std::endl;
        std::cout << ownername << std::endl;
        std::cout << subs << std::endl;
        for (std::string videoTitle : PublishedVideoTitles)
        {
            std::cout << videoTitle << std::endl;
        }
    }
    void add_video(std::string video)
    {
        PublishedVideoTitles.push_back(video);
    }
    void subscribe()
    {
        subs++;
    }
    void unsubscribe()
    {
        if (subs>0)
        {
            subs--;
        }
        else
        {
            std::cout << "Error." << std::endl;
        }
    }
};

YoutubeChannel::YoutubeChannel(std::string n1, std::string n2, int sub)
    : name{n1}, ownername{n2}, subs{sub}
{
}

class CookingChannel: public YoutubeChannel
{
    public:
    CookingChannel(std::string name, std::string ownername, int subs)
        : YoutubeChannel(name, ownername, subs)
    {

    }
};

int main()
{
    YoutubeChannel ytchnl("CodeBeauty", "CodeBeauty", 413000);
    ytchnl.add_video("C");
    ytchnl.add_video("C++");
    ytchnl.add_video("Python");
    ytchnl.add_video("Java");
    ytchnl.get_info();
    CookingChannel ckyt("abc", "def", 1000);
    ckyt.add_video("cooking");
    ckyt.get_info();
    system("pause>0");
    return 0;
}
