// This is a file with all the message errors xpdf uses
// It has been done with grep and some manual work

// DO NOT TOUCH THAT MESSAGES, they are used by xpdf 
// internally and are here only to apper on the .pot file
// if you change them translators get a different message to
// translate and the english message will be used
// because a translation could not be found for the message 
// xpdf uses

i18n("Couldn't find '%s' CMap file for '%s' collection")
i18n("Illegal entry in codespacerange block in CMap")
i18n("Illegal entry in cidrange block in CMap")
i18n("Collision in usecmap")
i18n("Invalid CID (%*x - %*x) in CMap")
i18n("Catalog object is wrong type (%s)")
i18n("Top-level pages object is wrong type (%s)")
i18n("Page count in top-level pages object is wrong type (%s)")
i18n("Page count in top-level pages object is incorrect")
i18n("Unknown Metadata type: '%s'")
i18n("Kids object (page %d) is wrong type (%s)")
i18n("Kid object (page %d) is wrong type (%s)")
i18n("Bad named destination value")
i18n("Couldn't open cidToUnicode file '%s'")
i18n("Bad line (%d) in cidToUnicode file '%s'")
i18n("Couldn't open unicodeToUnicode file '%s'")
i18n("Bad line (%d) in unicodeToUnicode file '%s'")
i18n("Couldn't find ToUnicode CMap file for '%s'")
i18n("Illegal entry in bfchar block in ToUnicode CMap")
i18n("Illegal entry in bfrange block in ToUnicode CMap")
i18n("Illegal entry in ToUnicode CMap")
i18n("Expected function dictionary or stream")
i18n("Function type is missing or wrong type")
i18n("Unimplemented function type (%d)")
i18n("Function is missing domain")
i18n("Functions with more than %d inputs are unsupported")
i18n("Illegal value in function domain array")
i18n("Functions with more than %d outputs are unsupported")
i18n("Illegal value in function range array")
i18n("Type 0 function is missing range")
i18n("Type 0 function isn't a stream")
i18n("Function has missing or invalid size array")
i18n("Illegal value in function size array")
i18n("Function has missing or invalid BitsPerSample")
i18n("Illegal value in function encode array")
i18n("Illegal value in function decode array")
i18n("Exponential function with more than one input")
i18n("Function's C0 array is wrong length")
i18n("Illegal value in function C0 array")
i18n("Function's C1 array is wrong length")
i18n("Illegal value in function C1 array")
i18n("Function has missing or invalid N")
i18n("Stitching function with more than one input")
i18n("Missing 'Functions' entry in stitching function")
i18n("Incompatible subfunctions in stitching function")
i18n("Missing or invalid 'Bounds' entry in stitching function")
i18n("Invalid type in 'Bounds' array in stitching function")
i18n("Missing or invalid 'Encode' entry in stitching function")
i18n("Invalid type in 'Encode' array in stitching function")
i18n("Stack overflow in PostScript function")
i18n("Stack underflow in PostScript function")
i18n("Type mismatch in PostScript function")
i18n("Type 4 function is missing range")
i18n("Type 4 function isn't a stream")
i18n("Expected '{' at start of PostScript function")
i18n("Unexpected end of PostScript function stream")
i18n("Got 'if' operator with two blocks in PostScript function")
i18n("Got 'ifelse' operator with one blocks in PostScript function")
i18n("Expected if/ifelse operator in PostScript function")
i18n("Unknown operator '%s' in PostScript function")
i18n("Internal: bad object in PostScript function code")
i18n("Unknown font tag '%s'")
i18n("XObject '%s' is unknown")
i18n("Unknown pattern '%s'")
i18n("Unknown shading '%s'")
i18n("ExtGState '%s' is unknown")
i18n("Weird page contents")
i18n("Too many args in content stream")
i18n("Leftover args in content stream")
i18n("Unknown operator '%s'")
i18n("Too few (%d) args to '%s' operator")
i18n("Too many (%d) args to '%s' operator")
i18n("Arg #%d to '%s' operator is wrong type (%s)")
i18n("ExtGState '%s' is wrong type")
i18n("Bad color space (fill)")
i18n("Bad color space (stroke)")
i18n("No current point in lineto")
i18n("No current point in curveto")
i18n("No current point in curveto1")
i18n("No current point in curveto2")
i18n("No current point in closepath")
i18n("Unimplemented pattern type (%d) in fill")
i18n("No font in show")
i18n("No font in move/show")
i18n("No font in move/set/show")
i18n("No font in show/space")
i18n("Element of show/space array must be number or string")
i18n("Missing or bad Type3 CharProc entry")
i18n("XObject '%s' is wrong type")
i18n("Unknown XObject subtype '%s'")
i18n("XObject subtype is missing or wrong type")
i18n("Bad image parameters")
i18n("Unknown form type")
i18n("Bad form bounding box")
i18n("Inline image dictionary key must be a name object")
i18n("End of file in inline image")
i18n("Internal: got 'ID' operator")
i18n("Internal: got 'EI' operator")
i18n("Unknown font type: '%s'")
i18n("Mismatch between font type and embedded font file")
i18n("Unknown embedded font type '%s'")
i18n("External font file '%s' vanished")
i18n("Error reading external font file '%s'")
i18n("Embedded font file is not a stream")
i18n("Missing or invalid CharProcs dictionary in Type 3 font")
i18n("Wrong type in font encoding resource differences (%s)")
i18n("Missing DescendantFonts entry in Type 0 font")
i18n("Bad descendant font in Type 0 font")
i18n("Missing Subtype entry in Type 0 descendant font")
i18n("Unknown Type 0 descendant font type '%s'")
i18n("Missing CIDSystemInfo dictionary in Type 0 descendant font")
i18n("Invalid CIDSystemInfo dictionary in Type 0 descendant font")
i18n("Unknown character collection '%s'")
i18n("Missing or invalid Encoding entry in Type 0 font")
i18n("Unknown CMap '%s' for character collection '%s'")
i18n("Invalid CIDToGIDMap entry in CID font")
i18n("Bad widths array in Type 0 font")
i18n("Bad widths (W2) array in Type 0 font")
i18n("font resource is not a dictionary")
i18n("Bad color space '%s'")
i18n("Bad color space")
i18n("Bad color space - expected name or array")
i18n("Bad CalGray color space")
i18n("Bad CalRGB color space")
i18n("Bad Lab color space")
i18n("Bad ICCBased color space (stream)")
i18n("Bad ICCBased color space (N)")
i18n("Bad ICCBased color space - invalid N")
i18n("Bad Indexed color space")
i18n("Bad Indexed color space (base color space)")
i18n("Bad Indexed color space (hival)")
i18n("Bad Indexed color space (invalid indexHigh value)")
i18n("Bad Indexed color space (lookup table stream too short)")
i18n("Bad Indexed color space (lookup table string too short)")
i18n("Bad Indexed color space (lookup table)")
i18n("Bad Separation color space")
i18n("Bad Separation color space (name)")
i18n("Bad Separation color space (alternate color space)")
i18n("Bad DeviceN color space")
i18n("Bad DeviceN color space (names)")
i18n("DeviceN color space with more than %d > %d components")
i18n("Bad DeviceN color space (alternate color space)")
i18n("Bad Pattern color space")
i18n("Bad Pattern color space (underlying color space)")
i18n("Invalid or missing PaintType in pattern")
i18n("Invalid or missing TilingType in pattern")
i18n("Invalid or missing BBox in pattern")
i18n("Invalid or missing XStep in pattern")
i18n("Invalid or missing YStep in pattern")
i18n("Invalid or missing Resources in pattern")
i18n("Invalid ShadingType in shading dictionary")
i18n("Unimplemented shading type %d")
i18n("Bad color space in shading dictionary")
i18n("Bad Background in shading dictionary")
i18n("Bad BBox in shading dictionary")
i18n("Invalid Function array in shading dictionary")
i18n("Missing or invalid Coords in shading dictionary")
i18n("No paper information available - using defaults")
i18n("Couldn't find included config file: '%s' (%s:%d)")
i18n("Bad 'include' config file command (%s:%d)")
i18n("Unknown config file command '%s' (%s:%d)")
i18n("-- Xpdf no longer supports X fonts")
i18n("-- The t1libControl and freetypeControl options have been replaced")
i18n("   by the enableT1lib, enableFreeType, and antialias options")
i18n("-- the config file format has changed since Xpdf 0.9x")
i18n("Bad 'nameToUnicode' config file command (%s:%d)")
i18n("Couldn't open 'nameToUnicode' file '%s'")
i18n("Bad line in 'nameToUnicode' file (%s:%d)")
i18n("Bad 'cidToUnicode' config file command (%s:%d)")
i18n("Bad 'unicodeToUnicode' config file command (%s:%d)")
i18n("Bad 'unicodeMap' config file command (%s:%d)")
i18n("Bad 'cMapDir' config file command (%s:%d)")
i18n("Bad 'toUnicodeDir' config file command (%s:%d)")
i18n("Bad 'display*Font*' config file command (%s:%d)")
i18n("Bad 'psPaperSize' config file command (%s:%d)")
i18n("Bad 'psImageableArea' config file command (%s:%d)")
i18n("Bad 'psLevel' config file command (%s:%d)")
i18n("Bad 'psFile' config file command (%s:%d)")
i18n("Bad 'psFont' config file command (%s:%d)")
i18n("Bad '%s' config file command (%s:%d)")
i18n("Bad 'textEncoding' config file command (%s:%d)")
i18n("Bad 'textEOL' config file command (%s:%d)")
i18n("Bad 'fontDir' config file command (%s:%d)")
i18n("Bad 'initialZoom' config file command (%s:%d)")
i18n("No display font for '%s'")
i18n("Bad two dim code in JBIG2 MMR stream")
i18n("Bad white code in JBIG2 MMR stream")
i18n("Bad black code in JBIG2 MMR stream")
i18n("Unknown segment type in JBIG2 stream")
i18n("Unexpected EOF in JBIG2 stream")
i18n("Bad symbol dictionary reference in JBIG2 halftone segment")
i18n("Illegal code in JBIG2 MMR bitmap data")
i18n("Missing EOFB in JBIG2 MMR bitmap data")
i18n("Bad reference in JBIG2 generic refinement segment")
i18n("Bad bitmap reference in JBIG2 generic refinement segment")
i18n("Unexpected EOF in JPX stream")
i18n("Unknown compression type in JPX stream")
i18n("Found bits per component box before image header box in JPX stream")
i18n("Invalid bits per component box in JPX stream")
i18n("JPX stream is missing the image header box")
i18n("JPX stream has no supported color spec")
i18n("Error in JPX color spec")
i18n("Error in JPX codestream")
i18n("Error in JPX SIZ marker segment")
i18n("Different number of components in JPX SIZ marker segment")
i18n("Error in JPX COD marker segment")
i18n("JPX COC marker segment before COD segment")
i18n("Error in JPX COC marker segment")
i18n("Error in JPX QCD marker segment")
i18n("JPX QCC marker segment before QCD segment")
i18n("Error in JPX QCC marker segment")
i18n("Error in JPX PPM marker segment")
i18n("Error in JPX RGN marker segment")
i18n("Error in JPX POC marker segment")
i18n("Error in JPX TLM marker segment")
i18n("Error in JPX PLM marker segment")
i18n("Error in JPX CRG marker segment")
i18n("Error in JPX COM marker segment")
i18n("Unknown marker segment %02x in JPX stream")
i18n("Missing SIZ marker segment in JPX stream")
i18n("Missing COD marker segment in JPX stream")
i18n("Missing QCD marker segment in JPX stream")
i18n("Missing EOC marker in JPX codestream")
i18n("Error in JPX SOT marker segment")
i18n("Weird tile index in JPX stream")
i18n("Error in JPX tile-part codestream")
i18n("Error in JPX PPT marker segment")
i18n("Error in JPX PLT marker segment")
i18n("Unknown marker segment %02x in JPX tile-part stream")
i18n("Error in JPX stream")
i18n("JPX stream contains a box larger than 2^32 bytes")
i18n("Unterminated string")
i18n("Illegal digit in hex char in name")
i18n("Name token too long")
i18n("Unterminated hex string")
i18n("Illegal character <%02x> in hex string")
i18n("Illegal character '>'")
i18n("Illegal character '%c'")
i18n("Command token too long")
i18n("Bad annotation action")
i18n("Illegal file spec in link")
i18n("Annotation destination array is too short")
i18n("Bad annotation destination")
i18n("Bad annotation destination position")
i18n("Unknown annotation destination type")
i18n("Illegal annotation destination")
i18n("Bad launch-type link action")
i18n("Illegal URI-type link")
i18n("Movie action is missing both the Annot and T keys")
i18n("Annotation rectangle is wrong type")
i18n("Bad annotation rectangle")
i18n("Couldn't open file '%s'")
i18n("Couldn't read xref table")
i18n("Couldn't read page catalog")
i18n("May not be a PDF file (continuing anyway)")
i18n("PDF version %s -- xpdf supports version %s")
i18n("Page annotations object (page %d) is wrong type (%s)")
i18n("Page contents object (page %d) is wrong type (%s)")
i18n("End of file inside array")
i18n("Dictionary key must be a name object")
i18n("End of file inside dictionary")
i18n("Bad 'Length' attribute in stream")
i18n("Missing 'endstream'")
i18n("Couldn't create temporary font file")
i18n("Couldn't find a font for '%s'")
i18n("Couldn't create a font for '%s'")
i18n("Bad bounding box in Type 3 glyph")
i18n("Internal: called getRawChar() on non-predictor stream")
i18n("Bad filter name")
i18n("Bad 'Filter' attribute in stream")
i18n("Unknown filter '%s'")
i18n("Internal: called setPos() on FilterStream")
i18n("Internal: called makeSubStream() on EmbedStream")
i18n("Internal: called setPos() on EmbedStream")
i18n("Internal: called getStart() on EmbedStream")
i18n("Internal: called moveStart() on EmbedStream")
i18n("Illegal character <%02x> in ASCIIHex stream")
i18n("Bad LZW stream - expected clear-table code")
i18n("Bad LZW stream - unexpected code")
i18n("Bad 2D code %04x in CCITTFax stream")
i18n("CCITTFax row is wrong length (%d)")
i18n("Bad RTC code in CCITTFax stream")
i18n("Bad two dim code (%04x) in CCITTFax stream")
i18n("Bad white code (%04x) in CCITTFax stream")
i18n("Bad black code (%04x) in CCITTFax stream")
i18n("Bad DCT data: incorrect restart marker")
i18n("Bad Huffman code in DCT stream")
i18n("Bad DCT data: missing 00 after ff")
i18n("Bad DCT header")
i18n("Unknown DCT marker <%02x>")
i18n("Bad DCT precision %d")
i18n("Bad DCT scan info block")
i18n("Bad DCT component ID in scan info block")
i18n("Bad DCT quantization table")
i18n("Bad DCT Huffman table")
i18n("Bad DCT restart interval")
i18n("Bad DCT APP0 marker")
i18n("Bad DCT Adobe APP14 marker")
i18n("Bad DCT trailer")
i18n("Unknown compression method in flate stream")
i18n("Bad FCHECK in flate stream")
i18n("FDICT bit set in flate stream")
i18n("Unexpected end of file in flate stream")
i18n("Bad uncompressed block length in flate stream")
i18n("Bad block header in flate stream")
i18n("Bad dynamic code table in flate stream")
i18n("Couldn't open text file '%s'")
i18n("Couldn't find unicodeMap file for the '%s' encoding")
i18n("Bad line (%d) in unicodeMap file for the '%s' encoding")
i18n("PDF file is damaged - attempting to reconstruct xref table...")
i18n("Couldn't find trailer dictionary")
i18n("Incorrect owner password")
i18n("Incorrect password")
i18n("Weird encryption info")
i18n("Unsupported version/revision (%d/%d) of Standard security handler")
i18n("Unknown security handler '%s'")
i18n("PDF file is encrypted and this version of the Xpdf tools")
i18n("was built without decryption support.")
