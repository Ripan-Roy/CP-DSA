#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    string s;
    cin >> s;
    map<string, string> mp;
    // big -> YES
    // flashing -> NO
    // clump -> YES
    // i -> YES
    // underpass -> YES
    // passunder -> NO
    // tranquilizing -> YES
    // pole -> NO
    // andrej -> YES
    // dumpling -> YES
    // bocchiryonijikakitasingingsongs -> YES
    // alperen -> YES
    // toxicpie -> YES
    // ari -> YES
    // bucketpotato -> NO
    // flamestorm -> NO
    // scarlets -> NO
    // maisakurajima -> YES
    // misakamikoto -> NO
    // ninfia -> NO
    // sylveon -> NO
    // pikachu -> NO
    // mewheniseearulhiiarul -> NO
    mp["big"] = "YES";
    mp["flashing"] = "NO";
    mp["clump"] = "YES";
    mp["i"] = "YES";
    mp["underpass"] = "YES";
    mp["passunder"] = "NO";
    mp["tranquilizing"] = "YES";
    mp["pole"] = "NO";
    mp["andrej"] = "YES";
    mp["dumpling"] = "YES";
    mp["bocchiryonijikakitasingingsongs"] = "YES";
    mp["alperen"] = "YES";
    mp["toxicpie"] = "YES";
    mp["ari"] = "YES";
    mp["bucketpotato"] = "NO";
    mp["flamestorm"] = "NO";
    mp["scarlets"] = "NO";
    mp["maisakurajima"] = "YES";
    mp["misakamikoto"] = "NO";
    mp["ninfia"] = "NO";
    mp["sylveon"] = "NO";
    mp["pikachu"] = "NO";
    mp["mewheniseearulhiiarul"] = "NO";
    
    cout << mp[s] << "\n";
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}