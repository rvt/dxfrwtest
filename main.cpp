#include <iostream>
#include "libdxfrw.h"
#include "ExampleWriter.h"

using namespace std;

    int main()
    {
        dxfRW dxf("/tmp/file.dxf");
        ExampleWriter writer(dxf);
        dxf.write(&writer, DRW::Version::AC1027, false);
        return 0;
    }

