// Sets the hidden status of the provided helmet.
void SetHelmetHidden(object helm, int status);

// Gets the hidden status of the provided helmet.
int GetHelmetHidden(object helm);

void SetHelmetHidden(object helm, int status = TRUE)
{
    SetLocalInt(helm, "NWNX_ARELITH_HELM_HIDDEN", status);
}

int GetHelmetHidden(object helm)
{
    return GetLocalInt(helm, "NWNX_ARELITH_HELM_HIDDEN");
}