# VisIt_NetCDF_ICON

[VisIt](https://visit-dav.github.io/visit-website/) Database plugin for reading
[ICON](https://code.mpimet.mpg.de/projects/iconpublic) formatted NetCDF output.

## Developing instructions

### Building

 - install VisIt
 - run `xmledit` and set options
 - generate plugin scheleton with `xml2plugin -clobber FILE.xml`
 - build the plugin with `cmake -DCMAKE_BUILD_TYPE:STRING=Debug`
 - install in `~/.visit/` with `make`
 
If you edit the XML file you will need to regenerate the CMakeLists.txt file
using `xml2cmake`. It is also a good idea to remove the CMakeCache.txt file
before rerunning `cmake` if you have changed the path to any libraries in the
XML file.
