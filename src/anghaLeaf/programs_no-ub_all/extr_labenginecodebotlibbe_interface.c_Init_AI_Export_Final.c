// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  GeneticParentsAndChildSelection; int /*<<< orphan*/  BotResetWeaponState; int /*<<< orphan*/  BotFreeWeaponState; int /*<<< orphan*/  BotAllocWeaponState; int /*<<< orphan*/  BotLoadWeaponWeights; int /*<<< orphan*/  BotGetWeaponInfo; int /*<<< orphan*/  BotChooseBestFightWeapon; int /*<<< orphan*/  BotAddAvoidSpot; int /*<<< orphan*/  BotInitMoveState; int /*<<< orphan*/  BotFreeMoveState; int /*<<< orphan*/  BotAllocMoveState; int /*<<< orphan*/  BotPredictVisiblePosition; int /*<<< orphan*/  BotMovementViewTarget; int /*<<< orphan*/  BotReachabilityArea; int /*<<< orphan*/  BotResetLastAvoidReach; int /*<<< orphan*/  BotResetAvoidReach; int /*<<< orphan*/  BotMoveInDirection; int /*<<< orphan*/  BotMoveToGoal; int /*<<< orphan*/  BotResetMoveState; int /*<<< orphan*/  BotFreeGoalState; int /*<<< orphan*/  BotAllocGoalState; int /*<<< orphan*/  BotMutateGoalFuzzyLogic; int /*<<< orphan*/  BotSaveGoalFuzzyLogic; int /*<<< orphan*/  BotInterbreedGoalFuzzyLogic; int /*<<< orphan*/  BotFreeItemWeights; int /*<<< orphan*/  BotLoadItemWeights; int /*<<< orphan*/  BotUpdateEntityItems; int /*<<< orphan*/  BotInitLevelItems; int /*<<< orphan*/  BotSetAvoidGoalTime; int /*<<< orphan*/  BotAvoidGoalTime; int /*<<< orphan*/  BotGetMapLocationGoal; int /*<<< orphan*/  BotGetNextCampSpotGoal; int /*<<< orphan*/  BotGetLevelItemGoal; int /*<<< orphan*/  BotItemGoalInVisButNotVisible; int /*<<< orphan*/  BotTouchingGoal; int /*<<< orphan*/  BotChooseNBGItem; int /*<<< orphan*/  BotChooseLTGItem; int /*<<< orphan*/  BotGetSecondGoal; int /*<<< orphan*/  BotGetTopGoal; int /*<<< orphan*/  BotGoalName; int /*<<< orphan*/  BotDumpGoalStack; int /*<<< orphan*/  BotDumpAvoidGoals; int /*<<< orphan*/  BotEmptyGoalStack; int /*<<< orphan*/  BotPopGoal; int /*<<< orphan*/  BotPushGoal; int /*<<< orphan*/  BotRemoveFromAvoidGoals; int /*<<< orphan*/  BotResetAvoidGoals; int /*<<< orphan*/  BotResetGoalState; int /*<<< orphan*/  BotSetChatName; int /*<<< orphan*/  BotSetChatGender; int /*<<< orphan*/  BotLoadChatFile; int /*<<< orphan*/  BotReplaceSynonyms; int /*<<< orphan*/  UnifyWhiteSpaces; int /*<<< orphan*/  BotMatchVariable; int /*<<< orphan*/  BotFindMatch; int /*<<< orphan*/  StringContains; int /*<<< orphan*/  BotGetChatMessage; int /*<<< orphan*/  BotEnterChat; int /*<<< orphan*/  BotChatLength; int /*<<< orphan*/  BotReplyChat; int /*<<< orphan*/  BotNumInitialChats; int /*<<< orphan*/  BotInitialChat; int /*<<< orphan*/  BotNumConsoleMessages; int /*<<< orphan*/  BotNextConsoleMessage; int /*<<< orphan*/  BotRemoveConsoleMessage; int /*<<< orphan*/  BotQueueConsoleMessage; int /*<<< orphan*/  BotFreeChatState; int /*<<< orphan*/  BotAllocChatState; int /*<<< orphan*/  Characteristic_String; int /*<<< orphan*/  Characteristic_BInteger; int /*<<< orphan*/  Characteristic_Integer; int /*<<< orphan*/  Characteristic_BFloat; int /*<<< orphan*/  Characteristic_Float; int /*<<< orphan*/  BotFreeCharacter; int /*<<< orphan*/  BotLoadCharacter; } ;
typedef  TYPE_1__ ai_export_t ;

