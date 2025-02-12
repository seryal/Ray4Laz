//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v2.0 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleAmber();                                   //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2025 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define AMBER_STYLE_PROPS_COUNT  18

// Custom style name: Amber
static const GuiStyleProp amberStyleProps[AMBER_STYLE_PROPS_COUNT] = {
    { 0, 0, (int)0x898988ff },    // DEFAULT_BORDER_COLOR_NORMAL 
    { 0, 1, (int)0x292929ff },    // DEFAULT_BASE_COLOR_NORMAL 
    { 0, 2, (int)0xd4d4d4ff },    // DEFAULT_TEXT_COLOR_NORMAL 
    { 0, 3, (int)0xeb891dff },    // DEFAULT_BORDER_COLOR_FOCUSED 
    { 0, 4, (int)0x292929ff },    // DEFAULT_BASE_COLOR_FOCUSED 
    { 0, 5, (int)0xffffffff },    // DEFAULT_TEXT_COLOR_FOCUSED 
    { 0, 6, (int)0xf1cf9dff },    // DEFAULT_BORDER_COLOR_PRESSED 
    { 0, 7, (int)0xf39333ff },    // DEFAULT_BASE_COLOR_PRESSED 
    { 0, 8, (int)0x191410ff },    // DEFAULT_TEXT_COLOR_PRESSED 
    { 0, 9, (int)0x6a6a6aff },    // DEFAULT_BORDER_COLOR_DISABLED 
    { 0, 10, (int)0x818181ff },    // DEFAULT_BASE_COLOR_DISABLED 
    { 0, 11, (int)0x606060ff },    // DEFAULT_TEXT_COLOR_DISABLED 
    { 0, 16, (int)0x00000010 },    // DEFAULT_TEXT_SIZE 
    { 0, 18, (int)0xef922aff },    // DEFAULT_LINE_COLOR 
    { 0, 19, (int)0x333333ff },    // DEFAULT_BACKGROUND_COLOR 
    { 0, 20, (int)0x00000018 },    // DEFAULT_TEXT_LINE_SPACING 
    { 1, 8, (int)0xe7e0d4ff },    // LABEL_TEXT_COLOR_PRESSED 
    { 4, 8, (int)0xf1cf9dff },    // SLIDER_TEXT_COLOR_PRESSED 
};

// WARNING: This style uses a custom font: "" (size: 16, spacing: 1)

#define AMBER_STYLE_FONT_ATLAS_COMP_SIZE 2605

