#include "GeoObject.hpp"

// --- EXTERN DECLARATIONS BEGIN ---

extern "C" {

// Extern function references.
// PAL: 0x80011938
extern UNKNOWN_FUNCTION(snprintf);
// PAL: 0x8001329c
extern UNKNOWN_FUNCTION(strcmp);
// PAL: 0x8002159c
extern UNKNOWN_FUNCTION(_savegpr_26);
// PAL: 0x800215a0
extern UNKNOWN_FUNCTION(_savegpr_27);
// PAL: 0x800215e8
extern UNKNOWN_FUNCTION(_restgpr_26);
// PAL: 0x800215ec
extern UNKNOWN_FUNCTION(_restgpr_27);
// PAL: 0x8004c780
extern UNKNOWN_FUNCTION(GetResAnmChr);
// PAL: 0x8004c900
extern UNKNOWN_FUNCTION(GetResAnmClr__Q34nw4r3g3d7ResFileCFPCc);
// PAL: 0x8004ca80
extern UNKNOWN_FUNCTION(unk_8004ca80);
// PAL: 0x8004cc00
extern UNKNOWN_FUNCTION(unk_8004cc00);
// PAL: 0x8004cd80
extern UNKNOWN_FUNCTION(unk_8004cd80);
// PAL: 0x8006db90
extern UNKNOWN_FUNCTION(SetMtx);
// PAL: 0x80199d04
extern UNKNOWN_FUNCTION(PSMTXIdentity);
// PAL: 0x80199d30
extern UNKNOWN_FUNCTION(PSMTXCopy);
// PAL: 0x80229dcc
extern UNKNOWN_FUNCTION(__nw__FUl);
// PAL: 0x80229e04
extern UNKNOWN_FUNCTION(__nwa__FUlPQ23EGG4Heapi);
// PAL: 0x8022fac4
extern UNKNOWN_FUNCTION(makeIdentity__Q23EGG9Matrix34fFv);
// PAL: 0x8022fe14
extern UNKNOWN_FUNCTION(makeRT__Q23EGG9Matrix34fFRCQ23EGG8Vector3fRCQ23EGG8Vector3f);
// PAL: 0x80514194
extern UNKNOWN_FUNCTION(getPointInfo__Q26System13MapdataGeoObjCFv);
// PAL: 0x8051bed0
extern UNKNOWN_FUNCTION(getGameScene);
// PAL: 0x80537b80
extern UNKNOWN_FUNCTION(unk_80537b80);
// PAL: 0x805556a8
extern UNKNOWN_FUNCTION(nextF32__Q24Util6RandomFf);
// PAL: 0x80557340
extern UNKNOWN_FUNCTION(unk_80557340);
// PAL: 0x805573cc
extern UNKNOWN_FUNCTION(unk_805573cc);
// PAL: 0x8055b298
extern UNKNOWN_FUNCTION(unk_8055b298);
// PAL: 0x8055b50c
extern UNKNOWN_FUNCTION(unk_8055b50c);
// PAL: 0x8055b6a4
extern UNKNOWN_FUNCTION(unk_8055b6a4);
// PAL: 0x8055ba00
extern UNKNOWN_FUNCTION(unk_8055ba00);
// PAL: 0x8055ba64
extern UNKNOWN_FUNCTION(unk_8055ba64);
// PAL: 0x8055c0e8
extern UNKNOWN_FUNCTION(unk_8055c0e8);
// PAL: 0x8055c378
extern UNKNOWN_FUNCTION(unk_8055c378);
// PAL: 0x8055c520
extern UNKNOWN_FUNCTION(unk_8055c520);
// PAL: 0x8055dce4
extern UNKNOWN_FUNCTION(unk_8055dce4);
// PAL: 0x8055ddec
extern UNKNOWN_FUNCTION(unk_8055ddec);
// PAL: 0x805b8984
extern UNKNOWN_FUNCTION(unk_805b8984);
// PAL: 0x805b89f4
extern UNKNOWN_FUNCTION(unk_805b89f4);
// PAL: 0x805b8e60
extern UNKNOWN_FUNCTION(unk_805b8e60);
// PAL: 0x805b8e68
extern UNKNOWN_FUNCTION(unk_805b8e68);
// PAL: 0x806b3ca4
extern UNKNOWN_FUNCTION(unk_806b3ca4);
// PAL: 0x806b41e0
extern UNKNOWN_FUNCTION(unk_806b41e0);
// PAL: 0x806b55c4
extern UNKNOWN_FUNCTION(unk_806b55c4);
// PAL: 0x806ee830
extern UNKNOWN_FUNCTION(unk_806ee830);
// PAL: 0x806efdc4
extern UNKNOWN_FUNCTION(unk_806efdc4);
// PAL: 0x80700894
extern UNKNOWN_FUNCTION(unk_80700894);
// PAL: 0x807029f0
extern UNKNOWN_FUNCTION(unk_807029f0);
// PAL: 0x8070ca8c
extern UNKNOWN_FUNCTION(unk_8070ca8c);
// PAL: 0x80786578
extern UNKNOWN_FUNCTION(EntityHolder_remove);
// PAL: 0x80787ab8
extern UNKNOWN_FUNCTION(unk_80787ab8);
// PAL: 0x80820a90
extern UNKNOWN_FUNCTION(unk_80820a90);
// PAL: 0x8082c178
extern UNKNOWN_FUNCTION(unk_8082c178);// Extern data references.
// PAL: 0x808abaa0
extern UNKNOWN_DATA(lbl_808abaa0);
// PAL: 0x808abaa4
extern UNKNOWN_DATA(lbl_808abaa4);
// PAL: 0x808abaa8
extern UNKNOWN_DATA(lbl_808abaa8);
// PAL: 0x808abab0
extern UNKNOWN_DATA(lbl_808abab0);
// PAL: 0x808ababc
extern UNKNOWN_DATA(lbl_808ababc);
// PAL: 0x808d6ec8
extern UNKNOWN_DATA(lbl_808d6ec8);
// PAL: 0x808d6ecc
extern UNKNOWN_DATA(lbl_808d6ecc);
// PAL: 0x809bd728
extern UNKNOWN_DATA(spInstance__Q26System10RaceConfig);
// PAL: 0x809bd730
extern UNKNOWN_DATA(lbl_809bd730);
// PAL: 0x809c1868
extern UNKNOWN_DATA(lbl_809c1868);
// PAL: 0x809c1b40
extern UNKNOWN_DATA(lbl_809c1b40);
// PAL: 0x809c2ef0
extern UNKNOWN_DATA(lbl_809c2ef0);
// PAL: 0x809c2ef8
extern UNKNOWN_DATA(lbl_809c2ef8);
// PAL: 0x809c2f44
extern UNKNOWN_DATA(lbl_809c2f44);
// PAL: 0x809c4330
extern UNKNOWN_DATA(lbl_809c4330);
}

