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

@interface GameCenterStatReport : MMService <MMService, PBMessageObserverDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(BOOL)report:(unsigned long)report withLogExt:(id)logExt;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)stat12909:(id)a12909;
@end
