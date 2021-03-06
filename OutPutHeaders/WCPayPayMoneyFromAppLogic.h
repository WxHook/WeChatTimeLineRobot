/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCBaseControlMgrExt.h"
#import "WCPayBaseViewControllerDelegate.h"
#import "WCPayControlLogic.h"

@class WCPayPayMoneyLogic, NSString, WCPayBaseViewController, PayResp, NSDictionary;

@interface WCPayPayMoneyFromAppLogic : WCPayControlLogic <WCPayBaseViewControllerDelegate, WCBaseControlMgrExt> {
	NSDictionary* m_payInfo;
	NSString* m_appID;
	PayResp* m_resp;
	WCPayPayMoneyLogic* m_payLogic;
	WCPayBaseViewController* rootViewController;
	BOOL m_cancelByOpenApi;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_cancelByOpenApi;
-(void).cxx_destruct;
-(void)OnGetAppAuthUrlErrorRequest:(id)request;
-(void)OnGetAppAuthUrlRequest:(id)request AppSource:(id)source PrepayId:(id)anId CallBackUrl:(id)url Error:(id)error;
-(void)onWCBaseLogicDidStop:(unsigned long)onWCBaseLogic;
-(void)OnRootViewBack;
-(BOOL)gotoViewController:(id)controller;
-(void)delayDisMissRootViewController;
-(void)stopLogic;
-(void)startLogic;
-(void)WCPayBaseViewControllerBack;
-(void)markCancelByOpenApi;
-(void)dealloc;
-(id)initWithInfo:(id)info appID:(id)anId;
@end

