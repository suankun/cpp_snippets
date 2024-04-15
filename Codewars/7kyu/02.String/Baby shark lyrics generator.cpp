// https://www.codewars.com/kata/5d076515e102162ac0dc514e/train/cpp
#include <string>
std::string baby_shark_lyrics(){std::string l,d=", doo doo doo doo doo doo\n",n[]={"Baby","Mommy","Daddy","Grandma","Grandpa"};for(auto&s:n)for(int i=0;i<3;++i)l+=s+" shark"+d+(i==2?s+" shark!\n":"");for(int i=0;i<3;++i)l+="Let's go hunt"+d+(i==2?"Let's go hunt!\n":"");return l+"Run away,…";}
//
#define F(x) x x x
using S=std::string;S baby_shark_lyrics(){S r,s=" shark";
for(S i:{"Baby"+s,"Mommy"+s,"Daddy"+s,"Grandma"+s,"Grandpa"+s,S("Let's go hunt")}){
F(r+=i+','+F(" doo doo")+'\n';)r+=i+"!\n";}return r+"Run away,…";}
