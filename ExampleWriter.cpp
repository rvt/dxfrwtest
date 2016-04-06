//
// Created by R. van Twisk on 4/6/16.
//

#include "ExampleWriter.h"
ExampleWriter::ExampleWriter(dxfRW &dxfW) : dxfW(dxfW) {
}

void ExampleWriter::writeEntities() {
    DRW_Line line;
    line.basePoint.x = 10;
    line.basePoint.y = 20;
    line.secPoint.x = 30;
    line.secPoint.y = 30;
    dxfW.writeLine(&line);

    DRW_Line line2;
    line2.basePoint.x = 0;
    line2.basePoint.y = 0;
    line2.secPoint.x = 0;
    line2.secPoint.y = 30;
    dxfW.writeLine(&line2);
}