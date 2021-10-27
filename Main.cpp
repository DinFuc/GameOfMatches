const int size = 1e6;
bool v[size];
string gameOfMatches(int n)
{
    v[1] = 0, v[2] = v[3] = v[4] = v[5] = 1;
    for(int i = 6; i <= n; i++){
        int a = i - 5, b = i - 2, c = i - 3;
        if(v[a] && v[b] && v[c]) v[i]= 0;
        else v[i]= 1;
    }
    return v[n] ? "Ngoc" : "Phong";
}
