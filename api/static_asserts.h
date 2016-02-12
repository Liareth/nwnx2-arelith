#pragma once

#define assert_class_size(cls, size) \
	static_assert(sizeof(cls) == size, #cls " is not expected size of " #size)

/**
 * These are all of the correct size already; any compile error
 * here indicates that you have messed up field sizes somehow.
 */
assert_class_size(CNWSModule, 0x260);
assert_class_size(CNWSObject, 0x1c4);
assert_class_size(CNWSCreatureStats, 0x4e4);
assert_class_size(CNWSCreature, 0xc74);

assert_class_size(CNWSCombatRound, 0x2160);
assert_class_size(CNWSCombatAttackData, 0xa8);

assert_class_size(CNWSClient, 0xc);
assert_class_size(CNWSPlayer, 0x98);

assert_class_size(CCombatInformation, 0x54);
assert_class_size(CCombatInformationNode, 0x6);

/**
 * The remainder is still TODO, and missing fields.
 */
// assert_class_size(CNWSItem, 0x2aa);
// assert_class_size(CNWLevelStats, 0x105);
// assert_class_size(CNWSCombatRoundAction, 0x28);
// assert_class_size(CNWSClient, 0xC);

#undef SA
