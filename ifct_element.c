//
//  ifs_element.c
//  InfestPath
//
//  Created by HyoJin Park on 2022/12/01
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ifct_element.h"

typedef enum place {
    Seoul,          //0
    Jeju,           //1
    Tokyo,          //2
    LosAngeles,     //3
    NewYork,        //4
    Texas,          //5
    Toronto,        //6
    Paris,          //7
    Nice,           //8
    Rome,           //9
    Milan,          //10
    London,         //11
    Manchester,     //12
    Basel,          //13
    Luzern,         //14
    Munich,         //15
    Frankfurt,      //16
    Berlin,         //17
    Barcelona,      //18
    Madrid,         //19
    Amsterdam,      //20
    Stockholm,      //21
    Oslo,           //22
    Hanoi,          //23
    Bangkok,        //24
    KualaLumpur,    //25
    Singapore,      //26
    Sydney,         //27
    SaoPaulo,       //28
    Cairo,          //29
    Beijing,        //30
    Nairobi,        //31
    Cancun,         //32
    BuenosAires,    //33
    Reykjavik,      //34
    Glasgow,        //35
    Warsow,         //36
    Istanbul,       //37
    Dubai,          //38
    CapeTown        //39
} place_t;

char countryName[N_PLACE+1][MAX_PLACENAME] =
{   "Seoul",
    "Jeju",
    "Tokyo",
    "LosAngeles",
    "NewYork",
    "Texas",
    "Toronto",
    "Paris",
    "Nice",
    "Rome",
    "Milan",
    "London",
    "Manchester",
    "Basel",
    "Luzern",
    "Munich",
    "Frankfurt",
    "Berlin",
    "Barcelona",
    "Madrid",
    "Amsterdam",
    "Stockholm",
    "Oslo",
    "Hanoi",
    "Bangkok",
    "KualaLumpur",
    "Singapore",
    "Sydney",
    "SaoPaulo",
    "Cairo",
    "Beijing",
    "Nairobi",
    "Cancun",
    "BuenosAires",
    "Reykjavik",
    "Glasgow",
    "Warsow",
    "Istanbul",
    "Dubai",
    "CapeTown",
    "Unrecognized"
};

//구조체 정의  
typedef struct ifs_ele
{
	int index; //number
	int age; //age
	inte time; //time
	place_t place[N_HISTORY]; //place[N_HISTORY]
} ifs_ele_t;

//전역변수 선언 -> 공용으로 사용할거라서 
//encapsulation 하려고 static으로 선언  



//메모리를 동적으로 잡아서 메인.c로 넘겨주도록  
void* ifctele_genElement(int index, int age, unsigned int dectected_time, int history_place[N_HISTORY])
{
	ifs_ele_t* ptr;
	
	ptr = malloc();
	ptr->index = index;
	ptr->age = age;
	ptr->time = detected_time;
	ptr->place = history_place[N_HISTORY];
	
	//free를 해줄 필요는 없음 : 만든것을 넘겨줘서 구조체를 만들어서 넘겨주는, 다시 사용해야하기 때문에 free(ptr)를 할 필요없음. 
	return ptr;
}

int ifctele_getAge(void* obj)
{
	ifs_ele_t* ptr = (ifs_ele_t*)obj;
	
	return ptr->age;
}

//첫번쨰 장소인지, 두번쨰 장소인지
//4번에 대한 내용(강의자료) 
int ifctele_getHistPlaceIndex(void* obj, int index);
unsigned int ifctele_getinfestedTime(void* obj);




void ifctele_printElement(void* obj)
{
	ifs_ele_t* ptr = (ifs_ele_t*)obj;
	
	printf("Age : %i\n", ptr->age);
} 

char* ifctele_getPlaceName(int placeIndex)
{
	return countryName[placeIndex];
}





















