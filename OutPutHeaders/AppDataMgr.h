/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class AppIconItem, NSMutableArray, ServiceAppsLogicImpl, NSString, NSMutableDictionary, RecommendAppsLogicImpl;

@interface AppDataMgr : MMService <MMService, PBMessageObserverDelegate, MMKernelExt> {
	BOOL _appDataChecked;
	BOOL _appSettingLoaded;
	NSMutableDictionary* _appSettingMap;
	NSMutableArray* _aryAuthApp;
	BOOL _aryAuthAppLoaded;
	NSMutableArray* _aryAppPersonalInfo;
	BOOL _aryAppPersonalInfoLoader;
	BOOL _appResisterInfoLoaded;
	BOOL _newAppStatus;
	NSMutableArray* _aryInstalledApp;
	NSMutableArray* _aryReceivedApp;
	NSMutableArray* _aryBuiltInApp;
	RecommendAppsLogicImpl* _rcmAppsLogicImpl;
	ServiceAppsLogicImpl* _svcAppsLogicImpl;
	NSMutableArray* _getAppInfoRunningQueue;
	NSMutableArray* _getAppInfoWaitingQueue;
	BOOL _bGetAppInfoListRunning;
	AppIconItem* _updateAppIconRunningItem;
	NSMutableArray* _updateAppIconWaitingQueue;
	BOOL _bUpdateAppIconRunning;
	BOOL _hasMoveFinished;
	NSMutableDictionary* _dictInnerJumpAppIdType;
	NSMutableDictionary* _dictInnerJumpTypeAppId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableDictionary* appSettingMap;
-(void).cxx_destruct;
-(void)onServiceReloadData;
-(void)onPreQuit;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(BOOL)structCGI:(id)cgi withType:(unsigned long)type;
-(void)updateAppSettingItemList:(id)list;
-(BOOL)makeUrlRequst:(id)requst userData:(id)data cdn:(BOOL)cdn;
-(void)handleGetWatermark:(id)watermark;
-(void)handleGetIcon:(id)icon;
-(void)handleGetAppInfoList:(id)list;
-(id)updateValue:(id)value newValue:(id)value2;
-(BOOL)updateAppWatermark:(id)watermark;
-(BOOL)updateAppIcon:(id)icon;
-(void)updateAppInfo:(id)info;
-(id)getInstalledAppInfo:(id)info;
-(BOOL)checkAndSaveIcon:(id)icon appID:(id)anId;
-(BOOL)checkRegisterInfo:(id)info;
-(void)refreshAppInfoLastUpdateTimeForNewUser;
-(BOOL)loadAppRegisterInfo;
-(void)trimAppRegisterInfo:(id)info;
-(void)saveAppRegisterInfo;
-(id)getRegisterDictionary;
-(id)dictionaryToAppRegisterInfo:(id)appRegisterInfo;
-(id)getRegisterPasteboardName;
-(id)GetPathOfAppWatermark:(id)appWatermark;
-(id)GetPathOfAppIcon:(id)appIcon;
-(BOOL)setSDKVersion;
-(void)saveAppPersonalInfo;
-(BOOL)loadAppPersonalInfo;
-(void)saveAuthAppInfo;
-(BOOL)loadAuthAppInfo;
-(id)getPersonalInfoWithAppID:(id)appID;
-(void)handleGetAppPersonalInfoList:(id)list;
-(void)handleGetAuthAppList:(id)list;
-(id)getAuthAppList;
-(void)filterUnInstalledApp;
-(BOOL)UpdateAuthAppList:(int)list;
-(BOOL)removeAppByUser:(id)user;
-(BOOL)addAppByUser:(id)user;
-(BOOL)addNeedUpdateAppId:(id)anId;
-(void)addInstalledAppList:(id)list;
-(BOOL)forceUpdateBizAppInfo:(id)info;
-(void)forceUpdateBizAppInfoWithAppIDList:(id)appIDList;
-(void)forceUpdateAppInfo:(id)info;
-(BOOL)updateAppInfo:(id)info appInfoVer:(unsigned long)ver isForceUpdate:(BOOL)update;
-(void)clearGetAppInfoListRunningQueue;
-(void)checkGetAppInfoListWaitingQueue;
-(void)addGetAppInfoListQueue:(id)queue;
-(BOOL)checkUpdateAppIconWaitingQueue;
-(BOOL)addUpdateAppIconQueue:(id)queue appID:(id)anId cmd:(id)cmd;
-(void)updateAppTypeList:(id)list appTypeList:(id)list2;
-(void)updateBizAppInfoWithGameCenter;
-(void)updateBizAppInfoWithAddByUser;
-(id)getAppRegisterInfo:(id)info;
-(id)mergeBuiltInAppInfo:(id)appInfo;
-(id)mergeValue:(id)value newValue:(id)value2;
-(BOOL)compareAppID:(id)anId withOtherAppID:(id)otherAppID;
-(id)getAppWatermark:(id)watermark;
-(id)getServiceAppIcon:(id)icon IconUrl:(id)url;
-(id)getRecommendAppIcon:(id)icon IconUrl:(id)url;
-(id)getAppIconRetNilIfNotExist:(id)exist;
-(id)getAppIcon:(id)icon;
-(BOOL)receiveAppInfoFromMsg:(id)msg name:(id)name version:(int)version isForceUpdate:(BOOL)update;
-(id)getShowGameCenterArray;
-(id)getGameInstalledArray;
-(BOOL)deleteUninstalledGameApp:(id)app;
-(BOOL)deleteUninstalledAppByAppID:(id)anId;
-(BOOL)isAppInstalledPossibly:(id)possibly;
-(id)getAppInstalledArray;
-(void)setServiceAppNotShowNew:(id)aNew;
-(id)getAttachmentViewServiceAppsList:(id)list;
-(id)getServiceAppArray:(id)array;
-(void)clearRecommentAppArray;
-(void)setRecommendAppNotShowNew:(id)aNew;
-(void)updateRecommendAppArray;
-(id)getRecommendAppArray;
-(id)getGeneralAppInstalledArray;
-(void)addInstalledAppInfoByAppID:(id)anId appName:(id)name appIconUrl:(id)url;
-(void)addAppByUserMoveToAppSetting;
-(BOOL)isAppDataChecked;
-(BOOL)checkAndUpdateAppData;
-(BOOL)checkAndUpdateAppDataForiOS7Plus:(id)plus forceUpdate:(BOOL)update;
-(void)saveAppSetting;
-(BOOL)loadAppSetting;
-(void)handleSetAppSetting:(id)setting;
-(void)handleGetAppSetting:(id)setting;
-(BOOL)SetAppSetting:(id)setting setCmdID:(int)anId setCmdValue:(id)value;
-(BOOL)UpdateAppPersonalInfoList:(id)list;
-(BOOL)UpdateBatchAppSettingItem:(id)item;
-(void)onAuthOK;
-(void)doUpdateAppSettingItem;
-(void)setAppSettingFlag:(unsigned long)flag withAppID:(id)appID;
-(void)UpdateAppRecvMsgState:(id)state isRecvMsg:(BOOL)msg;
-(void)UpdateAppAuthState:(id)state isAuth:(BOOL)auth;
-(BOOL)UpdateAppSettingItem:(id)item;
-(void)updateAppAddedByUser:(id)user :(BOOL)arg2;
-(void)updateAppSettingFlag:(id)flag;
-(BOOL)isGeneralApp:(id)app;
-(BOOL)isGame:(id)game;
-(BOOL)isNeedDetectRequetURL:(id)url;
-(BOOL)isCanForward:(id)forward;
-(BOOL)isAppAddedByUser:(id)user;
-(id)getOpenID:(id)anId;
-(BOOL)isOpenIDExist:(id)exist;
-(BOOL)isRecvMsg:(id)msg;
-(BOOL)isAppSettingExist:(id)exist;
-(void)loadNewAppStatus;
-(void)saveNewAppStatus;
-(void)setNewAppStatus:(BOOL)status;
-(BOOL)getNewAppStatus;
-(BOOL)writeToFile:(id)file data:(id)data;
-(void)mergeBuiltInAppList;
-(void)setShowInShareListSeq:(unsigned long)shareListSeq withAppID:(id)appID andType:(unsigned long long)type;
-(void)setIsShowInShareList:(BOOL)shareList withAppID:(id)appID;
-(void)save3rdAppSupportContentType:(unsigned long long)type withAppID:(id)appID;
-(void)convertShareTypeToOpenSDKType:(unsigned long long)openSDKType ToOpenSDKType:(int*)openSDKType2;
-(id)getShareTo3rdSortedAppInfo:(BOOL)a3rdSortedAppInfo andType:(unsigned long long)type;
-(id)keyForDicShowInShareListSeqByType:(unsigned long long)shareListSeqByType;
-(unsigned long long)getFlagByMessageWrap:(id)wrap;
-(id)getAppIdWithFuncType:(int)funcType;
-(int)getFuncTypeWithAppId:(id)appId;
-(void)initInnerJumpDict;
-(void)dealloc;
-(id)init;
@end

