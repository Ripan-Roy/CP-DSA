#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int x;
        cin >> x;
        ll hr = (str[0] - '0') * 10 + (str[1] - '0');
        ll mn = (str[3] - '0') * 10 + (str[4] - '0');
        // cout << hr << ":" << mn << endl;

        ll count = 0;
        if (((hr / 10) == (mn % 10)) && ((hr % 10) == (mn / 10)))
        {
            count++;
        }

        set<pair<int, int>> st;
        st.insert({hr, mn});
        ll curM = (mn + x) % 60;
        ll curH = (hr + ((mn + x) / 60)) % 24;

        while (curM != mn || curH != hr)
        {
            if (st.find({curH, curM}) != st.end())
            {
                break;
            }

            st.insert({curH, curM});
            // cout << curH << ":" << curM << endl;
            if (((curH / 10) == (curM % 10)) && ((curH % 10) == (curM / 10)))
            {
                count++;
            }

            curM = (curM + x);
            curH = (curH + (curM + x) / 60) % 24;
            curM %= 60;
        }

        cout << count << endl;
    }
    return 0;
}