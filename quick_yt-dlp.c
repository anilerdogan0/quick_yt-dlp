#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    
    if(argc == 2){
        char CMD[384] = "\0";
        snprintf(CMD, 384, "yt-dlp --list-formats %s", argv[1]);
        system(CMD);
    }

    else if(argc == 3){
        char CMD[384] = "\0";
        snprintf(CMD, 384, "yt-dlp -f %s %s", argv[2], argv[1]);
        system(CMD);
    }

    else{
        printf("\nFor list formats:\n");
        printf("%s <video_link>\n", argv[0]);
        printf("\nFor download formats:\n");
        printf("%s <video_link> <FORMAT+FORMAT>\n", argv[0]);
        printf("\nFor download formats with arguments:\n");
        printf("%s <video_link> <FORMAT+FORMAT> <arguments>\n", argv[0]);
    }

    return 0;
}