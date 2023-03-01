#include <bits/stdc++.h> // calculation
using namespace std; // using system to open file
int main()
{
    freopen("speeding.in", "r", stdin); // read/open the file
    freopen("speed.out", "w", stdin); // write file
    int n,m,pos = 1, ans = 0; // defining variables
    
    //seperating variables createdon own from variables draw in from file
    cin >> n >> m; //cin is for picking things from file
    vector<int> limits(101);// vector = map location, limit = max number
    for(int i = 0; i < 10, i++){ // i<10 because it cannot be speeding
        int seg,limit; // get these from file so we use cin subsequently
        cin >> seg >> limit;
        for (int j = 0; j < seg; i++){ // j mustbe less than segment width
            limits[pos++] = limit; // limitbased on position (pos)
        }
    }
    pos = 1; // set up position (pos)
    for(int i = 0; i < m; i++){ // i must be less or smaller than m
        int seg,speed;
        cin >> seg >> speed; // next segment
        for(int j = 0; i<seg; j++){
            if (speed>limit[pos]){
                ans = max(ans,speed-limits[pos]);
            }
            pos++ // updte the position
        }
    }
    cout<<ans;
}
