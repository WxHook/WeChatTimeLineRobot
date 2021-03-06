/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ITrackRoomMgrExt <NSObject>
@optional
-(void)OnTrackRoomStateDidChangedTo:(int)onTrackRoomState;
-(void)OnHeadingChanged:(double)changed;
-(void)OnTrackRoomError:(int)error Message:(id)message;
-(void)OnGetRoomPOI:(id)poi;
-(void)OnExitTrackRoom;
-(void)OnRefreshTrackRoom:(id)room Type:(int)type;
-(void)OnJoinTrackRoomOK:(id)ok;
-(void)OnOpenTrackRoom:(id)room;
-(void)OnSta;
@end