// --- EXTERN DECLARATIONS END ---

// .rodata

// .data


// .bss


// Symbol: Obj_construct
// PAL: 0x8081f828..0x8081f9bc
MARK_BINARY_BLOB(Obj_construct, 0x8081f828, 0x8081f9bc);
asm UNKNOWN_FUNCTION(Obj_construct) {
  #include "asm/8081f828.s"
}

// Symbol: unk_8081f9bc
// PAL: 0x8081f9bc..0x8081fb04
MARK_BINARY_BLOB(unk_8081f9bc, 0x8081f9bc, 0x8081fb04);
asm UNKNOWN_FUNCTION(unk_8081f9bc) {
  #include "asm/8081f9bc.s"
}

// Symbol: unk_8081fb04
// PAL: 0x8081fb04..0x8081fc68
MARK_BINARY_BLOB(unk_8081fb04, 0x8081fb04, 0x8081fc68);
asm UNKNOWN_FUNCTION(unk_8081fb04) {
  #include "asm/8081fb04.s"
}

// Symbol: Obj_vf0c
// PAL: 0x8081fc68..0x8081fcec
MARK_BINARY_BLOB(Obj_vf0c, 0x8081fc68, 0x8081fcec);
asm UNKNOWN_FUNCTION(Obj_vf0c) {
  #include "asm/8081fc68.s"
}

// Symbol: Object_loadGraphicsEx
// PAL: 0x8081fcec..0x8081fd00
MARK_BINARY_BLOB(Object_loadGraphicsEx, 0x8081fcec, 0x8081fd00);
asm UNKNOWN_FUNCTION(Object_loadGraphicsEx) {
  #include "asm/8081fcec.s"
}

// Symbol: unk_8081fd00
// PAL: 0x8081fd00..0x8081fd10
MARK_BINARY_BLOB(unk_8081fd00, 0x8081fd00, 0x8081fd10);
asm UNKNOWN_FUNCTION(unk_8081fd00) {
  #include "asm/8081fd00.s"
}

