/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "WeChat-Structs.h"
#import "MMService.h"

@class NSString;

@interface MapDirectionsMgr : MMService <PBMessageObserverDelegate, MMService> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(XXStruct_gLbvpC*)parseRouteWithRouteArray:(id)routeArray outCount:(unsigned*)count;
-(void)requestDirections:(id)directions;
@end
