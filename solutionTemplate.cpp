// #includes {{{
#include <algorithm>
#include <numeric>

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <set>
#include <map>
#include <stack>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cassert>
#include <cmath>

using namespace std;
// }}}

typedef long long LL;
typedef long double LD;

typedef vector<int> VI;
typedef pair<int,int> PII;

#define VAR(a,b) __typeof(b) a=(b)
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(VAR(i,a);i<=(b);++i)
#define FORD(i,a,b) for(VAR(i,a);i>=(b);--i)
#define FORE(a,b) for(VAR(a,(b).begin());a!=(b).end();++a)
#define CLR(x,a) memset(x,a,sizeof(x))
#define ZERO(x) memset(x,0,sizeof(x))
#define PRINT(x) cout << (x)
#define PRINTLN(x) PRINT(x) << endl;
#define SZ( a ) (int)(sizeof( a ) / sizeof( a[ 0 ] ))

//// UTILITY FUNCTIONS - SCROLL DOWN FOR SOLUTION////
std::string readString() {
  string str;
	std::cin >> str;
	return str;
}

std::string readLine() {
	string str;
	getline(std::cin, str);
	return str;
}

std::string next() {
	return readString();
}

int readInt(){
	int i;
	scanf("%d", &i);
	return i;
}

void readIntArray(int array[]) {
	REP(i,SZ(array)){
		array[i] = readInt();
	}
}

void seq(int array[], int start, int end) {
	int size=end-start+1;
	for(int i=0, s=start; i<size; ++i, ++s){
		array[i] = s;
	}
}

void printIntArray(int array[]){
	REP(i,SZ(array)){
		if(i!=0) { PRINT(" "); }
		PRINT(array[i]);
	}
}

void printStrArray(string array[]){
	REP(i,SZ(array)){
		if(i!=0) { PRINT(" "); }
		PRINT(array[i]);
	}
}

vector<string> split(const string& s, const string& delim,
		const bool keep_empty = true) {
	vector<string> result;
	if (delim.empty()) {
		result.push_back(s);
		return result;
	}
	string::const_iterator substart = s.begin(), subend;
	while (true) {
		subend = search(substart, s.end(), delim.begin(), delim.end());
		string temp(substart, subend);
		if (keep_empty || !temp.empty()) {
			result.push_back(temp);
		}
		if (subend == s.end()) {
			break;
		}
		substart = subend + delim.size();
	}
	return result;
}

bool isAlpha(char c){
	return (96<c && c<123) || (64<c && c<91);
}

bool isNumeric(char c){
	return 47<c && c<58;
}

bool isAlphaNumeric(char c){
	return isAlpha(c) || isNumeric(c);
}

bool isAlpha(string str){
	FORE(it, str){
		if ( !isAlpha(*it)){return false;}
	}
	return true;
}

bool isAlphaNumeric(string str){
	FORE(it, str){
		if ( !isAlphaNumeric(*it)){return false;}
	}
	return true;
}

//////////// SOLUTION ///////////////////////////

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt", "wt", stdout);
	#endif

	return 0;
}
