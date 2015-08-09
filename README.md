# markup-marmot
Miscellaneous xml utilities.

Each folder may be under a different license.  See the COPYING file under each directory for details.

# genx
A C library for writing Canonical Xml.

Originally written by Tim Bray, one of the editors of the xml spec.

The original source is available at https://www.tbray.org/ongoing/When/200x/2004/02/20/GenxStatus

This version is focused on minor tweaks to make the project build in more recent versions of Visual Studio.

#SaxWriter
A C++ project that demonstrates using Apache Xerces SAX2 api in concert with genx to rewrite an xml file.

This approach should be suitable for efficiently modifying large xml files in a streaming fashion.