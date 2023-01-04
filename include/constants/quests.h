#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         6   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         7   //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       8   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    9   //buffers a quest name to gStringVar1

// quests
#define QUEST_GETTING_STARTED        0
#define QUEST_FINDING_SIMON          1
#define QUEST_TRIUMPH_SPIRE          2
#define QUEST_LOST_FISHING_POLE      3
#define QUEST_HIDDEN_ITEMS           4
#define QUEST_MOOCALF_ORPHAN         5
#define QUEST_TRADE_LUPINE           6
#define QUEST_CHARTREE_ROCKETS       7
#define QUEST_COUNT                 (QUEST_CHARTREE_ROCKETS + 1)

// subquests
// QUEST_GETTING_STARTED
#define QUEST_GETTING_STARTED_SUB_START         0
#define SUB_QUEST_FIND_BRADLEY                  (QUEST_GETTING_STARTED_SUB_START + 0)
#define SUB_QUEST_RESCUE_AMPURE                 (QUEST_GETTING_STARTED_SUB_START + 1)
#define SUB_QUEST_SAY_GOODBYE                   (QUEST_GETTING_STARTED_SUB_START + 2)
#define QUEST_GETTING_STARTED_SUB_END           SUB_QUEST_SAY_GOODBYE
#define QUEST_GETTING_STARTED_SUB_COUNT         (QUEST_GETTING_STARTED_SUB_END -  QUEST_GETTING_STARTED_SUB_START + 1)

// QUEST_FINDING_SIMON
#define QUEST_FINDING_SIMON_SUB_START           (QUEST_GETTING_STARTED_SUB_END + 1)
#define SUB_QUEST_FIND_SIMON                    (QUEST_FINDING_SIMON_SUB_START + 0)
#define QUEST_FINDING_SIMON_SUB_END             SUB_QUEST_FIND_SIMON
#define QUEST_FINDING_SIMON_SUB_COUNT           (QUEST_FINDING_SIMON_SUB_END - QUEST_FINDING_SIMON_SUB_START + 1)

// QUEST_TRIUMPH_SPIRE
#define QUEST_TRIUMPH_SPIRE_SUB_START           (QUEST_FINDING_SIMON_SUB_END + 1)
#define SUB_QUEST_GYM_1_CRANEWING               (QUEST_TRIUMPH_SPIRE_SUB_START + 0)
#define SUB_QUEST_GYM_2_SOFTWIND                (QUEST_TRIUMPH_SPIRE_SUB_START + 1)
#define SUB_QUEST_GYM_3_ROOTHAVEN               (QUEST_TRIUMPH_SPIRE_SUB_START + 2)
#define SUB_QUEST_GYM_4_KALYPSO                 (QUEST_TRIUMPH_SPIRE_SUB_START + 3)
#define SUB_QUEST_GYM_5_GALLEA                  (QUEST_TRIUMPH_SPIRE_SUB_START + 4)
#define SUB_QUEST_GYM_6_PORTWIND                (QUEST_TRIUMPH_SPIRE_SUB_START + 5)
#define SUB_QUEST_GYM_7_SEDCINI                 (QUEST_TRIUMPH_SPIRE_SUB_START + 6)
#define SUB_QUEST_GYM_8_ENCHESTRA               (QUEST_TRIUMPH_SPIRE_SUB_START + 7)
#define SUB_QUEST_GYM_9_DYNAMO_GARDENS          (QUEST_TRIUMPH_SPIRE_SUB_START + 8)
#define SUB_QUEST_GYM_10_SKOBELOFF              (QUEST_TRIUMPH_SPIRE_SUB_START + 9)
#define SUB_QUEST_GYM_11_SAHARAN                (QUEST_TRIUMPH_SPIRE_SUB_START + 10)
#define SUB_QUEST_GYM_12_AQUAPOLIS              (QUEST_TRIUMPH_SPIRE_SUB_START + 11)
#define SUB_QUEST_TRIUMPH_SPIRE                 (QUEST_TRIUMPH_SPIRE_SUB_START + 12)
#define QUEST_TRIUMPH_SPIRE_SUB_END             SUB_QUEST_TRIUMPH_SPIRE
#define QUEST_TRIUMPH_SPIRE_SUB_COUNT           (QUEST_TRIUMPH_SPIRE_SUB_END - QUEST_TRIUMPH_SPIRE_SUB_START + 1)

// QUEST_LOST_FISHING_POLE
// No subquests needed for this quest

// QUEST_HIDDEN_ITEMS
// No subquests needed for this quest

// QUEST_MOOCALF_ORPHAN
#define QUEST_MOOCALF_ORPHAN_SUB_START           (QUEST_TRIUMPH_SPIRE_SUB_END + 1)
#define SUB_QUEST_FIND_MILK                      (QUEST_MOOCALF_ORPHAN_SUB_START + 0)
#define SUB_QUEST_FIND_BOTTLE                    (QUEST_MOOCALF_ORPHAN_SUB_START + 1)
#define SUB_QUEST_DELIVER_ASH                    (QUEST_MOOCALF_ORPHAN_SUB_START + 2)
#define SUB_QUEST_GET_MILK                       (QUEST_MOOCALF_ORPHAN_SUB_START + 3)
#define SUB_QUEST_DELIVER_MILK                   (QUEST_MOOCALF_ORPHAN_SUB_START + 4)
#define QUEST_MOOCALF_ORPHAN_SUB_END             SUB_QUEST_DELIVER_MILK
#define QUEST_MOOCALF_ORPHAN_SUB_COUNT           (QUEST_MOOCALF_ORPHAN_SUB_END - QUEST_MOOCALF_ORPHAN_SUB_START + 1)

// QUEST_TRADE_LUPINE
// No subquests needed for this quest

// QUEST_CHARTREE_ROCKETS
#define QUEST_CHARTREE_ROCKETS_SUB_START           (QUEST_MOOCALF_ORPHAN_SUB_END + 1)
#define SUB_QUEST_INVESTIGATE_FOREST               (QUEST_CHARTREE_ROCKETS_SUB_START + 0)
#define SUB_QUEST_DEFEAT_ROCKETS                   (QUEST_CHARTREE_ROCKETS_SUB_START + 1)
#define QUEST_CHARTREE_ROCKETS_SUB_END             SUB_QUEST_DEFEAT_ROCKETS
#define QUEST_CHARTREE_ROCKETS_SUB_COUNT           (QUEST_CHARTREE_ROCKETS_SUB_END - QUEST_CHARTREE_ROCKETS_SUB_START + 1)

#define SUB_QUEST_COUNT (QUEST_CHARTREE_ROCKETS_SUB_END + 1)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
