#include<iostream>
#include<string>
using namespace std;
class Note {
public:
	int location;
	int count;
};
Note function(const string &);
int main() {
	string str = "Class five in the grassground.";
	string &a = str;
	Note note;
	note = function(a);
	cout << note.location << endl;
	cout << note.count << endl;
	return 0;
}
Note function(const string &s) {
	Note noti;
	noti.location = 0;
	noti.count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 's') {
			if (noti.location == 0) {
				noti.location = i + 1;
				noti.count++;
			}
			else {
				noti.count++;
			}
		}
	}
	return noti;
}
