/*
 * Author: PabstMirror
 * Can player open 105 and 122mm rangetable.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * Can Open <BOOL>
 *
 * Example:
 * [bob, bob] call ace_mk6mortar_fnc_rangeTableCanUse
 *
 * Public: No
 */
#include "script_component.hpp"

PARAMS_2(_vehicle,_player);

"ACE_RangeTable_GrWr34" in (items _player);