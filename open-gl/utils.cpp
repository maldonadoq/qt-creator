#include "utils.h"

void TDrawSquare(float x, float y, float size){
    float tmp = size/2;
    glBegin(GL_LINE_LOOP);
        glColor3f(0.0f, 1.0f, 0.0f);

        glVertex2f(x-tmp, y+tmp);
        glVertex2f(x+tmp, y+tmp);
        glVertex2f(x+tmp, y-tmp);
        glVertex2f(x-tmp, y-tmp);

    glEnd();
}
