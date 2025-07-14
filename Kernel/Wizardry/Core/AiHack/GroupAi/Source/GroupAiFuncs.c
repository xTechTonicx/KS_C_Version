#include "chapterdata.h"
#include "eventscript.h"

void DummyGroupAiFunc(int) {return;}

void Chapter02GroupAiFunc(int group) {
    if (group == 1)
        ClearFlag(7);
}