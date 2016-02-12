#include "../NWNXOptimizations.h"

static int (*CNWSCreature__AIActionSit)(CNWSCreature* a1,
                                        CNWSObjectActionNode* actionNode);
static int  CNWSCreature__AIActionSit_Hook(CNWSCreature* a1,
        CNWSObjectActionNode* actionNode)
{
    // AIActionSit is called each AI update for all creatures currently
    // sitting down. The action does a LOS sight even if the chair is in range
    // (via GetIsInRange) and that's quite expensive, so if you have a lot
    // of sitting creatures this can take a significant amount of time.
    //
    // This hook disables running the action for creatures already sitting on
    // the object the action wants them to.

    nwobjid actionSitObjId = (nwobjid) actionNode->m_pParameter[0];
    nwobjid creatureSittingObjId = a1->SittingObject;

    // We move the check if the sitting object aligns up
    if (actionSitObjId != OBJECT_INVALID &&
            actionSitObjId == creatureSittingObjId) {
        CNWSPlaceable* placeable = g_pAppManager->ServerExoApp->
                                   GetPlaceableByGameObjectID(actionSitObjId);

        if (placeable != NULL && (nwobjid) placeable->GetSittingCreature() == a1->ObjectID)
            return 2; // CNWSObject::ACTION_COMPLETE
    }

    return CNWSCreature__AIActionSit(a1, actionNode);
}

void HookAIActionSit()
{
    NX_HOOK(CNWSCreature__AIActionSit, 0x0810BDDC,
            CNWSCreature__AIActionSit_Hook, 5);
}