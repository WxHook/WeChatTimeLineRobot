/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "IMsgExt.h"
#import "MMObject.h"
#import "contactInfoDelegate.h"
#import "MMWebViewDelegate.h"
#import "ILinkEventExt.h"

@class MMPhoneNumberHandler, NSString, MMURLHandler;
@protocol UrlControllerDelegate;

@interface UrlController : MMObject <MMWebViewDelegate, contactInfoDelegate, IMsgExt, ILinkEventExt, WCActionSheetDelegate> {
	MMURLHandler* m_urlHandler;
	MMPhoneNumberHandler* m_phoneNumberHandler;
	id<UrlControllerDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<UrlControllerDelegate> m_delegate;
-(void).cxx_destruct;
-(void)dealloc;
-(void)CreateNewContact:(id)contact;
-(void)AddPhoneNumberToExistContact:(id)existContact;
-(id)handlePreviewUrl:(id)url withExtraInfo:(id)extraInfo;
-(void)handleUrl:(id)url withExtraInfo:(id)extraInfo;
-(void)onDone:(id)done;
-(void)jumpToProfile:(id)profile;
-(void)jumpToBindPhone;
-(void)contactsReturn:(BOOL)aReturn contact:(id)contact;
-(void)webViewReturn:(id)aReturn;
-(void)webviewShow:(id)show;
-(void)Reset;
-(void)UnRegister;
-(void)Register;
-(id)init;
@end