/* Variables and functions */
 int /*<<< orphan*/  BotAddAvoidSpot ; 
 int /*<<< orphan*/  BotAllocChatState ; 
 int /*<<< orphan*/  BotAllocGoalState ; 
 int /*<<< orphan*/  BotAllocMoveState ; 
 int /*<<< orphan*/  BotAllocWeaponState ; 
 int /*<<< orphan*/  BotAvoidGoalTime ; 
 int /*<<< orphan*/  BotChatLength ; 
 int /*<<< orphan*/  BotChooseBestFightWeapon ; 
 int /*<<< orphan*/  BotChooseLTGItem ; 
 int /*<<< orphan*/  BotChooseNBGItem ; 
 int /*<<< orphan*/  BotDumpAvoidGoals ; 
 int /*<<< orphan*/  BotDumpGoalStack ; 
 int /*<<< orphan*/  BotEmptyGoalStack ; 
 int /*<<< orphan*/  BotEnterChat ; 
 int /*<<< orphan*/  BotFindMatch ; 
 int /*<<< orphan*/  BotFreeCharacter ; 
 int /*<<< orphan*/  BotFreeChatState ; 
 int /*<<< orphan*/  BotFreeGoalState ; 
 int /*<<< orphan*/  BotFreeItemWeights ; 
 int /*<<< orphan*/  BotFreeMoveState ; 
 int /*<<< orphan*/  BotFreeWeaponState ; 
 int /*<<< orphan*/  BotGetChatMessage ; 
 int /*<<< orphan*/  BotGetLevelItemGoal ; 
 int /*<<< orphan*/  BotGetMapLocationGoal ; 
 int /*<<< orphan*/  BotGetNextCampSpotGoal ; 
 int /*<<< orphan*/  BotGetSecondGoal ; 
 int /*<<< orphan*/  BotGetTopGoal ; 
 int /*<<< orphan*/  BotGetWeaponInfo ; 
 int /*<<< orphan*/  BotGoalName ; 
 int /*<<< orphan*/  BotInitLevelItems ; 
 int /*<<< orphan*/  BotInitMoveState ; 
 int /*<<< orphan*/  BotInitialChat ; 
 int /*<<< orphan*/  BotInterbreedGoalFuzzyLogic ; 
 int /*<<< orphan*/  BotItemGoalInVisButNotVisible ; 
 int /*<<< orphan*/  BotLoadCharacter ; 
 int /*<<< orphan*/  BotLoadChatFile ; 
 int /*<<< orphan*/  BotLoadItemWeights ; 
 int /*<<< orphan*/  BotLoadWeaponWeights ; 
 int /*<<< orphan*/  BotMatchVariable ; 
 int /*<<< orphan*/  BotMoveInDirection ; 
 int /*<<< orphan*/  BotMoveToGoal ; 
 int /*<<< orphan*/  BotMovementViewTarget ; 
 int /*<<< orphan*/  BotMutateGoalFuzzyLogic ; 
 int /*<<< orphan*/  BotNextConsoleMessage ; 
 int /*<<< orphan*/  BotNumConsoleMessages ; 
 int /*<<< orphan*/  BotNumInitialChats ; 
 int /*<<< orphan*/  BotPopGoal ; 
 int /*<<< orphan*/  BotPredictVisiblePosition ; 
 int /*<<< orphan*/  BotPushGoal ; 
 int /*<<< orphan*/  BotQueueConsoleMessage ; 
 int /*<<< orphan*/  BotReachabilityArea ; 
 int /*<<< orphan*/  BotRemoveConsoleMessage ; 
 int /*<<< orphan*/  BotRemoveFromAvoidGoals ; 
 int /*<<< orphan*/  BotReplaceSynonyms ; 
 int /*<<< orphan*/  BotReplyChat ; 
 int /*<<< orphan*/  BotResetAvoidGoals ; 
 int /*<<< orphan*/  BotResetAvoidReach ; 
 int /*<<< orphan*/  BotResetGoalState ; 
 int /*<<< orphan*/  BotResetLastAvoidReach ; 
 int /*<<< orphan*/  BotResetMoveState ; 
 int /*<<< orphan*/  BotResetWeaponState ; 
 int /*<<< orphan*/  BotSaveGoalFuzzyLogic ; 
 int /*<<< orphan*/  BotSetAvoidGoalTime ; 
 int /*<<< orphan*/  BotSetChatGender ; 
 int /*<<< orphan*/  BotSetChatName ; 
 int /*<<< orphan*/  BotTouchingGoal ; 
 int /*<<< orphan*/  BotUpdateEntityItems ; 
 int /*<<< orphan*/  Characteristic_BFloat ; 
 int /*<<< orphan*/  Characteristic_BInteger ; 
 int /*<<< orphan*/  Characteristic_Float ; 
 int /*<<< orphan*/  Characteristic_Integer ; 
 int /*<<< orphan*/  Characteristic_String ; 
 int /*<<< orphan*/  GeneticParentsAndChildSelection ; 
 int /*<<< orphan*/  StringContains ; 
 int /*<<< orphan*/  UnifyWhiteSpaces ; 