// Font atlas image pixels data: DEFLATE compressed
static unsigned char amberFontData[AMBER_STYLE_FONT_ATLAS_COMP_SIZE] = { 0xed,
    0xdd, 0x8b, 0x8e, 0x9c, 0xb8, 0x12, 0x00, 0x50, 0xf8, 0xff, 0x7f, 0x76, 0x5d, 0xe9, 0x66, 0xb3, 0xd2, 0xee, 0x8e, 0x6d,
    0xaa, 0x30, 0x8f, 0xee, 0x9c, 0x1c, 0x45, 0x91, 0x9a, 0x34, 0x18, 0xdb, 0x85, 0x0d, 0x33, 0x94, 0x63, 0x03, 0x00, 0x00,
    0x00, 0x88, 0x2d, 0x5a, 0xe7, 0xb3, 0xcc, 0xe7, 0x5b, 0xf7, 0xf3, 0xf6, 0xd7, 0xe7, 0x6d, 0xb0, 0xed, 0xe8, 0xbe, 0xfa,
    0x65, 0xda, 0x92, 0xfb, 0x89, 0xee, 0x37, 0xe2, 0x87, 0x4f, 0x7e, 0xff, 0xc9, 0xec, 0xa7, 0x77, 0xbe, 0xf9, 0xda, 0xcb,
    0x6e, 0x19, 0x1f, 0xbd, 0x25, 0x4b, 0x56, 0xff, 0xce, 0xd1, 0x7a, 0xcf, 0xd4, 0xe1, 0xef, 0x3f, 0x2d, 0xb1, 0x97, 0x71,
    0x79, 0x7e, 0xde, 0xdb, 0x36, 0x39, 0xeb, 0xdc, 0x79, 0xb7, 0xe9, 0x96, 0xda, 0xb7, 0xd6, 0xc4, 0x7f, 0xaf, 0x4d, 0x32,
    0x9f, 0x6f, 0xdd, 0x7a, 0xfc, 0x15, 0x37, 0xbd, 0xb8, 0xdd, 0x13, 0xfd, 0xa4, 0x17, 0x23, 0xfb, 0x20, 0xca, 0x23, 0xb5,
    0xff, 0x71, 0x2f, 0x5a, 0x71, 0x4d, 0xed, 0x95, 0xf6, 0xe7, 0xab, 0x4b, 0xff, 0x1b, 0x6d, 0x78, 0xe6, 0xb5, 0x6b, 0x55,
    0xbf, 0x1e, 0xf7, 0x1f, 0xbe, 0x5b, 0x2b, 0xdb, 0xf1, 0x72, 0x45, 0xba, 0x2d, 0x62, 0xd8, 0x6b, 0xf6, 0xee, 0x35, 0x23,
    0x77, 0x76, 0x51, 0x38, 0xef, 0x98, 0x6c, 0xd9, 0x52, 0xa3, 0x5a, 0x5b, 0x3c, 0xfe, 0xaf, 0x88, 0xff, 0xf8, 0x7f, 0x2d,
    0xee, 0xa9, 0xf1, 0x36, 0x92, 0x65, 0xca, 0x47, 0xed, 0xde, 0x39, 0x6e, 0x7f, 0x3c, 0xbf, 0xba, 0x4e, 0x7b, 0xdb, 0xf6,
    0x42, 0x6d, 0xf4, 0xb6, 0xb4, 0xee, 0x79, 0x6f, 0xe5, 0xab, 0x5e, 0x24, 0xce, 0x26, 0x4e, 0x5f, 0x4b, 0x63, 0xd0, 0xd2,
    0xe3, 0xb6, 0x8b, 0x74, 0x49, 0xa3, 0xf0, 0x9d, 0xf1, 0x96, 0x6d, 0xe9, 0x77, 0xae, 0x1b, 0xa3, 0xf2, 0xfb, 0x1b, 0xcf,
    0xbe, 0xa2, 0x18, 0x0f, 0xe7, 0xcb, 0xb9, 0xa7, 0xaf, 0x89, 0x71, 0xf1, 0x3d, 0x55, 0x36, 0xfe, 0xb7, 0x85, 0xf1, 0x1f,
    0xe9, 0xfa, 0xbe, 0x2f, 0xfe, 0x9f, 0x18, 0xff, 0xb7, 0x49, 0xfc, 0x6f, 0xe2, 0x3f, 0xf5, 0x7f, 0x73, 0xf7, 0x05, 0xe3,
    0x71, 0x3b, 0x12, 0xf3, 0x99, 0x58, 0x18, 0xcf, 0x71, 0x7b, 0xf4, 0x8f, 0x7a, 0x5b, 0x65, 0x26, 0xd8, 0xbf, 0xdf, 0xea,
    0xc7, 0xd9, 0xe8, 0x1e, 0x2d, 0xd2, 0x33, 0xce, 0xd1, 0xdd, 0x55, 0xe6, 0x79, 0x49, 0x2c, 0xeb, 0x99, 0x5b, 0x29, 0xfe,
    0x23, 0xf5, 0xcc, 0x27, 0x26, 0x35, 0x9f, 0x8d, 0xff, 0x18, 0x5c, 0xff, 0x46, 0xfd, 0x28, 0x2e, 0xbd, 0xff, 0xcf, 0xc6,
    0xff, 0x36, 0x99, 0x95, 0x6d, 0xa9, 0x9e, 0x5a, 0x29, 0x65, 0x7b, 0xd1, 0x13, 0xd5, 0x95, 0xf1, 0x1f, 0xc9, 0xb3, 0x8e,
    0x03, 0x4f, 0xc3, 0x7a, 0xc7, 0xa8, 0xdc, 0xbd, 0xb5, 0x93, 0xfd, 0x2a, 0x1e, 0x6c, 0x93, 0x33, 0x23, 0x76, 0x7b, 0x7c,
    0xfc, 0x8f, 0xc7, 0xe6, 0xff, 0x91, 0x9e, 0x1b, 0x5c, 0x1f, 0xff, 0xf1, 0xf2, 0xe8, 0xaf, 0xcd, 0xff, 0xa3, 0x38, 0x2f,
    0x8f, 0x45, 0x73, 0xf9, 0xea, 0xdd, 0xcc, 0xbb, 0x5a, 0x64, 0x9b, 0x3e, 0x4f, 0xf8, 0xc4, 0xf9, 0x7f, 0x3c, 0x54, 0x8f,
    0x51, 0xb8, 0x37, 0x10, 0xff, 0x95, 0xf8, 0xaf, 0xcd, 0x69, 0x67, 0x4f, 0x37, 0x63, 0xe9, 0x95, 0xe9, 0xb3, 0xe3, 0xbf,
    0x1e, 0xb1, 0xe2, 0xff, 0xe8, 0xdc, 0x36, 0x86, 0xcf, 0x65, 0x63, 0x49, 0x1b, 0x7e, 0xc6, 0x58, 0xb3, 0x2e, 0xfe, 0xe3,
    0xc4, 0x5d, 0xc3, 0x9f, 0x18, 0xff, 0xdb, 0x8d, 0xf1, 0x1f, 0x5f, 0x3b, 0xff, 0xaf, 0xdc, 0xff, 0xc7, 0xf0, 0x27, 0xd2,
    0xb1, 0x68, 0x06, 0xf0, 0xfe, 0xd1, 0xbf, 0xf2, 0xb4, 0x67, 0xfc, 0x9b, 0x47, 0x91, 0xfe, 0xb9, 0x40, 0xe5, 0x69, 0xd3,
    0x6c, 0xee, 0xbc, 0xa5, 0xcb, 0xf6, 0xe9, 0xe3, 0x7f, 0xfe, 0xbc, 0x63, 0xba, 0x25, 0x0a, 0xfd, 0xe8, 0x6d, 0xd7, 0xd7,
    0x78, 0x7c, 0x64, 0x05, 0xbe, 0x97, 0xf8, 0x07, 0x57, 0x00, 0xd1, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xc0, 0x77, 0x6a, 0xff, 0xfa, 0xf7, 0x9f, 0xdb, 0xda, 0x8f, 0xd9, 0x8c, 0x5b, 0x77, 0x4b, 0x6f, 0x5f, 0xad,
    0x70, 0xfc, 0x7c, 0xc9, 0x56, 0xe7, 0x60, 0xdf, 0x06, 0x67, 0x5a, 0xaf, 0x83, 0xeb, 0xb7, 0x8c, 0x4b, 0x9d, 0x69, 0x9b,
    0x7e, 0xbd, 0x6c, 0xa9, 0x77, 0x92, 0x73, 0x79, 0x02, 0xdb, 0xe4, 0x0d, 0xd7, 0xec, 0xba, 0x0e, 0xb3, 0x1c, 0x86, 0x99,
    0xcc, 0x87, 0xed, 0x50, 0x34, 0xcd, 0x3f, 0xcf, 0x96, 0x67, 0x1b, 0x66, 0xc5, 0x8c, 0x72, 0xde, 0xbf, 0x5a, 0xee, 0xe9,
    0x3d, 0x99, 0xf9, 0x69, 0xf4, 0x3e, 0x7a, 0x4b, 0x67, 0x67, 0xbe, 0x2b, 0x07, 0xfb, 0xa8, 0x3e, 0xf7, 0x74, 0xf6, 0x8b,
    0xca, 0x96, 0xbd, 0xbb, 0xae, 0xca, 0x2c, 0xd7, 0xc3, 0x7e, 0xb8, 0x15, 0x46, 0x39, 0x92, 0xf7, 0x6e, 0x1e, 0xf1, 0x5c,
    0x5f, 0x5b, 0x95, 0xfb, 0x3e, 0xa6, 0x25, 0x8e, 0xe4, 0x77, 0xda, 0xf0, 0x38, 0x71, 0xd9, 0x3b, 0x65, 0x91, 0xac, 0xad,
    0xed, 0xef, 0x1c, 0x1b, 0xb9, 0xba, 0x3c, 0x13, 0xff, 0x95, 0xfc, 0xd2, 0x5b, 0x3a, 0x03, 0xea, 0xde, 0xc9, 0x4b, 0xff,
    0xfb, 0x7a, 0x76, 0x57, 0xa6, 0x95, 0x6c, 0x5b, 0xdf, 0x11, 0xff, 0xf3, 0xdc, 0x69, 0x91, 0x1a, 0x07, 0xf3, 0x7d, 0xf1,
    0x89, 0xdc, 0x0d, 0x77, 0xe5, 0x23, 0x3f, 0xd3, 0x8a, 0x57, 0xc6, 0x7f, 0x3e, 0x4f, 0x6c, 0x3d, 0xf3, 0xcf, 0xfa, 0xf8,
    0xcf, 0xe7, 0xab, 0x8a, 0x6e, 0x3e, 0x15, 0xf1, 0x5f, 0x8d, 0xff, 0xf8, 0x80, 0xf8, 0x5f, 0x99, 0x49, 0x7b, 0xb6, 0xb7,
    0x48, 0x65, 0x3e, 0x9f, 0x65, 0xf9, 0x69, 0x83, 0xb9, 0xec, 0xb1, 0xbb, 0x8f, 0x38, 0x30, 0xff, 0xb8, 0x27, 0xfe, 0x67,
    0x99, 0x7b, 0x73, 0xfd, 0xab, 0xba, 0x9f, 0x55, 0x6b, 0x30, 0xcc, 0x7a, 0x4e, 0xb6, 0x45, 0x23, 0xb9, 0x52, 0xe0, 0xea,
    0xf8, 0x1f, 0x47, 0x6d, 0xad, 0x6c, 0xdb, 0xd2, 0x11, 0xf7, 0xec, 0x08, 0x18, 0x4b, 0xef, 0x0c, 0xee, 0xb9, 0x8a, 0xef,
    0xa7, 0x57, 0x8f, 0x8b, 0xe1, 0x1d, 0xe6, 0xba, 0xbe, 0x75, 0xef, 0xf8, 0x1f, 0x8b, 0xf3, 0xa9, 0xc7, 0x8d, 0x99, 0x56,
    0xf3, 0xab, 0x5c, 0x64, 0xeb, 0xb3, 0x92, 0x23, 0x35, 0x9f, 0x55, 0xf9, 0x5b, 0xe2, 0xff, 0xfa, 0x2d, 0xeb, 0x23, 0x2d,
    0x17, 0xff, 0x71, 0xc3, 0xdc, 0xf2, 0x13, 0xe6, 0xff, 0xdb, 0x30, 0x5f, 0xfd, 0x5d, 0xf1, 0x5f, 0x6d, 0x8d, 0x6b, 0xe3,
    0x3f, 0x0a, 0xf3, 0xf6, 0x95, 0xf3, 0xfc, 0x67, 0xe6, 0xff, 0xe3, 0x31, 0x26, 0xd2, 0xf5, 0x5e, 0xcd, 0x61, 0x7a, 0x65,
    0xfc, 0xc7, 0x2d, 0xf7, 0x96, 0xf7, 0xc7, 0xff, 0xda, 0xb8, 0x5c, 0x1b, 0xff, 0x2b, 0xd7, 0xab, 0x10, 0xff, 0xf7, 0xcf,
    0x0c, 0xd6, 0x7e, 0xa7, 0x72, 0x77, 0xf0, 0xe4, 0xf8, 0x7f, 0x7f, 0x5d, 0x3f, 0x1f, 0xff, 0x2b, 0xe7, 0xff, 0xf1, 0x70,
    0xfc, 0x57, 0xd6, 0xff, 0xba, 0x67, 0x96, 0x2f, 0xfe, 0x9f, 0x88, 0xff, 0x37, 0xd4, 0x7a, 0x7e, 0xde, 0x34, 0x7f, 0x5a,
    0x98, 0x5b, 0x35, 0xb1, 0xf6, 0x54, 0x3c, 0x8a, 0x2b, 0x87, 0x47, 0xa1, 0xd4, 0x95, 0x99, 0xe3, 0xb6, 0xe4, 0x5e, 0xbe,
    0x76, 0x35, 0xa9, 0x64, 0x8e, 0xaf, 0xae, 0x33, 0x76, 0xe7, 0x7d, 0xc1, 0x35, 0xdf, 0xca, 0xb5, 0x62, 0x4c, 0xeb, 0x7e,
    0xc5, 0x75, 0x64, 0x7b, 0x61, 0x16, 0x7f, 0x3e, 0x5d, 0xdc, 0xf4, 0x1d, 0xd4, 0x22, 0xe2, 0x1f, 0xb5, 0xc8, 0x9b, 0x7a,
    0x61, 0x24, 0xef, 0xa9, 0xcd, 0x42, 0xd7, 0xd4, 0xba, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x56, 0xfd, 0x7e, 0x72, 0x36, 0xa7, 0xf8, 0x28, 0x6f, 0x62, 0x7e, 0x7f, 0xb3, 0x2c, 0x68, 0xed, 0xc1, 0x2d, 0xa3,
    0x5a, 0x68, 0x07, 0xcf, 0xa6, 0x25, 0xf3, 0xbc, 0xf5, 0xeb, 0xa4, 0x9f, 0x5f, 0xbe, 0x25, 0xb7, 0xb5, 0xc9, 0x1e, 0x8f,
    0xee, 0xfd, 0x78, 0x1b, 0xf7, 0xb3, 0xa8, 0xe5, 0xea, 0xbd, 0x9f, 0x99, 0xbf, 0x25, 0x57, 0x2c, 0x98, 0xd5, 0xe8, 0x96,
    0x68, 0xc9, 0x23, 0xbd, 0x69, 0xb4, 0xd6, 0xc4, 0xd1, 0x76, 0x38, 0x7a, 0x0e, 0x71, 0xf0, 0xad, 0xa3, 0x59, 0xae, 0xc5,
    0xd1, 0x96, 0x4c, 0x56, 0xa3, 0x33, 0xb9, 0x27, 0x56, 0xe6, 0xd2, 0x5d, 0x95, 0x4b, 0x3f, 0x97, 0xbb, 0x71, 0x1f, 0xb6,
    0x51, 0x9c, 0xbc, 0x52, 0xb7, 0xc1, 0x31, 0x5a, 0x21, 0xef, 0xc3, 0xf1, 0xbd, 0x1f, 0x6f, 0xe3, 0x3d, 0x9d, 0xdd, 0x64,
    0x65, 0xfe, 0xfd, 0x96, 0xce, 0xd8, 0xb9, 0x27, 0x57, 0xc4, 0x38, 0x9e, 0x4f, 0x62, 0x4f, 0x67, 0xae, 0x98, 0xf5, 0xc3,
    0xfd, 0xc4, 0x15, 0xe0, 0xce, 0xfc, 0x3b, 0x6f, 0x88, 0xff, 0x55, 0xb9, 0xb4, 0xaf, 0xce, 0xca, 0xd3, 0xba, 0xa5, 0x6f,
    0x17, 0xd7, 0x6d, 0x3d, 0xe2, 0x62, 0x98, 0x01, 0x23, 0xca, 0x63, 0xd4, 0xd1, 0x63, 0x8c, 0x22, 0x67, 0xb4, 0x62, 0xd1,
    0xf1, 0xeb, 0x66, 0x2c, 0x88, 0xff, 0x33, 0x6f, 0x03, 0x1f, 0x1f, 0x5b, 0x8e, 0xd6, 0xef, 0x7d, 0x19, 0xf3, 0xc7, 0x39,
    0xd8, 0x73, 0x59, 0xd8, 0x57, 0x67, 0xcc, 0x59, 0x17, 0xe7, 0xab, 0xf2, 0xe8, 0xe4, 0xa2, 0x25, 0xd2, 0xf3, 0xf1, 0x4c,
    0xfc, 0xc7, 0xe1, 0xd9, 0x7f, 0x36, 0x9f, 0x4d, 0x3e, 0x1a, 0x62, 0xf1, 0x1b, 0xb5, 0xfd, 0xf2, 0xb6, 0x8b, 0xc6, 0xff,
    0xd5, 0xf1, 0xbf, 0x9d, 0x88, 0xfe, 0x7b, 0x57, 0xcc, 0xd8, 0x8a, 0xeb, 0x52, 0x5c, 0x9d, 0x4b, 0x33, 0x0a, 0x65, 0x7b,
    0x2e, 0xfe, 0xb3, 0x2b, 0x18, 0x8c, 0x8e, 0xd0, 0x0e, 0x97, 0xa4, 0x5d, 0x14, 0x9b, 0x51, 0xec, 0xd5, 0xf1, 0x48, 0x66,
    0x8e, 0x73, 0xe3, 0xff, 0x76, 0x3a, 0xfe, 0xd7, 0xd7, 0xab, 0xf8, 0xaf, 0xcf, 0x67, 0xee, 0x8d, 0xff, 0xad, 0xb0, 0x4e,
    0x4b, 0x14, 0x66, 0x5d, 0xf5, 0x2b, 0xc0, 0x5d, 0xfd, 0xfa, 0xed, 0xcf, 0xd3, 0x67, 0xfd, 0xe0, 0x5d, 0xe7, 0x30, 0xeb,
    0x21, 0x99, 0x7e, 0x15, 0x93, 0xa3, 0xe4, 0xef, 0x8d, 0x2b, 0x7d, 0x7e, 0x2b, 0x66, 0x88, 0xaf, 0xe4, 0x2d, 0x3d, 0x7f,
    0xbf, 0x70, 0xfe, 0x2a, 0x52, 0x5d, 0xbf, 0x2b, 0x4e, 0xf7, 0x91, 0x4c, 0x7b, 0xad, 0xed, 0xaf, 0xef, 0xbd, 0x0e, 0xcc,
    0xb3, 0xc6, 0x7e, 0x46, 0x3e, 0xa0, 0xb8, 0xed, 0x5a, 0xfc, 0x96, 0xfa, 0x88, 0x45, 0x77, 0x8e, 0x57, 0x8d, 0xff, 0x6b,
    0x9f, 0xad, 0x66, 0xe3, 0xe8, 0xfb, 0xb2, 0x58, 0xc5, 0x25, 0xd7, 0x92, 0x58, 0x7a, 0xbf, 0x23, 0xfe, 0xc5, 0xff, 0x15,
    0xf1, 0x7f, 0xfc, 0x18, 0xf1, 0xb5, 0xf1, 0xff, 0x44, 0x2f, 0x12, 0xff, 0x67, 0xe6, 0x97, 0x6f, 0x9a, 0x51, 0x5e, 0x1b,
    0xff, 0xeb, 0xc6, 0xb1, 0xca, 0x7d, 0xd7, 0x9b, 0x5a, 0x47, 0xfc, 0xf3, 0x49, 0xed, 0xfc, 0x9e, 0x75, 0x34, 0x00, 0xf1,
    0x0f, 0x5c, 0x33, 0xef, 0x3e, 0xf6, 0x93, 0x7b, 0xd1, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0x59, 0xad, 0x9b, 0x59, 0x3c, 0xba, 0x59, 0xcc, 0xff, 0xf9, 0xef, 0xcf, 0x5b, 0x9f, 0x3d, 0x9f, 0x2d, 0x55, 0xb6,
    0x36, 0xcc, 0xf8, 0xde, 0x1e, 0x2e, 0xf5, 0x95, 0x47, 0x68, 0xb7, 0x9d, 0xe1, 0xda, 0x5a, 0xe9, 0xbd, 0x47, 0xdb, 0x6e,
    0xa8, 0xc9, 0x5a, 0x7b, 0xb5, 0xe1, 0xb6, 0x96, 0xee, 0xb3, 0xb5, 0x2d, 0xff, 0xfd, 0x9f, 0xfb, 0xb0, 0x86, 0xf7, 0x64,
    0x5e, 0xde, 0xda, 0x9b, 0xd1, 0xb5, 0x6c, 0x5a, 0x3f, 0x6f, 0xdb, 0xff, 0xfa, 0xdb, 0xdb, 0x96, 0xa9, 0x83, 0x71, 0xee,
    0xfb, 0x95, 0xe7, 0x33, 0x2a, 0xf5, 0x9a, 0x0c, 0xc4, 0x3f, 0x1f, 0x21, 0x06, 0x67, 0x18, 0xa5, 0x6c, 0x66, 0x77, 0xb5,
    0x65, 0x6f, 0x4d, 0x86, 0xbd, 0xb0, 0xda, 0xca, 0x1d, 0xed, 0x15, 0xa5, 0xf5, 0x1b, 0xb6, 0x49, 0xdf, 0xcc, 0xf5, 0xe7,
    0x4c, 0xdd, 0x8f, 0xf2, 0xcd, 0x8e, 0xce, 0xb3, 0x7f, 0xe4, 0xfe, 0x99, 0xec, 0xc9, 0x33, 0xf9, 0xf5, 0xf9, 0x9e, 0xbc,
    0x96, 0xb6, 0xc1, 0x3c, 0xa7, 0xf2, 0xd6, 0xee, 0xca, 0xf3, 0x19, 0x8d, 0xc3, 0xfd, 0x3a, 0xc8, 0x1f, 0xe3, 0x78, 0x5b,
    0x8e, 0xea, 0xf8, 0xf9, 0xb6, 0x1c, 0xf5, 0xcc, 0x48, 0x47, 0x52, 0xbe, 0xcc, 0xfd, 0xbe, 0xde, 0xdb, 0xdb, 0x6c, 0x3d,
    0x9d, 0x67, 0xde, 0x11, 0x9f, 0xc5, 0x7f, 0xa4, 0xe3, 0x7f, 0xbc, 0x0a, 0xcc, 0xf1, 0x4f, 0x47, 0x57, 0xd9, 0x7d, 0x30,
    0x96, 0xf7, 0x6a, 0xb9, 0x0d, 0xeb, 0xbf, 0xf6, 0xd6, 0xfe, 0xaa, 0xf3, 0xa9, 0x1c, 0x67, 0x4f, 0xd7, 0x59, 0x2e, 0x2b,
    0xea, 0x3e, 0x3c, 0x93, 0x67, 0xdb, 0x72, 0xd4, 0x9b, 0xdb, 0x20, 0x4b, 0xff, 0xea, 0xf6, 0x8a, 0xc4, 0xde, 0xaa, 0x6b,
    0xd6, 0x8c, 0xd6, 0xe0, 0xcb, 0x6e, 0xe9, 0x45, 0x79, 0x65, 0xf6, 0x97, 0x9d, 0x13, 0xe7, 0xc7, 0xe5, 0xea, 0x58, 0xbe,
    0xa5, 0xb3, 0x96, 0xcf, 0x56, 0xc9, 0xc8, 0x8c, 0xd8, 0x95, 0x2d, 0x51, 0xb8, 0x37, 0x6c, 0xe9, 0x27, 0x16, 0xa3, 0x9c,
    0xe2, 0x91, 0x1c, 0xe3, 0x9e, 0x6d, 0xcb, 0xd9, 0x68, 0x96, 0x39, 0x9b, 0xca, 0x96, 0xd1, 0xac, 0xa9, 0xff, 0x9d, 0xfc,
    0xca, 0x98, 0x67, 0x56, 0xe7, 0x6b, 0x97, 0xcd, 0xff, 0xe7, 0x39, 0xb6, 0xd7, 0x8c, 0xcb, 0xd5, 0xb1, 0x7c, 0x2b, 0xac,
    0x5a, 0x10, 0x97, 0xdf, 0x31, 0x56, 0x57, 0x47, 0xdb, 0xbb, 0xf7, 0xc6, 0xb9, 0xcf, 0xab, 0x6b, 0x1f, 0xc4, 0x0b, 0xdb,
    0x32, 0x1f, 0xff, 0xd7, 0xac, 0x73, 0xb1, 0x76, 0x6d, 0xbc, 0x76, 0x5b, 0x9f, 0x3a, 0x3e, 0xca, 0xaf, 0x5e, 0xe5, 0xee,
    0xfa, 0x5a, 0xae, 0xe5, 0xf2, 0x7f, 0x3a, 0xfe, 0x63, 0xe1, 0x8a, 0x02, 0xab, 0xe2, 0xbf, 0xbd, 0x24, 0x62, 0xfe, 0x94,
    0xf8, 0xcf, 0xad, 0xc2, 0x11, 0xa5, 0x95, 0x3b, 0x32, 0x31, 0x9e, 0x7f, 0x96, 0xff, 0x9e, 0x5a, 0xfe, 0x9e, 0xf1, 0xff,
    0xb9, 0xf8, 0x8f, 0x0f, 0x8c, 0xff, 0xf7, 0x96, 0xf9, 0xf9, 0xb1, 0xf1, 0xd9, 0xf8, 0xaf, 0x8c, 0xcb, 0xf5, 0x75, 0x79,
    0xd6, 0xc6, 0x7f, 0x24, 0x46, 0xec, 0xf5, 0x99, 0xb8, 0x9f, 0x8a, 0xff, 0xf7, 0x8e, 0xa5, 0xb3, 0xba, 0x7a, 0xb2, 0x64,
    0xb3, 0x55, 0xe6, 0xdf, 0x15, 0xff, 0xd5, 0x15, 0x55, 0x23, 0x39, 0x93, 0x7d, 0xff, 0xf8, 0x1f, 0xa9, 0x35, 0xf7, 0xbe,
    0x67, 0xfc, 0x8f, 0xc9, 0xda, 0xbc, 0x9f, 0x37, 0xff, 0x8f, 0x47, 0x63, 0x2c, 0x4a, 0x2b, 0xc9, 0x66, 0x57, 0xda, 0x5b,
    0x35, 0xff, 0xbf, 0xf3, 0xe7, 0x8c, 0x9f, 0x36, 0x9b, 0x3c, 0xf7, 0xa4, 0xe3, 0x33, 0xe2, 0x7f, 0x3e, 0x92, 0x7e, 0x5e,
    0x8b, 0x3d, 0x3d, 0xc6, 0xca, 0xf6, 0xfc, 0x4d, 0xf1, 0xbf, 0xdd, 0x32, 0xfe, 0x57, 0x57, 0x3a, 0xcd, 0xfe, 0xfe, 0xd9,
    0x27, 0xc5, 0xff, 0xca, 0x95, 0x87, 0xee, 0x2c, 0x99, 0xf8, 0x7f, 0xdb, 0x3d, 0xce, 0x8a, 0x92, 0xdf, 0xf5, 0x13, 0x99,
    0xbb, 0xc7, 0xf9, 0xf7, 0x5e, 0xb1, 0xdf, 0xdb, 0xff, 0xaa, 0xbf, 0xe7, 0x2e, 0xfe, 0x3f, 0x2f, 0xfe, 0xb3, 0x23, 0x76,
    0x65, 0xcb, 0xfc, 0x48, 0xe7, 0x3f, 0x5f, 0xd7, 0x62, 0xeb, 0x9f, 0x7e, 0xde, 0x71, 0xb7, 0x7a, 0x5f, 0xc9, 0xc4, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xad, 0x36, 0xcc, 0xe4, 0x9f, 0xcd, 0x4a, 0x3e, 0xca, 0x0c,
    0x18, 0xb7, 0xe4, 0x38, 0xaf, 0xe6, 0xff, 0x3f, 0xfe, 0x79, 0xbe, 0xc6, 0x2a, 0x65, 0x5a, 0x7b, 0xee, 0x6d, 0xd2, 0x66,
    0x3f, 0x7f, 0xde, 0x0a, 0xab, 0x3c, 0xdc, 0xd1, 0x62, 0xad, 0xd4, 0x9f, 0xf9, 0xa9, 0xb6, 0xf6, 0x85, 0xb5, 0x35, 0x5b,
    0x33, 0xe0, 0x99, 0x1c, 0xe7, 0xb3, 0xe3, 0xb4, 0x45, 0xc7, 0x18, 0x67, 0xb8, 0xce, 0x95, 0xa9, 0x72, 0xee, 0xeb, 0xdb,
    0xb2, 0x5f, 0x8a, 0x7b, 0x5a, 0xac, 0xf9, 0x0d, 0xfb, 0x47, 0xdf, 0xd9, 0xa9, 0x64, 0x18, 0x8e, 0x64, 0xf6, 0xa3, 0xfb,
    0x4a, 0xbd, 0xee, 0x08, 0xfd, 0xab, 0xd8, 0xfe, 0xd2, 0xb1, 0x67, 0x9c, 0x7b, 0x76, 0x94, 0x15, 0xb1, 0xdd, 0xf4, 0x66,
    0x58, 0x4b, 0xbf, 0xcb, 0xd3, 0x16, 0xed, 0x4d, 0x94, 0xaf, 0xca, 0x3d, 0xbc, 0x4d, 0xf3, 0x72, 0xad, 0xba, 0xce, 0xe4,
    0x4b, 0xbd, 0x0d, 0xf6, 0x95, 0xfb, 0x7c, 0x4b, 0xe6, 0x6a, 0x89, 0xc5, 0x59, 0xdc, 0xd7, 0xd6, 0xca, 0x36, 0xb9, 0x8e,
    0x47, 0x22, 0xc6, 0xce, 0x6c, 0xc9, 0x1f, 0xe7, 0x6d, 0x6b, 0x69, 0x7c, 0xee, 0x7b, 0xb9, 0xfb, 0xa2, 0xdc, 0xc3, 0xf5,
    0x4c, 0x9a, 0xab, 0x72, 0x9c, 0xd7, 0x32, 0xb3, 0xac, 0xcb, 0xa4, 0xb7, 0x77, 0xfb, 0xf1, 0xda, 0x33, 0xbc, 0xbe, 0x56,
    0x3e, 0x21, 0x97, 0xee, 0x1b, 0xdf, 0x0c, 0xff, 0xec, 0xf7, 0xf3, 0x8f, 0x8c, 0x67, 0xdb, 0x74, 0xce, 0xf8, 0x64, 0xfb,
    0x5f, 0x9f, 0x49, 0x67, 0xfb, 0xc8, 0x0c, 0x87, 0x5b, 0x39, 0x03, 0x98, 0xf8, 0xff, 0xf6, 0xf9, 0x7f, 0xdc, 0x90, 0x17,
    0x69, 0x76, 0x2d, 0x59, 0x9b, 0xff, 0x77, 0x13, 0xff, 0x27, 0xa3, 0xe2, 0xf9, 0x5c, 0x9a, 0xf3, 0xab, 0xfc, 0x26, 0xfe,
    0x17, 0x8d, 0xfb, 0xdf, 0x96, 0x49, 0xd3, 0xf8, 0x7f, 0x5d, 0x54, 0x7c, 0xea, 0x5a, 0x1a, 0x6c, 0x85, 0xb1, 0x7c, 0x65,
    0x86, 0xe1, 0xb8, 0xe1, 0x0a, 0x54, 0xc9, 0xcc, 0x98, 0xff, 0xfc, 0xd3, 0xa2, 0x7c, 0x65, 0x8e, 0xad, 0x6b, 0xca, 0xb6,
    0x26, 0xfe, 0xdf, 0x99, 0xfd, 0xfa, 0x13, 0xe7, 0xff, 0xf7, 0x3c, 0x63, 0xd8, 0x6e, 0xce, 0xcc, 0x16, 0x4b, 0x3e, 0xdf,
    0x92, 0x77, 0x38, 0x2b, 0xef, 0x97, 0x9e, 0xcf, 0xa4, 0x77, 0x5f, 0x56, 0xfa, 0xda, 0x5d, 0x9e, 0xf1, 0x1f, 0xbe, 0xfb,
    0xd9, 0xb4, 0xf8, 0x07, 0xf1, 0x6f, 0xf6, 0x0f, 0xee, 0x4c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xc7, 0xaf, 0x3f, 0xea, 0x01, 0xc4, 0x3f, 0xf0, 0xc7,
    0xc5, 0xff, 0xff, 0x00 };

