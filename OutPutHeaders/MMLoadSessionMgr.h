/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"

@class NSMutableArray, NSString;

@interface MMLoadSessionMgr : MMService <MMService> {
	NSMutableArray* _arrSessionInfo;
	NSMutableArray* _arrLocalizeSessionInfo;
	unsigned long long _startLoadDataTime;
	unsigned long _loadDataCostTime;
	unsigned _totalSessionCount;
	NSMutableArray* _arrSessionItems;
	NSMutableArray* _arrDefaultSessionItems;
	BOOL m_loadingData;
	BOOL m_loadDataEnd;
	BOOL m_reloadData;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(unsigned long long)getEmotionTotalSize;
-(void).cxx_destruct;
-(id)getDefaultMigratedSessionItem;
-(unsigned long long)getTotalSessionSize;
-(id)getSesssionItemWithIndex:(unsigned)index;
-(unsigned)getSessionItemsCount;
-(BOOL)isDataLoadEnd;
-(unsigned)getSessionCount;
-(unsigned long)parseMesLocalIdFromPath:(id)path;
-(id)getSessionName:(id)name;
-(void)getBrandSessionHolderDetail:(id)detail;
-(void)getDetailInfoForSessionItem:(id)sessionItem;
-(void)onLoadLocalizedSessionDataItem;
-(void)onLoadData;
-(void)stopLoadData;
-(BOOL)isLocalizedContactThatCanMigrate:(id)migrate WithSessionInfo:(id)sessionInfo;
-(void)loadSessionBeforeLoadData;
-(void)startLoadData;
-(id)init;
@end
