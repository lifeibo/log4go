#include <runtime.h>

void ·GetGoId(int64 ret) {
    ret = g->goid;
    USED(&ret);
}
