class Solution {
public:
    int dayOfYear(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        vector<int>daysinmonths={31,28,31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if((year%4==0&&year%100!=0)||year%400==0){
            daysinmonths[1]=29;
        }
        int totaldays=0;
        for(int i=0;i<month-1;++i){
            totaldays+=daysinmonths[i];
        } totaldays+=day;
        return totaldays;   
    }
};