// Font glyphs rectangles data (on atlas)
static const Rectangle amberFontRecs[189] = {
    { 4, 4, 5 , 16 },
    { 17, 4, 2 , 10 },
    { 27, 4, 4 , 4 },
    { 39, 4, 5 , 10 },
    { 52, 4, 5 , 11 },
    { 65, 4, 5 , 10 },
    { 78, 4, 5 , 10 },
    { 91, 4, 2 , 4 },
    { 101, 4, 4 , 13 },
    { 113, 4, 5 , 13 },
    { 126, 4, 4 , 4 },
    { 138, 4, 5 , 6 },
    { 151, 4, 3 , 2 },
    { 162, 4, 5 , 2 },
    { 175, 4, 2 , 1 },
    { 185, 4, 5 , 10 },
    { 198, 4, 5 , 10 },
    { 211, 4, 4 , 10 },
    { 223, 4, 5 , 10 },
    { 236, 4, 5 , 10 },
    { 249, 4, 5 , 10 },
    { 262, 4, 5 , 10 },
    { 275, 4, 5 , 10 },
    { 288, 4, 5 , 10 },
    { 301, 4, 5 , 10 },
    { 314, 4, 5 , 10 },
    { 327, 4, 2 , 6 },
    { 337, 4, 2 , 6 },
    { 347, 4, 5 , 6 },
    { 360, 4, 5 , 4 },
    { 373, 4, 5 , 6 },
    { 386, 4, 5 , 10 },
    { 399, 4, 5 , 7 },
    { 412, 4, 5 , 10 },
    { 425, 4, 5 , 10 },
    { 438, 4, 5 , 10 },
    { 451, 4, 5 , 10 },
    { 464, 4, 5 , 10 },
    { 477, 4, 5 , 10 },
    { 490, 4, 5 , 10 },
    { 4, 28, 5 , 10 },
    { 17, 28, 4 , 10 },
    { 29, 28, 5 , 10 },
    { 42, 28, 5 , 10 },
    { 55, 28, 5 , 10 },
    { 68, 28, 5 , 10 },
    { 81, 28, 5 , 10 },
    { 94, 28, 5 , 10 },
    { 107, 28, 5 , 10 },
    { 120, 28, 5 , 10 },
    { 133, 28, 5 , 10 },
    { 146, 28, 5 , 10 },
    { 159, 28, 5 , 10 },
    { 172, 28, 5 , 10 },
    { 185, 28, 5 , 10 },
    { 198, 28, 5 , 10 },
    { 211, 28, 5 , 10 },
    { 224, 28, 5 , 10 },
    { 237, 28, 5 , 10 },
    { 250, 28, 3 , 13 },
    { 261, 28, 5 , 10 },
    { 274, 28, 3 , 13 },
    { 285, 28, 4 , 3 },
    { 297, 28, 5 , 1 },
    { 310, 28, 3 , 3 },
    { 321, 28, 5 , 7 },
    { 334, 28, 5 , 10 },
    { 347, 28, 5 , 7 },
    { 360, 28, 5 , 10 },
    { 373, 28, 5 , 7 },
    { 386, 28, 5 , 10 },
    { 399, 28, 5 , 10 },
    { 412, 28, 5 , 10 },
    { 425, 28, 4 , 10 },
    { 437, 28, 3 , 13 },
    { 448, 28, 5 , 10 },
    { 461, 28, 5 , 10 },
    { 474, 28, 5 , 7 },
    { 487, 28, 5 , 7 },
    { 4, 52, 5 , 7 },
    { 17, 52, 5 , 10 },
    { 30, 52, 5 , 10 },
    { 43, 52, 5 , 7 },
    { 56, 52, 5 , 7 },
    { 69, 52, 5 , 10 },
    { 82, 52, 5 , 7 },
    { 95, 52, 5 , 7 },
    { 108, 52, 5 , 7 },
    { 121, 52, 5 , 7 },
    { 134, 52, 5 , 10 },
    { 147, 52, 5 , 7 },
    { 160, 52, 4 , 13 },
    { 172, 52, 2 , 13 },
    { 182, 52, 4 , 13 },
    { 194, 52, 5 , 4 },
    { 207, 52, 2 , 9 },
    { 217, 52, 5 , 7 },
    { 230, 52, 5 , 10 },
    { 243, 52, 5 , 10 },
    { 256, 52, 5 , 10 },
    { 269, 52, 0 , 0 },
    { 277, 52, 5 , 10 },
    { 290, 52, 0 , 0 },
    { 298, 52, 5 , 7 },
    { 311, 52, 3 , 5 },
    { 322, 52, 5 , 5 },
    { 335, 52, 5 , 3 },
    { 348, 52, 5 , 7 },
    { 361, 52, 5 , 2 },
    { 374, 52, 4 , 4 },
    { 386, 52, 5 , 8 },
    { 399, 52, 3 , 5 },
    { 410, 52, 3 , 6 },
    { 421, 52, 0 , 0 },
    { 429, 52, 5 , 10 },
    { 442, 52, 5 , 10 },
    { 455, 52, 2 , 3 },
    { 465, 52, 0 , 0 },
    { 473, 52, 3 , 5 },
    { 484, 52, 4 , 4 },
    { 496, 52, 5 , 5 },
    { 4, 76, 5 , 10 },
    { 17, 76, 5 , 7 },
    { 30, 76, 5 , 10 },
    { 43, 76, 5 , 10 },
    { 56, 76, 5 , 14 },
    { 69, 76, 5 , 14 },
    { 82, 76, 5 , 14 },
    { 95, 76, 5 , 14 },
    { 108, 76, 5 , 12 },
    { 121, 76, 5 , 12 },
    { 134, 76, 5 , 10 },
    { 147, 76, 5 , 13 },
    { 160, 76, 5 , 14 },
    { 173, 76, 5 , 14 },
    { 186, 76, 5 , 14 },
    { 199, 76, 5 , 12 },
    { 212, 76, 4 , 14 },
    { 224, 76, 4 , 14 },
    { 236, 76, 4 , 14 },
    { 248, 76, 4 , 12 },
    { 260, 76, 5 , 10 },
    { 273, 76, 5 , 14 },
    { 286, 76, 5 , 14 },
    { 299, 76, 5 , 14 },
    { 312, 76, 5 , 14 },
    { 325, 76, 5 , 14 },
    { 338, 76, 5 , 12 },
    { 351, 76, 4 , 3 },
    { 363, 76, 5 , 10 },
    { 376, 76, 5 , 14 },
    { 389, 76, 5 , 14 },
    { 402, 76, 5 , 14 },
    { 415, 76, 5 , 12 },
    { 428, 76, 5 , 14 },
    { 441, 76, 5 , 10 },
    { 454, 76, 5 , 10 },
    { 467, 76, 5 , 10 },
    { 480, 76, 5 , 10 },
    { 493, 76, 5 , 10 },
    { 4, 100, 5 , 10 },
    { 17, 100, 5 , 9 },
    { 30, 100, 5 , 9 },
    { 43, 100, 5 , 7 },
    { 56, 100, 5 , 10 },
    { 69, 100, 5 , 10 },
    { 82, 100, 5 , 10 },
    { 95, 100, 5 , 10 },
    { 108, 100, 5 , 9 },
    { 121, 100, 4 , 10 },
    { 133, 100, 4 , 10 },
    { 145, 100, 4 , 10 },
    { 157, 100, 4 , 9 },
    { 169, 100, 5 , 10 },
    { 182, 100, 5 , 10 },
    { 195, 100, 5 , 10 },
    { 208, 100, 5 , 10 },
    { 221, 100, 5 , 10 },
    { 234, 100, 5 , 10 },
    { 247, 100, 5 , 9 },
    { 260, 100, 5 , 6 },
    { 273, 100, 5 , 7 },
    { 286, 100, 5 , 10 },
    { 299, 100, 5 , 10 },
    { 312, 100, 5 , 10 },
    { 325, 100, 5 , 9 },
    { 338, 100, 5 , 13 },
    { 351, 100, 5 , 10 },
    { 364, 100, 5 , 12 },
};

