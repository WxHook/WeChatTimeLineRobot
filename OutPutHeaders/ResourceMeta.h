/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSData, NSString;

@interface ResourceMeta : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned fileSize;
@property(retain, nonatomic) NSString* originalMd5;
@property(retain, nonatomic) NSData* data;
@property(retain, nonatomic) NSMutableArray* eccmd5SignatureList;
@property(assign, nonatomic) unsigned fileFlag;
@property(retain, nonatomic) NSString* url;
@property(assign, nonatomic) unsigned resVersion;
@property(retain, nonatomic) NSString* md5;
+(void)initialize;
@end
