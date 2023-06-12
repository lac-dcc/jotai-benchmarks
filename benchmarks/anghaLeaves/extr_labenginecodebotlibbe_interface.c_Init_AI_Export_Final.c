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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
\n\
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
          int _len_ai0 = 65025;
          struct TYPE_3__ * ai = (struct TYPE_3__ *) malloc(_len_ai0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
              ai[_i0].GeneticParentsAndChildSelection = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadWeaponWeights = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetWeaponInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChooseBestFightWeapon = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAddAvoidSpot = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInitMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotPredictVisiblePosition = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMovementViewTarget = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotReachabilityArea = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetLastAvoidReach = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetAvoidReach = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMoveInDirection = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMoveToGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMutateGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSaveGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInterbreedGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeItemWeights = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadItemWeights = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotUpdateEntityItems = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInitLevelItems = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSetAvoidGoalTime = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAvoidGoalTime = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetMapLocationGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetNextCampSpotGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetLevelItemGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotItemGoalInVisButNotVisible = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotTouchingGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChooseNBGItem = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChooseLTGItem = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetSecondGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetTopGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGoalName = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotDumpGoalStack = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotDumpAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotEmptyGoalStack = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotPopGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotPushGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotRemoveFromAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSetChatName = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSetChatGender = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadChatFile = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotReplaceSynonyms = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].UnifyWhiteSpaces = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMatchVariable = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFindMatch = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].StringContains = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetChatMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotEnterChat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChatLength = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotReplyChat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotNumInitialChats = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInitialChat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotNumConsoleMessages = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotNextConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotRemoveConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotQueueConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeChatState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocChatState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_String = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_BInteger = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_Integer = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_BFloat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_Float = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeCharacter = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadCharacter = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          Init_AI_Export(ai);
          free(ai);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ai0 = 100;
          struct TYPE_3__ * ai = (struct TYPE_3__ *) malloc(_len_ai0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
              ai[_i0].GeneticParentsAndChildSelection = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadWeaponWeights = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetWeaponInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChooseBestFightWeapon = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAddAvoidSpot = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInitMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotPredictVisiblePosition = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMovementViewTarget = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotReachabilityArea = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetLastAvoidReach = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetAvoidReach = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMoveInDirection = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMoveToGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMutateGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSaveGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInterbreedGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeItemWeights = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadItemWeights = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotUpdateEntityItems = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInitLevelItems = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSetAvoidGoalTime = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAvoidGoalTime = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetMapLocationGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetNextCampSpotGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetLevelItemGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotItemGoalInVisButNotVisible = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotTouchingGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChooseNBGItem = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChooseLTGItem = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetSecondGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetTopGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGoalName = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotDumpGoalStack = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotDumpAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotEmptyGoalStack = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotPopGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotPushGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotRemoveFromAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSetChatName = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSetChatGender = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadChatFile = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotReplaceSynonyms = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].UnifyWhiteSpaces = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMatchVariable = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFindMatch = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].StringContains = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetChatMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotEnterChat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChatLength = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotReplyChat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotNumInitialChats = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInitialChat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotNumConsoleMessages = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotNextConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotRemoveConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotQueueConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeChatState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocChatState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_String = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_BInteger = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_Integer = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_BFloat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_Float = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeCharacter = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadCharacter = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          Init_AI_Export(ai);
          free(ai);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_ai0 = 1;
          struct TYPE_3__ * ai = (struct TYPE_3__ *) malloc(_len_ai0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
              ai[_i0].GeneticParentsAndChildSelection = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocWeaponState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadWeaponWeights = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetWeaponInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChooseBestFightWeapon = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAddAvoidSpot = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInitMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotPredictVisiblePosition = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMovementViewTarget = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotReachabilityArea = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetLastAvoidReach = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetAvoidReach = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMoveInDirection = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMoveToGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetMoveState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMutateGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSaveGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInterbreedGoalFuzzyLogic = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeItemWeights = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadItemWeights = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotUpdateEntityItems = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInitLevelItems = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSetAvoidGoalTime = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAvoidGoalTime = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetMapLocationGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetNextCampSpotGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetLevelItemGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotItemGoalInVisButNotVisible = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotTouchingGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChooseNBGItem = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChooseLTGItem = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetSecondGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetTopGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGoalName = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotDumpGoalStack = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotDumpAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotEmptyGoalStack = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotPopGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotPushGoal = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotRemoveFromAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetAvoidGoals = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotResetGoalState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSetChatName = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotSetChatGender = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadChatFile = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotReplaceSynonyms = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].UnifyWhiteSpaces = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotMatchVariable = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFindMatch = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].StringContains = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotGetChatMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotEnterChat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotChatLength = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotReplyChat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotNumInitialChats = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotInitialChat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotNumConsoleMessages = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotNextConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotRemoveConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotQueueConsoleMessage = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeChatState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotAllocChatState = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_String = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_BInteger = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_Integer = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_BFloat = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].Characteristic_Float = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotFreeCharacter = ((-2 * (next_i()%2)) + 1) * next_i();
          ai[_i0].BotLoadCharacter = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