// Font glyphs info data
// NOTE: No glyphs.image data provided
static const GlyphInfo amberFontGlyphs[189] = {
    { 32, 0, 0, 5, { 0 }},
    { 33, 1, 3, 5, { 0 }},
    { 34, 0, 3, 5, { 0 }},
    { 35, 0, 3, 5, { 0 }},
    { 36, 0, 3, 5, { 0 }},
    { 37, 0, 3, 5, { 0 }},
    { 38, 0, 3, 5, { 0 }},
    { 39, 1, 4, 5, { 0 }},
    { 40, 0, 3, 5, { 0 }},
    { 41, 0, 3, 5, { 0 }},
    { 42, 0, 3, 5, { 0 }},
    { 43, 0, 7, 5, { 0 }},
    { 44, 0, 12, 5, { 0 }},
    { 45, 0, 9, 5, { 0 }},
    { 46, 1, 12, 5, { 0 }},
    { 47, 0, 3, 5, { 0 }},
    { 48, 0, 3, 5, { 0 }},
    { 49, 0, 3, 5, { 0 }},
    { 50, 0, 3, 5, { 0 }},
    { 51, 0, 3, 5, { 0 }},
    { 52, 0, 3, 5, { 0 }},
    { 53, 0, 3, 5, { 0 }},
    { 54, 0, 3, 5, { 0 }},
    { 55, 0, 3, 5, { 0 }},
    { 56, 0, 3, 5, { 0 }},
    { 57, 0, 3, 5, { 0 }},
    { 58, 0, 7, 5, { 0 }},
    { 59, 0, 7, 5, { 0 }},
    { 60, 0, 7, 5, { 0 }},
    { 61, 0, 8, 5, { 0 }},
    { 62, 0, 7, 5, { 0 }},
    { 63, 0, 3, 5, { 0 }},
    { 64, 0, 6, 5, { 0 }},
    { 65, 0, 3, 5, { 0 }},
    { 66, 0, 3, 5, { 0 }},
    { 67, 0, 3, 5, { 0 }},
    { 68, 0, 3, 5, { 0 }},
    { 69, 0, 3, 5, { 0 }},
    { 70, 0, 3, 5, { 0 }},
    { 71, 0, 3, 5, { 0 }},
    { 72, 0, 3, 5, { 0 }},
    { 73, 0, 3, 5, { 0 }},
    { 74, 0, 3, 5, { 0 }},
    { 75, 0, 3, 5, { 0 }},
    { 76, 0, 3, 5, { 0 }},
    { 77, 0, 3, 5, { 0 }},
    { 78, 0, 3, 5, { 0 }},
    { 79, 0, 3, 5, { 0 }},
    { 80, 0, 3, 5, { 0 }},
    { 81, 0, 3, 5, { 0 }},
    { 82, 0, 3, 5, { 0 }},
    { 83, 0, 3, 5, { 0 }},
    { 84, 0, 3, 5, { 0 }},
    { 85, 0, 3, 5, { 0 }},
    { 86, 0, 3, 5, { 0 }},
    { 87, 0, 3, 5, { 0 }},
    { 88, 0, 3, 5, { 0 }},
    { 89, 0, 3, 5, { 0 }},
    { 90, 0, 3, 5, { 0 }},
    { 91, 0, 3, 5, { 0 }},
    { 92, 0, 3, 5, { 0 }},
    { 93, 0, 3, 5, { 0 }},
    { 94, 0, 3, 5, { 0 }},
    { 95, 0, 12, 5, { 0 }},
    { 96, 1, 4, 5, { 0 }},
    { 97, 0, 6, 5, { 0 }},
    { 98, 0, 3, 5, { 0 }},
    { 99, 0, 6, 5, { 0 }},
    { 100, 0, 3, 5, { 0 }},
    { 101, 0, 6, 5, { 0 }},
    { 102, 0, 3, 5, { 0 }},
    { 103, 0, 6, 5, { 0 }},
    { 104, 0, 3, 5, { 0 }},
    { 105, 0, 3, 5, { 0 }},
    { 106, 0, 3, 5, { 0 }},
    { 107, 0, 3, 5, { 0 }},
    { 108, 0, 3, 5, { 0 }},
    { 109, 0, 6, 5, { 0 }},
    { 110, 0, 6, 5, { 0 }},
    { 111, 0, 6, 5, { 0 }},
    { 112, 0, 6, 5, { 0 }},
    { 113, 0, 6, 5, { 0 }},
    { 114, 0, 6, 5, { 0 }},
    { 115, 0, 6, 5, { 0 }},
    { 116, 0, 3, 5, { 0 }},
    { 117, 0, 6, 5, { 0 }},
    { 118, 0, 6, 5, { 0 }},
    { 119, 0, 6, 5, { 0 }},
    { 120, 0, 6, 5, { 0 }},
    { 121, 0, 6, 5, { 0 }},
    { 122, 0, 6, 5, { 0 }},
    { 123, 0, 3, 5, { 0 }},
    { 124, 1, 3, 5, { 0 }},
    { 125, 0, 3, 5, { 0 }},
    { 126, 0, 8, 5, { 0 }},
    { 161, 1, 4, 5, { 0 }},
    { 162, 0, 6, 5, { 0 }},
    { 163, 0, 3, 5, { 0 }},
    { 8364, 0, 3, 5, { 0 }},
    { 165, 0, 3, 5, { 0 }},
    { 352, 0, 0, 0, { 0 }},
    { 167, 0, 3, 5, { 0 }},
    { 353, 0, 0, 0, { 0 }},
    { 169, 0, 6, 5, { 0 }},
    { 170, 2, 3, 5, { 0 }},
    { 171, 0, 8, 5, { 0 }},
    { 172, 0, 6, 5, { 0 }},
    { 174, 0, 6, 5, { 0 }},
    { 175, 0, 3, 5, { 0 }},
    { 176, 1, 3, 5, { 0 }},
    { 177, 0, 5, 5, { 0 }},
    { 178, 2, 3, 5, { 0 }},
    { 179, 2, 3, 5, { 0 }},
    { 381, 0, 0, 0, { 0 }},
    { 181, 0, 6, 5, { 0 }},
    { 182, 0, 3, 5, { 0 }},
    { 183, 1, 6, 5, { 0 }},
    { 382, 0, 0, 0, { 0 }},
    { 185, 0, 3, 5, { 0 }},
    { 186, 0, 3, 5, { 0 }},
    { 187, 0, 8, 5, { 0 }},
    { 338, 0, 3, 5, { 0 }},
    { 339, 0, 6, 5, { 0 }},
    { 376, 0, 3, 5, { 0 }},
    { 191, 0, 3, 5, { 0 }},
    { 192, 0, -1, 5, { 0 }},
    { 193, 0, -1, 5, { 0 }},
    { 194, 0, -1, 5, { 0 }},
    { 195, 0, -1, 5, { 0 }},
    { 196, 0, 1, 5, { 0 }},
    { 197, 0, 1, 5, { 0 }},
    { 198, 0, 3, 5, { 0 }},
    { 199, 0, 3, 5, { 0 }},
    { 200, 0, -1, 5, { 0 }},
    { 201, 0, -1, 5, { 0 }},
    { 202, 0, -1, 5, { 0 }},
    { 203, 0, 1, 5, { 0 }},
    { 204, 0, -1, 5, { 0 }},
    { 205, 0, -1, 5, { 0 }},
    { 206, 0, -1, 5, { 0 }},
    { 207, 0, 1, 5, { 0 }},
    { 208, 0, 3, 5, { 0 }},
    { 209, 0, -1, 5, { 0 }},
    { 210, 0, -1, 5, { 0 }},
    { 211, 0, -1, 5, { 0 }},
    { 212, 0, -1, 5, { 0 }},
    { 213, 0, -1, 5, { 0 }},
    { 214, 0, 1, 5, { 0 }},
    { 215, 0, 10, 5, { 0 }},
    { 216, 0, 3, 5, { 0 }},
    { 217, 0, -1, 5, { 0 }},
    { 218, 0, -1, 5, { 0 }},
    { 219, 0, -1, 5, { 0 }},
    { 220, 0, 1, 5, { 0 }},
    { 221, 0, -1, 5, { 0 }},
    { 222, 0, 3, 5, { 0 }},
    { 223, 0, 3, 5, { 0 }},
    { 224, 0, 3, 5, { 0 }},
    { 225, 0, 3, 5, { 0 }},
    { 226, 0, 3, 5, { 0 }},
    { 227, 0, 3, 5, { 0 }},
    { 228, 0, 4, 5, { 0 }},
    { 229, 0, 4, 5, { 0 }},
    { 230, 0, 6, 5, { 0 }},
    { 231, 0, 6, 5, { 0 }},
    { 232, 0, 3, 5, { 0 }},
    { 233, 0, 3, 5, { 0 }},
    { 234, 0, 3, 5, { 0 }},
    { 235, 0, 4, 5, { 0 }},
    { 236, 0, 3, 5, { 0 }},
    { 237, 0, 3, 5, { 0 }},
    { 238, 0, 3, 5, { 0 }},
    { 239, 0, 4, 5, { 0 }},
    { 240, 0, 3, 5, { 0 }},
    { 241, 0, 3, 5, { 0 }},
    { 242, 0, 3, 5, { 0 }},
    { 243, 0, 3, 5, { 0 }},
    { 244, 0, 3, 5, { 0 }},
    { 245, 0, 3, 5, { 0 }},
    { 246, 0, 4, 5, { 0 }},
    { 247, 0, 7, 5, { 0 }},
    { 248, 0, 6, 5, { 0 }},
    { 249, 0, 3, 5, { 0 }},
    { 250, 0, 3, 5, { 0 }},
    { 251, 0, 3, 5, { 0 }},
    { 252, 0, 4, 5, { 0 }},
    { 253, 0, 3, 5, { 0 }},
    { 254, 0, 3, 5, { 0 }},
    { 255, 0, 4, 5, { 0 }},
};

// Style loading function: Amber
static void GuiLoadStyleAmber(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < AMBER_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(amberStyleProps[i].controlId, amberStyleProps[i].propertyId, amberStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int amberFontDataSize = 0;
    unsigned char *data = DecompressData(amberFontData, AMBER_STYLE_FONT_ATLAS_COMP_SIZE, &amberFontDataSize);
    Image imFont = { data, 512, 256, 1, 2 };

    Font font = { 0 };
    font.baseSize = 16;
    font.glyphCount = 189;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);
    UnloadImage(imFont);  // Uncompressed image data can be unloaded from memory

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (Rectangle *)RAYGUI_MALLOC(font.glyphCount*sizeof(Rectangle));
    memcpy(font.recs, amberFontRecs, font.glyphCount*sizeof(Rectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)RAYGUI_MALLOC(font.glyphCount*sizeof(GlyphInfo));
    memcpy(font.glyphs, amberFontGlyphs, font.glyphCount*sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // it makes possible to draw shapes and text (full UI) in a single draw call
    Rectangle fontWhiteRec = { 510, 254, 1, 1 };
    SetShapesTexture(font.texture, fontWhiteRec);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
