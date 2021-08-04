#include <iostream>

using namespace std;

int main() {

int n,i;


int points[]={0,300,350,400,450};

//char array to store grades

char grade[]={'F','D','C','B','A'};

std::cout << "Enter total points: " << std::endl;



std::cin >> n;

for(i=0;i<4;i++){

if(n>=points[i]&&n<points[i+1]){

std::cout << grade[i] << std::endl;

}

}

if(n>=points[4]&&n<=500){

std::cout << grade[4] << std::endl;

}

return 0;

}
