
#include <string.h>
#include <pbc/pbc.h>

char *test = "type a\nq 8780710799663312522437781984754049815806883199414208211028653399266475630880222957078625179422662221423155858769582317459277713367317481324925129998224791\nh 12016012264891146079388821366740534204802954401251311822919615131047207289359704531102844802183906537786776\nr 730750818665451621361119245571504901405976559617\nexp2 159\nexp1 107\nsign1 1\nsign0 1\n";

int main() {
    pairing_t pairing;
    pairing_init_set_buf(pairing, test, strlen(test));

    return 0;
}

