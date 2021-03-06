/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCFacadeExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface TranslateSnsMgr : MMService <MMService, PBMessageObserverDelegate, WCFacadeExt> {
	NSMutableDictionary* _dicSessionTransInfos;
	NSMutableDictionary* _dicSequenceWaitTask;
	NSMutableDictionary* _dicSequenceRunningTask;
	unsigned long _sequence;
	BOOL _isWorking;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)GetTranslateContent:(id)content;
+(BOOL)showTranslatedTextBtn:(id)btn;
+(BOOL)canShowTranslateView:(id)view;
+(BOOL)checkContentOrComment:(id)comment;
+(id)getSnsTransDataWrapWithComment:(id)comment andScene:(int)scene andDataItemTid:(id)tid;
+(id)getSnsTransDataWrap:(id)wrap andScene:(int)scene;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)responseForTransTextResponse:(id)transTextResponse Event:(unsigned long)event;
-(void)asyncNotifyTranslateSnsChanged:(id)changed;
-(void)notifyTranslateSnsChanged:(id)changed;
-(void)onCommentItemDeleteFinished:(int)finished commentItemID:(id)anId dataItemID:(id)anId3;
-(void)onDataItemDeleteFinished:(int)finished dataItemID:(id)anId;
-(void)saveSessionTransInfos:(id)infos;
-(void)loadSessionTransInfos:(id)infos;
-(id)pathForSessionTransInfos:(id)sessionTransInfos;
-(BOOL)taskInQueue:(id)queue;
-(void)showAnimationEnd:(id)end;
-(BOOL)shouldNeedShowAnimation:(id)animation;
-(BOOL)showTranslatedTextNow:(id)now;
-(id)getTranslateInfo:(id)info;
-(void)tryTranslateMsgs;
-(void)translateSns:(id)sns;
-(void)callExtensionWhenPhotoContentChange:(id)change;
-(id)getDataWrapContent:(id)content;
-(id)getDisplayContent:(id)content;
-(id)getSnsID:(id)anId;
-(id)getContentSnsID:(id)anId;
-(id)getCommentSnsID:(id)anId withDataItemID:(id)dataItemID;
-(BOOL)onServiceMemoryWarning;
-(void)changeLanguageAndCleanAllCache;
-(void)clearSnsTranslateCache;
-(void)resetSnsAllTranslatingStatus;
-(void)onServiceReloadData;
-(void)reloadDatabase;
-(void)onServiceInit;
-(void)dealloc;
-(id)init;
@end