// Symbol: Obj_loadGraphics
// PAL: 0x8081fd10..0x80820360
MARK_BINARY_BLOB(Obj_loadGraphics, 0x8081fd10, 0x80820360);
asm UNKNOWN_FUNCTION(Obj_loadGraphics) {
  #include "asm/8081fd10.s"
}

// Symbol: unk_80820360
// PAL: 0x80820360..0x808204b8
MARK_BINARY_BLOB(unk_80820360, 0x80820360, 0x808204b8);
asm UNKNOWN_FUNCTION(unk_80820360) {
  #include "asm/80820360.s"
}

// Symbol: unk_808204b8
// PAL: 0x808204b8..0x808204fc
MARK_BINARY_BLOB(unk_808204b8, 0x808204b8, 0x808204fc);
asm UNKNOWN_FUNCTION(unk_808204b8) {
  #include "asm/808204b8.s"
}

// Symbol: unk_808204fc
// PAL: 0x808204fc..0x8082051c
MARK_BINARY_BLOB(unk_808204fc, 0x808204fc, 0x8082051c);
asm UNKNOWN_FUNCTION(unk_808204fc) {
  #include "asm/808204fc.s"
}

// Symbol: unk_8082051c
// PAL: 0x8082051c..0x8082053c
MARK_BINARY_BLOB(unk_8082051c, 0x8082051c, 0x8082053c);
asm UNKNOWN_FUNCTION(unk_8082051c) {
  #include "asm/8082051c.s"
}

// Symbol: unk_8082053c
// PAL: 0x8082053c..0x8082055c
MARK_BINARY_BLOB(unk_8082053c, 0x8082053c, 0x8082055c);
asm UNKNOWN_FUNCTION(unk_8082053c) {
  #include "asm/8082053c.s"
}

// Symbol: unk_8082055c
// PAL: 0x8082055c..0x8082057c
MARK_BINARY_BLOB(unk_8082055c, 0x8082055c, 0x8082057c);
asm UNKNOWN_FUNCTION(unk_8082055c) {
  #include "asm/8082055c.s"
}

// Symbol: unk_8082057c
// PAL: 0x8082057c..0x8082059c
MARK_BINARY_BLOB(unk_8082057c, 0x8082057c, 0x8082059c);
asm UNKNOWN_FUNCTION(unk_8082057c) {
  #include "asm/8082057c.s"
}

// Symbol: unk_8082059c
// PAL: 0x8082059c..0x808205bc
MARK_BINARY_BLOB(unk_8082059c, 0x8082059c, 0x808205bc);
asm UNKNOWN_FUNCTION(unk_8082059c) {
  #include "asm/8082059c.s"
}

// Symbol: unk_808205bc
// PAL: 0x808205bc..0x808205dc
MARK_BINARY_BLOB(unk_808205bc, 0x808205bc, 0x808205dc);
asm UNKNOWN_FUNCTION(unk_808205bc) {
  #include "asm/808205bc.s"
}

// Symbol: unk_808205dc
// PAL: 0x808205dc..0x8082072c
MARK_BINARY_BLOB(unk_808205dc, 0x808205dc, 0x8082072c);
asm UNKNOWN_FUNCTION(unk_808205dc) {
  #include "asm/808205dc.s"
}

// Symbol: Object_loadAnims
// PAL: 0x8082072c..0x80820874
MARK_BINARY_BLOB(Object_loadAnims, 0x8082072c, 0x80820874);
asm UNKNOWN_FUNCTION(Object_loadAnims) {
  #include "asm/8082072c.s"
}

// Symbol: unk_80820874
// PAL: 0x80820874..0x80820980
MARK_BINARY_BLOB(unk_80820874, 0x80820874, 0x80820980);
asm UNKNOWN_FUNCTION(unk_80820874) {
  #include "asm/80820874.s"
}

// Symbol: unk_80820980
// PAL: 0x80820980..0x80820a90
MARK_BINARY_BLOB(unk_80820980, 0x80820980, 0x80820a90);
asm UNKNOWN_FUNCTION(unk_80820980) {
  #include "asm/80820980.s"
}

// Symbol: unk_80820a90
// PAL: 0x80820a90..0x80820eb8
MARK_BINARY_BLOB(unk_80820a90, 0x80820a90, 0x80820eb8);
asm UNKNOWN_FUNCTION(unk_80820a90) {
  #include "asm/80820a90.s"
}

// Symbol: unk_80820eb8
// PAL: 0x80820eb8..0x80821070
MARK_BINARY_BLOB(unk_80820eb8, 0x80820eb8, 0x80821070);
asm UNKNOWN_FUNCTION(unk_80820eb8) {
  #include "asm/80820eb8.s"
}

