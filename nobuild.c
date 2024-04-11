#define NOBUILD_IMPLEMENTATION
#include "nobuild.h"

#define CFLAGS "-Wall", "-Wextra", "-std=c99", "-pedantic"
#define BUFSIZE 1024

void
build_tool(const char *path)
{
    Cstr src_fp = PATH("src", path);

    CMD("cc", CFLAGS, src_fp,"-o", NOEXT(src_fp));
}

int
main(int argc, char **argv)
{
    char fp[BUFSIZE] = {0};

    GO_REBUILD_URSELF(argc, argv);
    
    FOREACH_FILE_IN_DIR(fp, "src", {
        if (ENDS_WITH(fp, ".c")) {
            build_tool(fp);
        }
    });

    return 0;
}
