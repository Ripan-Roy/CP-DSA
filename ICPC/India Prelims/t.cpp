#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<double, double> calculate_revenue(vector<double> &bids)
{

    sort(bids.rbegin(), bids.rend());

    vector<double> duplicates;
    for (double bid : bids)
    {
        auto cnt = count(bids.begin(), bids.end(), bid);
        if (cnt > 1)
        {
            duplicates.push_back(bid);
        }
    }

    for (double duplicate : duplicates)
    {
        auto it = find(bids.begin(), bids.end(), duplicate);
        while (it != bids.end())
        {
            *it -= 0.01;
            it = find(it + 1, bids.end(), duplicate);
        }
    }

    double min_revenue = 0;
    for (int i = 0; i < bids.size(); i += 2)
    {
        min_revenue += bids[i];
    }

    double max_revenue = 0;
    for (int i = 0; i < bids.size(); i += 2)
    {
        max_revenue += bids[i];
        if (i + 1 < bids.size())
        {
            max_revenue += bids[i + 1];
        }
    }

    return make_pair(min_revenue, max_revenue);
}

int main()
{
    // Example usage
    vector<double> bids = {50, 40, 30, 30, 20, 10, 10, 5, 5};
    auto revenues = calculate_revenue(bids);
    cout << "Minimum Revenue: " << revenues.first << endl;
    cout << "Maximum Revenue: " << revenues.second << endl;

    return 0;
}
