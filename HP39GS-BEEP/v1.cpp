#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fp1;//file to read
	FILE *fp2;//file to write
	char ch;//read char
	char st1[10];
	int bpm = 0, n, note, freq, a[21] = { 262,294,330,349,392,440,494,523,587,659,698,784,880,988,1046,1175,1318,1397,1568,1760,1967 };
	double time, t;
	fopen_s(&fp1, "D:\\1.txt", "r");
	if (fp1 == NULL)
	{
		printf("Open the file failure...\n");
	}
	fopen_s(&fp2, "D:\\KK000000.txt", "w+");
	if (fp2 == NULL)
	{
		printf("Open the file failure...\n");
	}
	fputs("HP39AscD 2 KK", fp2);
	printf("HP39AscD 2 KK");
	fgets(st1, 4, fp1);
	if (strcmp(st1, "BPM") == 0)
	{
		ch = fgetc(fp1);
		bpm += 100 * (ch - '0');
		ch = fgetc(fp1);
		bpm += 10 * (ch - '0');
		ch = fgetc(fp1);
		bpm += (ch - '0');
		time = 60.0 / bpm;
	}
	ch = fgetc(fp1);
	while (ch != EOF)
	{
		n = 1;
		ch = fgetc(fp1);
		if (ch == '1')
		{
			note = 7;
			freq = a[note];
			ch = fgetc(fp1);
			if (ch == 'B')
			{
				n = 2;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'C')
			{
				n = 3;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'D')
			{
				n = 4;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == '0')
			{
				freq = a[note - 7];
				ch = fgetc(fp1);
			}
			if (ch == '1')
			{
				freq = a[note + 7];
				ch = fgetc(fp1);
			}
		}
		if (ch == '2')
		{
			note = 8;
			freq = a[note];
			ch = fgetc(fp1);
			if (ch == 'B')
			{
				n = 2;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'C')
			{
				n = 3;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'D')
			{
				n = 4;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == '0')
			{
				freq = a[note - 7];
				ch = fgetc(fp1);
			}
			if (ch == '1')
			{
				freq = a[note + 7];
				ch = fgetc(fp1);
			}
		}
		if (ch == '3')
		{
			note = 9;
			freq = a[note];
			ch = fgetc(fp1);
			if (ch == 'B')
			{
				n = 2;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'C')
			{
				n = 3;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'D')
			{
				n = 4;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == '0')
			{
				freq = a[note - 7];
				ch = fgetc(fp1);
			}
			if (ch == '1')
			{
				freq = a[note + 7];
				ch = fgetc(fp1);
			}
		}
		if (ch == '4')
		{
			note = 10;
			freq = a[note];
			ch = fgetc(fp1);
			if (ch == 'B')
			{
				n = 2;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'C')
			{
				n = 3;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'D')
			{
				n = 4;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == '0')
			{
				freq = a[note - 7];
				ch = fgetc(fp1);
			}
			if (ch == '1')
			{
				freq = a[note + 7];
				ch = fgetc(fp1);
			}
		}
		if (ch == '5')
		{
			note = 11;
			freq = a[note];
			ch = fgetc(fp1);
			if (ch == 'B')
			{
				n = 2;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'C')
			{
				n = 3;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'D')
			{
				n = 4;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == '0')
			{
				freq = a[note - 7];
				ch = fgetc(fp1);
			}
			if (ch == '1')
			{
				freq = a[note + 7];
				ch = fgetc(fp1);
			}
		}
		if (ch == '6')
		{
			note = 12;
			freq = a[note];
			ch = fgetc(fp1);
			if (ch == 'B')
			{
				n = 2;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'C')
			{
				n = 3;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'D')
			{
				n = 4;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == '0')
			{
				freq = a[note - 7];
				ch = fgetc(fp1);
			}
			if (ch == '1')
			{
				freq = a[note + 7];
				ch = fgetc(fp1);
			}
		}
		if (ch == '7')
		{
			note = 13;
			freq = a[note];
			ch = fgetc(fp1);
			if (ch == 'B')
			{
				n = 2;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'C')
			{
				n = 3;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == 'D')
			{
				n = 4;
				ch = fgetc(fp1);
				if (ch == '0')
				{
					freq = a[note - 7];
					ch = fgetc(fp1);
				}
				if (ch == '1')
				{
					freq = a[note + 7];
					ch = fgetc(fp1);
				}
			}
			if (ch == '0')
			{
				freq = a[note - 7];
				ch = fgetc(fp1);
			}
			if (ch == '1')
			{
				freq = a[note + 7];
				ch = fgetc(fp1);
			}
		}
		if (ch == '0')
		{
			ch = fgetc(fp1);
			if (ch == 'B')
			{
				n = 2;
				ch = fgetc(fp1);
			}
			if (ch == 'C')
			{
				n = 3;
				ch = fgetc(fp1);
			}
			if (ch == 'D')
			{
				n = 4;
				ch = fgetc(fp1);
			}
			t = time / n;
			fprintf(fp2, "WAIT %.3f:\n", t);
			printf("WAIT %.3f:\n", t);
			continue;
		}
		t = time / n;
		fprintf(fp2, "BEEP %d;%.3f:\n", freq, t);
		printf("BEEP %d;%.3f:\n", freq, t);
	}
	fclose(fp1);
	fclose(fp2);
	system("pause");
}