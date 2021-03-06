extern HSteamUser cppISteamUser_SteamUser014_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser014_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser014_GetSteamID(void *);
extern int cppISteamUser_SteamUser014_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser014_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser014_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser014_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser014_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser014_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser014_GetAvailableVoice(void *, uint32 *, uint32 *);
extern EVoiceResult cppISteamUser_SteamUser014_GetVoice(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *);
extern EVoiceResult cppISteamUser_SteamUser014_DecompressVoice(void *, const void *, uint32, void *, uint32, uint32 *);
extern HAuthTicket cppISteamUser_SteamUser014_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser014_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser014_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser014_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser014_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamUser_SteamUser014_BIsBehindNAT(void *);
extern void cppISteamUser_SteamUser014_AdvertiseGame(void *, CSteamID, uint32, uint16);
extern SteamAPICall_t cppISteamUser_SteamUser014_RequestEncryptedAppTicket(void *, void *, int);
extern bool cppISteamUser_SteamUser014_GetEncryptedAppTicket(void *, void *, int, uint32 *);
