
int main(){
int a = 100;
int b = 0;
bool flag = getFlag();
while(a > b) {
if (flag) {
b += 2;
for (int i = 0; i <= calcCPU(a,b); i++) {
int grep = initGrep(i+1);
b += grep%2;
}
std::cout << a;
}
else {
a -= 3;
std::cout << b;
}

if (a%3 == 0) {
std::cout << a;
}
else {
a -= 2;
std::cout << b;
}
}
std::cout << "a = ", a, " b = ", b;
return 0;
}
