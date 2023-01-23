#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> a(n);
    vector <int> b(m);
    vector <int> ans;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    int i = 0;
    int j = 0;
    while (i < n && j < m){
        if (a[i] < b[j]){
            ans.push_back(a[i]);
            i++;
        }else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while (j < m){
        ans.push_back(b[j]);
        j++;
    }
    while (i < n){
        ans.push_back(a[i]);
        i++;
    }
    for (int k = 0; k < m + n; k++){
        cout << ans[k] << " ";
    }
    return 0;
}
