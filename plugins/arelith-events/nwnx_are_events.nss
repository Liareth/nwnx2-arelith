const int ARELITH_EVENT_ADD_ASSOCIATE    = 1;
const int ARELITH_EVENT_REMOVE_ASSOCIATE = 2;
const int ARELITH_EVENT_STEALTH_ENTER    = 3;
const int ARELITH_EVENT_STEALTH_EXIT     = 4;
const int ARELITH_EVENT_EXAMINE_BEFORE   = 5;
const int ARELITH_EVENT_EXAMINE_AFTER    = 6;

// Subscribes to the provided event. The provided script will be called before that event is called.
void SubscribeToEvent(int eventId, string scriptName);

// Returns the string parameter of the event with the provided ID.
string GetEventParamString(int param);

// Returns the object parameter of the event with the provided ID.
object GetEventParamObject(int param);

void SubscribeToEvent(int eventId, string scriptName)
{
    SetLocalString(GetModule(), "NWNX!ARELITH_EVENTS!EVENTS_REGISTER_" + IntToString(eventId), scriptName);
}

string GetEventParamString(int param)
{
    return GetLocalString(GetModule(), "NWNX!ARELITH_EVENTS!GET_EVENT_PARAM_" + IntToString(param));
}

object GetEventParamObject(int param)
{
    return GetLocalObject(GetModule(), "NWNX!ARELITH_EVENTS!GET_EVENT_PARAM_" + IntToString(param));
}