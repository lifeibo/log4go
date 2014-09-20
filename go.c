#include <runtime.h>

void ·GetGoId(int32 ret) {
    ret = g->goid;
    USED(&ret);
}
