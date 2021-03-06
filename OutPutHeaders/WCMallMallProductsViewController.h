/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "WCMallOldTelephoneViewDelegate.h"
#import "WCMallCandidateTelephoneViewDelegate.h"
#import "ILinkEventExt.h"
#import "WCMallBaseViewController.h"

@class UILabel, UIView, NSString, UIButton, NSMutableDictionary, MMWebImageView, WCMallCandidateTelephoneView, WCMallOldTelephoneView, WCBaseKeyboardToolBar, UrlLabel;
@protocol WCMallMallProductsViewControllerDelegate;

@interface WCMallMallProductsViewController : WCMallBaseViewController <WCMallOldTelephoneViewDelegate, WCMallCandidateTelephoneViewDelegate, ILinkEventExt, UIAlertViewDelegate> {
	id<WCMallMallProductsViewControllerDelegate> m_delegate;
	NSMutableDictionary* m_dicFunctionListView;
	WCBaseKeyboardToolBar* m_keyboardBar;
	UIButton* m_footerButton;
	UILabel* m_telphoneFooterLabel;
	UILabel* m_productFooterLabel;
	MMWebImageView* m_activityImageView;
	WCMallOldTelephoneView* m_oWCMallOldTelephoneView;
	WCMallCandidateTelephoneView* m_oWCMallCandidateTelephoneView;
	UIView* m_pickerBkgView;
	int m_eTelephoneNumberInputStatus;
	UrlLabel* m_rechargeTextView;
	NSString* m_balanceUrl;
	NSMutableDictionary* _disabledProducts;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_balanceUrl;
-(void).cxx_destruct;
-(id)keyFromMobile:(id)mobile productName:(id)name;
-(void)updateFlowDataErrorIfNeedForMobile:(id)mobile productName:(id)name;
-(void)preQueryDisabledWithErrorMessage:(id)errorMessage forMobile:(id)mobile productName:(id)name;
-(void)preQueryForFlowDataIfNeedWithMobile:(id)mobile;
-(id)footerTextFromResponseRemark:(id)responseRemark;
-(void)onLinkClicked:(id)clicked backupUrl:(id)url withRect:(CGRect)rect;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)goToBalanceLink:(id)balanceLink;
-(id)GetCandidateTelephoneEnsureTip;
-(id)GetCandidateTelephoneDescription:(unsigned long)description DifferentIndex:(id)index;
-(unsigned long)GetNumberOfCandidateTelephoneListCount;
-(void)OnClickWCMallCandidateTelephoneEnsureCellClicked;
-(void)OnClickWCMallCandidateTelephoneCell:(unsigned long)cell;
-(BOOL)isSupportSeparator;
-(id)GetOldTelephoneOwnerName:(unsigned long)name;
-(id)GetOldTelephoneNumber:(unsigned long)number;
-(unsigned long)GetNumberOfOldTelephoneListCount;
-(void)OnClickWCMallOldTelephoneClearButton;
-(void)OnClearTelphone;
-(void)OnClickWCMallOldTelephoneCell:(unsigned long)cell;
-(void)makeInfoCell:(id)cell cellInfo:(id)info;
-(void)WCBaseInfoItemEndEdit:(id)edit;
-(void)WCBaseInfoItemEditChanged:(id)changed;
-(void)WCBaseInfoItemBeginEdit:(id)edit;
-(void)WCBaseInfoItemCancelEdit:(id)edit;
-(void)WCBaseInfoItemPressReturnKey:(id)key;
-(void)checkData:(id)data;
-(BOOL)checkIsEmpty:(id)empty;
-(void)OnComfireEnsureAlert;
-(void)onNext;
-(BOOL)getData:(id)data;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)initOldTelphoneTableView:(CGRect)view;
-(void)initCandidateTelphoneTableView:(CGRect)view;
-(void)initNavigationBarWithData:(id)data;
-(void)initNavigationBar;
-(void)initFooterViewWithData:(id)data;
-(void)initFooterView;
-(void)reloadTableView;
-(id)getClearHeaderView;
-(id)makeProductFooterView:(id)view;
-(id)makeTelphoneFooterView:(id)view;
-(void)initInfoTemplate;
-(void)clearPriceLabel;
-(void)updateTableView:(BOOL)view;
-(void)updateTableView;
-(void)setDelegate:(id)delegate;
-(void)reloadOldTelephoneListView;
-(void)updateFlowProducts:(id)products;
-(void)reloadCandidateTelephoneView;
-(id)getCurrentTelephoneNumberOwnerName;
-(void)setTelephoneNumberOwnerName:(id)name Number:(id)number;
-(void)SetWCMallProductLatestInfo:(id)info;
-(void)editerBeginEditing:(id)editing;
-(void)editerEndEditing:(id)editing;
-(void)removeNotificationObservers;
-(void)initNotificationObservers;
-(void)OnActivityIconClick:(id)click;
-(void)OnActivityIconCancel:(id)cancel;
-(void)viewDidLayoutSubviews;
-(void)refreshViewWithData:(id)data;
-(BOOL)initFilledDefaultData;
-(void)dealloc;
-(id)init;
@end

