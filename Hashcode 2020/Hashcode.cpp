/*
	author: KRHero
	IDE: DevCPP		
*/

#include <bits/stdc++.h>

#define ll int
#define ull unsigned long long int
#define MOD 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=b;i>a;i--)
#define fde(i,a,b) for(int i=b;i>=a;i--)
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y
#define MID(s,e) (s+(e-s)/2)
#define whilet() int t; scanf("%d",&t); while(t--)
#define F first
#define S second
#define mp make_pair
#define epsilon 1e-15
#define pb push_back
#define PI 3.1415926535897932384626433832
#define file1 "a_example"
#define file2 "b_read_on"
#define file3 "c_incunabula"
#define file4 "d_tough_choices"
#define file5 "e_so_many_books"
#define file6 "f_libraries_of_the_world"

using namespace std;

unordered_map<ll,ll> umap;

double bookCountMax=INT_MIN,bookCountMin=INT_MAX;
double signUpMax=INT_MIN,signUpMin=INT_MAX;
double perDayMax=INT_MIN,perDayMin = INT_MAX;
ll bookCountSum = 0,signUpSum = 0, perDaySum = 0;
ll b,l,d;

static string name = file6;
class library{
	public:
		ll bookCount,signUp,perDay, index;
		vector <ll> bookIndex;
		double averagePrice;
	library(ll bookCountPass,ll signUpPass,ll perDayPass,vector<ll> bookIndexPass,ll indexPass){
		bookCount = bookCountPass;
		signUp = signUpPass;
		perDay = perDayPass;
		index = indexPass;
		bookIndex = bookIndexPass;
		f(i,0,bookIndex.size()){
			averagePrice+=(double)umap[bookIndex[i]];
		}
		averagePrice/=bookCount;
	}
};

class printer{
	public:
		ll libraryIndex, bookCount;
		vector<ll> bookIndex;
	printer(ll libraryIndexPass,ll bookCountPass,vector<ll> bookIndexPass){
		libraryIndex = libraryIndexPass;
		bookCount = bookCountPass;
		bookIndex = bookIndexPass;
	}
};

bool bookSorter(ll book1,ll book2){
	return umap[book1]>umap[book2];
}

bool librarySorter1(library l1,library l2){
	double l1SignUpNormalised = ((double)l1.signUp - ((double)signUpSum)/(double)l)/((double)signUpMax-(double)signUpMin+epsilon);
	double l1BookCountNormalised = ((double)l1.bookCount - ((double)bookCountSum)/(double)l)/((double)bookCountMax-(double)bookCountMin+epsilon);
	double l1PerDayNormalised = ((double)l1.perDay - ((double)perDaySum)/(double)l)/((double)perDayMax-(double)perDayMin+epsilon);
	
	double l2SignUpNormalised = ((double)l2.signUp - ((double)signUpSum)/(double)l)/((double)signUpMax-(double)signUpMin+epsilon);
	double l2BookCountNormalised = ((double)l2.bookCount - ((double)bookCountSum)/(double)l)/((double)bookCountMax-(double)bookCountMin+epsilon);
	double l2PerDayNormalised = ((double)l2.perDay - ((double)perDaySum)/(double)l)/((double)perDayMax-(double)perDayMin+epsilon);
	
	
	return (l1SignUpNormalised-(((double)10*l1BookCountNormalised)/(double)l1PerDayNormalised))<(l2SignUpNormalised-((10*l2BookCountNormalised)/l2PerDayNormalised));
}

bool vis[1000000];

bool librarySorter(library l1,library l2){
	return l1.bookCount+l1.perDay+l1.averagePrice - l1.signUp > l2.bookCount+l2.perDay+l2.averagePrice - l2.signUp;
	//return (double)l1.signUp-((((double)l1.bookCount*l1.averagePrice*10)/(double)l1.perDay))<(double)l2.signUp-((((double)l2.bookCount*l2.averagePrice*10)/(double)l2.perDay));
}

void solve(){
	ifstream input;
	input.open(name+".txt");
	input >> b >> l >> d;
	ll temp;
	ll bC,sU,pD;
	vector <ll> bI;
	f(i,0,b){
		input >> temp;
		umap[i] = temp;
	}
	vector<library> libraries;
	f(i,0,l){
		input >> bC >> sU >> pD;
		f(j,0,bC){
			input >> temp;
			bI.pb(temp);
		}
		
		/*bookCountSum+=bC;
		signUpSum+=sU;
		perDaySum+=pD;
		
		bookCountMax = MAX(bookCountMax,bC);
		bookCountMin = MIN(bookCountMin,bC);
		
		signUpMax = MAX(signUpMax,sU);
		signUpMin = MIN(signUpMin,sU);
		
		perDayMax = MAX(perDayMax,pD);
		perDayMin = MIN(perDayMin,pD);*/
		
		
		sort(bI.begin(),bI.end(),bookSorter);
		library lb = library(bC,sU,pD,bI,i);
		libraries.pb(lb);
		bI.clear();
	}
	ll ans=0;
	ll i=0;
	sort(libraries.begin(),libraries.end(),librarySorter);
	vector<printer> prints;
	while(d>0){
		if(i>=libraries.size() || d-libraries[i].signUp<=0) break;
		d -= libraries[i].signUp;
		ll noOfBooks = min(d*libraries[i].perDay,libraries[i].bookCount);
		ll k=0;
		ll j=0;
		while(j<libraries[i].bookIndex.size()&&k<noOfBooks){
			if(!vis[libraries[i].bookIndex[j]]){
				bI.pb(libraries[i].bookIndex[j]);
				vis[libraries[i].bookIndex[j]]=true;
				k++;
			}
			j++;
		}
		if(k==0){
			i++;
			bI.clear();
			continue;
		}
					
		printer print = printer(libraries[i].index,k,bI);
		prints.pb(print);		
		bI.clear();
		i++;
		ans++;
	}
	ofstream output;
	output.open(name+"_output.txt");
	output<<ans<<'\n';
	for(auto j:prints){
		output<<j.libraryIndex<<" "<<j.bookCount<<'\n';
		for(auto book:j.bookIndex){
			output<<book<<" ";
		}
		output<<"\n";
	}
}
int main(){
	solve();
	
}


