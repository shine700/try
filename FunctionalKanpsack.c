#include <algorithm>
#include <stdio.h>
#include <utility>
#include <vector>

using namespace std;

    //  from now on, we can use PII
    //  in the palce of pair<....
    //  we will put weight at the first place
    //  and price at the second place

typedef pair<int, int> PII;

vector<PII> v;

bool cmp(PII A, PII B){
    //  we want to order on decreasing order of
    //  price / weight
    // so : return A.price / B.weight>
    //  B.price / B.weight
    //  but it is better if we can avoid division
    //  because of possible precision loss
    //  so we can rewrite it as :
    //  return A*price * B.weight > B.price * A.weight
    //  we use first for weight, second for price
    return A.second * B.first > A.first * B.second;
}

void functional_knapsack(){
    int n, w, i;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        int weight, price;
        scanf("%d %d", &weight, &price);
        v.push_back(PII (weight, price));
    }
    sort(v.begin(), v.end(), cmp);
    scanf("%d", &w);
    int ans = 0;

    for(i=0; i<n; i++){
        //  w is remaingin capacity
        //  v[i].first weight of the i th element
        // so steal munumum of them
        int z = mi(w, v[i].first);
        w -= z;
        ans += z * v[i].second;
    }
    printf("Maxmimum Cost : %d\n", ans);
}
