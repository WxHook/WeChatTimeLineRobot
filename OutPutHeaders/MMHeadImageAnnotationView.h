/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "QAnnotationView.h"
#import "UIGestureRecognizerDelegate.h"

@class UIImageView, NSString, UIButton, MMHeadImageView;
@protocol MMHeadImageAnnotationViewDelegate;

@interface MMHeadImageAnnotationView : QAnnotationView <UIGestureRecognizerDelegate> {
	id<MMHeadImageAnnotationViewDelegate> _delegate;
	UIImageView* _annotationView;
	MMHeadImageView* _headImageView;
	UIButton* _calloutButton;
	UIImageView* _headingImageView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<MMHeadImageAnnotationViewDelegate> delegate;
@property(retain, nonatomic) NSString* username;
-(void).cxx_destruct;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)setHeading:(double)heading;
-(void)bringToFront;
-(void)stopAnnimation:(BOOL)annimation;
-(void)setShowCallout:(BOOL)callout Animated:(BOOL)animated;
-(void)initView;
-(void)dealloc;
-(id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
@end

