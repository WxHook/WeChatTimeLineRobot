/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol IPSTNSyncExt
@optional
-(void)OnGotDTMFPayloadType:(unsigned long)type;
-(void)OnGotRemoteStatus:(unsigned long)status ErrNo:(int)no ErrLevel:(int)level ErrMsg:(id)msg ErrTitle:(id)title;
-(void)OnSyncError:(int)error;
@end

