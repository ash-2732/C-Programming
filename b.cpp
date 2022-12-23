#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;

int gcd(int a, int b){
	int result = min(a,b);
	while(result > 0){
		if(a % result == 0 && b % result == 0){
			break;
		}
		result--;
	}
	return result;
}
int perfect_square(int x){
    if(ceil((double)sqrt(x)) == floor((double)sqrt(x))){
        return 1;
    }
    return -1;
}
void solve(){
	int x,y;
	cin >> x >> y;
	cout << gcd(x,y) << endl;	 
}
int main(){
	int a,b;
	char c;
	cin >> a >> b >> c;
	cout << a <<" "<< b <<" "<< c << endl;

	return 0;
}