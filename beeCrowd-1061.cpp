#include<iostream>
using namespace std;

int main(){
    int day, hours, min, sec;
    int day1, hur1, min1, sec1, day2, hur2, min2, sec2;
    string temp;
    cin>> temp >> day1;
    cin>>  hur1 >> temp >> min1 >>temp >> sec1;
    cin>> temp >> day2;
    cin>> hur2 >> temp >> min2 >> temp >> sec2;
    int total_diff_sec = ((day2*86400)+(hur2*3600)+(min2*60)+sec2) - ((day1*86400)+(hur1*3600)+(min1*60)+sec1);
    day = total_diff_sec / (3600*24);
    hours = (total_diff_sec % (3600*24)) / 3600;
    min = (total_diff_sec % 3600) / 60;
    sec = total_diff_sec % 60;
    cout << day << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << min << " minuto(s)" << endl;
    cout << sec << " segundo(s)" << endl;
    

    return 0;
}