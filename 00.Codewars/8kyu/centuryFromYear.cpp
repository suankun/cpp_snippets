int centuryFromYear(int year) 
{
return ((year/100)*100 == year) ? (year/100) : (year/100)+1;
}

// constexpr int centuryFromYear(int year) 
// {
//     return (year + 99) / 100;
// }
