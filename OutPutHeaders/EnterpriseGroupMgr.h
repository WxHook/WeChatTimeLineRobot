/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSString;

@interface EnterpriseGroupMgr : MMService <MMService, PBMessageObserverDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handleInitiateBizChat:(id)chat;
-(void)handleQuitBizChat:(id)chat;
-(void)handleUpdateBizChatMemberList:(id)list;
-(void)handleUpdateBizChat:(id)chat;
-(void)handleCreateBizChatInfo:(id)info;
-(BOOL)updateGroupContactAttrToSvr:(id)svr;
-(BOOL)updateGroupMemberListToSvr:(id)svr;
-(BOOL)initiateBizChat:(id)chat chatTitle:(id)title users:(id)users callBackId:(id)anId;
-(BOOL)updateGroupSetting:(id)setting bizFlag:(unsigned long)flag;
-(BOOL)updateGroupName:(id)name groupName:(id)name2;
-(BOOL)deleteMemberList:(id)list group:(id)group brand:(id)brand;
-(BOOL)addMemeberList:(id)list group:(id)group brand:(id)brand;
-(BOOL)quitEnterpriseGroup:(id)group;
-(BOOL)createEnterpriseGroup:(id)group extKey:(id)key;
-(void)dealloc;
-(void)onServiceInit;
@end

