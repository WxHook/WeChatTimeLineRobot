/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol IVoiceSearchExt <NSObject>
@optional
-(void)OnError:(int)error andSearchId:(unsigned long)anId;
-(void)OnGetSearchResult:(id)result andSearchId:(unsigned long)anId;
-(void)OnLevelMeter:(unsigned long)meter Peak:(float)peak;
-(void)OnEndRecord;
-(void)OnStartRecord;
@end

