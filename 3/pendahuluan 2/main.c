#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gaji, tunjangan, anak, tjanak, thr, pajak, tahunkerja, transport, masukkerja, asuransi = 20000, total, gkotor;

    printf("input gaji:");
    scanf("%f", &gaji);
    printf("input anak: ");
    scanf("%f", &anak);
    printf("input masa kerja (tahun): ");
    scanf("%f", &tahunkerja);
    printf("input masuk kerja(hari): ");
    scanf("%f", &masukkerja);

    tunjangan = 0.1*gaji;
    tjanak = 0.05*anak*gaji;
    thr = 5000*tahunkerja;
    pajak = 0.15*(gaji + tunjangan + tjanak);
    transport = 3000*masukkerja;

    gkotor = gaji + tunjangan + tjanak + thr +transport;
    total = gkotor - pajak - asuransi;

    printf("\ngaji: %f\n", gaji);
    printf("tunjangan: %f\n", tunjangan);
    printf("tunjangan anak: %f\n", tjanak);
    printf("thr: %f\n", thr);
    printf("pajak: %f\n", pajak);
    printf("trasnport: %f\n", transport);
    printf("asuransi: %f\n", asuransi);
    printf("total gaji: %f", total);
    return 0;
}
