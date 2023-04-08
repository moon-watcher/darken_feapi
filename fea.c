#include "fea.h"

const DarkenAPI_System  *const $s = & ( DarkenAPI_System  ) { deSystem_init,  deSystem_update,  deSystem_end,   deSystem_add };
const DarkenAPI_Manager *const $m = & ( DarkenAPI_Manager ) { deManager_init, deManager_update, deManager_end   };
const DarkenAPI_Entity  *const $e = & ( DarkenAPI_Entity  ) { deEntity_new,   deEntity_update,  deEntity_change, deEntity_set, deEntity_delete };
const DarkenAPI_fea     *const $  = & ( DarkenAPI_fea     ) { darken, darken_end };