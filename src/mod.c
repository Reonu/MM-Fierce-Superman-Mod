#include "global.h"
#include "modding.h"

#include "superman_skeleton.h"
#include "screaming.h"
#include "not_screaming.h"
#include "superman_gi.h"
#include "overlays/kaleido_scope/ovl_kaleido_scope/z_kaleido_scope.h"

extern Gfx gLinkFierceDeitySwordDL[];

Gfx two_hand_sword_hand_dl[] = {
    gsSPDisplayList(gLinkFierceDeitySkel_bone015_gLinkFierceDeityLeftHandLimb_mesh_layer_Opaque),
    gsSPBranchList(gLinkFierceDeitySwordDL),
};

extern Gfx* gPlayerRightHandOpenDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerRightHandClosedDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerRightHandBowDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerRightHandInstrumentDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerRightHandHookshotDLs[2 * PLAYER_FORM_MAX];

extern Gfx* gPlayerLeftHandOpenDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerLeftHandClosedDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerLeftHandTwoHandSwordDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerLeftHandOneHandSwordDLs[2 * PLAYER_FORM_MAX];
extern Gfx* gPlayerLeftHandBottleDLs[2 * PLAYER_FORM_MAX];
extern Gfx* sPlayerFirstPersonLeftHandDLs[PLAYER_FORM_MAX];

extern Gfx* gPlayerWaistDLs[2 * PLAYER_FORM_MAX];

extern Gfx* D_801C0B20[];

RECOMP_IMPORT("*", void recomp_set_fd_anywhere(bool new_val));

RECOMP_CALLBACK("*", recomp_on_init) void on_init() {
    recomp_set_fd_anywhere(true);
}

RECOMP_IMPORT("*", void recomp_printf(const char* fmt, ...));

// Replace the DLs for each limb.
RECOMP_HOOK("Player_Init") void on_Player_Init() {
    // recomp_printf("Loading superman\n");
    gPlayerSkeletons[PLAYER_FORM_FIERCE_DEITY] = &SupermanSkel;
    gPlayerRightHandOpenDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandOpenDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandClosedDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandClosedDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandBowDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandBowDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandInstrumentDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandInstrumentDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandHookshotDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    gPlayerRightHandHookshotDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone018_gLinkFierceDeityRightHandLimb_mesh_layer_Opaque;
    
    gPlayerLeftHandOpenDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone015_gLinkFierceDeityLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandOpenDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone015_gLinkFierceDeityLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandClosedDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone015_gLinkFierceDeityLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandClosedDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone015_gLinkFierceDeityLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandTwoHandSwordDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = two_hand_sword_hand_dl;
    gPlayerLeftHandTwoHandSwordDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = two_hand_sword_hand_dl;
    gPlayerLeftHandOneHandSwordDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone015_gLinkFierceDeityLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandOneHandSwordDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone015_gLinkFierceDeityLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandBottleDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone015_gLinkFierceDeityLeftHandLimb_mesh_layer_Opaque;
    gPlayerLeftHandBottleDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone015_gLinkFierceDeityLeftHandLimb_mesh_layer_Opaque;

    gPlayerWaistDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 0] = gLinkFierceDeitySkel_bone001_gLinkFierceDeityWaistLimb_mesh_layer_Opaque;
    gPlayerWaistDLs[PLAYER_FORM_FIERCE_DEITY * 2 + 1] = gLinkFierceDeitySkel_bone001_gLinkFierceDeityWaistLimb_mesh_layer_Opaque;

    D_801C0B20[PLAYER_MASK_FIERCE_DEITY - 1] = not_screaming;
    D_801C0B20[PLAYER_MASK_FIERCE_DEITY - 1 + 4] = screaming;
}

extern u64 Plane_SupermaskSD_rgba32[];

u8 gCurMaskIsFierceDeity = 0;
PlayState* gPlayState2;
u8 gId;
void* gDst;
u8 gAlreadyTranslated = 0;
uintptr_t gTranslatedAddress;

