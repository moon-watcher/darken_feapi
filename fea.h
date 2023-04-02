// #pragma once

// // FEA
// // Freaking Estupid darken Api

#include "../darken/darken.h"

typedef struct {
    void ( *init   ) ( deSystem_t *const, deSystem_f, unsigned, unsigned );
    void ( *update ) ( deSystem_t *const );
    void ( *end    ) ( deSystem_t *const );
    void ( *add    ) ( deSystem_t *const, void *const[]);
} DarkenAPI_System;

typedef struct {
    void ( *init   ) ( deManager_t *const, unsigned, unsigned );
    void ( *update ) ( deManager_t *const );
    void ( *end    ) ( deManager_t *const );
} DarkenAPI_Manager;

typedef struct {
    deEntity_t *( *new    ) ( const deState_t *, deManager_t *const );
    void        ( *update ) ( deEntity_t *const );
    void        ( *change ) ( deEntity_t *const, const deState_t *const );
    void        ( *jump   ) ( deEntity_t *const, const deState_t *const );
    void        ( *delete ) ( deEntity_t *const );
} DarkenAPI_Entity;

typedef struct {
    int  ( *start ) ( deState_t *const );
    void ( *end   ) ( int );
} DarkenAPI_fea;

const DarkenAPI_System  *const $s;
const DarkenAPI_Manager *const $m;
const DarkenAPI_Entity  *const $e;
const DarkenAPI_fea     *const $;