// Symbol: Object_initRenderGroup
// PAL: 0x80821070..0x80821640
MARK_BINARY_BLOB(Object_initRenderGroup, 0x80821070, 0x80821640);
asm UNKNOWN_FUNCTION(Object_initRenderGroup) {
  #include "asm/80821070.s"
}

// Symbol: unk_80821640
// PAL: 0x80821640..0x808216c0
MARK_BINARY_BLOB(unk_80821640, 0x80821640, 0x808216c0);
asm UNKNOWN_FUNCTION(unk_80821640) {
  #include "asm/80821640.s"
}

// Symbol: unk_808216c0
// PAL: 0x808216c0..0x80821738
MARK_BINARY_BLOB(unk_808216c0, 0x808216c0, 0x80821738);
asm UNKNOWN_FUNCTION(unk_808216c0) {
  #include "asm/808216c0.s"
}

// Symbol: unk_80821738
// PAL: 0x80821738..0x808217b0
MARK_BINARY_BLOB(unk_80821738, 0x80821738, 0x808217b0);
asm UNKNOWN_FUNCTION(unk_80821738) {
  #include "asm/80821738.s"
}

// Symbol: unk_808217b0
// PAL: 0x808217b0..0x808217b8
MARK_BINARY_BLOB(unk_808217b0, 0x808217b0, 0x808217b8);
asm UNKNOWN_FUNCTION(unk_808217b0) {
  #include "asm/808217b0.s"
}

// Symbol: Obj_vf1c
// PAL: 0x808217b8..0x808218b0
MARK_BINARY_BLOB(Obj_vf1c, 0x808217b8, 0x808218b0);
asm UNKNOWN_FUNCTION(Obj_vf1c) {
  #include "asm/808217b8.s"
}

// Symbol: unk_808218b0
// PAL: 0x808218b0..0x80821910
MARK_BINARY_BLOB(unk_808218b0, 0x808218b0, 0x80821910);
asm UNKNOWN_FUNCTION(unk_808218b0) {
  #include "asm/808218b0.s"
}

// Symbol: unk_80821910
// PAL: 0x80821910..0x80821974
MARK_BINARY_BLOB(unk_80821910, 0x80821910, 0x80821974);
asm UNKNOWN_FUNCTION(unk_80821910) {
  #include "asm/80821910.s"
}

// Symbol: unk_80821974
// PAL: 0x80821974..0x80821a9c
MARK_BINARY_BLOB(unk_80821974, 0x80821974, 0x80821a9c);
asm UNKNOWN_FUNCTION(unk_80821974) {
  #include "asm/80821974.s"
}

// Symbol: unk_80821a9c
// PAL: 0x80821a9c..0x80821b68
MARK_BINARY_BLOB(unk_80821a9c, 0x80821a9c, 0x80821b68);
asm UNKNOWN_FUNCTION(unk_80821a9c) {
  #include "asm/80821a9c.s"
}

// Symbol: unk_80821b68
// PAL: 0x80821b68..0x80821db8
MARK_BINARY_BLOB(unk_80821b68, 0x80821b68, 0x80821db8);
asm UNKNOWN_FUNCTION(unk_80821b68) {
  #include "asm/80821b68.s"
}

// Symbol: unk_80821db8
// PAL: 0x80821db8..0x80821dd8
MARK_BINARY_BLOB(unk_80821db8, 0x80821db8, 0x80821dd8);
asm UNKNOWN_FUNCTION(unk_80821db8) {
  #include "asm/80821db8.s"
}

// Symbol: unk_80821dd8
// PAL: 0x80821dd8..0x80821dec
MARK_BINARY_BLOB(unk_80821dd8, 0x80821dd8, 0x80821dec);
asm UNKNOWN_FUNCTION(unk_80821dd8) {
  #include "asm/80821dd8.s"
}

// Symbol: unk_80821dec
// PAL: 0x80821dec..0x80821e00
MARK_BINARY_BLOB(unk_80821dec, 0x80821dec, 0x80821e00);
asm UNKNOWN_FUNCTION(unk_80821dec) {
  #include "asm/80821dec.s"
}

// Symbol: unk_80821e00
// PAL: 0x80821e00..0x80821e14
MARK_BINARY_BLOB(unk_80821e00, 0x80821e00, 0x80821e14);
asm UNKNOWN_FUNCTION(unk_80821e00) {
  #include "asm/80821e00.s"
}

