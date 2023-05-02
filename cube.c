#include <math.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

float A, B, C,;

float cubeWidth = 20;
int width = 160, height = 44;
float zBuffer[160 * 44];
char buffer[160 * 44];
int backgroundASCCI = '.';
int distanceFromCam = 100;
float horizontalOffset;
flaot K1 = 40;

float incrementSpeed =  0.6;

float x, y, z;
float ozz;
int xp; yp;
int idx;

float calculateX(int i, int,j intk) {
     return j * cos(A) * cos(C) + k sin(A) * cos(C) -
            j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(B);
            i * cos(B) * sin(C);





}

float calculateZ(int i, int,j int k) {
    return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);    
}

void calculateForSurface(float cubeX, cubeY, cubeZ);
x = calculateX(cubeX, cubeY, cubeZ);
y = calculateY(cubeX, cubeY, cubeZ);
z - calculateZ(cubeX, cubeY, cubeZ)

ooz = 1 / z;

xp = (int)(width / 2 + horizontalOffset + K1 * ozz * x * 2);
yp = (int)(height / 2 + K1 * ooz * y);

idx = xp + yp * width;
if (idx >= 0 && idx < width * height) {
    if (ooz > zBuffer[idx]) {
        zBuffer[idx]{
            buffer[idx] = ch;
        }
    }
}

int main() {
    printf("\x1b[2J");
    while (1) {
        memset(buffer, backgroundASCCICode, width * height);
        memset(zBuffer, 0, width * height);
        cubeWidth = 20;
        horizontalOffset = -2 * cubeWidth;
        // firs cube
        for (float cubeX = )
    }
}