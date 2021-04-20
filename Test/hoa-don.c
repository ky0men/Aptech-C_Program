#include<stdio.h>
int main()
{
	int stt = 1;
	printf("%-25s: %s\n", "- HO VA TEN KHACH HANG", "NGO THANH TUNG");
	printf("%-25s: %s\n", "- SO DIEN THOAI", "0905157803");
	printf("%-25s: %s\n\n", "- DIA CHI", "38 YEN BAI, TP DA NANG");
	printf("%5s | %-20s | %-8s | %-7s | %-8s | %-10s\n", "STT", "TEN HANG HOA", "SO LUONG", "DON GIA", "GIAM GIA", "THANH TIEN");
	printf("-------------------------------------------------------------------------\n");
	printf("%5d | %-20s | %8d | %7ld | %8s | %10ld\n", stt++, "IPAD AIR", 1, 1500000, "10%", 13500000);
	printf("%5d | %-20s | %8d | %7ld | %8s | %10ld\n", stt++, "IPHONE 6 PLUS", 2, 2000000, "5%", 38000000);
	printf("-------------------------------------------------------------------------\n");
	printf("%61s %11ld", "TONG CONG:", 51500000);
}