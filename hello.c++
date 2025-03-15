#include <stdio.h>

#define xputc(x) fputc(x, stdout)
#define xputs(x) fputs(x, stdout)

//extern "C" {
//    void xputc(int);
//    void xputs(const char *);
//}

class ostream {
public:
    ostream &operator<<(const char *);
    ostream &operator<<(char c);

};

ostream &ostream::operator<<(const char *cp) {
    xputs(cp);
    return *this;
}

ostream &ostream::operator<<(char c) {
    xputc(c);
    return *this;
}


static ostream cout;
static const char endl = '\n';

int main(int argc, char **argv) {

    cout << "hello, world" << endl;
    return 0;
}
