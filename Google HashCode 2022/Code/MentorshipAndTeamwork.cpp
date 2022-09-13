#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int c, p;

    cin >> c >> p;
    int temp = p;
    vector<pair<string, int>> c1;
    vector<pair<string, int>> sk;
    while (c--)
    {
        string s;
        int n;
        cin >> s >> n;
        c1.push_back(make_pair(s, n));
        while (n--)
        {
            string skill;
            int level;
            cin >> skill >> level;
            sk.push_back(make_pair(skill, level));
        }
    }
    //     OUTPUT CHECK
    //     --------------------------------------
    // int k=0;
    // for(auto i:c1)
    // {
    //     cout<<i.first<<" "<<i.second<<"\n";
    //     for(int j=k; j<k+i.second; j++)
    //     {
    //         cout<<sk[j].first<<" "<<sk[j].second<<"\n";
    //     }
    //     k+=i.second;
    // }

    vector<pair<string, list<int>>> project;
    vector<pair<string, int>> requiredSkill;
    while (p--)
    {
        string s;
        cin >> s;
        // cout<<s<<" ";
        int duration, award, bestTime, skillNo;
        cin >> duration >> award >> bestTime >> skillNo;
        // cout<<duration<<" "<<award<<" "<<bestTime<<" "<<skillNo<<"\n";
        list<int> l = {duration, award, bestTime, skillNo};
        project.push_back(make_pair(s, l));
        while (skillNo--)
        {
            string skill;
            int skillLevel;
            cin >> skill >> skillLevel;
            requiredSkill.push_back(make_pair(skill, skillLevel));
            // cout<<skill<<" "<<skillLevel<<" "<<"\n";
        }
    }
    cout << temp << "\n";
    for(int i=0;i<temp;i++){
        for(int j=0;j<temp;j++){
            if(sk[i].first==requiredSkill[j].first && sk[i].second>=requiredSkill[j].second){
                cout<<project[j].first<<"\n";
                cout<<c1[i].first<<" ";
            }
        }
    }

    return 0;
}