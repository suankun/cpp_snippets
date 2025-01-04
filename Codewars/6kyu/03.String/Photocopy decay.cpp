// https://www.codewars.com/kata/5b6fcd9668cb2e282d00000f/train/cpp

// Background
// Every time you photocopy something the quality of the copy is never quite as good as the original.

// But then you make a copy of copy, and then a copy of that copy, et cetera... And the results get worse each time.

// This kind of degradation is called Generation Loss.

// Here is a fun example of generation loss copying VHS tapes.

// Kata task
// In this Kata you will be given 2 sheets of paper.

// The first one is the original, and the second one is the result of copying many times. Let's call these papers orig and copy.

// Only a small % of generation loss happens at each copy, but the effect is cummulative and the copies quickly become more like gibberish.

// Your task is to return true/false if orig is a possible ancestor of copy.

// Notes
// The orig document may include any kind of character
// Copied characters will degrade as follows: A-Z ⇒ a-z ⇒ # ⇒ + ⇒ : ⇒ . ⇒  
// Any other character not mentioned above (e.g. digits) do not degrade
// For the uppercase to lowercase degradation the letters must be the same (i.e. A ⇒ a ... Z ⇒ z)
// Example
// (5% error rate)

// Original		
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.
// THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.

// After 20 copies...
// TH# Q+#Ck BRow# F+x J#MPS over A Laz# #+# 
// :He Qui#k #rO#n foX Ju#Ps oVer a la+y Do+ 
// THe QUiC# b:OWn #oX ##m#s #Ver + lAZ# D#G 
// ##E #uIcK BROWn Fox #UMPS o#Er A LaZY doG.
// #H+ Qui## BROW# +ox jUMPs OV#r a lAzy ###.
// ##e +UICK #ROWn fo# +#mPs #Ve+ a lazY dOg 
// ### ##IC+ Br### f#x Jump# oVE+ A La## dOg.
// th+ qUI#k bRO#n fOX #umP# o#ER A La+Y #O. 
// tH# #U:#k +r+## F+# +#mP+ #VeR A ###Y DOg.
// #H# QUIcK #ROwN #o+ juM#s #V#+ A #aZy dog 

// After 75 copies...
// ##  q :c+ +r# . ..# #. #+   #+ a #:+:  .  
// .+  Q#:## +:::  +++ :::+. .#.# . :. +  #: 
// ::  q#.c# . ..#   : :.:   :v:+   +a.+ .+# 
// :++  :.+k +:+:# f.. .:m:  o:#  . :+#y  #+ 
// +#   :::. +::++  :: #:.+: #+     +:z. .:  
// . e .:#c# ##:+#     : .p# +v:  . #++: #++ 
// ..: ..:.  ++++  +++ ++:p: +ve  A L+.. # + 
// ::. :ui   :## : +Ox +#::: :::+ + ++ + :#  
// +#   +  + +  .+ f . : +   :.   : ++ y +.+ 
// ++  .u#+k +r#.. +:  :::+. ##   #  :+# +## 

#include <iostream>
#include <string>
#include <cctype>
#include <unordered_map>
using namespace std;

bool isAncestral(char a, char b) {
    std::string nonLetters = "#+:. ";
    size_t ai = nonLetters.find(a);
    size_t bi = nonLetters.find(b);

    return (a == b) ||
           (ai != std::string::npos && bi != std::string::npos && ai <= bi) ||
           (std::isalpha(a) && bi != std::string::npos) ||
           (std::tolower(a) == b);
}

bool generationLoss(const std::string &orig, const std::string &copy) {
    if (orig.length() != copy.length()) {
        return false;
    }

    for (size_t i = 0; i < orig.length(); ++i) {
        if (!isAncestral(orig[i], copy[i])) {
            return false;
        }
    }

    return true;
}

