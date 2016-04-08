/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NewYearShakeResultViewControllerDataSource.h"
#import "MMUIViewController.h"
#import "NewYearShakeInteractiveLogoViewDelegate.h"
#import "NewYearLogoHongBaoDelegate.h"

@class UIImage, UIImageView, UILabel, NSData, UIView, NSString, UIButton, NewYearShakeInteractiveLogoView;
@protocol NewYearShakeResultViewControllerDelegate;

@interface NewYearShakeResultViewController : MMUIViewController <NewYearShakeResultViewControllerDataSource, NewYearShakeInteractiveLogoViewDelegate, NewYearLogoHongBaoDelegate> {
	unsigned long m_sponsorResourceID;
	NSString* m_sponsorName;
	NSString* m_showTitle;
	NSString* m_showSubTitle;
	unsigned long m_hongBaoCount;
	BOOL m_isShowInteractiveLogo;
	BOOL m_isEnableLogoHongBao;
	NSData* m_logoHongBaoSendKey;
	BOOL m_adIsShowWording;
	NSString* m_adDetailWording;
	unsigned long m_adH5ResSubType;
	NSString* m_adH5Url;
	BOOL m_adH5CanShare;
	BOOL m_adH5CanShareTimeline;
	BOOL m_adH5NoGetA8Key;
	BOOL m_adH5EnableAsyncSubscribe;
	BOOL m_adH5EnableOuterLink;
	BOOL m_adIsJumpToLocalH5;
	UIImageView* m_appearBackgroundView;
	UIView* m_contentView;
	UIImageView* m_sponsorBackgroundView;
	UIImageView* m_navigationBackgroundView;
	UILabel* m_titleLabel;
	UILabel* m_subTitleLabel;
	UIImageView* m_adDetailBackgroundView;
	UIButton* m_adDetailButton;
	NewYearShakeInteractiveLogoView* m_interactiveLogoView;
	id<NewYearShakeResultViewControllerDelegate> m_delegate;
	UIImage* m_appearBackgroundImage;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImage* m_appearBackgroundImage;
@property(assign, nonatomic) __weak id<NewYearShakeResultViewControllerDelegate> m_delegate;
-(void).cxx_destruct;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)onLogoHongBaoResponseWithResult:(BOOL)result money:(float)money;
-(void)onClickLogoHongBao;
-(void)cancelDelayPeformSelector;
-(void)fakeResponseNoLogoHongBao;
-(void)onResponseLogoHongBaoWithResult:(BOOL)result money:(float)money;
-(void)onRequestLogoHongBaoWithSendKey:(id)sendKey;
-(void)interactiveLogoOperationOnViewDidDisappear;
-(void)interactiveLogoOperationOnViewDidAppear;
-(void)loadInteractiveLogoData;
-(void)layoutInteractiveLogoView;
-(void)initInteractiveLogoView;
-(BOOL)isShowInteractiveLogo;
-(void)layoutTitleLabel:(id)label parentViewWidth:(float)width leftMargin:(float)margin yPos:(float)pos;
-(void)layoutTitlesView;
-(void)setTitleViewStyle:(id)style font:(id)font;
-(void)initTitlesView;
-(void)onClickAdDetailButton:(id)button;
-(void)loadAdDetailData;
-(void)layoutAdDetailView;
-(void)initAdDetailView;
-(void)onBackButtonClicked:(id)clicked;
-(void)setNavigationLeftButton;
-(BOOL)useTransparentNavibar;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)startAppearAnimation;
-(void)initAppearBackgroundView;
-(void)showAppearAnimation;
-(void)initShakeLogoView;
-(void)initContentView;
-(void)initView;
-(void)setViewFrame;
-(id)titleColor;
-(id)hardcodeSubtitle;
-(id)hongBaoCountTitle;
-(BOOL)isShowHongBaoNumber;
-(BOOL)isAllowShake;
-(void)allowShakeToDismiss:(BOOL)dismiss;
-(void)loadSponsorBackgroundData;
-(void)loadData;
-(void)dealloc;
-(id)initWithResultData:(id)resultData;
-(id)init;
@end
