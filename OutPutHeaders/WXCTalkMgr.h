/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXCCNetworkStatusExt.h"
#import "MMService.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "IAUAudioDeviceExt.h"
#import "AUAudioDataSource.h"
#import "AVAudioPlayerDelegate.h"
#import "WXCNetWorkDelegate.h"
#import "WeChat-Structs.h"

@class MMTimer, NSString, NSObject, WXTalkComponent, NSMutableSet, NSMutableArray, WXCTalkRoomData, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface WXCTalkMgr : MMService <WXCCNetworkStatusExt, AUAudioDataSource, AVAudioPlayerDelegate, IAUAudioDeviceExt, MMKernelExt, MMService, AVAudioPlayerDelegate, WXCNetWorkDelegate> {
	NSMutableArray* _mLastInviteUuidList;
	BOOL _isDataConnected;
	BOOL _isAudioDeviceStarted;
	BOOL _isReceiveOtherData;
	BOOL _isSelfAndOtherEnter;
	BOOL _isFirstConnnected;
	NSObject<OS_dispatch_queue>* _taskQueue;
	BOOL mIsInTalking;
	BOOL mIsTalkingInterrupt;
	int _mNetSceneState;
	WXCTalkRoomData* _roomData;
	WXTalkComponent* _component;
	NSRecursiveLock* _audioEncLock;
	NSRecursiveLock* _audioDecLock;
	MMTimer* _wxTalkTimer;
	MMTimer* _wxCheckTalkStatusTimer;
	MMTimer* _wxCheckTalkStatusMoreSensitiveTimer;
	FILE* _recordDumpFile;
	MMTimer* _mSystemCallHoldTimer;
	MMTimer* _wxHeartbeatTimeoutTimer;
	MMTimer* _mFrequentEnterTimer;
	MMTimer* _mFrequentAckTimer;
	int _mCntTryStartAudioDev;
	int _mStartDevScene;
	NSMutableSet* _mReceiveMsgIdSet;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableSet* mReceiveMsgIdSet;
@property(assign, nonatomic) int mStartDevScene;
@property(assign, nonatomic) int mCntTryStartAudioDev;
@property(retain, nonatomic) MMTimer* mFrequentAckTimer;
@property(retain, nonatomic) MMTimer* mFrequentEnterTimer;
@property(retain, nonatomic) MMTimer* wxHeartbeatTimeoutTimer;
@property(retain, nonatomic) MMTimer* mSystemCallHoldTimer;
@property(assign, nonatomic) FILE* recordDumpFile;
@property(retain, nonatomic) MMTimer* wxCheckTalkStatusMoreSensitiveTimer;
@property(retain, nonatomic) MMTimer* wxCheckTalkStatusTimer;
@property(retain, nonatomic) MMTimer* wxTalkTimer;
@property(retain, nonatomic) NSRecursiveLock* audioDecLock;
@property(retain, nonatomic) NSRecursiveLock* audioEncLock;
@property(retain, nonatomic) WXTalkComponent* component;
@property(retain, nonatomic) WXCTalkRoomData* roomData;
@property(assign, nonatomic) int mNetSceneState;
@property(assign, nonatomic) BOOL mIsTalkingInterrupt;
@property(assign, nonatomic) BOOL mIsInTalking;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(int)cpuCapacity;
+(unsigned long)GetNetType;
-(void).cxx_destruct;
-(void)handleGetGroupInfoBatchResponse:(id)response retCode:(int)code seqNo:(int)no;
-(void)handleVoiceMemberWhisperResponse:(id)response retCode:(int)code;
-(BOOL)requestActiveGroupInfoItemList:(id)list;
-(void)doTalkStateReport;
-(BOOL)isTalkSessionActive;
-(void)onRespData:(id)data taskId:(int)anId retCode:(int)code retBuf:(id)buf backfillData:(id)data5;
-(void)engineDoMemberChanged:(id)changed;
-(BOOL)judgeIsCurrSessionMsg:(id)msg;
-(BOOL)isMultiTalkMsgWithType:(int)type;
-(void)handleMemberChangeMsgWithCurrSession:(id)currSession memberChangeType:(int)type;
-(void)handleTalkMsgs:(id)msgs;
-(BOOL)isDuplicateMsg:(id)msg;
-(void)handleTalkInfoWithSingle2MultiInfo:(id)single2MultiInfo;
-(void)handleTalkInfoWithVoiceConf:(id)voiceConf;
-(void)handleTalkInfoWithUsrProfileList:(id)usrProfileList;
-(void)handleTalkInfoWithGroupInfo:(id)groupInfo;
-(void)handleTalkInfoChangeWithMemberList:(id)memberList memberChangeType:(int)type needNotifyMemberChange:(BOOL)change;
-(BOOL)isCurrentRoom:(id)room roomId:(unsigned long)anId roomKey:(unsigned long long)key isOnlyCheckGroupId:(BOOL)anId4;
-(int)getRouteIdByGroupId:(id)anId;
-(void)setNetSceneState:(int)state;
-(BOOL)getIsOnlyCheckGroupIdByEnterType:(int)type;
-(BOOL)isInTalkSession;
-(id)getCurTalkingMemberList;
-(BOOL)holdMultiTalk:(BOOL)talk holdType:(int)type;
-(void)doFrequentEnter;
-(void)doFrequentAck;
-(void)stopFrequentEnter;
-(void)stopFrequentAck;
-(void)handleClientSceneReportResponse:(id)response retCode:(int)code;
-(void)handleRedirectResponse:(id)response retCode:(int)code backfillData:(id)data;
-(void)sendRedirectReq;
-(int)getSelfRoomMemberId;
-(void)sendClientSeceneReport:(unsigned long)report;
-(void)notifyModifyGroupInfoResult:(BOOL)result groupId:(id)anId;
-(void)handleModifyGroupInfoResponse:(id)response retCode:(int)code groupId:(id)anId;
-(void)handleHeartBeatResponse:(id)response retCode:(int)code;
-(void)handleInviteWXTalkModeRequest:(id)request retCode:(int)code backfillData:(id)data;
-(BOOL)sendInviteWXTalkModeRequest:(id)request;
-(void)handleCreateWXTalkModeResponse:(id)response retCode:(int)code origReqData:(id)data;
-(BOOL)sendCreateWXTalkModeRequest:(id)request clientGroupId:(id)anId uniqueSdkTalkID:(id)anId3 voiceGroupInfo:(id)info single2MultiInfo:(id)info5 routeId:(int)anId6;
-(void)handleWXTalkVideoModeRequest:(id)request retCode:(int)code origReqData:(id)data;
-(BOOL)sendWXTalkVideoModeRequest:(id)request roomId:(unsigned long)anId roomKey:(unsigned long long)key Action:(int)action;
-(BOOL)sendRejectEnterWXTalkModeRequest:(id)request roomId:(unsigned long)anId roomKey:(unsigned long long)key reason:(int)reason;
-(void)handleExitTalkRoomResponse:(id)response retCode:(int)code backfillData:(id)data;
-(void)SendExitTalkRoomRequest:(int)request;
-(void)SendExitTalkRoomRequest:(int)request groupId:(id)anId roomId:(unsigned long)anId3 roomKey:(unsigned long long)key routeId:(int)anId5;
-(void)handleCancelCreateTalkRoomResponse:(id)response retCode:(int)code backFillData:(id)data;
-(void)sendCancelCreateRequest:(int)request;
-(void)handleEnterTalkRoomResponse:(id)response retCode:(int)code origReqData:(id)data;
-(BOOL)SendEnterTalkRoomRequestWithReqInfo:(id)reqInfo;
-(BOOL)SendEnterTalkRoomRequest:(int)request;
-(void)handleCreateNotifyAckResponse:(id)response retCode:(int)code origReqData:(id)data;
-(void)sendCreateNotifyAckRequest:(id)request roomKey:(unsigned long long)key roomId:(unsigned long)anId;
-(void)sendCreateNotifyAckRequest:(id)request roomKey:(unsigned long long)key roomId:(unsigned long)anId isFrequent:(BOOL)frequent;
-(id)getLocalCapInfo;
-(void)reportClientScene:(unsigned long)scene;
-(BOOL)sendResumeFriendOrSendPokerToFriend:(id)aFriend friendUserName:(id)name extData:(id)data;
-(void)notifysendResumeFriendOrSendPokerToFriendResult:(BOOL)friendResult groupId:(id)anId;
-(void)modifyGroupInfo:(id)info newName:(id)name;
-(BOOL)rejectWXTalkMode:(id)mode roomId:(unsigned long)anId roomKey:(unsigned long long)key reason:(int)reason;
-(BOOL)inviteTalkMembers:(id)members memberUuids:(id)uuids;
-(int)genSdkUniqueRouteId:(id)anId;
-(int)genRouteId;
-(BOOL)createWXTalkMode:(id)mode voiceGroupInfo:(id)info single2MultiInfo:(id)info3 clientGroupId:(id)anId uniqueSdkTalkID:(id)anId5 routeId:(int)anId6;
-(BOOL)createWXTalkMode:(id)mode;
-(id)getCreateVoiceGroupInfo:(int)info togetherId:(unsigned long long)anId;
-(id)prepareCreateWXTalkMode:(id)mode voiceGroupInfo:(id)info single2MultiInfo:(id)info3 uniqueSdkTalkID:(id)anId clientGroupId:(id)anId5;
-(void)closeWXTalkModeWithErrorType:(int)errorType errorNo:(int)no;
-(void)closeWXTalkMode;
-(void)exitWXTalkRoom:(int)room groupId:(id)anId;
-(void)exitWXTalkRoom:(int)room;
-(void)exitCurMutilTalkRoom:(id)room;
-(void)onInvitedTalkMode:(id)mode roomId:(unsigned long)anId roomKey:(unsigned long long)key;
-(BOOL)openWXTalkMode:(id)mode roomId:(unsigned long)anId roomKey:(unsigned long long)key enterType:(int)type;
-(BOOL)canEnterThisRoom:(id)room;
-(BOOL)isOpenAnyWXTalkMode;
-(void)resetData;
-(void)onServiceClearData;
-(void)onPreQuit;
-(void)onServiceInit;
-(void)dealloc;
-(void)registerNotifications;
-(void)UnInitAll;
-(void)InitAll;
-(void)heartbeatTimeoutFire;
-(void)stopHeartbeatTimeoutTimer;
-(void)restartHeartbeatTimeoutTimer;
-(void)OnNotifyMP:(long)mp Param:(int)param ViewId:(int)anId;
-(void)OnReportChannel:(id)channel;
-(void)OnReportEngineSend:(id)send;
-(void)OnReportEngineRecv:(id)recv memberId:(int)anId;
-(void)onReceOtherMemberData;
-(void)OnEngineError:(int)error;
-(void)OnOpenEngineSuccess;
-(void)OnNetworkChanged:(id)changed;
-(void)NotifyMainThreadEngineError:(id)error;
-(void)NotifyMainThreadDataConnected;
-(void)StopSession;
-(void)RedirectTo:(id)to withEngineConf:(id)engineConf withHeadSignArray:(id)headSignArray withIsEncode:(BOOL)isEncode;
-(void)StartSession:(id)session withEngineConf:(id)engineConf withHeadSignArray:(id)headSignArray withIsEncode:(BOOL)isEncode;
-(void)onAllNetworkChange:(id)change;
-(void)CloseRecordDumpFile;
-(void)CreateRecordDumpFile;
-(void)TimerCheck;
-(void)SendHeartBeatRequest;
-(BOOL)checkFriendHasEnterRoom;
-(void)WXCReachabilityChange:(unsigned long)change;
-(void)audioDeviceUnPluginHeadset:(id)headset;
-(void)audioDevicePluginHeadset:(id)headset;
-(void)audioDeviceStartedSuccess:(id)success;
-(void)OnAudioDeviceStartedSuccess;
-(void)audioDeviceStartedFail:(id)fail;
-(void)OnAudioDeviceStartedFail;
-(void)audioDeviceForceStop:(id)stop;
-(void)ForceStop;
-(void)getMutilTalkTotalFlow:(int*)flow andWwanBytes:(int*)bytes;
-(int)VideoEncAndSend:(char*)send Length:(unsigned long)length Format:(void*)format resolutionMode:(int)mode cameraMode:(int)mode5;
-(void)closeVideoRecvAndSend;
-(void)setVideoOn:(BOOL)on;
-(void)setMicroPhoneMute:(BOOL)mute;
-(void)keepSpeakerPhoneStatusWhenDeviceStart:(BOOL)start;
-(BOOL)getSpeakerPhoneStatus;
-(void)setSpeakerPhone:(BOOL)phone;
-(void)restartMultiTalkAudioDeviceInMainThread;
-(void)delayRestartMultiTalkAudioDevice;
-(void)doRestartMultiTalkAudioDevice;
-(void)resumeVoiceTalkAfterSysCall:(BOOL)call;
-(void)beginAudioInterrupt:(BOOL)interrupt;
-(void)delayRestartVoiceTalk;
-(void)stopSystemCallHoldTimer;
-(void)onSystemCallHoldTimeOut;
-(void)startSystemCallHoldTimer;
-(void)SysCallEndNotify;
-(void)BeginInterruption:(BOOL)interruption;
-(int)AudioDevGetData:(char*)data length:(unsigned long)length;
-(int)AudioDevPutData:(char*)data length:(unsigned long)length;
-(BOOL)isGetDataReady;
-(void)DumpToRecordFile:(char*)recordFile withDataLen:(unsigned)dataLen;
-(BOOL)StartRecordAndPlayAudioForVoip:(int)voip;
-(void)StopTalk;
-(void)StartTalk;
@end
