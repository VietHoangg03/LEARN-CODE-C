#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main () 
{
	int a = 5, *pa = &a;
	printf("\nGia tri bien pa: %d", pa);
	printf("\nGia tri cua bien a: %d", &a);
	
	// -> pa và &a deu chi dia chi cua bien a
	
	printf("\nGia tri vung nho pa tro den: %d", *pa);
	printf("\nGia tri cua bien a : %d", a);
	
	// -> *pa va a deu chi noi dung cua bien a
	
	printf("\nDia chi bien pa: %d", &pa);
	// -> dia chi bien pa
	
	// co 2 cai dia chi 
	// 1 la dia chi cua bien con tro pa
	// 2 la dia chi ma con tro pa tro den 
	// Toan tu * de lay ra gia tri ma con tro dang tro den
	// Ko de toan tu gi ca thi lay gia tri mà con tro dang tro den
	// Neu de ca dau & truoc tren con tro thi ta dang lay ra " dia chi rieng " con trp.
	
}
