/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UILabel;

@interface WCPayOfflineUpdatedTipsView : XXUnknownSuperclass {
	UILabel* _tipsLabel;
	UIImageView* _tipsIcon;
	unsigned _type;
}
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) UIImageView* tipsIcon;
@property(retain, nonatomic) UILabel* tipsLabel;
-(void).cxx_destruct;
-(void)changeTypeToNormalAfterSeconds:(int)normalAfterSeconds;
-(void)setType:(unsigned)type andChangeBackToNormalLater:(BOOL)normalLater;
-(void)commonInit;
-(void)dealloc;
-(id)init;
@end