// Translate the address only once, and check if it's currently rendering the Fierce Deity icon in the UI. 
RECOMP_HOOK("CmpDma_LoadFileImpl") void on_CmpDma_LoadFileImpl(uintptr_t segmentRom, s32 id, void* dst, size_t size) {
    if (!gAlreadyTranslated ) {
        gTranslatedAddress = DmaMgr_TranslateVromToRom(SEGMENT_ROM_START(icon_item_static_yar));
        gAlreadyTranslated = 1;
    }
    if (id == ITEM_MASK_FIERCE_DEITY && segmentRom == gTranslatedAddress) {
        gCurMaskIsFierceDeity = 1;
    } else {
        gCurMaskIsFierceDeity = 0;
    } 
    gId = id;
    gDst = dst;
}

// Replace the Fierce Deity icon in the UI with the Superman mask.
RECOMP_HOOK_RETURN("CmpDma_LoadFileImpl") void return_CmpDma_LoadFileImpl(void) {
    if (gCurMaskIsFierceDeity) {
        Lib_MemCpy(gDst, Plane_SupermaskSD_rgba32, ICON_ITEM_TEX_SIZE);
    }
    gCurMaskIsFierceDeity = 0;
}

Mtx superman_scale_mtx;
extern Gfx gGiFierceDeityMaskFaceDL[];
extern Gfx gGiFierceDeityMaskHairAndHatDL[];
DmaRequest* gReq;

// Scale the GetItem model for the mask down. 
// GI models are tiny, so the model is exported at 100x the size and then scaled down to 0.01% to achieve higher precision.
Gfx scaled_superman[] = {
    gsSPMatrix(&superman_scale_mtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(superman_gi),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList()
};

RECOMP_CALLBACK("*", recomp_on_init)
void onInit(void) {
    guScale(&superman_scale_mtx, 0.01f, 0.01f, 0.01f);
}

RECOMP_HOOK("DmaMgr_ProcessRequest") void on_DmaMgrProcessRequest(DmaRequest* req) {
    gReq = req;
}

// Replace the mask icon in the pause menu and C-buttons
extern u8 _object_gi_mask03SegmentRomStart[];
RECOMP_HOOK_RETURN("DmaMgr_ProcessRequest") void return_DmaMgrProcessRequest(void) {
    if (gReq->vromAddr == (uintptr_t)_object_gi_mask03SegmentRomStart) {
        uintptr_t old_seg6 = gSegments[0x06];
        gSegments[0x06] = K0_TO_PHYS(gReq->dramAddr);
        Gfx* dl = (Gfx*)Lib_SegmentedToVirtual(gGiFierceDeityMaskFaceDL);
        Gfx* dl2 = (Gfx*)Lib_SegmentedToVirtual(gGiFierceDeityMaskHairAndHatDL);
        gSegments[0x06] = old_seg6;    
        gSPBranchList(dl, scaled_superman);
        gSPEndDisplayList(dl2);
    }
}




// Detect if the mask currently selected in the pause menu is the Fierce Deity, and store the result globally.
// Also make a global copy of the item title texture segment. 
u8 gCurrentMaskIsFierceDeity;
void* gSegment;
RECOMP_HOOK("Kaleido_LoadItemNameStatic") void on_Kaleido_LoadItemNameStatic(void* segment, u32 texIndex) {
    if (texIndex == ITEM_MASK_FIERCE_DEITY) {
        gCurrentMaskIsFierceDeity = 1;
    }
    gSegment = segment;
}

// If the mask currently selected in the pause menu is the Fierce Deity, replace the item title texture.
extern u64 mask_of_steel_ia4_SD[];
RECOMP_HOOK_RETURN("Kaleido_LoadItemNameStatic") void return_Kaleido_LoadItemNameStatic(void) {
    if (gCurrentMaskIsFierceDeity) {
        Lib_MemCpy(gSegment, mask_of_steel_ia4_SD, 1024);
    }
    gCurrentMaskIsFierceDeity = 0;
}

#define INCBIN(identifier, filename)          \
    asm(".pushsection .rodata\n"              \
        "\t.local " #identifier "\n"          \
        "\t.type " #identifier ", @object\n"  \
        "\t.balign 8\n"                       \
        #identifier ":\n"                     \
        "\t.incbin \"" filename "\"\n\n"      \
                                              \
        "\t.balign 8\n"                       \
        "\t.popsection\n");                   \
    extern u8 identifier[]

// INCBIN(notimetowaste, "notimetowaste.raw");
// const u32 notimetowaste_size_bytes = 205440;