__attribute__((used)) static void Init_AI_Export( ai_export_t *ai ) {
	//-----------------------------------
	// be_ai_char.h
	//-----------------------------------
	ai->BotLoadCharacter = BotLoadCharacter;
	ai->BotFreeCharacter = BotFreeCharacter;
	ai->Characteristic_Float = Characteristic_Float;
	ai->Characteristic_BFloat = Characteristic_BFloat;
	ai->Characteristic_Integer = Characteristic_Integer;
	ai->Characteristic_BInteger = Characteristic_BInteger;
	ai->Characteristic_String = Characteristic_String;
	//-----------------------------------
	// be_ai_chat.h
	//-----------------------------------
	ai->BotAllocChatState = BotAllocChatState;
	ai->BotFreeChatState = BotFreeChatState;
	ai->BotQueueConsoleMessage = BotQueueConsoleMessage;
	ai->BotRemoveConsoleMessage = BotRemoveConsoleMessage;
	ai->BotNextConsoleMessage = BotNextConsoleMessage;
	ai->BotNumConsoleMessages = BotNumConsoleMessages;
	ai->BotInitialChat = BotInitialChat;
	ai->BotNumInitialChats = BotNumInitialChats;
	ai->BotReplyChat = BotReplyChat;
	ai->BotChatLength = BotChatLength;
	ai->BotEnterChat = BotEnterChat;
	ai->BotGetChatMessage = BotGetChatMessage;
	ai->StringContains = StringContains;
	ai->BotFindMatch = BotFindMatch;
	ai->BotMatchVariable = BotMatchVariable;
	ai->UnifyWhiteSpaces = UnifyWhiteSpaces;
	ai->BotReplaceSynonyms = BotReplaceSynonyms;
	ai->BotLoadChatFile = BotLoadChatFile;
	ai->BotSetChatGender = BotSetChatGender;
	ai->BotSetChatName = BotSetChatName;
	//-----------------------------------
	// be_ai_goal.h
	//-----------------------------------
	ai->BotResetGoalState = BotResetGoalState;
	ai->BotResetAvoidGoals = BotResetAvoidGoals;
	ai->BotRemoveFromAvoidGoals = BotRemoveFromAvoidGoals;
	ai->BotPushGoal = BotPushGoal;
	ai->BotPopGoal = BotPopGoal;
	ai->BotEmptyGoalStack = BotEmptyGoalStack;
	ai->BotDumpAvoidGoals = BotDumpAvoidGoals;
	ai->BotDumpGoalStack = BotDumpGoalStack;
	ai->BotGoalName = BotGoalName;
	ai->BotGetTopGoal = BotGetTopGoal;
	ai->BotGetSecondGoal = BotGetSecondGoal;
	ai->BotChooseLTGItem = BotChooseLTGItem;
	ai->BotChooseNBGItem = BotChooseNBGItem;
	ai->BotTouchingGoal = BotTouchingGoal;
	ai->BotItemGoalInVisButNotVisible = BotItemGoalInVisButNotVisible;
	ai->BotGetLevelItemGoal = BotGetLevelItemGoal;
	ai->BotGetNextCampSpotGoal = BotGetNextCampSpotGoal;
	ai->BotGetMapLocationGoal = BotGetMapLocationGoal;
	ai->BotAvoidGoalTime = BotAvoidGoalTime;
	ai->BotSetAvoidGoalTime = BotSetAvoidGoalTime;
	ai->BotInitLevelItems = BotInitLevelItems;
	ai->BotUpdateEntityItems = BotUpdateEntityItems;
	ai->BotLoadItemWeights = BotLoadItemWeights;
	ai->BotFreeItemWeights = BotFreeItemWeights;
	ai->BotInterbreedGoalFuzzyLogic = BotInterbreedGoalFuzzyLogic;
	ai->BotSaveGoalFuzzyLogic = BotSaveGoalFuzzyLogic;
	ai->BotMutateGoalFuzzyLogic = BotMutateGoalFuzzyLogic;
	ai->BotAllocGoalState = BotAllocGoalState;
	ai->BotFreeGoalState = BotFreeGoalState;
	//-----------------------------------
	// be_ai_move.h
	//-----------------------------------
	ai->BotResetMoveState = BotResetMoveState;
	ai->BotMoveToGoal = BotMoveToGoal;
	ai->BotMoveInDirection = BotMoveInDirection;
	ai->BotResetAvoidReach = BotResetAvoidReach;
	ai->BotResetLastAvoidReach = BotResetLastAvoidReach;
	ai->BotReachabilityArea = BotReachabilityArea;
	ai->BotMovementViewTarget = BotMovementViewTarget;
	ai->BotPredictVisiblePosition = BotPredictVisiblePosition;
	ai->BotAllocMoveState = BotAllocMoveState;
	ai->BotFreeMoveState = BotFreeMoveState;
	ai->BotInitMoveState = BotInitMoveState;
	ai->BotAddAvoidSpot = BotAddAvoidSpot;
	//-----------------------------------
	// be_ai_weap.h
	//-----------------------------------
	ai->BotChooseBestFightWeapon = BotChooseBestFightWeapon;
	ai->BotGetWeaponInfo = BotGetWeaponInfo;
	ai->BotLoadWeaponWeights = BotLoadWeaponWeights;
	ai->BotAllocWeaponState = BotAllocWeaponState;
	ai->BotFreeWeaponState = BotFreeWeaponState;
	ai->BotResetWeaponState = BotResetWeaponState;
	//-----------------------------------
	// be_ai_gen.h
	//-----------------------------------
	ai->GeneticParentsAndChildSelection = GeneticParentsAndChildSelection;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_ai0 = 1;
          struct TYPE_3__ * ai = (struct TYPE_3__ *) malloc(_len_ai0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai->GeneticParentsAndChildSelection = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotResetWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotFreeWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotAllocWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotLoadWeaponWeights = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotGetWeaponInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotChooseBestFightWeapon = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotAddAvoidSpot = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotInitMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotFreeMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotAllocMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotPredictVisiblePosition = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotMovementViewTarget = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotReachabilityArea = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotResetLastAvoidReach = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotResetAvoidReach = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotMoveInDirection = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotMoveToGoal = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotResetMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotFreeGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotAllocGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotMutateGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotSaveGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotInterbreedGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotFreeItemWeights = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotLoadItemWeights = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotUpdateEntityItems = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotInitLevelItems = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotSetAvoidGoalTime = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotAvoidGoalTime = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotGetMapLocationGoal = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotGetNextCampSpotGoal = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotGetLevelItemGoal = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotItemGoalInVisButNotVisible = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotTouchingGoal = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotChooseNBGItem = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotChooseLTGItem = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotGetSecondGoal = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotGetTopGoal = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotGoalName = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotDumpGoalStack = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotDumpAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotEmptyGoalStack = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotPopGoal = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotPushGoal = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotRemoveFromAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotResetAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotResetGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotSetChatName = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotSetChatGender = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotLoadChatFile = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotReplaceSynonyms = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->UnifyWhiteSpaces = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotMatchVariable = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotFindMatch = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->StringContains = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotGetChatMessage = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotEnterChat = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotChatLength = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotReplyChat = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotNumInitialChats = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotInitialChat = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotNumConsoleMessages = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotNextConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotRemoveConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotQueueConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotFreeChatState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotAllocChatState = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->Characteristic_String = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->Characteristic_BInteger = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->Characteristic_Integer = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->Characteristic_BFloat = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->Characteristic_Float = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotFreeCharacter = ((-2 * (next_i()%2)) + 1) * next_i();
        ai->BotLoadCharacter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Init_AI_Export(ai);
          free(ai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
