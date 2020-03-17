int main() {
    printf(Hello World!n);
 
    mkdir(sdmydir, 0777);
    
    FILE fp = fopen(sdmydirsdtest.txt, w);
    if(fp == NULL) {
        error(Could not open file for writen);
    }
    fprintf(fp, Hello fun SD Card World!);
    fclose(fp); 
 
    printf(Goodbye World!n);
}