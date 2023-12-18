#pragma once

#include <rk_types.h>

#include <decomp.h>
#include <game/system/CourseMap.hpp>
#include <nw4r/math/mathTypes.hpp>
#include <rvl/mtx/mtx.h>
#include <game/geo/BoxColUnit.hpp>

#ifdef __cplusplus
extern "C" {
#endif

// PAL: 0x8081f828..0x8081f9bc
extern UNKNOWN_FUNCTION(Obj_construct);
// PAL: 0x8081f9bc..0x8081fb04
extern UNKNOWN_FUNCTION(void_8081f9bc);
// PAL: 0x8081fb04..0x8081fc68
extern UNKNOWN_FUNCTION(void_8081fb04);
// PAL: 0x8081fc68..0x8081fcec
extern UNKNOWN_FUNCTION(Obj_vf0c);
// PAL: 0x8081fcec..0x8081fd00
extern UNKNOWN_FUNCTION(Object_loadGraphicsEx);
// PAL: 0x8081fd00..0x8081fd10
extern UNKNOWN_FUNCTION(void_8081fd00);
// PAL: 0x8081fd10..0x80820360
extern UNKNOWN_FUNCTION(Obj_loadGraphics);
// PAL: 0x80820360..0x808204b8
extern UNKNOWN_FUNCTION(void_80820360);
// PAL: 0x808204b8..0x808204fc
extern UNKNOWN_FUNCTION(void_808204b8);
// PAL: 0x808204fc..0x8082051c
extern UNKNOWN_FUNCTION(void_808204fc);
// PAL: 0x8082051c..0x8082053c
extern UNKNOWN_FUNCTION(void_8082051c);
// PAL: 0x8082053c..0x8082055c
extern UNKNOWN_FUNCTION(void_8082053c);
// PAL: 0x8082055c..0x8082057c
extern UNKNOWN_FUNCTION(void_8082055c);
// PAL: 0x8082057c..0x8082059c
extern UNKNOWN_FUNCTION(void_8082057c);
// PAL: 0x8082059c..0x808205bc
extern UNKNOWN_FUNCTION(void_8082059c);
// PAL: 0x808205bc..0x808205dc
extern UNKNOWN_FUNCTION(void_808205bc);
// PAL: 0x808205dc..0x8082072c
extern UNKNOWN_FUNCTION(void_808205dc);
// PAL: 0x8082072c..0x80820874
extern UNKNOWN_FUNCTION(Object_loadAnims);
// PAL: 0x80820874..0x80820980
extern UNKNOWN_FUNCTION(void_80820874);
// PAL: 0x80820980..0x80820a90
extern UNKNOWN_FUNCTION(void_80820980);
// PAL: 0x80820a90..0x80820eb8
extern UNKNOWN_FUNCTION(void_80820a90);
// PAL: 0x80820eb8..0x80821070
extern UNKNOWN_FUNCTION(void_80820eb8);
// PAL: 0x80821070..0x80821640
extern UNKNOWN_FUNCTION(Object_initRenderGroup);
// PAL: 0x80821640..0x808216c0
extern UNKNOWN_FUNCTION(void_80821640);
// PAL: 0x808216c0..0x80821738
extern UNKNOWN_FUNCTION(void_808216c0);
// PAL: 0x80821738..0x808217b0
extern UNKNOWN_FUNCTION(void_80821738);
// PAL: 0x808217b0..0x808217b8
extern UNKNOWN_FUNCTION(void_808217b0);
// PAL: 0x808217b8..0x808218b0
extern UNKNOWN_FUNCTION(Obj_vf1c);
// PAL: 0x808218b0..0x80821910
extern UNKNOWN_FUNCTION(void_808218b0);
// PAL: 0x80821910..0x80821974
extern UNKNOWN_FUNCTION(void_80821910);
// PAL: 0x80821974..0x80821a9c
extern UNKNOWN_FUNCTION(void_80821974);
// PAL: 0x80821a9c..0x80821b68
extern UNKNOWN_FUNCTION(void_80821a9c);
// PAL: 0x80821b68..0x80821db8
extern UNKNOWN_FUNCTION(void_80821b68);
// PAL: 0x80821db8..0x80821dd8
extern UNKNOWN_FUNCTION(void_80821db8);
// PAL: 0x80821dd8..0x80821dec
extern UNKNOWN_FUNCTION(void_80821dd8);
// PAL: 0x80821dec..0x80821e00
extern UNKNOWN_FUNCTION(void_80821dec);
// PAL: 0x80821e00..0x80821e14
extern UNKNOWN_FUNCTION(void_80821e00);


namespace Geo
{
    enum ObjectType{
        OBJECT_TYPE_NORMAL = 0x0,
        OBJECT_TYPE_COLLIDABLE = 0x1,
        OBJECT_TYPE_SPECIAL = 0x2,
    };

	class GeoObject
    {
        explicit GeoObject(System::MapdataGeoObj * gobj);  //8081f828
        GeoObject(u32 objectId, nw4r::math::VEC3 * position, nw4r::math::VEC3 * rotation, nw4r::math::VEC3 * scale); //8081fb04
        GeoObject(const char * name, nw4r::math::VEC3 * position, nw4r::math::VEC3 * rotation, nw4r::math::VEC3 * scale); //8081fb04
        
        virtual ~GeoObject(); //8067e3c4 vtable 808d6ecc
        virtual void Setup(); //0xC 8081fc68
        virtual void vf_0x10(); //0x10 0x10 806807dc just a blr
        virtual void Update(); //0x14 806bf448
        virtual void vf_0x18(); //0x18 0x18 806807d8 just a blr
        virtual void UpdateModel(); //0x1c 808217b8
        virtual void Init() = 0; //0x20
        virtual int GetID() const; //0x24 80572574
        virtual const char *GetName() const; //0x28 80680784
        virtual bool HasLod(); //0x2c 806bf434
        virtual void *GetClipInfo() const; //0x30 8067da54
        virtual char *GetBRRESName() const; //0x34 80680730
        virtual char *GetSubFileName() const; //0x38 806806dc completely identical to the one above, but for other objects can be KCL, BREFF etc...
        virtual void *vf_0x3c(); //0x3c 806806d4
        virtual char *GetShadowResName() const; //0x40 806806cc
        virtual void LoadModels(); //0x44 8081fcec calls loadgraphics
        virtual void LoadModels(void *r4); //0x48 8081fd00 same
        virtual void LoadGraphics(void *r4); //0x4c 8081fd10
        virtual void LoadShadow(); //0x50 808205dc
        virtual void LoadSound(); //0x54 80820360
        virtual void LoadRenderer(); //0x58 80821070
        virtual void LoadAnimations(); //0x5c 8082072c
        virtual void LoadCollision() = 0; //0x60
        virtual void LoadRoute(); //0x64 80820980
        virtual void InitModels(bool r4); //0x68 808216c0
        virtual void UpdateModelMatrix(); //0x6c 80821a9c
        virtual void UpdateShadow(); //0x70 80821974
        virtual void UpdateCollision() = 0; //0x74
        virtual void UpdateModelScale(); //0x78 8068065c called by UpdateModel
        virtual void UpdateShadowScale(); //0x7c 80680630
        virtual bool vf_0x80(); //0x80 0x80 80680628
        virtual bool vf_0x84(); //0x84 0x84 80680620
        virtual void vf_0x88(); //0x88 0x88 80821db8
        virtual void vf_0x8c(); //0x8c 0x8c 80821dd8
        virtual void DisableCollision(); //0x90 80821dec for example when you destroy a create
        virtual void EnableCollision(); //0x94 0x94 80821e00
        virtual int *GetDrawInfo() const; //0x98 80680618
        virtual nw4r::math::VEC3 *GetPosition() const; //0x9c 80681598
        virtual float GetCollisionDiameter() const; //0xa0 8080bdc0 
        virtual bool IsLodDisbled(); //0xa4 80680610
        virtual void vf_0xa8(); //0xa8 0xa8 80680608
        virtual void vf_0xac(); //0xac 0xa8 80680600
        virtual u32 GetDrawType() const = 0; //0xb0

        ObjectType type;
        void * mdlDirector; //temp
        void * mdlLodDirector; //temp
        void * mdlShadowDirector; //temp
        void *  ;
        void * objectSound;
        void * clipInfo;
        void * routeController;
        BoxColUnit * entity;
        const char * shadowName;
        u16 flags;
        nw4r::math::VEC3 pos;
        nw4r::math::VEC3 scale;
        nw4r::math::VEC3 rot;
        const char * modelName;
        nw4r::math::MTX34 matrix;
        u16 id;
        u16 useLowModel;
        char * lowModelName;
        u8 lodFlags;
        u8 unknown[3];
        const char * lodModelName;
        u8 unknown2;
        u8 unknown3;
        u8 unknown4;
        u8 hasModel;
        u8 hasLodModel;
        u8 uknown6[3];
        System::MapdataGeoObj * gobj;
        u32 holderIndex;
        bool unknown_0xa8;
        u8 padding[3];
    };
}

#ifdef __cplusplus
}
#endif