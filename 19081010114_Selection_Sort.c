#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct mahasiswa{
	char nama[40];
	char npm[12];
	char jenis_kelamin[15];
	char umur[3];
	char semester[2];
	char jurusan[20];
	char fakultas[20];
};

typedef struct mahasiswa mahasiswa;


int main()
{
	int input;
	int i=0, n=20, a=0, b=0, c=0, pos;
	struct mahasiswa mhs[n],mhs1;
	
	input:
	printf("Input Awal\n");
	printf("Masukkan Nama : ");
	scanf(" %[^\n]%*c", &mhs[0].nama);
	printf("Masukkan NPM : ");
	scanf(" %[^\n]%*c", &mhs[0].npm);
	printf("Masukkan Jenis Kelamin : ");
	scanf(" %[^\n]%*c", &mhs[0].jenis_kelamin);
	printf("Masukkan Umur : ");
	scanf(" %[^\n]%*c", &mhs[0].umur);
	printf("Masukkan Semester : ");
	scanf(" %[^\n]%*c", &mhs[0].semester);
	printf("Masukkan Jurusan : ");
	scanf(" %[^\n]%*c", &mhs[0].jurusan);
	printf("Masukkan Fakultas : ");
	scanf(" %[^\n]%*c", &mhs[0].fakultas);
	i=i+1;
	system("cls");
	
	while(i<=20){
		menuutama:
		printf("MENU UTAMA\n");
		printf("1. Tambah Data\n");
		printf("2. Lihat Data\n");
		printf("3. Edit Data\n");
		printf("4. Delete Data\n");
		printf("5. Urutkan Data Berdasarkan Nama\n");
		printf("Pilih Yang Ingin Anda Lakukan?\n");
		printf("Pilih : ");
		scanf("%d", &input);
		system("cls");
		
		if(input==1){
			if(i==20){
				printf("Data Telah Penuh! Silahkan Hapus Data Dulu!");
				goto menuutama;
			}
			printf("Masukkan Nama : ");
			scanf(" %[^\n]%*c", &mhs[i].nama);
			printf("Masukkan NPM : ");
			scanf(" %[^\n]%*c", &mhs[i].npm);
			printf("Masukkan Jenis Kelamin : ");
			scanf(" %[^\n]%*c", &mhs[i].jenis_kelamin);
			printf("Masukkan Umur : ");
			scanf(" %[^\n]%*c", &mhs[i].umur);
			printf("Masukkan Semester : ");
			scanf(" %[^\n]%*c", &mhs[i].semester);
			printf("Masukkan Jurusan : ");
			scanf(" %[^\n]%*c", &mhs[i].jurusan);
			printf("Masukkan Fakultas : ");
			scanf(" %[^\n]%*c", &mhs[i].fakultas);
			i=i+1;
			system("cls");
		}
		else if(input==2){
			for(a=0;a<i;a++){
				printf("Data Mahasiswa %d\n", a+1);
				printf("Nama\t\t: %s\n",mhs[a].nama);
				printf("NPM\t\t: %s\n",mhs[a].npm);
				printf("Jenis Kelamin\t: %s\n",mhs[a].jenis_kelamin);
				printf("Umur\t\t: %s\n",mhs[a].umur);
				printf("Semester\t: %s\n",mhs[a].semester);
				printf("Jurusan\t\t: %s\n",mhs[a].jurusan);
				printf("Fakultas\t: %s\n",mhs[a].fakultas);
				printf("\n");
			}
			printf("Tekan tombol apa saja untuk kembali...");
			getch();
			system("cls");
		}
		else if(input==3){
			for(a=0;a<i;a++){
				printf("Data Mahasiswa %d\n", a+1);
				printf("Nama\t\t: %s\n",mhs[a].nama);
				printf("NPM\t\t: %s\n",mhs[a].npm);
				printf("Jenis Kelamin\t: %s\n",mhs[a].jenis_kelamin);
				printf("Umur\t\t: %s\n",mhs[a].umur);
				printf("Semester\t: %s\n",mhs[a].semester);
				printf("Jurusan\t\t: %s\n",mhs[a].jurusan);
				printf("Fakultas\t: %s\n",mhs[a].fakultas);
				printf("\n");
			}
			printf("Data Keberapa Yang Ingin Anda Ubah? ");
			scanf("%d", &input);
			if(input==0){
				system("cls");
				goto menuutama;
			}
			else if(a<=i){
			}
			else{
				printf("\n");
				printf("Tidak Ada Data Pada Nomor %d!",a);
				getch();
				system("cls");
				goto ubahlagi;
			}
			input=input-1;
			system("cls");
			ubahlagi:
			printf("Data Mahasiswa %d\n", input+1);
			printf("1. Nama\t\t: %s\n",mhs[input].nama);
			printf("2. NPM\t\t: %s\n",mhs[input].npm);
			printf("3. Jenis Kelamin: %s\n",mhs[input].jenis_kelamin);
			printf("4. Umur\t\t: %s\n",mhs[input].umur);
			printf("5. Semester\t: %s\n",mhs[input].semester);
			printf("6. Jurusan\t: %s\n",mhs[input].jurusan);
			printf("7. Fakultas\t: %s\n",mhs[input].fakultas);
			printf("\n");
			printf("Data Mana Yang Ingin Anda Ubah? ");
			scanf("%d", &b);
			if(b==1){
				printf("Masukkan Nama : ");
				scanf(" %[^\n]%*c", &mhs[input].nama);
			}
			else if(b==2){
				printf("Masukkan NPM : ");
				scanf(" %[^\n]%*c", &mhs[input].npm);
			}
			else if(b==3){
				printf("Masukkan Jenis Kelamin : ");
				scanf(" %[^\n]%*c", &mhs[input].jenis_kelamin);
			}
			else if(b==4){
				printf("Masukkan Umur : ");
				scanf(" %[^\n]%*c", &mhs[input].umur);
			}
			else if(b==5){
				printf("Masukkan Semester : ");
				scanf(" %[^\n]%*c", &mhs[input].semester);
			}
			else if(b==6){
				printf("Masukkan Jurusan : ");
				scanf(" %[^\n]%*c", &mhs[input].jurusan);
			}
			else if(b==7){
				printf("Masukkan Fakultas : ");
				scanf(" %[^\n]%*c", &mhs[input].fakultas);
			}
			else{
				goto ubahlagi;
			}
			system("cls");
		}
		else if(input==4){
			for(a=0;a<i;a++){
				printf("Data Mahasiswa %d\n", a+1);
				printf("Nama\t\t: %s\n",mhs[a].nama);
				printf("NPM\t\t: %s\n",mhs[a].npm);
				printf("Jenis Kelamin\t: %s\n",mhs[a].jenis_kelamin);
				printf("Umur\t\t: %s\n",mhs[a].umur);
				printf("Semester\t: %s\n",mhs[a].semester);
				printf("Jurusan\t\t: %s\n",mhs[a].jurusan);
				printf("Fakultas\t: %s\n",mhs[a].fakultas);
				printf("Data Keberapa Yang Ingin Anda Hapus? ");
				scanf("%d", &input);
			}
			for(a=0;a<i-input;a++){
				strcpy(mhs[input-1+a].nama,mhs[input+a].nama);
				strcpy(mhs[input-1+a].npm,mhs[input+a].npm);
				strcpy(mhs[input-1+a].jenis_kelamin,mhs[input+a].jenis_kelamin);
				strcpy(mhs[input-1+a].umur,mhs[input+a].umur);
				strcpy(mhs[input-1+a].semester,mhs[input+a].semester);
				strcpy(mhs[input-1+a].jurusan,mhs[input+a].jurusan);
				strcpy(mhs[input-1+a].fakultas,mhs[input+a].fakultas);
			}
			i=i-1;
			system("cls");
			printf("Data Telah Berhasil Dihapus!");
			system("cls");
			goto menuutama;
		}
		else if(input==5){
		printf("1. Bubble Sort\n");
		printf("2. Selecting Sort\n");
		printf("Pilih Metode Sort : \n");
		scanf("%d", &b);
		system("cls");
		if(b==1){
		printf("1. Ascending\n");
		printf("2. Descending\n");
		printf("Silahkan Pilih Urutan Pengurutan : \n");
		scanf("%d", &b);
		if(b==1){
		clock_t start = clock()/CLOCKS_PER_SEC;
			for(a=0;a<i-1;a++){
				for(c=0;c<i-1;c++){
					if(strcmp(mhs[c].nama,mhs[c+1].nama)>0){
						mhs1=mhs[c];
						mhs[c]=mhs[c+1];
						mhs[c+1]=mhs1;
					}
				}
			}
			clock_t end = clock()/CLOCKS_PER_SEC*100;
			double elapsed = (double)(end - start);
			printf("Waktu Eksekusi = %.3f\n",elapsed);
			printf("Data Berhasil Diurutkan! Silahkan Tekan Tombol Apapun Untuk Melanjutkan :)\n");
			getch();
			system("cls");
			goto menuutama;
		}
		else if(b==2){
			clock_t start = clock()/CLOCKS_PER_SEC;
			for(a=0;a<i-1;a++){
				for(c=0;c<i-1;c++){
					if(strcmp(mhs[c].nama,mhs[c+1].nama)<0){
						mhs1=mhs[c];
						mhs[c]=mhs[c+1];
						mhs[c+1]=mhs1;
					}
				}
			}
			clock_t end = clock()/CLOCKS_PER_SEC*100;
			double elapsed = (double)(end - start);
			printf("Waktu Eksekusi = %.3f\n",elapsed);
			printf("\nData Berhasil Diurutkan! Silahkan Tekan Tombol Apapun Untuk Melanjutkan :)\n");
			getch();
			system("cls");
			goto menuutama;
		}
		else{
			printf("\nMohon maaf tidak ada pilihan tersebut :)\n\n");
		}
	}
	else if(b==2){
		printf("1. Ascending\n");
		printf("2. Descending\n");
		printf("Silahkan Pilih Urutan Pengurutan : \n");
		scanf("%d", &b);
		if(b==1){
			clock_t start = clock()/CLOCKS_PER_SEC;
			for(a=0;a<i-1;a++){
				pos = a;
				for(c=a+1;c<i;c++){
					if(strcmp(mhs[c].nama,mhs[pos].nama)<0){
						pos=c;
					}
				}
				if(pos!=a){
					mhs1=mhs[a];
					mhs[a]=mhs[pos];
					mhs[pos]=mhs1;
				}
			}
			clock_t end = clock()/CLOCKS_PER_SEC*100;
			double elapsed = (double)(end - start);
			printf("Waktu Eksekusi = %.3f",elapsed);
			printf("\nData Berhasil Diurutkan! Silahkan Tekan Tombol Apapun Untuk Melanjutkan :)\n");
			getch();
			system("cls");
			goto menuutama;
		}
		else if(b==2){
			clock_t start = clock()/CLOCKS_PER_SEC;
			for(a=0;a<i-1;a++){
				pos = a;
				for(c=a+1;c<i;c++){
					if(strcmp(mhs[c].nama,mhs[pos].nama)>0){
						pos=c;
					}
				}
				if(pos!=a){
					mhs1=mhs[a];
					mhs[a]=mhs[pos];
					mhs[pos]=mhs1;
				}
			}
			clock_t end = clock()/CLOCKS_PER_SEC*100;
			double elapsed = (double)(end - start);
			printf("Waktu Eksekusi = %.3f\n",elapsed);
			printf("Data Berhasil Diurutkan! Silahkan Tekan Tombol Apapun Untuk Melanjutkan :)\n");
			getch();
			system("cls");
			goto menuutama;
		}
		else{
			printf("\nInput Invalid :)\n\n");
		}
	}
	else{
		printf("\nInput Invalid :)\n\n");
	}
	}	
	}return 0;
}