int main() {

    string orig =
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n"
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n"
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n"
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n"
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n"
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n"
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n"
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n"
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n"
        "THE QUICK BROWN FOX JUMPS OVER A LAZY DOG.\n";  

    string gen10 =
        "THE QUIcK BRoWN Fo# JUmPs OV#r A LAZY DOG \n"
        "THE QUIcK #ROwN FOX JUmpS O#eR + ##ZY DOG.\n"
        "THe +uIcK BroWN #Ox jUmPs OVER a LAZ# Dog \n"
        "thE qUiCk BR#WN FOX #UMPS OVe# A La#Y dog.\n"
        "TH# QUICK brOWn FOX JUMpS OVEr A LaZY dog \n"
        "tHe QuICk BR#WN FOX J#M#+ o##r a lAZY DOg \n"
        "THe QUiCK bRowN FOX JuMp# OvER A laZY Dog.\n"
        "THE QUicK B#OWN FOx JuMPS OVER A LAZy DoG.\n"
        "ThE qUIC# bROwN FO# JUMPS OVEr A LAzY dOG \n"
        "T#E QuICK bROwN fOX JUmP# oVER A lazy #o#.\n";

    string gen20 = 
        "tHe qUicK BRoW+ F## #umPs OV#r A lAzY dOG \n"
        "THE qu#cK +R#wN fOX jU#ps O#e# + ##zY DOG.\n"
        "THe +uic# broW# #Ox jUm#s oVER a LA+# Dog \n"
        "t+# qU#Ck bR#WN FO# #uMpS OVe# A ###Y #og.\n"
        "tH# Qu#C# bro+: FOX jumpS Over A lazY d## \n"
        "#He #uiC+ BR##N fOX J+M#+ #+#r # #aZY DO: \n"
        "tHe Qu+CK bRowN fOx #uM## ##eR a lazY D#+ \n"
        "tHe QUi+k B#oWN FOx J#mPs O##R A lAz# doG.\n"
        "T#E quIC# bRO#n fO# JUMP+ oVer a lA#Y doG \n"
        "T#e Q#i#K bR+wN #OX JumP# #Ver A laz# #++.\n";

    string gen50 =
        "#:e #u:cK #R##: F.: :+mP+ o#++ a #azy #o+ \n"
        "T:e :u##k  .#w+ +ox +#+:. +:+# : ++:y d:G \n"
        "T+: .+i+: b#++  .ox #U#+# +### # LA.+ #++ \n"
        ":+. #u+C+ #r#Wn f++ #uM#s o+e. A :++y :## \n"
        "#:. q##+# #++:  +++ #+#p# ov#+ a :a:# ++# \n"
        ":h# ++#c. b#++n +oX + :.. #+#+ + #+#y do  \n"
        "t#e Q++.k bro## ### +:+#. +:#+ . :### d+: \n"
        "#H# q##.# B:#++ F## j++P# o+:# # .#z: #+g.\n"
        "t#e :u+c# +:o+n fo+ +umP: ::#r + #++# +og \n"
        "T.: q#::+ ++::n +o# jum#+ +V#. # ++## :+  \n";

    string gen75 =
        ":.+ ++.+K #R+:  f :  +.p  +#:. + #++y ++  \n"
        "t.+ .u +    +#+ :++ .+  . + +# . ++.: #.: \n"
        "T.. .+#:: ++.+   #x #U+++ +:+. : La + ++: \n"
        "  . +:.#: +r#++ #:+ +#m+# #:e. +  .:+ :#+ \n"
        ".   q++:# +++   +.: :.+#: :#++ # :a:+ ..+ \n"
        ":#+ ::+#  +#+ # ::X + .   #:+. + ::++ d:  \n"
        "#.e #+  # ##+:: #++ :.:   .::+ .  :#+ # : \n"
        "#H. #.+ : B.:++ F.: j++p# +:.+ +  :z. :.# \n"
        "++e  u.:+ :.::+ #o+ .+#p: :.:+   #.:: ::+ \n"
        "+   q:. :  :  n :++ ju##  .v#  + :+##  +  \n";

    string gen99 = 
        "..:  + +K .r+:  f      +  :+.  . +:+# ::  \n"
        "# :  #      ::+ .++ ..  . + .+   :: . +   \n"
        "#.   .#    . +   :: .U.:: +:+    ## + ::: \n"
        "    :. :. :#: : # + +#+.# +.e.      . .#: \n"
        "    q::.# +++   +    ...   #++ # :a:    + \n"
        "::. :::.  .++ # : X       +... + :.:  d   \n"
        "+.+ ::  + +:... ::+ . :     :+ .  :#: : : \n"
        ".h  # : : b ::: f . j+.p# ::.:    .z  . # \n"
        "..e  u    . ::+ +++ .::#.    :   :  :   : \n"
        "    q.. .  :  + .+: ju:#   v#  + .:.+  :  \n";



    cout << generationLoss(orig, gen10) << endl;  // true

    cout << generationLoss(gen99, gen75) << endl;  // false


    return 0;
}

// testTrue(orig, gen10);
// testTrue(orig, gen20);
// testTrue(orig, gen50);
// testTrue(orig, gen75);
// testTrue(orig, gen99);

// testTrue(gen10, gen20);
// testTrue(gen10, gen50);
// testTrue(gen10, gen75);
// testTrue(gen10, gen99);

// testTrue(gen20, gen50);
// testTrue(gen20, gen75);
// testTrue(gen20, gen99);

// testTrue(gen50, gen75);
// testTrue(gen50, gen99);

// testTrue(gen75, gen99);

// testFalse(gen99, gen75);
// testFalse(gen99, gen50);
// testFalse(gen99, gen20);
// testFalse(gen99, gen10);
// testFalse(gen99, orig);

// testFalse(gen75, gen50);
// testFalse(gen75, gen20);
// testFalse(gen75, gen10);
// testFalse(gen75, orig);

// testFalse(gen50, gen20);
// testFalse(gen50, gen10);
// testFalse(gen50, orig);

// testFalse(gen20, gen10);
// testFalse(gen20, orig);

// testFalse(gen10, orig);
