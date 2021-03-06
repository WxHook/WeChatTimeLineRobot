/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;
@protocol KVDataDelegate;

@interface CMMKVCommReport : XXUnknownSuperclass {
	int m_logId;
	long m_startTime;
	long m_endTime;
	NSMutableDictionary* m_setDic;
	NSMutableDictionary* m_addDic;
	/*function-pointer*/ void* m_handler;
	bool m_isReportNow;
	bool m_isImportant;
	id<KVDataDelegate> m_observer;
}
@property(retain, nonatomic) id<KVDataDelegate> m_observer;
-(void).cxx_destruct;
-(int)getLogId;
-(id)getArrayElementForKey:(id)key andIndex:(unsigned)index;
-(unsigned)getArrayElementCountForKey:(id)key;
-(void)addArrayElementValue:(id)value forKey:(id)key;
-(id)getElementForkey:(id)forkey;
-(void)setElementValue:(id)value forKey:(id)key;
-(void)end;
-(void)start;
-(void)dealloc;
-(id)initWithLogId:(int)logId andHandler:(/*function-pointer*/ void*)handler andIsReportNow:(id)now andIsImportant:(id)important;
@end

