#include <iostream>
#include <map>
using namespace std;

class party {
private:
    multimap<int, string> tony_friends;
    multimap<int, string> sam_friends;
public:
    void tony_add_person(string name, int gpa) {
        tony_friends.insert(pair<int, string>(gpa, name));
    }

    void sam_add_person(string name, int gpa) {
        sam_friends.insert(pair<int, string>(gpa, name));
    }

    void mergeLists() {
        int tony = tony_friends.size();
        int sam = sam_friends.size();
        if(tony > sam) {
            for (auto it = tony_friends.begin(); it != tony_friends.end(); it++) {
                for(auto iter = sam_friends.begin(); iter != sam_friends.end(); iter++) {
                    if(it->first == iter->first) {
                        auto people_a = tony_friends.find(it.first);
                        auto people_b = sam_friends.find(iter.first);
                        int countA = tony_friends.count(it.first);
                        int countB = sam_friends.count(iter.first);

                    }
                }
            }
        } else {

        }

    }
};


int main() {

}